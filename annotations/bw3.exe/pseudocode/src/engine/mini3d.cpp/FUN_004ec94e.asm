; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_004ec94e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   engine_special.cpp_clearScreen_FUN_00560d70
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004ec94e
        ;   Label: engine_mini3d.cpp_FUN_004ec94e
    CMP dword ptr [0x01c6cee8],0x0      ; 004ec950 | DAT_01c6cee8
    JNZ 0x00566060                      ; 004ec957
        ;   XREF to: 00566060 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004ec95d
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004ec95e
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    POP EBX                             ; 004ec963
    RET                                 ; 004ec964

