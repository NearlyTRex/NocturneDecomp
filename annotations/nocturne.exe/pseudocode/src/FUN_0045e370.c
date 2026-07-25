// Name: FUN_0045e370
// Address: 0045e370
// Address Range: [[0045e370, 0045ecd0]]
// Convention: unknown
// Signature: void FUN_0045e370(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0045e370(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  byte local_c4 [32];
  byte local_a4 [32];
  byte auStack_84 [32];
  byte local_64 [32];
  byte auStack_44 [32];
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((0x27f < DAT_005b761c) && (0x1df < DAT_005b7620)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              (local_64,DAT_005b761c / 2,DAT_005b7620 / 2,0xc9,0x65,0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480(local_a4,0xc,8,0x15,0xb,local_64);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              (local_c4,0xbe,0x5f,0x14,10,local_64);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    FUN_0045d2b0(local_64);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(local_64);
    FUN_0045bfb0(local_64,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(local_64,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(local_64,100,0x32,0x32);
    FUN_0045be40(local_64,0,0,0x32);
    FUN_0045be70(local_64,200,0,0x32);
    FUN_0045bea0(local_64,0,100,0x32);
    FUN_0045bed0(local_64,200,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(0);
    FUN_0045da60(local_64,5,2,"Hello");
    FUN_0045da60(local_64,0xfffffffb,0x11,"Hello");
    FUN_0045da60(local_64,0xb9,0x11,"Hello\nworld\n...");
    FUN_0045dc00(local_64,100,0x11,"+");
    FUN_0045de70(local_64,0x5c,0x6c,0x20,"+");
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0();
    *(uint *)(in_stack_00000004 + 0x3184) = 0;
    FUN_0045da60(local_64,5,0x2a,"Hello");
    FUN_0045da60(local_64,0xfffffffb,0x39,"Hello");
    FUN_0045da60(local_64,0xb9,0x39,"Hello");
    *(uint *)(in_stack_00000004 + 0x3184) = 1;
    FUN_0045da60(local_64,0xfffffffb,0x48,"Hello");
    FUN_0045da60(local_64,0xb9,0x48,"Hello");
    FUN_0045dc00(local_64,100,0x48,"+");
    FUN_0045de70(local_64,0x5c,0x6c,0x57,"+");
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xff);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(local_64,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(local_64,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(local_64,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(local_64,100,0x5e);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_0045b800(0xff,0,0);
    FUN_0045d2b0(local_a4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(local_a4);
    FUN_0045bfb0(local_a4,0xffffffeb,0xfffffff5,0x29,0x15);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(local_a4,10,5,6);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_0045b800(0,0,0xff);
    FUN_0045d2b0(local_c4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(local_c4);
    FUN_0045bfb0(local_c4,0,0,0x13,9);
    uStack_24 = 0x00412B41;
    iVar2 = DAT_005b7620 / 2 + 0x66;
    iVar3 = DAT_005b7620 - iVar2;
    iVar1 = *(int *)(in_stack_00000004 + 0x3170);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              (auStack_44,DAT_005b761c / 2,iVar2,0xc9,iVar3,0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    FUN_0045d2b0(auStack_44);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(auStack_44);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0();
    *(uint *)(in_stack_00000004 + 0x3184) = 1;
    FUN_0045da90(auStack_44,1,1,"%s",&uStack_24);
    FUN_0045db60(auStack_44,199,1,"%s",&uStack_24);
    FUN_0045dc30(auStack_44,100,1,"%s",&uStack_24);
    iVar2 = iVar1 + 1;
    FUN_0045dd00(auStack_44,100,iVar2,"%s",&uStack_24);
    iStack_10 = iVar1 * 2;
    iStack_c = iStack_10 + 1;
    FUN_0045ddd0(auStack_44,100,iStack_c,"%s",&uStack_24);
    iStack_1c = iVar1 * 3;
    iStack_20 = iVar3 + iVar1 * -3;
    FUN_0045dea0(auStack_44,0x32,0x96,iStack_20,"%s",&uStack_24);
    iStack_14 = iVar3 - iStack_10;
    FUN_0045df80(auStack_44,100,iStack_14 + -0x32,iStack_14 + 0x32,"%s",&uStack_24);
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
              (auStack_44,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,"%s",&uStack_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
              (auStack_44,"%s",&uStack_24);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,199,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,iStack_c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,iStack_20);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,iStack_14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_44,100,iVar3);
    iVar3 = DAT_005b7620 / 2 + 0x66;
    iVar4 = DAT_005b7620 - iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              (auStack_84,DAT_005b761c / 2 + -0xca,iVar3,0xc9,iVar4,0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    FUN_0045d2b0(auStack_84);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(auStack_84);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(0);
    *(uint *)(in_stack_00000004 + 0x3184) = 1;
    FUN_0045da90(auStack_84,1,1,"%s",&uStack_24);
    FUN_0045db60(auStack_84,199,1,"%s",&uStack_24);
    FUN_0045dc30(auStack_84,100,1,"%s",&uStack_24);
    FUN_0045dd00(auStack_84,100,iVar2,"%s",&uStack_24);
    FUN_0045ddd0(auStack_84,100,iStack_c,"%s",&uStack_24);
    iStack_18 = iVar4 - iStack_1c;
    FUN_0045dea0(auStack_84,0x32,0x96,iStack_18,"%s",&uStack_24);
    iVar3 = iVar4 - iStack_10;
    FUN_0045df80(auStack_84,100,iVar3 + -0x32,iVar3 + 0x32,"%s",&uStack_24);
    iVar4 = iVar4 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
              (auStack_84,0x32,0x96,iVar4 + -0x32,iVar4 + 0x32,"%s",&uStack_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
              (auStack_84,"%s",&uStack_24);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,199,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,iStack_c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,iStack_18);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,iVar3);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(auStack_84,100,iVar4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(4);
    FUN_0045cfd0(auStack_84);
    return;
  }
  return;
}
