// Name: core_stranger.cpp_CStranger_FUN_005c6220
// Address: 005c6220
// Address Range: [[005c6220, 005c658b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c6220()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc3af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Bip01_L_Forearm_00653e84
//   TerminatedCString s_Bip01_L_Forearm_00653e94
//   TerminatedCString s_Bip01_L_Forearm_00653ea4
//   TerminatedCString s_Bip01_L_Forearm_00653eb4
//   TerminatedCString s_Bip01_L_Forearm_00653ec4
//   TerminatedCString s_Bip01_L_Forearm_00653ed4
//   TerminatedCString s_Bip01_R_Forearm_00653ee4
//   TerminatedCString s_Bip01_R_Forearm_00653ef4
//   TerminatedCString s_Bip01_R_Forearm_00653f04
//   TerminatedCString s_Bip01_R_Forearm_00653f14
//   TerminatedCString s_Bip01_R_Forearm_00653f24
//   TerminatedCString s_Bip01_R_Forearm_00653f34
//   TerminatedCString s_Bip01_L_Forearm_00653f44
//   TerminatedCString s_Bip01_L_Forearm_00653f54
//   double DOUBLE_00653f64 = 0.700000000000000
//   double DOUBLE_00653f6c = 0.300000000000000
//   double DOUBLE_00653f74 = 0.5
//   double DOUBLE_00653f7c = 0.400000000000000
//   double DOUBLE_00653f84 = 0.600000000000000
//   double DOUBLE_00653f8c = 0.800000000000000
// Function calls:
//   core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   core_cloth.cpp_FUN_0043e170
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c6220(int* param_1) */

void core_stranger_cpp_CStranger_FUN_005c6220(void)

{
  CCloth *this_ptr;
  bool bVar1;
  bool bVar2;
  int iVar3;
  SMotion *pSVar4;
  CCloth *pCVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x2a94)) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x120))();
    bVar2 = false;
    if (iVar3 < 2) {
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 0) {
        if ((float)DOUBLE_00653f64 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar2 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)DOUBLE_00653f6c) {
          bVar2 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 2) {
        if ((float)DOUBLE_00653f74 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 3) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)DOUBLE_00653f74) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 4) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)DOUBLE_00653f7c) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 5) {
        if ((float)DOUBLE_00653f84 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 9) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)DOUBLE_00653f7c) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 0xf) {
        if ((float)DOUBLE_00653f6c < *(float *)(in_stack_00000004 + 0x2a90)) {
          if ((double)*(float *)(in_stack_00000004 + 0x2a90) < DOUBLE_00653f8c) {
            bVar1 = true;
          }
        }
      }
    }
    this_ptr = *(CCloth **)(in_stack_00000004 + 0x2c28);
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
    }
    else {
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
    }
    if (bVar1) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
    }
    else {
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
    }
    pCVar5 = this_ptr + 1;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if (pSVar4->state_index == 0x2a) {
      if (pCVar5 != (CCloth *)&stack0xffffffd8) {
        this_ptr[1].padding_0x0[4] = '\0';
        this_ptr[1].padding_0x0[5] = '\0';
        this_ptr[1].padding_0x0[6] = '\0';
        this_ptr[1].padding_0x0[7] = '\0';
        pCVar5->padding_0x0[0] = '\0';
        pCVar5->padding_0x0[1] = '\0';
        pCVar5->padding_0x0[2] = '\0';
        pCVar5->padding_0x0[3] = '\0';
        this_ptr[1].padding_0x0[8] = '\0';
        this_ptr[1].padding_0x0[9] = '\0';
        this_ptr[1].padding_0x0[10] = -0x60;
        this_ptr[1].padding_0x0[0xb] = -0x3f;
        return;
      }
    }
    else if (pSVar4->state_index == 0x2b) {
      if (pCVar5 != (CCloth *)&stack0xffffffe4) {
        this_ptr[1].padding_0x0[4] = '\0';
        this_ptr[1].padding_0x0[5] = '\0';
        this_ptr[1].padding_0x0[6] = '\0';
        this_ptr[1].padding_0x0[7] = '\0';
        pCVar5->padding_0x0[0] = '\0';
        pCVar5->padding_0x0[1] = '\0';
        pCVar5->padding_0x0[2] = '\0';
        pCVar5->padding_0x0[3] = '\0';
        this_ptr[1].padding_0x0[8] = '\0';
        this_ptr[1].padding_0x0[9] = '\0';
        this_ptr[1].padding_0x0[10] = -0x60;
        this_ptr[1].padding_0x0[0xb] = 'A';
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 005c6220: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c6220
// 005c6221: PUSH ESI
// 005c6222: PUSH EDI
// 005c6223: PUSH EBP
// 005c6224: MOV EBP,ESP
// 005c6226: SUB ESP,0x20
// 005c6229: AND ESP,0xfffffff8
// 005c622c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c622f: CMP dword ptr [ESI + 0x2a94],0x1
// 005c6236: JGE 0x005c623f
//   XREF to: 005c623f (CONDITIONAL_JUMP)
// 005c6238: MOV ESP,EBP
//   Label: LAB_005c6238
// 005c623a: POP EBP
// 005c623b: POP EDI
// 005c623c: POP ESI
// 005c623d: POP EBX
// 005c623e: RET
// 005c623f: PUSH ESI
//   Label: LAB_005c623f
// 005c6240: MOV EAX,dword ptr [ESI + 0x154]
// 005c6246: XOR EDI,EDI
// 005c6248: CALL dword ptr [EAX + 0x120]
// 005c624e: ADD ESP,0x4
// 005c6251: XOR EDX,EDX
// 005c6253: CMP EAX,0x2
// 005c6256: JGE 0x005c6364
//   XREF to: 005c6364 (CONDITIONAL_JUMP)
// 005c625c: CMP dword ptr [ESI + 0x2a8c],0x0
// 005c6263: JNZ 0x005c627b
//   XREF to: 005c627b (CONDITIONAL_JUMP)
// 005c6265: FLD float ptr [ESI + 0x2a90]
// 005c626b: FCOMP double ptr [0x00653f64]
//   XREF to: 00653f64 (READ)
// 005c6271: FNSTSW AX
// 005c6273: SAHF
// 005c6274: JBE 0x005c627b
//   XREF to: 005c627b (CONDITIONAL_JUMP)
// 005c6276: MOV EDX,0x1
// 005c627b: MOV EBX,dword ptr [ESI + 0x2a8c]
//   Label: LAB_005c627b
// 005c6281: CMP EBX,0x1
// 005c6284: JNZ 0x005c6299
//   XREF to: 005c6299 (CONDITIONAL_JUMP)
// 005c6286: FLD float ptr [ESI + 0x2a90]
// 005c628c: FCOMP double ptr [0x00653f6c]
//   XREF to: 00653f6c (READ)
// 005c6292: FNSTSW AX
// 005c6294: SAHF
// 005c6295: JNC 0x005c6299
//   XREF to: 005c6299 (CONDITIONAL_JUMP)
// 005c6297: MOV EDX,EBX
// 005c6299: CMP dword ptr [ESI + 0x2a8c],0x2
//   Label: LAB_005c6299
// 005c62a0: JNZ 0x005c62b8
//   XREF to: 005c62b8 (CONDITIONAL_JUMP)
// 005c62a2: FLD float ptr [ESI + 0x2a90]
// 005c62a8: FCOMP double ptr [0x00653f74]
//   XREF to: 00653f74 (READ)
// 005c62ae: FNSTSW AX
// 005c62b0: SAHF
// 005c62b1: JBE 0x005c62b8
//   XREF to: 005c62b8 (CONDITIONAL_JUMP)
// 005c62b3: MOV EDI,0x1
// 005c62b8: CMP dword ptr [ESI + 0x2a8c],0x3
//   Label: LAB_005c62b8
// 005c62bf: JNZ 0x005c62d7
//   XREF to: 005c62d7 (CONDITIONAL_JUMP)
// 005c62c1: FLD float ptr [ESI + 0x2a90]
// 005c62c7: FCOMP double ptr [0x00653f74]
//   XREF to: 00653f74 (READ)
// 005c62cd: FNSTSW AX
// 005c62cf: SAHF
// 005c62d0: JNC 0x005c62d7
//   XREF to: 005c62d7 (CONDITIONAL_JUMP)
// 005c62d2: MOV EDI,0x1
// 005c62d7: CMP dword ptr [ESI + 0x2a8c],0x4
//   Label: LAB_005c62d7
// 005c62de: JNZ 0x005c62f6
//   XREF to: 005c62f6 (CONDITIONAL_JUMP)
// 005c62e0: FLD float ptr [ESI + 0x2a90]
// 005c62e6: FCOMP double ptr [0x00653f7c]
//   XREF to: 00653f7c (READ)
// 005c62ec: FNSTSW AX
// 005c62ee: SAHF
// 005c62ef: JNC 0x005c62f6
//   XREF to: 005c62f6 (CONDITIONAL_JUMP)
// 005c62f1: MOV EDI,0x1
// 005c62f6: CMP dword ptr [ESI + 0x2a8c],0x5
//   Label: LAB_005c62f6
// 005c62fd: JNZ 0x005c6315
//   XREF to: 005c6315 (CONDITIONAL_JUMP)
// 005c62ff: FLD float ptr [ESI + 0x2a90]
// 005c6305: FCOMP double ptr [0x00653f84]
//   XREF to: 00653f84 (READ)
// 005c630b: FNSTSW AX
// 005c630d: SAHF
// 005c630e: JBE 0x005c6315
//   XREF to: 005c6315 (CONDITIONAL_JUMP)
// 005c6310: MOV EDI,0x1
// 005c6315: CMP dword ptr [ESI + 0x2a8c],0x9
//   Label: LAB_005c6315
// 005c631c: JNZ 0x005c6334
//   XREF to: 005c6334 (CONDITIONAL_JUMP)
// 005c631e: FLD float ptr [ESI + 0x2a90]
// 005c6324: FCOMP double ptr [0x00653f7c]
//   XREF to: 00653f7c (READ)
// 005c632a: FNSTSW AX
// 005c632c: SAHF
// 005c632d: JNC 0x005c6334
//   XREF to: 005c6334 (CONDITIONAL_JUMP)
// 005c632f: MOV EDI,0x1
// 005c6334: CMP dword ptr [ESI + 0x2a8c],0xf
//   Label: LAB_005c6334
// 005c633b: JNZ 0x005c6364
//   XREF to: 005c6364 (CONDITIONAL_JUMP)
// 005c633d: FLD float ptr [ESI + 0x2a90]
// 005c6343: FST double ptr [ESP]
// 005c6346: FCOMP double ptr [0x00653f6c]
//   XREF to: 00653f6c (READ)
// 005c634c: FNSTSW AX
// 005c634e: SAHF
// 005c634f: JBE 0x005c6364
//   XREF to: 005c6364 (CONDITIONAL_JUMP)
// 005c6351: FLD double ptr [ESP]
// 005c6354: FCOMP double ptr [0x00653f8c]
//   XREF to: 00653f8c (READ)
// 005c635a: FNSTSW AX
// 005c635c: SAHF
// 005c635d: JNC 0x005c6364
//   XREF to: 005c6364 (CONDITIONAL_JUMP)
// 005c635f: MOV EDI,0x1
// 005c6364: MOV EBX,dword ptr [ESI + 0x2c28]
//   Label: LAB_005c6364
// 005c636a: TEST EDX,EDX
// 005c636c: JZ 0x005c64ad
//   XREF to: 005c64ad (CONDITIONAL_JUMP)
// 005c6372: PUSH 0x32
// 005c6374: PUSH 0x653e84
//   XREF to: 00653e84 (DATA)
// 005c6379: PUSH EBX
// 005c637a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c637f: ADD ESP,0xc
// 005c6382: PUSH 0x33
// 005c6384: PUSH 0x653e94
//   XREF to: 00653e94 (DATA)
// 005c6389: PUSH EBX
// 005c638a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c638f: ADD ESP,0xc
// 005c6392: PUSH 0x34
// 005c6394: PUSH 0x653ea4
//   XREF to: 00653ea4 (DATA)
// 005c6399: PUSH EBX
// 005c639a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c639f: ADD ESP,0xc
// 005c63a2: PUSH 0x35
// 005c63a4: PUSH 0x653eb4
//   XREF to: 00653eb4 (DATA)
// 005c63a9: PUSH EBX
// 005c63aa: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63af: ADD ESP,0xc
// 005c63b2: PUSH 0x36
// 005c63b4: PUSH 0x653ec4
//   XREF to: 00653ec4 (DATA)
// 005c63b9: PUSH EBX
// 005c63ba: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63bf: ADD ESP,0xc
// 005c63c2: PUSH 0x37
// 005c63c4: PUSH 0x653ed4
//   XREF to: 00653ed4 (DATA)
// 005c63c9: PUSH EBX
// 005c63ca: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63cf: ADD ESP,0xc
// 005c63d2: PUSH 0x20
// 005c63d4: PUSH 0x653ee4
//   XREF to: 00653ee4 (DATA)
// 005c63d9: PUSH EBX
// 005c63da: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63df: ADD ESP,0xc
// 005c63e2: PUSH 0x21
// 005c63e4: PUSH 0x653ef4
//   XREF to: 00653ef4 (DATA)
// 005c63e9: PUSH EBX
// 005c63ea: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63ef: ADD ESP,0xc
// 005c63f2: PUSH 0x22
// 005c63f4: PUSH 0x653f04
//   XREF to: 00653f04 (DATA)
// 005c63f9: PUSH EBX
// 005c63fa: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c63ff: ADD ESP,0xc
// 005c6402: PUSH 0x23
// 005c6404: PUSH 0x653f14
//   XREF to: 00653f14 (DATA)
// 005c6409: PUSH EBX
// 005c640a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c640f: ADD ESP,0xc
// 005c6412: PUSH 0x24
// 005c6414: PUSH 0x653f24
//   XREF to: 00653f24 (DATA)
// 005c6419: PUSH EBX
// 005c641a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c641f: ADD ESP,0xc
// 005c6422: PUSH 0x25
// 005c6424: PUSH 0x653f34
//   XREF to: 00653f34 (DATA)
// 005c6429: PUSH EBX
// 005c642a: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c642f: ADD ESP,0xc
// 005c6432: TEST EDI,EDI
//   Label: LAB_005c6432
// 005c6434: JZ 0x005c6536
//   XREF to: 005c6536 (CONDITIONAL_JUMP)
// 005c643a: PUSH 0x2f
// 005c643c: PUSH 0x653f44
//   XREF to: 00653f44 (DATA)
// 005c6441: PUSH EBX
// 005c6442: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c6447: ADD ESP,0xc
// 005c644a: PUSH 0x32
// 005c644c: PUSH 0x653f54
//   XREF to: 00653f54 (DATA)
// 005c6451: PUSH EBX
// 005c6452: CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
//   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)
// 005c6457: ADD ESP,0xc
// 005c645a: ADD ESI,0x158
//   Label: LAB_005c645a
// 005c6460: PUSH ESI
// 005c6461: ADD EBX,0x3fe64
// 005c6467: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c646c: MOV EAX,dword ptr [EAX + 0x24]
// 005c646f: ADD ESP,0x4
// 005c6472: CMP EAX,0x2a
// 005c6475: JNZ 0x005c6551
//   XREF to: 005c6551 (CONDITIONAL_JUMP)
// 005c647b: MOV ESI,0xc1a00000
// 005c6480: XOR EDX,EDX
// 005c6482: LEA EAX,[ESP + 0x8]
// 005c6486: MOV dword ptr [ESP + 0xc],EDX
// 005c648a: MOV dword ptr [ESP + 0x10],ESI
// 005c648e: MOV dword ptr [ESP + 0x8],EDX
// 005c6492: CMP EBX,EAX
// 005c6494: JZ 0x005c6238
//   XREF to: 005c6238 (CONDITIONAL_JUMP)
// 005c649a: MOV dword ptr [EBX + 0x4],EDX
// 005c649d: MOV dword ptr [EBX],EDX
// 005c649f: MOV EAX,dword ptr [ESP + 0x10]
// 005c64a3: MOV dword ptr [EBX + 0x8],EAX
// 005c64a6: MOV ESP,EBP
// 005c64a8: POP EBP
// 005c64a9: POP EDI
// 005c64aa: POP ESI
// 005c64ab: POP EBX
// 005c64ac: RET
// 005c64ad: PUSH 0x32
//   Label: LAB_005c64ad
// 005c64af: PUSH EBX
// 005c64b0: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64b5: ADD ESP,0x8
// 005c64b8: PUSH 0x33
// 005c64ba: PUSH EBX
// 005c64bb: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64c0: ADD ESP,0x8
// 005c64c3: PUSH 0x34
// 005c64c5: PUSH EBX
// 005c64c6: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64cb: ADD ESP,0x8
// 005c64ce: PUSH 0x35
// 005c64d0: PUSH EBX
// 005c64d1: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64d6: ADD ESP,0x8
// 005c64d9: PUSH 0x36
// 005c64db: PUSH EBX
// 005c64dc: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64e1: ADD ESP,0x8
// 005c64e4: PUSH 0x37
// 005c64e6: PUSH EBX
// 005c64e7: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64ec: ADD ESP,0x8
// 005c64ef: PUSH 0x20
// 005c64f1: PUSH EBX
// 005c64f2: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c64f7: ADD ESP,0x8
// 005c64fa: PUSH 0x21
// 005c64fc: PUSH EBX
// 005c64fd: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c6502: ADD ESP,0x8
// 005c6505: PUSH 0x22
// 005c6507: PUSH EBX
// 005c6508: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c650d: ADD ESP,0x8
// 005c6510: PUSH 0x23
// 005c6512: PUSH EBX
// 005c6513: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c6518: ADD ESP,0x8
// 005c651b: PUSH 0x24
// 005c651d: PUSH EBX
// 005c651e: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c6523: ADD ESP,0x8
// 005c6526: PUSH 0x25
// 005c6528: PUSH EBX
// 005c6529: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c652e: ADD ESP,0x8
// 005c6531: JMP 0x005c6432
//   XREF to: 005c6432 (UNCONDITIONAL_JUMP)
// 005c6536: PUSH 0x2f
//   Label: LAB_005c6536
// 005c6538: PUSH EBX
// 005c6539: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c653e: ADD ESP,0x8
// 005c6541: PUSH 0x32
// 005c6543: PUSH EBX
// 005c6544: CALL core_cloth.cpp_FUN_0043e170
//   XREF to: 0043e170 (UNCONDITIONAL_CALL)
// 005c6549: ADD ESP,0x8
// 005c654c: JMP 0x005c645a
//   XREF to: 005c645a (UNCONDITIONAL_JUMP)
// 005c6551: CMP EAX,0x2b
//   Label: LAB_005c6551
// 005c6554: JNZ 0x005c6238
//   XREF to: 005c6238 (CONDITIONAL_JUMP)
// 005c655a: XOR ESI,ESI
// 005c655c: MOV EAX,0x41a00000
// 005c6561: MOV dword ptr [ESP + 0x18],ESI
// 005c6565: MOV dword ptr [ESP + 0x1c],EAX
// 005c6569: LEA EAX,[ESP + 0x14]
// 005c656d: MOV dword ptr [ESP + 0x14],ESI
// 005c6571: CMP EBX,EAX
// 005c6573: JZ 0x005c6238
//   XREF to: 005c6238 (CONDITIONAL_JUMP)
// 005c6579: MOV dword ptr [EBX + 0x4],ESI
// 005c657c: MOV dword ptr [EBX],ESI
// 005c657e: MOV EAX,dword ptr [ESP + 0x1c]
// 005c6582: MOV dword ptr [EBX + 0x8],EAX
// 005c6585: MOV ESP,EBP
// 005c6587: POP EBP
// 005c6588: POP EDI
// 005c6589: POP ESI
// 005c658a: POP EBX
// 005c658b: RET
