// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 (0040d040) at 0040d0fb [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 0044409c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da299 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b440 (0050b440) at 0050b4c9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e57e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539c90 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ed90 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e57 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583b33 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aa44 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057af8c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dcc4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00598037 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064f112 = 10
//   double DOUBLE_0064f11a = 0.0500000000000000
//   double DOUBLE_0064f122 = 3.14159265350000
//   double DOUBLE_0064f12a = 8
//   double DOUBLE_0064f132 = 30
//   double DOUBLE_0064f13a = -1.57079632675000
//   double DOUBLE_0064f142 = 1.57079632675000
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

{
  int iVar1;
  float unaff_EBX;
  float10 fVar2;
  float10 fVar3;
  float unaff_retaddr;
  float fStack00000014;
  float in_stack_00000028;
  float in_stack_00000034;
  float in_stack_0000003c;
  float in_stack_00000048;
  undefined4 uStack00000050;
  float in_stack_0000005c;
  undefined4 uStack00000064;
  float in_stack_00000070;
  undefined4 uStack00000078;
  float in_stack_00000084;
  undefined4 uStack0000008c;
  float in_stack_00000098;
  undefined4 uStack000000a0;
  undefined4 uStack000000b4;
  float in_stack_000000c8;
  float in_stack_000000dc;
  float in_stack_000000f0;
  float in_stack_00000104;
  float in_stack_0000011c;
  float in_stack_00000130;
  float fStack_14;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar1 != 0) {
      unaff_EBX = unaff_retaddr * (float)DOUBLE_0064f112;
    }
  }
  else {
    unaff_EBX = fStack_14 * (float)DOUBLE_0064f11a;
  }
  fStack00000014 = unaff_EBX * (float)DOUBLE_0064f122;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4f);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw - in_stack_00000028;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x51);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw + in_stack_0000003c;
  }
  fStack00000014 = 8.277177e-39;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x =
         (float)(fVar2 * (float10)in_stack_00000034 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar3 * (float10)in_stack_00000034 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x =
         (float)((float10)(this_ptr->position).x - fVar2 * (float10)in_stack_00000048);
    (this_ptr->position).z =
         (float)((float10)(this_ptr->position).z - fVar3 * (float10)in_stack_00000048);
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)DOUBLE_0064f13a);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)DOUBLE_0064f13a);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_0000005c + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_0000005c + (float10)(this_ptr->position).z);
  }
  uStack00000050 = 0x5a2235;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)DOUBLE_0064f142);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)DOUBLE_0064f142);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_00000070 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_00000070 + (float10)(this_ptr->position).z);
  }
  uStack00000064 = 0x5a2285;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + in_stack_00000084;
  }
  uStack00000078 = 0x5a22a1;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - in_stack_00000098;
  }
  uStack0000008c = 0x5a22bd;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x3f);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch - in_stack_000000c8;
  }
  uStack000000a0 = 0x5a22da;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x42);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch + in_stack_000000dc;
  }
  uStack000000b4 = 0x5a22f7;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x47);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll - in_stack_000000f0;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x49);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll + in_stack_00000104;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xc);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - in_stack_0000011c;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xd);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + in_stack_00000130;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4c);
  if (iVar1 != 0) {
    this_ptr->roll = 0.0;
    this_ptr->yaw = this_ptr->roll;
    this_ptr->pitch = this_ptr->yaw;
    return;
  }
  return;
}


// Assembly code:
// 005a20b0: PUSH EBX
//   Label: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// 005a20b1: PUSH EBP
// 005a20b2: MOV EBP,ESP
// 005a20b4: SUB ESP,0x24
// 005a20b7: AND ESP,0xfffffff8
// 005a20ba: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a20bd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005a20c2: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005a20c8: PUSH 0x38
// 005a20ca: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a20ce: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a20d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a20d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a20d8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a20da: CALL dword ptr [EDX]
// 005a20dc: ADD ESP,0x8
// 005a20df: TEST EAX,EAX
// 005a20e1: JZ 0x005a2377
//   XREF to: 005a2377 (CONDITIONAL_JUMP)
// 005a20e7: FLD float ptr [ESP + 0x8]
// 005a20eb: FMUL double ptr [0x0064f11a]
//   XREF to: 0064f11a (READ)
// 005a20f1: FSTP float ptr [ESP + 0x4]
//   Label: LAB_005a20f1
// 005a20f5: FLD float ptr [ESP + 0x4]
//   Label: LAB_005a20f5
// 005a20f9: FLD ST0
// 005a20fb: FMUL double ptr [0x0064f122]
//   XREF to: 0064f122 (READ)
// 005a2101: FLD ST1
// 005a2103: FMUL double ptr [0x0064f12a]
//   XREF to: 0064f12a (READ)
// 005a2109: PUSH 0x4f
// 005a210b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2110: FXCH ST2
// 005a2112: FMUL double ptr [0x0064f132]
//   XREF to: 0064f132 (READ)
// 005a2118: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2119: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a211b: FXCH
// 005a211d: FSTP float ptr [ESP + 0x24]
// 005a2121: FXCH
// 005a2123: FSTP float ptr [ESP + 0x8]
// 005a2127: FSTP float ptr [ESP + 0x28]
// 005a212b: CALL dword ptr [EDX]
// 005a212d: ADD ESP,0x8
// 005a2130: TEST EAX,EAX
// 005a2132: JZ 0x005a213e
//   XREF to: 005a213e (CONDITIONAL_JUMP)
// 005a2134: FLD float ptr [EBX + 0x10]
// 005a2137: FSUB float ptr [ESP + 0x1c]
// 005a213b: FSTP float ptr [EBX + 0x10]
// 005a213e: PUSH 0x51
//   Label: LAB_005a213e
// 005a2140: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2145: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2146: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2148: CALL dword ptr [EDX]
// 005a214a: ADD ESP,0x8
// 005a214d: TEST EAX,EAX
// 005a214f: JZ 0x005a215b
//   XREF to: 005a215b (CONDITIONAL_JUMP)
// 005a2151: FLD float ptr [EBX + 0x10]
// 005a2154: FADD float ptr [ESP + 0x1c]
// 005a2158: FSTP float ptr [EBX + 0x10]
// 005a215b: PUSH 0x48
//   Label: LAB_005a215b
// 005a215d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2162: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2163: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2165: CALL dword ptr [EDX]
// 005a2167: ADD ESP,0x8
// 005a216a: TEST EAX,EAX
// 005a216c: JZ 0x005a219a
//   XREF to: 005a219a (CONDITIONAL_JUMP)
// 005a216e: FLD float ptr [EBX + 0x10]
// 005a2171: FSINCOS
// 005a2173: FLD float ptr [ESP]
// 005a2176: FXCH ST2
// 005a2178: FMUL ST2
// 005a217a: FXCH
// 005a217c: FMULP ST2
// 005a217e: FLD float ptr [EBX]
// 005a2180: FLD float ptr [EBX + 0x8]
// 005a2183: FXCH ST2
// 005a2185: FADD ST0,ST1
// 005a2187: FXCH ST3
// 005a2189: FADD ST0,ST2
// 005a218b: FXCH ST3
// 005a218d: FSTP ST1
// 005a218f: FXCH ST2
// 005a2191: FSTP ST1
// 005a2193: FXCH
// 005a2195: FSTP float ptr [EBX]
// 005a2197: FSTP float ptr [EBX + 0x8]
// 005a219a: PUSH 0x50
//   Label: LAB_005a219a
// 005a219c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a21a1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a21a2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a21a4: CALL dword ptr [EDX]
// 005a21a6: ADD ESP,0x8
// 005a21a9: TEST EAX,EAX
// 005a21ab: JZ 0x005a21d9
//   XREF to: 005a21d9 (CONDITIONAL_JUMP)
// 005a21ad: FLD float ptr [EBX + 0x10]
// 005a21b0: FSINCOS
// 005a21b2: FLD float ptr [ESP]
// 005a21b5: FXCH ST2
// 005a21b7: FMUL ST2
// 005a21b9: FXCH
// 005a21bb: FMULP ST2
// 005a21bd: FLD float ptr [EBX]
// 005a21bf: FLD float ptr [EBX + 0x8]
// 005a21c2: FXCH ST2
// 005a21c4: FSUBR ST0,ST1
// 005a21c6: FXCH ST3
// 005a21c8: FSUBR ST0,ST2
// 005a21ca: FXCH ST3
// 005a21cc: FSTP ST1
// 005a21ce: FXCH ST2
// 005a21d0: FSTP ST1
// 005a21d2: FXCH
// 005a21d4: FSTP float ptr [EBX]
// 005a21d6: FSTP float ptr [EBX + 0x8]
// 005a21d9: PUSH 0x4b
//   Label: LAB_005a21d9
// 005a21db: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a21e0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a21e1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a21e3: CALL dword ptr [EDX]
// 005a21e5: ADD ESP,0x8
// 005a21e8: TEST EAX,EAX
// 005a21ea: JZ 0x005a2229
//   XREF to: 005a2229 (CONDITIONAL_JUMP)
// 005a21ec: FLD double ptr [0x0064f13a]
//   XREF to: 0064f13a (READ)
// 005a21f2: FLD float ptr [EBX + 0x10]
// 005a21f5: FADD ST0,ST1
// 005a21f7: FSIN
// 005a21f9: FLD float ptr [EBX + 0x10]
// 005a21fc: FADDP ST2,ST0
// 005a21fe: FXCH
// 005a2200: FCOS
// 005a2202: FLD float ptr [ESP]
// 005a2205: FXCH ST2
// 005a2207: FMUL ST2
// 005a2209: FXCH
// 005a220b: FMULP ST2
// 005a220d: FLD float ptr [EBX]
// 005a220f: FLD float ptr [EBX + 0x8]
// 005a2212: FXCH ST2
// 005a2214: FADD ST0,ST1
// 005a2216: FXCH ST3
// 005a2218: FADD ST0,ST2
// 005a221a: FXCH ST3
// 005a221c: FSTP ST1
// 005a221e: FXCH ST2
// 005a2220: FSTP ST1
// 005a2222: FXCH
// 005a2224: FSTP float ptr [EBX]
// 005a2226: FSTP float ptr [EBX + 0x8]
// 005a2229: PUSH 0x4d
//   Label: LAB_005a2229
// 005a222b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2230: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2231: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2233: CALL dword ptr [EDX]
// 005a2235: ADD ESP,0x8
// 005a2238: TEST EAX,EAX
// 005a223a: JZ 0x005a2279
//   XREF to: 005a2279 (CONDITIONAL_JUMP)
// 005a223c: FLD double ptr [0x0064f142]
//   XREF to: 0064f142 (READ)
// 005a2242: FLD float ptr [EBX + 0x10]
// 005a2245: FADD ST0,ST1
// 005a2247: FSIN
// 005a2249: FLD float ptr [EBX + 0x10]
// 005a224c: FADDP ST2,ST0
// 005a224e: FXCH
// 005a2250: FCOS
// 005a2252: FLD float ptr [ESP]
// 005a2255: FXCH ST2
// 005a2257: FMUL ST2
// 005a2259: FXCH
// 005a225b: FMULP ST2
// 005a225d: FLD float ptr [EBX]
// 005a225f: FLD float ptr [EBX + 0x8]
// 005a2262: FXCH ST2
// 005a2264: FADD ST0,ST1
// 005a2266: FXCH ST3
// 005a2268: FADD ST0,ST2
// 005a226a: FXCH ST3
// 005a226c: FSTP ST1
// 005a226e: FXCH ST2
// 005a2270: FSTP ST1
// 005a2272: FXCH
// 005a2274: FSTP float ptr [EBX]
// 005a2276: FSTP float ptr [EBX + 0x8]
// 005a2279: PUSH 0x10
//   Label: LAB_005a2279
// 005a227b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2280: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2281: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2283: CALL dword ptr [EDX]
// 005a2285: ADD ESP,0x8
// 005a2288: TEST EAX,EAX
// 005a228a: JZ 0x005a2295
//   XREF to: 005a2295 (CONDITIONAL_JUMP)
// 005a228c: FLD float ptr [EBX + 0x4]
// 005a228f: FADD float ptr [ESP]
// 005a2292: FSTP float ptr [EBX + 0x4]
// 005a2295: PUSH 0x1e
//   Label: LAB_005a2295
// 005a2297: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a229c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a229d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a229f: CALL dword ptr [EDX]
// 005a22a1: ADD ESP,0x8
// 005a22a4: TEST EAX,EAX
// 005a22a6: JZ 0x005a22b1
//   XREF to: 005a22b1 (CONDITIONAL_JUMP)
// 005a22a8: FLD float ptr [EBX + 0x4]
// 005a22ab: FSUB float ptr [ESP]
// 005a22ae: FSTP float ptr [EBX + 0x4]
// 005a22b1: PUSH 0x3f
//   Label: LAB_005a22b1
// 005a22b3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a22b8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a22b9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a22bb: CALL dword ptr [EDX]
// 005a22bd: ADD ESP,0x8
// 005a22c0: TEST EAX,EAX
// 005a22c2: JZ 0x005a22ce
//   XREF to: 005a22ce (CONDITIONAL_JUMP)
// 005a22c4: FLD float ptr [EBX + 0xc]
// 005a22c7: FSUB float ptr [ESP + 0x1c]
// 005a22cb: FSTP float ptr [EBX + 0xc]
// 005a22ce: PUSH 0x42
//   Label: LAB_005a22ce
// 005a22d0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a22d5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a22d6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a22d8: CALL dword ptr [EDX]
// 005a22da: ADD ESP,0x8
// 005a22dd: TEST EAX,EAX
// 005a22df: JZ 0x005a22eb
//   XREF to: 005a22eb (CONDITIONAL_JUMP)
// 005a22e1: FLD float ptr [EBX + 0xc]
// 005a22e4: FADD float ptr [ESP + 0x1c]
// 005a22e8: FSTP float ptr [EBX + 0xc]
// 005a22eb: PUSH 0x47
//   Label: LAB_005a22eb
// 005a22ed: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a22f2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a22f3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a22f5: CALL dword ptr [EDX]
// 005a22f7: ADD ESP,0x8
// 005a22fa: TEST EAX,EAX
// 005a22fc: JZ 0x005a2308
//   XREF to: 005a2308 (CONDITIONAL_JUMP)
// 005a22fe: FLD float ptr [EBX + 0x14]
// 005a2301: FSUB float ptr [ESP + 0x1c]
// 005a2305: FSTP float ptr [EBX + 0x14]
// 005a2308: PUSH 0x49
//   Label: LAB_005a2308
// 005a230a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a230f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2310: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2312: CALL dword ptr [EDX]
// 005a2314: ADD ESP,0x8
// 005a2317: TEST EAX,EAX
// 005a2319: JZ 0x005a2325
//   XREF to: 005a2325 (CONDITIONAL_JUMP)
// 005a231b: FLD float ptr [EBX + 0x14]
// 005a231e: FADD float ptr [ESP + 0x1c]
// 005a2322: FSTP float ptr [EBX + 0x14]
// 005a2325: PUSH 0xc
//   Label: LAB_005a2325
// 005a2327: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a232c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a232d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a232f: CALL dword ptr [EDX]
// 005a2331: ADD ESP,0x8
// 005a2334: TEST EAX,EAX
// 005a2336: JZ 0x005a2342
//   XREF to: 005a2342 (CONDITIONAL_JUMP)
// 005a2338: FLD float ptr [EBX + 0x18]
// 005a233b: FSUB float ptr [ESP + 0x20]
// 005a233f: FSTP float ptr [EBX + 0x18]
// 005a2342: PUSH 0xd
//   Label: LAB_005a2342
// 005a2344: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2349: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a234a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a234c: CALL dword ptr [EDX]
// 005a234e: ADD ESP,0x8
// 005a2351: TEST EAX,EAX
// 005a2353: JZ 0x005a235f
//   XREF to: 005a235f (CONDITIONAL_JUMP)
// 005a2355: FLD float ptr [EBX + 0x18]
// 005a2358: FADD float ptr [ESP + 0x20]
// 005a235c: FSTP float ptr [EBX + 0x18]
// 005a235f: PUSH 0x4c
//   Label: LAB_005a235f
// 005a2361: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a2366: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a2367: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2369: CALL dword ptr [EDX]
// 005a236b: ADD ESP,0x8
// 005a236e: TEST EAX,EAX
// 005a2370: JNZ 0x005a23a1
//   XREF to: 005a23a1 (CONDITIONAL_JUMP)
// 005a2372: MOV ESP,EBP
// 005a2374: POP EBP
// 005a2375: POP EBX
// 005a2376: RET
// 005a2377: PUSH 0x2a
//   Label: LAB_005a2377
// 005a2379: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005a237e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005a237f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005a2381: CALL dword ptr [EDX]
// 005a2383: ADD ESP,0x8
// 005a2386: TEST EAX,EAX
// 005a2388: JZ 0x005a20f5
//   XREF to: 005a20f5 (CONDITIONAL_JUMP)
// 005a238e: FLD float ptr [ESP + 0x8]
// 005a2392: FLD ST0
// 005a2394: FMUL double ptr [0x0064f112]
//   XREF to: 0064f112 (READ)
// 005a239a: FSTP ST1
// 005a239c: JMP 0x005a20f1
//   XREF to: 005a20f1 (UNCONDITIONAL_JUMP)
// 005a23a1: MOV dword ptr [EBX + 0x14],0x0
//   Label: LAB_005a23a1
// 005a23a8: MOV EAX,dword ptr [EBX + 0x14]
// 005a23ab: MOV dword ptr [EBX + 0x10],EAX
// 005a23ae: MOV EAX,dword ptr [EBX + 0x10]
// 005a23b1: MOV dword ptr [EBX + 0xc],EAX
// 005a23b4: MOV ESP,EBP
// 005a23b6: POP EBP
// 005a23b7: POP EBX
// 005a23b8: RET
