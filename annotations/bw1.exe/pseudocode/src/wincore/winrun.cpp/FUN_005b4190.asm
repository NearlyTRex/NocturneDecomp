; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b4190(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9ed7
;   undefined4 DAT_01c43530
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b3d70
;   wincore_winrun.cpp_FUN_005b4320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4190
        ;   Label: wincore_winrun.cpp_FUN_005b4190
    XOR EBX,EBX                         ; 005b4191
    PUSH EBX                            ; 005b4193
        ;   Label: LAB_005b4193
    CALL wincore_winrun.cpp_FUN_005b3d70 ; 005b4194
        ;   XREF to: 005b3d70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3d70()
    INC EBX                             ; 005b4199
    ADD ESP,0x4                         ; 005b419a
    CMP EBX,0x4                         ; 005b419d
    JL 0x005b4193                       ; 005b41a0
        ;   XREF to: 005b4193 (CONDITIONAL_JUMP)  ; LAB_005b4193
    FILD dword ptr [0x01c43530]         ; 005b41a2 | DAT_01c43530
    FMUL float ptr [0x005f9ed7]         ; 005b41a8 | DAT_005f9ed7
    SUB ESP,0x4                         ; 005b41ae
    FSTP float ptr [ESP]                ; 005b41b1
    CALL wincore_winrun.cpp_FUN_005b4320 ; 005b41b4
        ;   XREF to: 005b4320 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b4320()
    ADD ESP,0x4                         ; 005b41b9
    POP EBX                             ; 005b41bc
    RET                                 ; 005b41bd

