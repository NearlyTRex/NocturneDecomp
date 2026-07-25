; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004afd80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004adf90 at 004adf95
;
; Called Functions:
;   core_gore.cpp_CGore_reset_FUN_004afdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afd80
        ;   Label: FUN_004afd80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004afd81
    PUSH EBX                            ; 004afd85
    CALL core_gore.cpp_CGore_reset_FUN_004afdb0 ; 004afd86
        ;   XREF to: 004afdb0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_reset_FUN_004afdb0()
    ADD ESP,0x4                         ; 004afd8b
    MOV EAX,EBX                         ; 004afd8e
    POP EBX                             ; 004afd90
    RET                                 ; 004afd91

