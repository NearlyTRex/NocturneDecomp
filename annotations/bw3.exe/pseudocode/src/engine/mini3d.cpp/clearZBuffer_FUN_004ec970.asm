; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_004ec970(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   engine_special.cpp_clearZBufferNative_FUN_00560dd4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 004ec970 | DAT_01c6cee8
        ;   Label: engine_mini3d.cpp_clearZBuffer_FUN_004ec970
    JNZ 0x00566210                      ; 004ec977
        ;   XREF to: 00566210 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004ec97d
    CALL engine_special.cpp_clearZBufferNative_FUN_00560dd4 ; 004ec97e
        ;   XREF to: 00560dd4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_00560dd4()
    POP EBX                             ; 004ec983
    RET                                 ; 004ec984

