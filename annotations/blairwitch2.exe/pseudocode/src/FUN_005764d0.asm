; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005764d0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005764d0
        ;   Label: FUN_005764d0
    CMP dword ptr [EAX + 0x434],0x0     ; 005764d4
    JZ 0x005764e3                       ; 005764db
        ;   XREF to: 005764e3 (CONDITIONAL_JUMP)  ; LAB_005764e3
    LEA EAX,[EAX]                       ; 005764dd
    XOR EAX,EAX                         ; 005764e0
        ;   Label: LAB_005764e0
    RET                                 ; 005764e2
        ;   Label: LAB_005764e2
    PUSH 0x5ecceb                       ; 005764e3
        ;   Label: LAB_005764e3
    MOV ECX,dword ptr [ESP + 0xc]       ; 005764e8
    PUSH ECX                            ; 005764ec
    CALL FUN_0040c840                   ; 005764ed
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 005764f2
    TEST EAX,EAX                        ; 005764f5
    JZ 0x005764e2                       ; 005764f7
        ;   XREF to: 005764e2 (CONDITIONAL_JUMP)  ; LAB_005764e2
    MOV EAX,0x2                         ; 005764f9
    RET                                 ; 005764fe

