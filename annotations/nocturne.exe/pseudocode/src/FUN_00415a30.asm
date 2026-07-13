; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415a30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059a700
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_004e0070
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415a30
        ;   Label: FUN_00415a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415a31
    TEST byte ptr [ESP + 0xc],0x4       ; 00415a35
    JNZ 0x00415ad1                      ; 00415a3a
        ;   XREF to: 00415ad1 (CONDITIONAL_JUMP)  ; LAB_00415ad1
    PUSH 0x0                            ; 00415a40
    ADD EBX,0xbea8                      ; 00415a42
    PUSH EBX                            ; 00415a48
    CALL FUN_004e0070                   ; 00415a49
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0070()
    ADD ESP,0x8                         ; 00415a4e
    PUSH 0x0                            ; 00415a51
    SUB EAX,0x8ae4                      ; 00415a53
    PUSH EAX                            ; 00415a58
    CALL FUN_0040fe50                   ; 00415a59
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00415a5e
    PUSH 0x0                            ; 00415a61
    SUB EAX,0x4b0                       ; 00415a63
    PUSH EAX                            ; 00415a68
    CALL FUN_0040fe30                   ; 00415a69
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00415a6e
    PUSH 0x0                            ; 00415a71
    SUB EAX,0x20c                       ; 00415a73
    PUSH EAX                            ; 00415a78
    CALL FUN_0040fe10                   ; 00415a79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00415a7e
    PUSH 0x0                            ; 00415a81
    SUB EAX,0xb4                        ; 00415a83
    PUSH EAX                            ; 00415a88
    CALL FUN_0040fe10                   ; 00415a89
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00415a8e
    PUSH 0x0                            ; 00415a91
    SUB EAX,0x1c8                       ; 00415a93
    PUSH EAX                            ; 00415a98
    CALL FUN_00438250                   ; 00415a99
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00415a9e
    PUSH 0x0                            ; 00415aa1
    SUB EAX,0x293c                      ; 00415aa3
    PUSH EAX                            ; 00415aa8
    CALL FUN_0051b6e0                   ; 00415aa9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00415aae
    PUSH 0x1                            ; 00415ab1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00415ab3
    PUSH EBX                            ; 00415ab9
    CALL FUN_00409ea0                   ; 00415aba
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00415abf
    MOV DL,byte ptr [ESP + 0xc]         ; 00415ac2
    MOV EBX,EAX                         ; 00415ac6
    TEST DL,0x2                         ; 00415ac8
    JNZ 0x00415aec                      ; 00415acb
        ;   XREF to: 00415aec (CONDITIONAL_JUMP)  ; LAB_00415aec
    MOV EAX,EBX                         ; 00415acd
    POP EBX                             ; 00415acf
    RET                                 ; 00415ad0
    PUSH 0x59a700                       ; 00415ad1 | DAT_0059a700
        ;   Label: LAB_00415ad1
    PUSH EBX                            ; 00415ad6
    CALL FUN_0056445f                   ; 00415ad7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00415adc
    PUSH EAX                            ; 00415adf
    CALL FUN_00564486                   ; 00415ae0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00415ae5
    MOV EAX,EBX                         ; 00415ae8
    POP EBX                             ; 00415aea
    RET                                 ; 00415aeb
    PUSH EAX                            ; 00415aec
        ;   Label: LAB_00415aec
    CALL FUN_00564494                   ; 00415aed
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00415af2
    MOV EAX,EBX                         ; 00415af5
    POP EBX                             ; 00415af7
    RET                                 ; 00415af8

