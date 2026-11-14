; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_clear_FUN_00511180(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;
; Called Functions:
;   engine_special.cpp_clearScreen_FUN_0057dc40
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00511180 | DAT_01c50948
        ;   Label: engine_mini3d.cpp_clear_FUN_00511180
    JNZ 0x00582790                      ; 00511187
        ;   XREF to: 00582790 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051118d
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0051118e
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    POP EBX                             ; 00511193
    RET                                 ; 00511194

