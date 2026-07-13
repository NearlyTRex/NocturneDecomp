; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055d5e0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0055b6c0
;   FUN_0055cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d5e0
        ;   Label: FUN_0055d5e0
    SUB ESP,0x30                        ; 0055d5e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0055d5e4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055d5e8
    PUSH EDX                            ; 0055d5ec
    LEA EAX,[ESP + 0x4]                 ; 0055d5ed
    PUSH EAX                            ; 0055d5f1
    CALL FUN_0055cd70                   ; 0055d5f2
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cd70()
    ADD ESP,0x8                         ; 0055d5f7
    PUSH EBX                            ; 0055d5fa
    LEA EAX,[ESP + 0x4]                 ; 0055d5fb
    PUSH EAX                            ; 0055d5ff
    CALL FUN_0055b6c0                   ; 0055d600
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b6c0()
    ADD ESP,0x8                         ; 0055d605
    MOV EAX,EBX                         ; 0055d608
    ADD ESP,0x30                        ; 0055d60a
    POP EBX                             ; 0055d60d
    RET                                 ; 0055d60e

