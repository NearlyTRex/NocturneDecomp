// Name: core_bodypart.cpp_FUN_00419340
// Address: 00419340
// Address Range: [[00419340, 004194ab]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419340()
// Cross-references:
//   core_bodypart.cpp_FUN_004194b0 (004194b0) at 0041953a [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419610 (00419610) at 004196b4 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419740 (00419740) at 004197a9 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419340(undefined4 param_1, undefined4
   param_2) */

void core_bodypart_cpp_FUN_00419340(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000010;
  int in_stack_00000014;
  
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x174),*(int **)(in_stack_00000004 + 0x178)
            );
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x174),*(int *)(in_stack_00000004 + 0x180),
             *(SInputFace **)(in_stack_00000004 + 0x184),*(int *)(in_stack_00000004 + 0x178),3,
             *(int *)(in_stack_00000004 + 0x17c));
  if ((*(int *)(in_stack_00000004 + 0x18c) == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004 + 400));
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr,*(SMRGLHeaderPrimitive **)(in_stack_00000004 + 0x184),
               *(int *)(in_stack_00000004 + 0x180),in_stack_00000010);
  }
  else {
    iVar3 = 0;
    iVar2 = -1;
    if (0 < *(int *)(in_stack_00000004 + 0x180)) {
      iVar4 = 0;
      do {
        iVar1 = **(int **)(in_stack_00000004 + 0x188);
        if (iVar1 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr,
                     (SMRGLTextureBasic *)(iVar1 * 0x18 + in_stack_00000004 + 400));
          iVar2 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (g_CDemonRendererPtr,
                   (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x184) + iVar4),
                   in_stack_00000014);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (iVar3 < *(int *)(in_stack_00000004 + 0x180));
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 00419340: PUSH EBX
//   Label: core_bodypart.cpp_FUN_00419340
// 00419341: PUSH ESI
// 00419342: PUSH EDI
// 00419343: PUSH EBP
// 00419344: SUB ESP,0xc
// 00419347: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041934b: MOV EDX,dword ptr [ESI + 0x178]
// 00419351: PUSH EDX
// 00419352: MOV ECX,dword ptr [ESI + 0x174]
// 00419358: PUSH ECX
// 00419359: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0041935f: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00419360: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 00419365: ADD ESP,0xc
// 00419368: MOV EDI,dword ptr [ESI + 0x17c]
// 0041936e: PUSH EDI
// 0041936f: PUSH 0x3
// 00419371: MOV EBP,dword ptr [ESI + 0x178]
// 00419377: PUSH EBP
// 00419378: MOV EAX,dword ptr [ESI + 0x184]
// 0041937e: PUSH EAX
// 0041937f: MOV EDX,dword ptr [ESI + 0x180]
// 00419385: PUSH EDX
// 00419386: MOV ECX,dword ptr [ESI + 0x174]
// 0041938c: PUSH ECX
// 0041938d: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00419393: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00419394: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 00419399: MOV EDI,dword ptr [ESI + 0x18c]
// 0041939f: ADD ESP,0x1c
// 004193a2: CMP EDI,0x1
// 004193a5: JZ 0x004193ba
//   XREF to: 004193ba (CONDITIONAL_JUMP)
// 004193a7: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004193ad: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004193ae: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004193b3: ADD ESP,0x4
// 004193b6: TEST EAX,EAX
// 004193b8: JZ 0x0041941e
//   XREF to: 0041941e (CONDITIONAL_JUMP)
// 004193ba: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004193ba
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004193c0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004193c1: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004193c6: ADD ESP,0x4
// 004193c9: TEST EAX,EAX
// 004193cb: JNZ 0x004193e3
//   XREF to: 004193e3 (CONDITIONAL_JUMP)
// 004193cd: LEA EAX,[ESI + 0x190]
// 004193d3: PUSH EAX
// 004193d4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004193da: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004193db: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004193e0: ADD ESP,0x8
// 004193e3: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_004193e3
//   XREF to: Stack[0x8] (READ)
// 004193e7: PUSH EDI
// 004193e8: MOV EBP,dword ptr [ESI + 0x180]
// 004193ee: PUSH EBP
// 004193ef: MOV EAX,dword ptr [ESI + 0x184]
// 004193f5: PUSH EAX
// 004193f6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004193fc: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004193fd: CALL engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
//   XREF to: 0048ce20 (UNCONDITIONAL_CALL)
// 00419402: ADD ESP,0x10
// 00419405: PUSH 0x1
//   Label: LAB_00419405
// 00419407: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041940d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0041940e: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00419413: ADD ESP,0x8
// 00419416: ADD ESP,0xc
// 00419419: POP EBP
// 0041941a: POP EDI
// 0041941b: POP ESI
// 0041941c: POP EBX
// 0041941d: RET
// 0041941e: MOV EAX,0xffffffff
//   Label: LAB_0041941e
// 00419423: MOV EDX,dword ptr [ESI + 0x180]
// 00419429: XOR EBP,EBP
// 0041942b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041942f: TEST EDX,EDX
// 00419431: JLE 0x00419405
//   XREF to: 00419405 (CONDITIONAL_JUMP)
// 00419433: LEA EAX,[ESI + 0x190]
// 00419439: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0041943d: XOR EDI,EDI
// 0041943f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 00419442: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_00419442
//   XREF to: Stack[-0x14] (READ)
// 00419446: MOV EAX,dword ptr [ESI + 0x188]
// 0041944c: ADD EAX,EBX
// 0041944e: MOV EBX,dword ptr [EAX]
// 00419450: CMP EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00419454: JZ 0x00419470
//   XREF to: 00419470 (CONDITIONAL_JUMP)
// 00419456: IMUL EAX,EBX,0x18
// 00419459: ADD EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0041945c: PUSH EAX
// 0041945d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00419463: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00419464: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00419469: ADD ESP,0x8
// 0041946c: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00419470: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00419470
//   XREF to: Stack[0x8] (READ)
// 00419474: MOV EBX,dword ptr [ESI + 0x184]
// 0041947a: PUSH ECX
// 0041947b: ADD EBX,EDI
// 0041947d: PUSH EBX
// 0041947e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00419484: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00419485: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 0041948a: ADD ESP,0xc
// 0041948d: INC EBP
// 0041948e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00419492: ADD EDI,0x3c
// 00419495: ADD EAX,0x4
// 00419498: MOV EDX,dword ptr [ESI + 0x180]
// 0041949e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004194a2: CMP EBP,EDX
// 004194a4: JGE 0x00419405
//   XREF to: 00419405 (CONDITIONAL_JUMP)
// 004194aa: JMP 0x00419442
//   XREF to: 00419442 (UNCONDITIONAL_JUMP)
