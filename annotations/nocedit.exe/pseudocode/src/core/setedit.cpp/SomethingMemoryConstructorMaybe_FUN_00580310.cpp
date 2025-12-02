// Name: core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
// Address: 00580310
// Address Range: [[00580310, 00580553]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310()
// Cross-references:
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057a99d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_005801b0 (005801b0) at 005801c0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fd0d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00648567
//   TerminatedCString s_core_setedit_cpp_0064857b
//   TerminatedCString s_Out_of_memory_0064858f
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03659384
//   CVector3f g_ZeroVector
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_SomethingMemoryConstructorMaybe(undefined4 param_1) */

void core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310(void)

{
  int iVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  int *in_stack_0000000c;
  CDemonSet *in_stack_00000020;
  int *in_stack_00000028;
  int *piVar4;
  CVector3i *point_ptr;
  int iVar5;
  
  if ((DAT_03659384 == (void *)0x0) && (0 < *in_stack_00000004)) {
    DAT_03659384 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (*in_stack_00000004 * 0x4b030,"..\\core\\setedit.cpp",0x1007);
    if (DAT_03659384 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x1008;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
    }
    iVar5 = 0;
    if (0 < *in_stack_0000000c) {
      piVar4 = in_stack_0000000c + 1;
      point_ptr = (CVector3i *)(in_stack_0000000c + 0x44);
      do {
        engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                  (g_CDemonRendererPtr,0,0,0x140,0xf0);
        engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                  (g_CDemonRendererPtr,point_ptr);
        engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                  (g_CDemonRendererPtr,(float)piVar4[iVar5 * 0x69 + 0x51]);
        piVar4 = (int *)0x580420;
        engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
        in_stack_00000004[3] = g_TransformMatrix.m[0].x;
        in_stack_00000004[4] = g_TransformMatrix.m[0].y;
        in_stack_00000004[5] = g_TransformMatrix.m[0].z;
        in_stack_00000004[6] = g_TransformMatrix.m[1].x;
        in_stack_00000004[7] = g_TransformMatrix.m[1].y;
        in_stack_00000004[8] = g_TransformMatrix.m[1].z;
        in_stack_00000004[9] = g_TransformMatrix.m[2].x;
        in_stack_00000004[10] = g_TransformMatrix.m[2].y;
        in_stack_00000004[0xb] = g_TransformMatrix.m[2].z;
        this_ptr = g_CDemonRendererPtr;
        *in_stack_00000004 = g_CameraOriginX;
        in_stack_00000004[1] = g_CameraOriginY;
        in_stack_00000004[2] = g_CameraOriginZ;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (this_ptr,&g_ZeroVector);
        point_ptr = (CVector3i *)0x461c3f9a;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000020,9999.9,0);
        iVar5 = 0;
        do {
          iVar3 = 0;
          iVar2 = (int)in_stack_0000000c + iVar5;
          do {
            iVar1 = *(int *)(iVar3 + *(int *)((int)g_ZBufferScanlineArray + iVar5));
            if (iVar1 < 1) {
              *(undefined4 *)(iVar2 + 0x30) = 0x7fffffff;
            }
            else {
              *(int *)(iVar2 + 0x30) = (int)(0x7fffffff / (longlong)iVar1);
            }
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 0x3c0;
          } while (iVar3 != 0x500);
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x3c0);
        iVar5 = 0x580502;
        engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
        in_stack_00000004 = in_stack_00000004 + 0x69;
        in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      } while ((int)in_stack_0000000c < *in_stack_00000028);
    }
  }
  return;
}


// Assembly code:
// 00580310: PUSH EBX
//   Label: core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
// 00580311: PUSH ESI
// 00580312: PUSH EDI
// 00580313: PUSH EBP
// 00580314: SUB ESP,0x18
// 00580317: CMP dword ptr [0x03659384],0x0
//   XREF to: 03659384 (READ)
// 0058031e: JNZ 0x0058032b
//   XREF to: 0058032b (CONDITIONAL_JUMP)
// 00580320: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00580324: MOV ECX,dword ptr [EAX]
// 00580326: CMP ECX,0x1
// 00580329: JGE 0x00580333
//   XREF to: 00580333 (CONDITIONAL_JUMP)
// 0058032b: ADD ESP,0x18
//   Label: LAB_0058032b
// 0058032e: POP EBP
// 0058032f: POP EDI
// 00580330: POP ESI
// 00580331: POP EBX
// 00580332: RET
// 00580333: IMUL EAX,ECX,0x4b030
//   Label: LAB_00580333
// 00580339: PUSH 0x1007
// 0058033e: PUSH 0x648567
//   XREF to: 00648567 (DATA)
// 00580343: PUSH EAX
// 00580344: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00580349: ADD ESP,0xc
// 0058034c: MOV [0x03659384],EAX
//   XREF to: 03659384 (WRITE)
// 00580351: TEST EAX,EAX
// 00580353: JNZ 0x00580378
//   XREF to: 00580378 (CONDITIONAL_JUMP)
// 00580355: MOV ESI,0x64857b
//   XREF to: 0064857b (DATA)
// 0058035a: MOV EDI,0x1008
// 0058035f: PUSH 0x64858f
//   XREF to: 0064858f (DATA)
// 00580364: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0058036a: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00580370: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00580375: ADD ESP,0x4
// 00580378: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00580378
//   XREF to: Stack[0x4] (READ)
// 0058037c: XOR EBP,EBP
// 0058037e: MOV EDX,dword ptr [EAX]
// 00580380: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00580384: TEST EDX,EDX
// 00580386: JLE 0x0058032b
//   XREF to: 0058032b (CONDITIONAL_JUMP)
// 00580388: ADD EAX,0x4
// 0058038b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0058038e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00580392: ADD EAX,0x110
// 00580397: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058039b: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0058039f: ADD EAX,0x104
// 005803a4: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 005803a8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005803ac: IMUL EBX,dword ptr [ESP + 0x10],0x1a4
//   Label: LAB_005803ac
//   XREF to: Stack[-0x18] (READ)
// 005803b4: PUSH 0xf0
// 005803b9: PUSH 0x140
// 005803be: PUSH 0x0
// 005803c0: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 005803c4: MOV EAX,[0x03659384]
//   XREF to: 03659384 (READ)
// 005803c9: PUSH 0x0
// 005803cb: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005803d1: ADD ECX,EAX
// 005803d3: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005803d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 005803d8: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005803dc: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 005803e1: ADD ESP,0x14
// 005803e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005803e8: PUSH EAX
// 005803e9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005803ef: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005803f0: ADD EBX,EDI
// 005803f2: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 005803f7: ADD ESP,0x8
// 005803fa: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00580400: PUSH dword ptr [EBX + 0x144]
// 00580406: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00580407: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 0058040c: ADD ESP,0x8
// 0058040f: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00580413: PUSH EBX
// 00580414: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0058041a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0058041b: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00580420: ADD ESP,0x8
// 00580423: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00580427: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0058042c: MOV dword ptr [ECX + 0xc],EAX
// 0058042f: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 00580434: MOV dword ptr [ECX + 0x10],EAX
// 00580437: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0058043c: MOV dword ptr [ECX + 0x14],EAX
// 0058043f: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 00580444: MOV dword ptr [ECX + 0x18],EAX
// 00580447: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0058044c: MOV dword ptr [ECX + 0x1c],EAX
// 0058044f: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 00580454: MOV dword ptr [ECX + 0x20],EAX
// 00580457: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0058045c: MOV dword ptr [ECX + 0x24],EAX
// 0058045f: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 00580464: MOV dword ptr [ECX + 0x28],EAX
// 00580467: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0058046c: MOV dword ptr [ECX + 0x2c],EAX
// 0058046f: MOV EAX,[0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 00580474: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0058047a: MOV dword ptr [ECX],EAX
// 0058047c: MOV EAX,[0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 00580481: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00580486: MOV dword ptr [ECX + 0x4],EAX
// 00580489: MOV EAX,[0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0058048e: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0058048f: MOV dword ptr [ECX + 0x8],EAX
// 00580492: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00580497: ADD ESP,0x8
// 0058049a: PUSH 0x0
// 0058049c: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005804a0: PUSH 0x461c3f9a
// 005804a5: PUSH EBP
// 005804a6: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 005804ab: ADD ESP,0xc
// 005804ae: XOR EBP,EBP
// 005804b0: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005804b0
//   XREF to: Stack[-0x14] (READ)
// 005804b4: MOV EDI,EBP
// 005804b6: XOR EBX,EBX
// 005804b8: ADD ECX,EBP
// 005804ba: MOV EAX,dword ptr [EDI + 0x2cf7d5c]
//   Label: LAB_005804ba
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 005804c0: MOV ESI,dword ptr [EBX + EAX*0x1]
// 005804c3: TEST ESI,ESI
// 005804c5: JLE 0x0058054b
//   XREF to: 0058054b (CONDITIONAL_JUMP)
// 005804cb: MOV EAX,0x7fffffff
// 005804d0: MOV EDX,EAX
// 005804d2: SAR EDX,0x1f
// 005804d5: IDIV ESI
// 005804d7: MOV dword ptr [ECX + 0x30],EAX
// 005804da: ADD EBX,0x4
//   Label: LAB_005804da
// 005804dd: ADD ECX,0x3c0
// 005804e3: CMP EBX,0x500
// 005804e9: JNZ 0x005804ba
//   XREF to: 005804ba (CONDITIONAL_JUMP)
// 005804eb: ADD EBP,0x4
// 005804ee: CMP EBP,0x3c0
// 005804f4: JNZ 0x005804b0
//   XREF to: 005804b0 (CONDITIONAL_JUMP)
// 005804f6: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005804fc: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005804fd: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 00580502: ADD ESP,0x4
// 00580505: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00580509: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0058050d: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00580511: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00580515: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00580519: ADD EBX,0x1a4
// 0058051f: ADD ESI,0x1a4
// 00580525: ADD EDI,0x4b030
// 0058052b: INC EBP
// 0058052c: MOV EDX,dword ptr [ECX]
// 0058052e: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00580532: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00580536: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0058053a: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0058053e: CMP EBP,EDX
// 00580540: JGE 0x0058032b
//   XREF to: 0058032b (CONDITIONAL_JUMP)
// 00580546: JMP 0x005803ac
//   XREF to: 005803ac (UNCONDITIONAL_JUMP)
// 0058054b: MOV dword ptr [ECX + 0x30],0x7fffffff
//   Label: LAB_0058054b
// 00580552: JMP 0x005804da
//   XREF to: 005804da (UNCONDITIONAL_JUMP)
