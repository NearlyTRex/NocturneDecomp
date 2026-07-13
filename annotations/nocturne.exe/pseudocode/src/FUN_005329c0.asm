; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005329c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0052ef37 at 0052ef48
;
; Referenced Globals:
;   undefined4 DAT_005c0f8c
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_00532620
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 005329c0
        ;   Label: FUN_005329c0
    PUSH 0xc0                           ; 005329c6
    PUSH 0x0                            ; 005329cb
    LEA EAX,[ESP + 0x8]                 ; 005329cd
    PUSH EAX                            ; 005329d1
    CALL FUN_00563cc0                   ; 005329d2
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    MOV EAX,[0x01c00c58]                ; 005329d7 | DAT_01c00c58
    ADD ESP,0xc                         ; 005329dc
    SHL EAX,0x10                        ; 005329df
    MOV dword ptr [ESP + 0x10],EAX      ; 005329e2
    MOV EAX,[0x01c00c5c]                ; 005329e6 | DAT_01c00c5c
    SHL EAX,0x10                        ; 005329eb
    MOV dword ptr [ESP + 0x14],EAX      ; 005329ee
    MOV EAX,[0x01c00c60]                ; 005329f2 | DAT_01c00c60
    SHL EAX,0x10                        ; 005329f7
    MOV dword ptr [ESP + 0x40],EAX      ; 005329fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 005329fe
    MOV dword ptr [ESP + 0x44],EAX      ; 00532a02
    MOV EAX,dword ptr [ESP + 0x40]      ; 00532a06
    MOV dword ptr [ESP + 0x70],EAX      ; 00532a0a
    MOV EAX,[0x01c00c64]                ; 00532a0e | DAT_01c00c64
    SHL EAX,0x10                        ; 00532a13
    MOV dword ptr [ESP + 0x74],EAX      ; 00532a16
    MOV EAX,dword ptr [ESP + 0x10]      ; 00532a1a
    MOV dword ptr [ESP + 0xa0],EAX      ; 00532a1e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00532a25
    MOV dword ptr [ESP + 0xa4],EAX      ; 00532a29
    MOV EAX,[0x005c0f8c]                ; 00532a30 | DAT_005c0f8c
    PUSH 0x10                           ; 00532a35
    MOV dword ptr [ESP + 0xc],EAX       ; 00532a37
    MOV dword ptr [ESP + 0x3c],EAX      ; 00532a3b
    MOV dword ptr [ESP + 0x6c],EAX      ; 00532a3f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00532a43
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00532a4a
    PUSH 0x4                            ; 00532a51
    MOV [0x01c00c70],EAX                ; 00532a53 | DAT_01c00c70
    LEA EAX,[ESP + 0x8]                 ; 00532a58
    PUSH EAX                            ; 00532a5c
    CALL FUN_00532620                   ; 00532a5d
        ;   XREF to: 00532620 (UNCONDITIONAL_CALL)  ; undefined FUN_00532620()
    MOV EAX,0x1                         ; 00532a62
    ADD ESP,0xc                         ; 00532a67
    ADD ESP,0xc0                        ; 00532a6a
    RET                                 ; 00532a70

