; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b17a0(int param_1)
;
;
; Called Functions:
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b17a0
        ;   Label: FUN_005b17a0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005b17a4
    CMP EDX,0x2                         ; 005b17a7
    JNZ 0x005b17bb                      ; 005b17aa
        ;   XREF to: 005b17bb (CONDITIONAL_JUMP)  ; LAB_005b17bb
    MOV EAX,EDX                         ; 005b17ac
    RET                                 ; 005b17ae
    MOV EAX,0x1                         ; 005b17af
        ;   Label: LAB_005b17af
    RET                                 ; 005b17b4
    MOV EAX,0x2                         ; 005b17b5
        ;   Label: LAB_005b17b5
    RET                                 ; 005b17ba
    ADD EAX,0x158                       ; 005b17bb
        ;   Label: LAB_005b17bb
    PUSH EAX                            ; 005b17c0
    CALL FUN_00524770                   ; 005b17c1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b17c6
    ADD ESP,0x4                         ; 005b17c9
    CMP EAX,0xc                         ; 005b17cc
    JC 0x005b17d8                       ; 005b17cf
        ;   XREF to: 005b17d8 (CONDITIONAL_JUMP)  ; LAB_005b17d8
    JBE 0x005b17af                      ; 005b17d1
        ;   XREF to: 005b17af (CONDITIONAL_JUMP)  ; LAB_005b17af
    CMP EAX,0xd                         ; 005b17d3
    JZ 0x005b17b5                       ; 005b17d6
        ;   XREF to: 005b17b5 (CONDITIONAL_JUMP)  ; LAB_005b17b5
    XOR EAX,EAX                         ; 005b17d8
        ;   Label: LAB_005b17d8
    RET                                 ; 005b17da

