; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055fd60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0055b2b7 at 0055b2c8
;
; Referenced Globals:
;   undefined4 DAT_0061e28c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_0055f8f0
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 0055fd60
        ;   Label: FUN_0055fd60
    PUSH 0xc0                           ; 0055fd66
    PUSH 0x0                            ; 0055fd6b
    LEA EAX,[ESP + 0x8]                 ; 0055fd6d
    PUSH EAX                            ; 0055fd71
    CALL FUN_005b77c0                   ; 0055fd72
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV EAX,[0x01c35e48]                ; 0055fd77 | DAT_01c35e48
    ADD ESP,0xc                         ; 0055fd7c
    SHL EAX,0x10                        ; 0055fd7f
    MOV dword ptr [ESP + 0x10],EAX      ; 0055fd82
    MOV EAX,[0x01c35e4c]                ; 0055fd86 | DAT_01c35e4c
    SHL EAX,0x10                        ; 0055fd8b
    MOV dword ptr [ESP + 0x14],EAX      ; 0055fd8e
    MOV EAX,[0x01c35e50]                ; 0055fd92 | DAT_01c35e50
    SHL EAX,0x10                        ; 0055fd97
    MOV dword ptr [ESP + 0x40],EAX      ; 0055fd9a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055fd9e
    MOV dword ptr [ESP + 0x44],EAX      ; 0055fda2
    MOV EAX,dword ptr [ESP + 0x40]      ; 0055fda6
    MOV dword ptr [ESP + 0x70],EAX      ; 0055fdaa
    MOV EAX,[0x01c35e54]                ; 0055fdae | DAT_01c35e54
    SHL EAX,0x10                        ; 0055fdb3
    MOV dword ptr [ESP + 0x74],EAX      ; 0055fdb6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055fdba
    MOV dword ptr [ESP + 0xa0],EAX      ; 0055fdbe
    MOV EAX,dword ptr [ESP + 0x74]      ; 0055fdc5
    MOV dword ptr [ESP + 0xa4],EAX      ; 0055fdc9
    MOV EAX,[0x0061e28c]                ; 0055fdd0 | DAT_0061e28c
    PUSH 0x10                           ; 0055fdd5
    MOV dword ptr [ESP + 0xc],EAX       ; 0055fdd7
    MOV dword ptr [ESP + 0x3c],EAX      ; 0055fddb
    MOV dword ptr [ESP + 0x6c],EAX      ; 0055fddf
    MOV dword ptr [ESP + 0x9c],EAX      ; 0055fde3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0055fdea
    PUSH 0x4                            ; 0055fdf1
    MOV [0x01c35e60],EAX                ; 0055fdf3 | DAT_01c35e60
    LEA EAX,[ESP + 0x8]                 ; 0055fdf8
    PUSH EAX                            ; 0055fdfc
    CALL FUN_0055f8f0                   ; 0055fdfd
        ;   XREF to: 0055f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f8f0()
    MOV EAX,0x1                         ; 0055fe02
    ADD ESP,0xc                         ; 0055fe07
    ADD ESP,0xc0                        ; 0055fe0a
    RET                                 ; 0055fe10

