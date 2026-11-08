; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bdec0(int param_1,uint param_2)
;
;
; XREF[3]:
;   FUN_005bafb0 at 005bb4d1
;   FUN_005bd560 at 005bd741
;   FUN_005bdf60 at 005bdf6b
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005fa890
;   undefined4 DAT_005fa899
;
; Called Functions:
;   FUN_005c04e0
;   FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bdec0
        ;   Label: FUN_005bdec0
    PUSH EBP                            ; 005bdec1
    MOV EBP,ESP                         ; 005bdec2
    MOV EBX,dword ptr [EBP + 0x10]      ; 005bdec4
    CMP EBX,0x2                         ; 005bdec7
    JZ 0x005bdee6                       ; 005bdeca
        ;   XREF to: 005bdee6 (CONDITIONAL_JUMP)  ; LAB_005bdee6
    MOV EAX,dword ptr [EBP + 0xc]       ; 005bdecc
    PUSH 0x5fa890                       ; 005bdecf | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 005bded4
    PUSH EAX                            ; 005bded9
    CALL FUN_005c04e0                   ; 005bdeda
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005bdedf
    TEST EAX,EAX                        ; 005bdee2
    JZ 0x005bdf16                       ; 005bdee4
        ;   XREF to: 005bdf16 (CONDITIONAL_JUMP)  ; LAB_005bdf16
    PUSH 0x3                            ; 005bdee6
        ;   Label: LAB_005bdee6
    MOV EAX,dword ptr [EBP + 0xc]       ; 005bdee8
    PUSH 0x5fa899                       ; 005bdeeb | DAT_005fa899
    ADD EAX,0x24a8                      ; 005bdef0
    PUSH EAX                            ; 005bdef5
    CALL FUN_005c1210                   ; 005bdef6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 005bdefb
    TEST EAX,EAX                        ; 005bdefe
    JNZ 0x005bdf38                      ; 005bdf00
        ;   XREF to: 005bdf38 (CONDITIONAL_JUMP)  ; LAB_005bdf38
    CMP EBX,0x2                         ; 005bdf02
    JNC 0x005bdf20                      ; 005bdf05
        ;   XREF to: 005bdf20 (CONDITIONAL_JUMP)  ; LAB_005bdf20
    CMP EBX,0x1                         ; 005bdf07
    JNZ 0x005bdf27                      ; 005bdf0a
        ;   XREF to: 005bdf27 (CONDITIONAL_JUMP)  ; LAB_005bdf27
    MOV EBX,0x1                         ; 005bdf0c
        ;   Label: LAB_005bdf0c
    MOV EAX,EBX                         ; 005bdf11
    POP EBP                             ; 005bdf13
    POP EBX                             ; 005bdf14
    RET                                 ; 005bdf15
    MOV EBX,0xffffffff                  ; 005bdf16
        ;   Label: LAB_005bdf16
    MOV EAX,EBX                         ; 005bdf1b
    POP EBP                             ; 005bdf1d
    POP EBX                             ; 005bdf1e
    RET                                 ; 005bdf1f
    JBE 0x005bdf0c                      ; 005bdf20
        ;   XREF to: 005bdf0c (CONDITIONAL_JUMP)  ; LAB_005bdf0c
        ;   Label: LAB_005bdf20
    CMP EBX,0x3                         ; 005bdf22
    JZ 0x005bdf0c                       ; 005bdf25
        ;   XREF to: 005bdf0c (CONDITIONAL_JUMP)  ; LAB_005bdf0c
    MOV EBX,0xffffffff                  ; 005bdf27
        ;   Label: LAB_005bdf27
    MOV EAX,EBX                         ; 005bdf2c
    POP EBP                             ; 005bdf2e
    POP EBX                             ; 005bdf2f
    RET                                 ; 005bdf30
    XOR EBX,EBX                         ; 005bdf31
        ;   Label: LAB_005bdf31
    MOV EAX,EBX                         ; 005bdf33
    POP EBP                             ; 005bdf35
    POP EBX                             ; 005bdf36
    RET                                 ; 005bdf37
    CMP EBX,0x2                         ; 005bdf38
        ;   Label: LAB_005bdf38
    JNC 0x005bdf4c                      ; 005bdf3b
        ;   XREF to: 005bdf4c (CONDITIONAL_JUMP)  ; LAB_005bdf4c
    CMP EBX,0x1                         ; 005bdf3d
    JZ 0x005bdf0c                       ; 005bdf40
        ;   XREF to: 005bdf0c (CONDITIONAL_JUMP)  ; LAB_005bdf0c
    MOV EBX,0xffffffff                  ; 005bdf42
    MOV EAX,EBX                         ; 005bdf47
    POP EBP                             ; 005bdf49
    POP EBX                             ; 005bdf4a
    RET                                 ; 005bdf4b
    JBE 0x005bdf31                      ; 005bdf4c
        ;   XREF to: 005bdf31 (CONDITIONAL_JUMP)  ; LAB_005bdf31
        ;   Label: LAB_005bdf4c
    CMP EBX,0x3                         ; 005bdf4e
    JZ 0x005bdf0c                       ; 005bdf51
        ;   XREF to: 005bdf0c (CONDITIONAL_JUMP)  ; LAB_005bdf0c
    MOV EBX,0xffffffff                  ; 005bdf53
    MOV EAX,EBX                         ; 005bdf58
    POP EBP                             ; 005bdf5a
    POP EBX                             ; 005bdf5b
    RET                                 ; 005bdf5c

