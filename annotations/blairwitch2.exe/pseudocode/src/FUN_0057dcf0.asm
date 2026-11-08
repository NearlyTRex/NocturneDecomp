; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0057dcf0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_005b929c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057dcf0
        ;   Label: FUN_0057dcf0
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dcf4
    TEST EDX,EDX                        ; 0057dcf7
    JNZ 0x0057dcfe                      ; 0057dcf9
        ;   XREF to: 0057dcfe (CONDITIONAL_JUMP)  ; LAB_0057dcfe
    XOR EAX,EAX                         ; 0057dcfb
    RET                                 ; 0057dcfd
    PUSH EBX                            ; 0057dcfe
        ;   Label: LAB_0057dcfe
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057dcff
    PUSH ECX                            ; 0057dd03
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057dd04
    PUSH EBX                            ; 0057dd08
    PUSH EDX                            ; 0057dd09
    CALL FUN_005b929c                   ; 0057dd0a
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined FUN_005b929c()
    ADD ESP,0xc                         ; 0057dd0f
    TEST EAX,EAX                        ; 0057dd12
    SETZ AL                             ; 0057dd14
    AND EAX,0xff                        ; 0057dd17
    POP EBX                             ; 0057dd1c
    RET                                 ; 0057dd1d

