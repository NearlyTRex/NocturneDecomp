; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ac8f0(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_005a50e0 at 005a50fe
;
; Called Functions:
;   FUN_005aca50
;   FUN_005af2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac8f0
        ;   Label: FUN_005ac8f0
    PUSH ESI                            ; 005ac8f1
    PUSH EDI                            ; 005ac8f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ac8f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005ac8f7
    XOR EDI,EDI                         ; 005ac8fb
    PUSH EBX                            ; 005ac8fd
        ;   Label: LAB_005ac8fd
    CALL FUN_005af2a0                   ; 005ac8fe
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005af2a0()
    ADD ESP,0x4                         ; 005ac903
    TEST EAX,EAX                        ; 005ac906
    JNZ 0x005ac922                      ; 005ac908
        ;   XREF to: 005ac922 (CONDITIONAL_JUMP)  ; LAB_005ac922
    TEST ESI,ESI                        ; 005ac90a
    JBE 0x005ac922                      ; 005ac90c
        ;   XREF to: 005ac922 (CONDITIONAL_JUMP)  ; LAB_005ac922
    PUSH EBX                            ; 005ac90e
    CALL FUN_005aca50                   ; 005ac90f
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca50()
    ADD ESP,0x4                         ; 005ac914
    CMP ESI,EAX                         ; 005ac917
    JC 0x005ac922                       ; 005ac919
        ;   XREF to: 005ac922 (CONDITIONAL_JUMP)  ; LAB_005ac922
    INC EDI                             ; 005ac91b
    SUB ESI,EAX                         ; 005ac91c
    ADD EBX,EAX                         ; 005ac91e
    JMP 0x005ac8fd                      ; 005ac920
        ;   XREF to: 005ac8fd (UNCONDITIONAL_JUMP)  ; LAB_005ac8fd
    MOV EAX,EDI                         ; 005ac922
        ;   Label: LAB_005ac922
    POP EDI                             ; 005ac924
    POP ESI                             ; 005ac925
    POP EBX                             ; 005ac926
    RET                                 ; 005ac927

