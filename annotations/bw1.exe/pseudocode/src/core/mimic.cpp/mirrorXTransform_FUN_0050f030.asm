; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_mirrorXTransform_FUN_0050f030(void)
;
;
; Referenced Globals:
;   int g_RelativeX
;   int g_LightDirectionX
;   int g_INT_01c51d5c
;   int g_INT_01c51d60
;   int g_INT_01c51d64
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_005083b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f030
        ;   Label: core_mimic.cpp_mirrorXTransform_FUN_0050f030
    PUSH ESI                            ; 0050f031
    PUSH EDI                            ; 0050f032
    CALL engine_matrix.c_matrixPush_FUN_005083b0 ; 0050f033
        ;   XREF to: 005083b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_005083b0()
    MOV EDX,dword ptr [0x01c51d2c]      ; 0050f038 | g_RelativeX
    MOV ECX,dword ptr [0x01c51d50]      ; 0050f03e | g_LightDirectionX
    MOV EBX,dword ptr [0x01c51d5c]      ; 0050f044 | g_INT_01c51d5c
    MOV ESI,dword ptr [0x01c51d60]      ; 0050f04a | g_INT_01c51d60
    MOV EDI,dword ptr [0x01c51d64]      ; 0050f050 | g_INT_01c51d64
    NEG EDX                             ; 0050f056
    NEG ECX                             ; 0050f058
    NEG EBX                             ; 0050f05a
    NEG ESI                             ; 0050f05c
    NEG EDI                             ; 0050f05e
    MOV dword ptr [0x01c51d2c],EDX      ; 0050f060 | g_RelativeX
    MOV dword ptr [0x01c51d50],ECX      ; 0050f066 | g_LightDirectionX
    MOV dword ptr [0x01c51d5c],EBX      ; 0050f06c | g_INT_01c51d5c
    MOV dword ptr [0x01c51d60],ESI      ; 0050f072 | g_INT_01c51d60
    MOV dword ptr [0x01c51d64],EDI      ; 0050f078 | g_INT_01c51d64
    POP EDI                             ; 0050f07e
    POP ESI                             ; 0050f07f
    POP EBX                             ; 0050f080
    RET                                 ; 0050f081

