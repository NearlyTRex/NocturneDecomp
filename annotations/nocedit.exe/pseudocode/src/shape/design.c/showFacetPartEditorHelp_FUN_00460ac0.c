// Name: shape_design.c_showFacetPartEditorHelp_FUN_00460ac0
// Address: 00460ac0
// Address Range: [[00460ac0, 00461559]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_showFacetPartEditorHelp_FUN_00460ac0(void)

#include "nocturne.h"

void __cdecl shape_design_c_showFacetPartEditorHelp_FUN_00460ac0(void)

{
  uint uVar1;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Facet/Part Editor Keys",0,0);
    engine_2d_c_drawText_FUN_00401fd0("Move forward",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Up arrow",0x78,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Move backward",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Down arrow",0x78,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Move left",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("Left arrow",0x78,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("Move right",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Right arrow",0x78,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Move up",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("Q",0x78,0x42);
    engine_2d_c_drawText_FUN_00401fd0("Move down",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("A",0x78,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("Keypad also controls movement",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Rotate",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("Shift",0x78,0x79);
    engine_2d_c_drawText_FUN_00401fd0("Slow",0,0x84);
    engine_2d_c_drawText_FUN_00401fd0("Alt",0x78,0x84);
    engine_2d_c_drawText_FUN_00401fd0("Zoom in",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("+",0x78,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("Zoom out",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("-",0x78,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Reset view",0,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("R",0x78,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("Snap to X-axis",0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("X",0x78,0xc6);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    if ((uVar1 & 0xff) == 0x1b) break;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Facet/Part Editor Keys",0,0);
    engine_2d_c_drawText_FUN_00401fd0("Load model",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + L",0x78,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Save model (.MDL)",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + S",0x78,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Save model (.BIN)",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + B",0x78,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("Save model (.ASM)",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + W",0x78,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Load palette",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + P",0x78,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("Select renderer",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + R",0x78,99);
    engine_2d_c_drawText_FUN_00401fd0("Adjust 64x64 filter",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + A",0x78,0x79);
    engine_2d_c_drawText_FUN_00401fd0("Change background color",0,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + C",0x78,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("Change missing tex color",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + T",0x78,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("Change outline color",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Ctrl + O",0x78,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Mouse polygon selection",0,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("Shift + M",0x78,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("Wheel polygon reducer",0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("Shift + W",0x78,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("Antialias lines",0,0xdc);
    engine_2d_c_drawText_FUN_00401fd0("Shift + A",0x78,0xdc);
    engine_2d_c_drawText_FUN_00401fd0("Bias model",0,0xf2);
    engine_2d_c_drawText_FUN_00401fd0("Shift + B",0x78,0xf2);
    engine_2d_c_drawText_FUN_00401fd0("Translate model",0,0x108);
    engine_2d_c_drawText_FUN_00401fd0("Shift + T",0x78,0x108);
    engine_2d_c_drawText_FUN_00401fd0("Toggle field of view",0,0x11e);
    engine_2d_c_drawText_FUN_00401fd0("Shift + F",0x78,0x11e);
    engine_2d_c_drawText_FUN_00401fd0("Display UV coordinates",0,0x134);
    engine_2d_c_drawText_FUN_00401fd0("Shift + U",0x78,0x134);
    engine_2d_c_drawText_FUN_00401fd0("Display vertex info",0,0x13f);
    engine_2d_c_drawText_FUN_00401fd0("Shift + I",0x78,0x13f);
    engine_2d_c_drawText_FUN_00401fd0("Display parts list",0,0x14a);
    engine_2d_c_drawText_FUN_00401fd0("Shift + L",0x78,0x14a);
    engine_2d_c_drawText_FUN_00401fd0("Display palette",0,0x155);
    engine_2d_c_drawText_FUN_00401fd0("Shift + P",0x78,0x155);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    if ((uVar1 & 0xff) == 0x1b) break;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Facet/Part Editor Keys",0,0);
    engine_2d_c_drawText_FUN_00401fd0("Select polygon",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0(".   (Ctrl + . to reverse)",0x78,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Create box",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("B",0x78,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("Change facet color",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("C",0x78,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Delete polygon",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("D   (Ctrl + D for range)",0x78,0x42);
    engine_2d_c_drawText_FUN_00401fd0("New facet",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("F",0x78,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("Gouraud shade",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("G",0x78,0x58);
    engine_2d_c_drawText_FUN_00401fd0("Display polygon list",0,99);
    engine_2d_c_drawText_FUN_00401fd0("L",0x78,99);
    engine_2d_c_drawText_FUN_00401fd0("New facet (other side)",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("N",0x78,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("Get part name",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("P",0x78,0x79);
    engine_2d_c_drawText_FUN_00401fd0("Texture map polygon",0,0x84);
    engine_2d_c_drawText_FUN_00401fd0("T",0x78,0x84);
    engine_2d_c_drawText_FUN_00401fd0("Update selected polygon",0,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("U",0x78,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("Display vertices",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("V   (Ctrl + V for selected polygon only)",0x78,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("Z-buffer",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Z",0x78,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Show part only",0,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("F10",0x78,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("Increment detail level",0,0xd1);
    engine_2d_c_drawText_FUN_00401fd0("Keypad +",0x78,0xd1);
    engine_2d_c_drawText_FUN_00401fd0("Decrement detail level",0,0xdc);
    engine_2d_c_drawText_FUN_00401fd0("Keypad -",0x78,0xdc);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  } while ((uVar1 & 0xff) != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
