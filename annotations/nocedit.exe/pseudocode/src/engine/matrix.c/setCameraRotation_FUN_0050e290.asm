; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_setCameraRotation_FUN_0050e290(ushort pitch, ushort yaw, ushort roll)
;
; Parameters:
; ushort           Stack[0x4]:2   pitch
; ushort           Stack[0x8]:2   yaw
; ushort           Stack[0xc]:2   roll
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0 at 0048c1c0
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f439
;
; Referenced Globals:
;   int g_CameraRotationPitch
;   int g_CameraRotationYaw
;   int g_CameraRotationRoll
;
; Called Functions:
;   engine_matrix.c_buildRotationMatrix_FUN_0050c920
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e290
        ;   Label: engine_matrix.c_setCameraRotation_FUN_0050e290
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050e294
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e298
    PUSH EDX                            ; 0050e29c
    PUSH ECX                            ; 0050e29d
    MOV [0x02d052d0],EAX                ; 0050e29e | int g_CameraRotationPitch
    PUSH EAX                            ; 0050e2a3
    MOV dword ptr [0x02d052d4],ECX      ; 0050e2a4 | int g_CameraRotationYaw
    MOV dword ptr [0x02d052d8],EDX      ; 0050e2aa | int g_CameraRotationRoll
    CALL engine_matrix.c_buildRotationMatrix_FUN_0050c920 ; 0050e2b0 | void engine_matrix.c_buildRotationMatrix_FUN_0050c920(ushort pitch, ushort yaw, ushort roll)
        ;   XREF to: 0050c920 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050e2b5
    RET                                 ; 0050e2b8

