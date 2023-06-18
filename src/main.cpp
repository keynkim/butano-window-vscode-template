#include "bn_bg_palettes.h"
#include "bn_core.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_text_generator.h"
#include "bn_vector.h"
#include "common_variable_8x8_sprite_font.h"

int main()
{
  bn::core::init();

  bn::bg_palettes::set_transparent_color(bn::color(0, 0, 0));

  bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);

  text_generator.set_center_alignment();
  bn::vector<bn::sprite_ptr, 32> text_sprites;
  text_generator.generate(0, 0, "BUTANO-WINDOW-VSCODE-TEMPLATE", text_sprites);

  while (true)
  {
    bn::core::update();
  }
}
