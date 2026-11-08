; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00414e90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_02032560
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_00414a60
;   FUN_0046d4c0
;   FUN_004a6090
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00414e90
        ;   Label: FUN_00414e90
    PUSH EBP                            ; 00414e91
    MOV EDI,dword ptr [ESP + 0xc]       ; 00414e92
    CMP dword ptr [EDI + 0xf30],0x0     ; 00414e96
    JZ 0x00414f50                       ; 00414e9d
        ;   XREF to: 00414f50 (CONDITIONAL_JUMP)  ; LAB_00414f50
    CMP dword ptr [EDI + 0x158],0x1     ; 00414ea3
    JLE 0x00414eb9                      ; 00414eaa
        ;   XREF to: 00414eb9 (CONDITIONAL_JUMP)  ; LAB_00414eb9
    CMP dword ptr [EDI + 0x74c],0x0     ; 00414eac
    JZ 0x00414f50                       ; 00414eb3
        ;   XREF to: 00414f50 (CONDITIONAL_JUMP)  ; LAB_00414f50
    PUSH EBX                            ; 00414eb9
        ;   Label: LAB_00414eb9
    CMP dword ptr [EDI + 0xcb4],0x0     ; 00414eba
    JZ 0x00414f19                       ; 00414ec1
        ;   XREF to: 00414f19 (CONDITIONAL_JUMP)  ; LAB_00414f19
    MOV EBX,dword ptr [0x00603b28]      ; 00414ec3 | DAT_00603b28
    MOV EAX,dword ptr [EDI + 0xcb0]     ; 00414ec9
    PUSH EDI                            ; 00414ecf
    MOV dword ptr [EBX + 0x15ac98],EAX  ; 00414ed0 | DAT_02032560
    CALL FUN_004087f0                   ; 00414ed6
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00414edb
    MOV EBP,dword ptr [EDI + 0xcc0]     ; 00414ede
    PUSH EBP                            ; 00414ee4
    MOV EAX,[0x005f2afc]                ; 00414ee5 | DAT_005f2afc
    PUSH EAX                            ; 00414eea | DAT_01bdd7e4
    CALL FUN_0046d4c0                   ; 00414eeb
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 00414ef0
    PUSH 0x2e7                          ; 00414ef3
    PUSH EDI                            ; 00414ef8
    CALL FUN_00414a60                   ; 00414ef9
        ;   XREF to: 00414a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00414a60()
    ADD ESP,0x8                         ; 00414efe
    PUSH EDI                            ; 00414f01
    CALL FUN_00408830                   ; 00414f02
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    MOV EAX,[0x00603b28]                ; 00414f07 | DAT_00603b28
    ADD ESP,0x4                         ; 00414f0c
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00414f0f | DAT_02032560
    MOV EDX,dword ptr [EDI + 0x74c]     ; 00414f19
        ;   Label: LAB_00414f19
    XOR EBX,EBX                         ; 00414f1f
    TEST EDX,EDX                        ; 00414f21
    JLE 0x00414f47                      ; 00414f23
        ;   XREF to: 00414f47 (CONDITIONAL_JUMP)  ; LAB_00414f47
    PUSH ESI                            ; 00414f25
    LEA ESI,[EDI + 0x75c]               ; 00414f26
    PUSH ESI                            ; 00414f2c
        ;   Label: LAB_00414f2c
    CALL FUN_004a6090                   ; 00414f2d
        ;   XREF to: 004a6090 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6090()
    INC EBX                             ; 00414f32
    ADD ESP,0x4                         ; 00414f33
    MOV ECX,dword ptr [EDI + 0x74c]     ; 00414f36
    ADD ESI,0x2b0                       ; 00414f3c
    CMP EBX,ECX                         ; 00414f42
    JL 0x00414f2c                       ; 00414f44
        ;   XREF to: 00414f2c (CONDITIONAL_JUMP)  ; LAB_00414f2c
    POP ESI                             ; 00414f46
    MOV EAX,0x1                         ; 00414f47
        ;   Label: LAB_00414f47
    POP EBX                             ; 00414f4c
    POP EBP                             ; 00414f4d
    POP EDI                             ; 00414f4e
    RET                                 ; 00414f4f
    XOR EAX,EAX                         ; 00414f50
        ;   Label: LAB_00414f50
    POP EBP                             ; 00414f52
    POP EDI                             ; 00414f53
    RET                                 ; 00414f54

