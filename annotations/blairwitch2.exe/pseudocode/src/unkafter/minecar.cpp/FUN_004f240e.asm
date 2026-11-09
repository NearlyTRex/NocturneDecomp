; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_minecar_cpp_FUN_004f240e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_special.cpp_clearZBufferNative_FUN_0055b254
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f240e
        ;   Label: unkafter_minecar.cpp_FUN_004f240e
    CMP dword ptr [0x01c37788],0x0      ; 004f2410 | DAT_01c37788
    JNZ 0x0055fef0                      ; 004f2417
        ;   XREF to: 0055fef0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004f241d
    CALL engine_special.cpp_clearZBufferNative_FUN_0055b254 ; 004f241e
        ;   XREF to: 0055b254 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0055b254()
    POP EBX                             ; 004f2423
    RET                                 ; 004f2424

