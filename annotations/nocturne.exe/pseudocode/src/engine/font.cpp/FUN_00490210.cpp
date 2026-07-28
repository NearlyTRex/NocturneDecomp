// Name: engine_font.cpp_FUN_00490210
// Address: 00490210
// Address Range: [[00490210, 00490417]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00490210(CBitFont *param_1,char *param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_00490210(CBitFont *param_1,char *param_2)

{
  _FILE *stream;
  char local_22c [256];
  char local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  stream = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rt");
  if (stream == (_FILE *)0x0) {
    return;
  }
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%s\n",local_22c);
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%d,%d\n",&local_2c,&local_28);
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%d,%d\n",&local_24,&local_20);
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%d\n",&local_1c);
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%d\n",&local_18);
  _fgets(local_12c,0xff,stream);
  _fscanf(stream,"%d,%d\n",&local_14,&local_10);
  _fclose(stream);
  if ((local_24 == 0x20) && (local_20 == 0xff)) {
    engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(param_1,local_22c,local_2c,local_28,local_1c)
    ;
  }
  else {
    engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0
              (param_1,local_22c,local_2c,local_28,local_24,local_20,local_1c);
  }
  param_1->char_widths[0x20] = local_18;
  param_1->shadow_offset_x = local_14;
  param_1->shadow_offset_y = local_10;
  return;
}
