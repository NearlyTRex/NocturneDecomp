// Name: cockpit_drawsurf.cpp_FUN_00481090
// Address: 00481090
// Address Range: [[00481090, 004819f0]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00481090(CBitFont *param_1,undefined4 param_2,CDrawSurface *param_3,undefined4 param_4,int param_5,CDrawSurface *param_6,undefined4 param_7,int param_8,CDrawSurface *param_9,undefined4 param_10,int param_11,CDrawSurface *param_12,undefined4 param_13,CDrawSurface *param_14,CDrawSurface *param_15,undefined4 *param_16,int param_17,int param_18,int param_19,CDrawSurface *param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00481090(CBitFont *param_1,uint param_2,CDrawSurface *param_3,uint param_4,int param_5,CDrawSurface *param_6,uint param_7,int param_8,CDrawSurface *param_9,uint param_10,int param_11,CDrawSurface *param_12,uint param_13,CDrawSurface *param_14,CDrawSurface *param_15,uint *param_16,int param_17,int param_18,int param_19,CDrawSurface *param_20,uint param_21,uint param_22,uint param_23)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  CDrawSurface *in_stack_00000074;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  CDrawSurface *in_stack_00000080;
  int in_stack_00000084;
  uint in_stack_00000088;
  CDrawSurface *in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  CDrawSurface *in_stack_00000098;
  uint in_stack_0000009c;
  int in_stack_000000a0;
  CDrawSurface *in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  CDrawSurface *in_stack_000000b0;
  uint in_stack_000000b4;
  int in_stack_000000b8;
  CDrawSurface *in_stack_000000bc;
  uint in_stack_000000c0;
  int in_stack_000000c4;
  uint in_stack_000000cc;
  byte *in_stack_000000d0;
  int in_stack_000000dc;
  int in_stack_000000e4;
  int in_stack_000000f4;
  int in_stack_00000104;
  int in_stack_00000108;
  int in_stack_00000110;
  uint in_stack_00000114;
  int in_stack_00000164;
  uint uStack_24;
  
  if ((0x27f < DAT_0061b498) && (0x1df < DAT_0061b49c)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff9c,DAT_0061b498 / 2,DAT_0061b49c / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_0047e5c0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_FUN_0047ffd0((CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_0047e3b0(7);
    cockpit_drawsurf_cpp_FUN_0047f8c0((CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_0047ed30(&stack0xffffff9c,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0xffffff9c,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0xffffffac,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0
              ((CDrawSurface *)&stack0xffffffbc,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0
              ((CDrawSurface *)&stack0xffffffcc,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20
              ((CDrawSurface *)&uStack_24,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50
              ((CDrawSurface *)&stack0xffffffec,200,100,0x32);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_FUN_0047e860((CBitFont *)0x0);
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480920();
    cockpit_drawsurf_cpp_FUN_00480b90();
    cockpit_drawsurf_cpp_FUN_0047e860(param_1);
    *(uint *)(param_1 + 0x4204) = 0;
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480780();
    *(uint *)(param_1 + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480780();
    cockpit_drawsurf_cpp_FUN_00480920();
    cockpit_drawsurf_cpp_FUN_00480b90();
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xff);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0xfffffffc,100,0x14);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x00000008,100,0x23);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x00000014,100,0x4f);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x00000020,100,0x5e);
    cockpit_drawsurf_cpp_FUN_0047e5c0();
    cockpit_drawsurf_cpp_FUN_0047ffd0((CDrawSurface *)&stack0xffffffec);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_FUN_0047f8c0((CDrawSurface *)&stack0xffffffec);
    cockpit_drawsurf_cpp_FUN_0047ed30();
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0xffffffec,10,5,6);
    cockpit_drawsurf_cpp_FUN_0047e5c0();
    cockpit_drawsurf_cpp_FUN_0047ffd0((CDrawSurface *)&uStack_24);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_FUN_0047f8c0((CDrawSurface *)&uStack_24);
    cockpit_drawsurf_cpp_FUN_0047ed30();
    in_stack_0000007c = _DAT_00612558;
    iVar2 = DAT_0061b49c / 2 + 0x66;
    iVar3 = DAT_0061b49c - iVar2;
    iVar1 = *(int *)(param_1 + 0x41f0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&param_23,DAT_0061b498 / 2,iVar2,0xc9,iVar3,(CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_0047e5c0();
    cockpit_drawsurf_cpp_FUN_0047ffd0((CDrawSurface *)&param_23);
    cockpit_drawsurf_cpp_FUN_0047e3b0(7);
    cockpit_drawsurf_cpp_FUN_0047f8c0((CDrawSurface *)&param_23);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_FUN_0047e860(param_1);
    *(uint *)(param_1 + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_004807b0();
    cockpit_drawsurf_cpp_FUN_00480880();
    cockpit_drawsurf_cpp_FUN_00480950();
    iVar2 = iVar1 + 1;
    cockpit_drawsurf_cpp_FUN_00480a20();
    in_stack_00000090 = iVar1 * 2;
    in_stack_00000094 = in_stack_00000090 + 1;
    cockpit_drawsurf_cpp_FUN_00480af0();
    in_stack_00000084 = iVar1 * 3;
    in_stack_00000080 = (CDrawSurface *)(iVar3 + iVar1 * -3);
    cockpit_drawsurf_cpp_FUN_00480bc0();
    in_stack_0000008c = (CDrawSurface *)(iVar3 - in_stack_00000090);
    cockpit_drawsurf_cpp_FUN_00480ca0();
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
              ((CDrawSurface *)&param_23,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,(char *)0x5db273);
    uStack_24 = 0x481681;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
              ((CDrawSurface *)&stack0x00000074,(char *)0x5db276);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x0000007c,1,1);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x00000088,199,1);
    param_2 = 1;
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x00000094,100,1);
    param_4 = 100;
    param_3 = (CDrawSurface *)&stack0x000000a0;
    param_2 = 0x4816e0;
    param_5 = iVar2;
    cockpit_drawsurf_cpp_FUN_0047e870(param_3,100,iVar2);
    param_8 = in_stack_000000e4;
    param_7 = 100;
    param_6 = (CDrawSurface *)&stack0x000000ac;
    param_5 = 0x4816fa;
    cockpit_drawsurf_cpp_FUN_0047e870(param_6,100,in_stack_000000e4);
    param_11 = in_stack_000000dc;
    param_10 = 100;
    param_9 = (CDrawSurface *)&stack0x000000b8;
    param_8 = 0x481714;
    cockpit_drawsurf_cpp_FUN_0047e870(param_9,100,in_stack_000000dc);
    param_14 = (CDrawSurface *)in_stack_000000f4;
    param_13 = 100;
    param_12 = (CDrawSurface *)&stack0x000000c4;
    param_11 = 0x48172e;
    cockpit_drawsurf_cpp_FUN_0047e870(param_12,100,in_stack_000000f4);
    param_16 = (uint *)0x64;
    param_15 = (CDrawSurface *)&stack0x000000d0;
    param_14 = (CDrawSurface *)0x481741;
    param_17 = iVar3;
    cockpit_drawsurf_cpp_FUN_0047e870(param_15,100,iVar3);
    param_16 = (uint *)(DAT_0061b498 / 2 + -0xca);
    param_17 = DAT_0061b49c / 2 + 0x66;
    iVar3 = DAT_0061b49c - param_17;
    param_20 = (CDrawSurface *)0x0;
    param_18 = 0xc9;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x481789;
    param_19 = iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              (param_15,(int)param_16,param_17,0xc9,iVar3,(CDrawSurface *)0x0);
    param_20 = (CDrawSurface *)0x80;
    param_19 = 0x80;
    param_18 = 0x80;
    param_17 = 0x4817a0;
    cockpit_drawsurf_cpp_FUN_0047e5c0();
    param_20 = (CDrawSurface *)&stack0x0000009c;
    param_19 = 0x4817ad;
    cockpit_drawsurf_cpp_FUN_0047ffd0(param_20);
    param_20 = (CDrawSurface *)0x7;
    param_19 = 0x4817b7;
    cockpit_drawsurf_cpp_FUN_0047e3b0(7);
    param_20 = (CDrawSurface *)&stack0x0000009c;
    param_19 = 0x4817c4;
    cockpit_drawsurf_cpp_FUN_0047f8c0(param_20);
    param_20 = (CDrawSurface *)0xf9;
    param_19 = 0x4817d1;
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xf9);
    param_20 = (CDrawSurface *)0x0;
    param_19 = 0x4817db;
    cockpit_drawsurf_cpp_FUN_0047e860((CBitFont *)0x0);
    *(uint *)(param_1 + 0x4204) = 1;
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db279;
    param_18 = 1;
    param_17 = 1;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x481803;
    cockpit_drawsurf_cpp_FUN_004807b0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db27c;
    param_18 = 1;
    param_17 = 199;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x481824;
    cockpit_drawsurf_cpp_FUN_00480880();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db27f;
    param_18 = 1;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x481842;
    cockpit_drawsurf_cpp_FUN_00480950();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db282;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x48185f;
    param_18 = iVar2;
    cockpit_drawsurf_cpp_FUN_00480a20();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db285;
    param_18 = in_stack_00000114;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x481883;
    cockpit_drawsurf_cpp_FUN_00480af0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5db288;
    param_18 = iVar3 - in_stack_00000104;
    param_17 = 0x96;
    param_16 = (uint *)0x32;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x4818b9;
    in_stack_00000108 = param_18;
    cockpit_drawsurf_cpp_FUN_00480bc0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    y = iVar3 - in_stack_00000110;
    param_19 = 0x5db28b;
    param_18 = y + 0x32;
    param_17 = y + -0x32;
    param_16 = (uint *)0x64;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x4818e6;
    cockpit_drawsurf_cpp_FUN_00480ca0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    iVar3 = iVar3 - iVar1;
    param_19 = 0x5db28e;
    param_18 = iVar3 + 0x32;
    param_17 = iVar3 + -0x32;
    param_16 = (uint *)0x96;
    param_15 = (CDrawSurface *)0x32;
    param_14 = (CDrawSurface *)&stack0x0000009c;
    param_13 = 0x481911;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
              (param_14,0x32,0x96,param_17,param_18,(char *)0x5db28e);
    param_23 = 0x48192b;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
              ((CDrawSurface *)&stack0x000000b4,(char *)0x5db291);
    cockpit_drawsurf_cpp_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_FUN_0047e870((CDrawSurface *)&stack0x000000bc,1,1);
    in_stack_0000007c = 1;
    in_stack_00000078 = 199;
    in_stack_00000074 = (CDrawSurface *)&stack0x000000c8;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_00000074,199,1);
    in_stack_00000088 = 1;
    in_stack_00000084 = 100;
    in_stack_00000080 = (CDrawSurface *)&stack0x000000d4;
    in_stack_0000007c = 0x48196e;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_00000080,100,1);
    in_stack_00000090 = 100;
    in_stack_0000008c = (CDrawSurface *)&stack0x000000e0;
    in_stack_00000088 = 0x48197e;
    in_stack_00000094 = iVar2;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_0000008c,100,iVar2);
    in_stack_000000a0 = in_stack_00000164;
    in_stack_0000009c = 100;
    in_stack_00000098 = (CDrawSurface *)&stack0x000000ec;
    in_stack_00000094 = 0x481995;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_00000098,100,in_stack_00000164);
    in_stack_000000ac = in_stack_00000164;
    in_stack_000000a8 = 100;
    in_stack_000000a4 = (CDrawSurface *)&stack0x000000f8;
    in_stack_000000a0 = 0x4819ac;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_000000a4,100,in_stack_00000164);
    in_stack_000000b4 = 100;
    in_stack_000000b0 = (CDrawSurface *)&stack0x00000104;
    in_stack_000000ac = 0x4819bc;
    in_stack_000000b8 = y;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_000000b0,100,y);
    in_stack_000000c0 = 100;
    in_stack_000000bc = (CDrawSurface *)&stack0x00000110;
    in_stack_000000b8 = 0x4819cc;
    in_stack_000000c4 = iVar3;
    cockpit_drawsurf_cpp_FUN_0047e870(in_stack_000000bc,100,iVar3);
    in_stack_000000d0 = (byte *)0x4;
    in_stack_000000cc = 0x4819d6;
    cockpit_drawsurf_cpp_FUN_0047e3b0(4);
    in_stack_000000d0 = &stack0x0000011c;
    in_stack_000000cc = 0x4819e3;
    cockpit_drawsurf_cpp_FUN_0047fcf0();
    return;
  }
  return;
}
