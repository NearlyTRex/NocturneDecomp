// Name: shape_design.c_setupViewMatrix_FUN_0045ba60
// Address: 0045ba60
// Address Range: [[0045ba60, 0045bbb3]]
// Convention: __cdecl
// Signature: void shape_design.c_setupViewMatrix_FUN_0045ba60(void)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c6f4 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_PolygonScreenCache[19999].view_mode
//   int g_ZoomLevel
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   engine_matrix.c_buildRotationMatrix_FUN_0050c920

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045bb46) */

void __cdecl shape_design_c_setupViewMatrix_FUN_0045ba60(void)

{
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_18;
  
  if (g_PolygonScreenCache[19999].view_mode == 0) {
    local_20 = 0x4000;
    local_1c = 0;
    local_18 = 0;
    g_RelativeX = 0;
    g_RelativeY = g_ZoomLevel << 4;
    g_RelativeZ = 0;
  }
  else if ((uint)g_PolygonScreenCache[19999].view_mode < 2) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc000;
    g_RelativeX = g_ZoomLevel << 4;
    g_RelativeY = 0;
    g_RelativeZ = 0;
  }
  else if (g_PolygonScreenCache[19999].view_mode == 2) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    g_RelativeX = 0;
    g_RelativeY = 0;
    g_RelativeZ = g_ZoomLevel * -0x10;
  }
  engine_matrix_c_buildRotationMatrix_FUN_0050c920(local_20,local_1c,local_18);
  g_TransformMatrix.m[0][2] =
       (int)((g_TransformMatrix.m[0][2] + (g_TransformMatrix.m[0][2] >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[0][2] >> 0x1f) << 3 < 0)) >> 4;
  g_TransformMatrix.m[1][2] =
       (int)((g_TransformMatrix.m[1][2] + (g_TransformMatrix.m[1][2] >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[1][2] >> 0x1f) << 3 < 0)) >> 4;
  g_TransformMatrix.m[2][2] =
       (int)((g_TransformMatrix.m[2][2] + (g_TransformMatrix.m[2][2] >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[2][2] >> 0x1f) << 3 < 0)) >> 4;
  return;
}


// Assembly code:
// 0045ba60: PUSH EBX
//   Label: shape_design.c_setupViewMatrix_FUN_0045ba60
// 0045ba61: PUSH ESI
// 0045ba62: PUSH EDI
// 0045ba63: PUSH EBP
// 0045ba64: MOV EBP,ESP
// 0045ba66: SUB ESP,0x10
// 0045ba6c: MOV EAX,[0x01626340]
//   XREF to: 01626340 (READ)
// 0045ba71: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045ba74: JMP 0x0045bb28
//   XREF to: 0045bb28 (UNCONDITIONAL_JUMP)
// 0045ba79: MOV dword ptr [EBP + -0x10],0x4000
//   Label: LAB_0045ba79
//   XREF to: Stack[-0x20] (WRITE)
// 0045ba80: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045ba87: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045ba8e: MOV dword ptr [0x02d052b8],0x0
//   XREF to: 02d052b8 (WRITE)
// 0045ba98: MOV EAX,[0x01626344]
//   XREF to: 01626344 (READ)
// 0045ba9d: SHL EAX,0x4
// 0045baa0: MOV [0x02d052bc],EAX
//   XREF to: 02d052bc (WRITE)
// 0045baa5: MOV dword ptr [0x02d052c0],0x0
//   XREF to: 02d052c0 (WRITE)
// 0045baaf: JMP 0x0045bb48
//   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)
// 0045bab4: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_0045bab4
//   XREF to: Stack[-0x20] (WRITE)
// 0045babb: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bac2: MOV dword ptr [EBP + -0x8],0xc000
//   XREF to: Stack[-0x18] (WRITE)
// 0045bac9: MOV EAX,[0x01626344]
//   XREF to: 01626344 (READ)
// 0045bace: SHL EAX,0x4
// 0045bad1: MOV [0x02d052b8],EAX
//   XREF to: 02d052b8 (WRITE)
// 0045bad6: MOV dword ptr [0x02d052bc],0x0
//   XREF to: 02d052bc (WRITE)
// 0045bae0: MOV dword ptr [0x02d052c0],0x0
//   XREF to: 02d052c0 (WRITE)
// 0045baea: JMP 0x0045bb48
//   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)
// 0045baec: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_0045baec
//   XREF to: Stack[-0x20] (WRITE)
// 0045baf3: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bafa: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045bb01: MOV dword ptr [0x02d052b8],0x0
//   XREF to: 02d052b8 (WRITE)
// 0045bb0b: MOV dword ptr [0x02d052bc],0x0
//   XREF to: 02d052bc (WRITE)
// 0045bb15: MOV EAX,[0x01626344]
//   XREF to: 01626344 (READ)
// 0045bb1a: NEG EAX
// 0045bb1c: SHL EAX,0x4
// 0045bb1f: MOV [0x02d052c0],EAX
//   XREF to: 02d052c0 (WRITE)
// 0045bb24: JMP 0x0045bb48
//   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)
// 0045bb26: JMP 0x0045bb48
//   Label: LAB_0045bb26
//   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)
// 0045bb28: CMP dword ptr [EBP + -0x4],0x1
//   Label: LAB_0045bb28
//   XREF to: Stack[-0x14] (READ)
// 0045bb2c: JC 0x0045bb3c
//   XREF to: 0045bb3c (CONDITIONAL_JUMP)
// 0045bb2e: CMP dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (READ)
// 0045bb32: JBE 0x0045bab4
//   XREF to: 0045bab4 (CONDITIONAL_JUMP)
// 0045bb34: CMP dword ptr [EBP + -0x4],0x2
//   XREF to: Stack[-0x14] (READ)
// 0045bb38: JZ 0x0045baec
//   XREF to: 0045baec (CONDITIONAL_JUMP)
// 0045bb3a: JMP 0x0045bb26
//   XREF to: 0045bb26 (UNCONDITIONAL_JUMP)
// 0045bb3c: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045bb3c
//   XREF to: Stack[-0x14] (READ)
// 0045bb40: JZ 0x0045ba79
//   XREF to: 0045ba79 (CONDITIONAL_JUMP)
// 0045bb46: JMP 0x0045bb26
//   XREF to: 0045bb26 (UNCONDITIONAL_JUMP)
// 0045bb48: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045bb48
//   XREF to: Stack[-0x18] (READ)
// 0045bb4b: PUSH EAX
// 0045bb4c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bb4f: PUSH EAX
// 0045bb50: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bb53: PUSH EAX
// 0045bb54: CALL engine_matrix.c_buildRotationMatrix_FUN_0050c920
//   XREF to: 0050c920 (UNCONDITIONAL_CALL)
// 0045bb59: ADD ESP,0xc
// 0045bb5c: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0045bb61: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0045bb67: SAR EDX,0x1f
// 0045bb6a: SHL EDX,0x4
// 0045bb6d: SBB EAX,EDX
// 0045bb6f: SAR EAX,0x4
// 0045bb72: MOV [0x02d052f0],EAX
//   XREF to: 02d052f0 (WRITE)
// 0045bb77: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0045bb7c: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0045bb82: SAR EDX,0x1f
// 0045bb85: SHL EDX,0x4
// 0045bb88: SBB EAX,EDX
// 0045bb8a: SAR EAX,0x4
// 0045bb8d: MOV [0x02d052fc],EAX
//   XREF to: 02d052fc (WRITE)
// 0045bb92: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0045bb97: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0045bb9d: SAR EDX,0x1f
// 0045bba0: SHL EDX,0x4
// 0045bba3: SBB EAX,EDX
// 0045bba5: SAR EAX,0x4
// 0045bba8: MOV [0x02d05308],EAX
//   XREF to: 02d05308 (WRITE)
// 0045bbad: MOV ESP,EBP
// 0045bbaf: POP EBP
// 0045bbb0: POP EDI
// 0045bbb1: POP ESI
// 0045bbb2: POP EBX
// 0045bbb3: RET
