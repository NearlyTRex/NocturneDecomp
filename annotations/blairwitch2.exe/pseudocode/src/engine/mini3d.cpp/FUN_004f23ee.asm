; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_004f23ee(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004f23ee
        ;   Label: engine_mini3d.cpp_FUN_004f23ee
    CMP dword ptr [0x01c37788],0x0      ; 004f23f0 | DAT_01c37788
    JNZ 0x0055fd40                      ; 004f23f7
        ;   XREF to: 0055fd40 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004f23fd
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004f23fe
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    POP EBX                             ; 004f2403
    RET                                 ; 004f2404

