; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0f3
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 00462981
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044d9f0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dc90
        ;   Label: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
    PUSH ESI                            ; 0044dc91
    PUSH EDI                            ; 0044dc92
    SUB ESP,0xc                         ; 0044dc93
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044dc96
    MOV ESI,dword ptr [0x01c51d5c]      ; 0044dc9a | DAT_01c51d5c
    MOV dword ptr [EBX + 0x178],ESI     ; 0044dca0
    MOV ESI,dword ptr [0x01c51d60]      ; 0044dca6 | DAT_01c51d60
    MOV dword ptr [EBX + 0x17c],ESI     ; 0044dcac
    MOV ESI,dword ptr [0x01c51d64]      ; 0044dcb2 | DAT_01c51d64
    MOV dword ptr [EBX + 0x180],ESI     ; 0044dcb8
    MOV ESI,dword ptr [0x01c51d68]      ; 0044dcbe | DAT_01c51d68
    MOV dword ptr [EBX + 0x184],ESI     ; 0044dcc4
    MOV ESI,dword ptr [0x01c51d6c]      ; 0044dcca | DAT_01c51d6c
    MOV dword ptr [EBX + 0x188],ESI     ; 0044dcd0
    MOV ESI,dword ptr [0x01c51d70]      ; 0044dcd6 | DAT_01c51d70
    MOV dword ptr [EBX + 0x18c],ESI     ; 0044dcdc
    MOV ESI,dword ptr [0x01c51d74]      ; 0044dce2 | DAT_01c51d74
    MOV dword ptr [EBX + 0x190],ESI     ; 0044dce8
    MOV ESI,dword ptr [0x01c51d78]      ; 0044dcee | DAT_01c51d78
    MOV EDX,dword ptr [0x00612560]      ; 0044dcf4 | DAT_00612560
    MOV dword ptr [EBX + 0x194],ESI     ; 0044dcfa
    MOV ESI,dword ptr [0x01c51d7c]      ; 0044dd00 | DAT_01c51d7c
    PUSH EDX                            ; 0044dd06 | DAT_01bc120c
    MOV dword ptr [EBX + 0x198],ESI     ; 0044dd07
    LEA ESI,[ESP + 0x4]                 ; 0044dd0d
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0 ; 0044dd11
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x4]                 ; 0044dd16
    LEA EDI,[EBX + 0x16c]               ; 0044dd1a
    ADD ESP,0x4                         ; 0044dd20
    MOVSD ES:EDI,ESI                    ; 0044dd23
    MOVSD ES:EDI,ESI                    ; 0044dd24
    MOVSD ES:EDI,ESI                    ; 0044dd25
    MOV ESI,dword ptr [0x01c4eff8]      ; 0044dd26 | DAT_01c4eff8
    MOV dword ptr [EBX + 0x1c0],ESI     ; 0044dd2c
    MOV ESI,dword ptr [0x01c4effc]      ; 0044dd32 | DAT_01c4effc
    MOV dword ptr [EBX + 0x1c4],ESI     ; 0044dd38
    MOV ESI,dword ptr [0x01c4f000]      ; 0044dd3e | DAT_01c4f000
    MOV dword ptr [EBX + 0x1c8],ESI     ; 0044dd44
    MOV ESI,dword ptr [0x01c4f004]      ; 0044dd4a | DAT_01c4f004
    PUSH EBX                            ; 0044dd50
    MOV dword ptr [EBX + 0x1cc],ESI     ; 0044dd51
    CALL core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044d9f0 ; 0044dd57
        ;   XREF to: 0044d9f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044d9f0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044dd5c
    ADD ESP,0xc                         ; 0044dd5f
    POP EDI                             ; 0044dd62
    POP ESI                             ; 0044dd63
    POP EBX                             ; 0044dd64
    RET                                 ; 0044dd65

