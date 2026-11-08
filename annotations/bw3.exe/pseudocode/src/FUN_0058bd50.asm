; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058bd50(int param_1,uint param_2)
;
;
; XREF[3]:
;   FUN_00588ee0 at 00589c7f
;   FUN_0058b3f0 at 0058b5d1
;   FUN_0058bdf0 at 0058bdfb
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005d883b
;   undefined4 DAT_005d8844
;
; Called Functions:
;   FUN_005a3260
;   FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058bd50
        ;   Label: FUN_0058bd50
    PUSH EBP                            ; 0058bd51
    MOV EBP,ESP                         ; 0058bd52
    MOV EBX,dword ptr [EBP + 0x10]      ; 0058bd54
    CMP EBX,0x2                         ; 0058bd57
    JZ 0x0058bd76                       ; 0058bd5a
        ;   XREF to: 0058bd76 (CONDITIONAL_JUMP)  ; LAB_0058bd76
    MOV EAX,dword ptr [EBP + 0xc]       ; 0058bd5c
    PUSH 0x5d883b                       ; 0058bd5f | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 0058bd64
    PUSH EAX                            ; 0058bd69
    CALL FUN_005a3260                   ; 0058bd6a
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0058bd6f
    TEST EAX,EAX                        ; 0058bd72
    JZ 0x0058bda6                       ; 0058bd74
        ;   XREF to: 0058bda6 (CONDITIONAL_JUMP)  ; LAB_0058bda6
    PUSH 0x3                            ; 0058bd76
        ;   Label: LAB_0058bd76
    MOV EAX,dword ptr [EBP + 0xc]       ; 0058bd78
    PUSH 0x5d8844                       ; 0058bd7b | DAT_005d8844
    ADD EAX,0x24a8                      ; 0058bd80
    PUSH EAX                            ; 0058bd85
    CALL FUN_005a3f90                   ; 0058bd86
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 0058bd8b
    TEST EAX,EAX                        ; 0058bd8e
    JNZ 0x0058bdc8                      ; 0058bd90
        ;   XREF to: 0058bdc8 (CONDITIONAL_JUMP)  ; LAB_0058bdc8
    CMP EBX,0x2                         ; 0058bd92
    JNC 0x0058bdb0                      ; 0058bd95
        ;   XREF to: 0058bdb0 (CONDITIONAL_JUMP)  ; LAB_0058bdb0
    CMP EBX,0x1                         ; 0058bd97
    JNZ 0x0058bdb7                      ; 0058bd9a
        ;   XREF to: 0058bdb7 (CONDITIONAL_JUMP)  ; LAB_0058bdb7
    MOV EBX,0x1                         ; 0058bd9c
        ;   Label: LAB_0058bd9c
    MOV EAX,EBX                         ; 0058bda1
    POP EBP                             ; 0058bda3
    POP EBX                             ; 0058bda4
    RET                                 ; 0058bda5
    MOV EBX,0xffffffff                  ; 0058bda6
        ;   Label: LAB_0058bda6
    MOV EAX,EBX                         ; 0058bdab
    POP EBP                             ; 0058bdad
    POP EBX                             ; 0058bdae
    RET                                 ; 0058bdaf
    JBE 0x0058bd9c                      ; 0058bdb0
        ;   XREF to: 0058bd9c (CONDITIONAL_JUMP)  ; LAB_0058bd9c
        ;   Label: LAB_0058bdb0
    CMP EBX,0x3                         ; 0058bdb2
    JZ 0x0058bd9c                       ; 0058bdb5
        ;   XREF to: 0058bd9c (CONDITIONAL_JUMP)  ; LAB_0058bd9c
    MOV EBX,0xffffffff                  ; 0058bdb7
        ;   Label: LAB_0058bdb7
    MOV EAX,EBX                         ; 0058bdbc
    POP EBP                             ; 0058bdbe
    POP EBX                             ; 0058bdbf
    RET                                 ; 0058bdc0
    XOR EBX,EBX                         ; 0058bdc1
        ;   Label: LAB_0058bdc1
    MOV EAX,EBX                         ; 0058bdc3
    POP EBP                             ; 0058bdc5
    POP EBX                             ; 0058bdc6
    RET                                 ; 0058bdc7
    CMP EBX,0x2                         ; 0058bdc8
        ;   Label: LAB_0058bdc8
    JNC 0x0058bddc                      ; 0058bdcb
        ;   XREF to: 0058bddc (CONDITIONAL_JUMP)  ; LAB_0058bddc
    CMP EBX,0x1                         ; 0058bdcd
    JZ 0x0058bd9c                       ; 0058bdd0
        ;   XREF to: 0058bd9c (CONDITIONAL_JUMP)  ; LAB_0058bd9c
    MOV EBX,0xffffffff                  ; 0058bdd2
    MOV EAX,EBX                         ; 0058bdd7
    POP EBP                             ; 0058bdd9
    POP EBX                             ; 0058bdda
    RET                                 ; 0058bddb
    JBE 0x0058bdc1                      ; 0058bddc
        ;   XREF to: 0058bdc1 (CONDITIONAL_JUMP)  ; LAB_0058bdc1
        ;   Label: LAB_0058bddc
    CMP EBX,0x3                         ; 0058bdde
    JZ 0x0058bd9c                       ; 0058bde1
        ;   XREF to: 0058bd9c (CONDITIONAL_JUMP)  ; LAB_0058bd9c
    MOV EBX,0xffffffff                  ; 0058bde3
    MOV EAX,EBX                         ; 0058bde8
    POP EBP                             ; 0058bdea
    POP EBX                             ; 0058bdeb
    RET                                 ; 0058bdec

