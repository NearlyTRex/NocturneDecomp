; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6d50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   FUN_00468900
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6d50
        ;   Label: FUN_004e6d50
    PUSH EDI                            ; 004e6d51
    SUB ESP,0x1c                        ; 004e6d52
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e6d55
    MOV EBX,ESI                         ; 004e6d59
    MOV EDX,dword ptr [0x0061f650]      ; 004e6d5b | DAT_0061f650
    MOV ESI,dword ptr [EDX + 0x1008]    ; 004e6d61 | DAT_01d2d908
    LEA EAX,[ECX + 0x158]               ; 004e6d67
    TEST ESI,ESI                        ; 004e6d6d
    JZ 0x004e6dcf                       ; 004e6d6f
        ;   XREF to: 004e6dcf (CONDITIONAL_JUMP)  ; LAB_004e6dcf
    PUSH EAX                            ; 004e6d71
    CALL FUN_00468900                   ; 004e6d72
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    LEA EDX,[EAX + 0x338]               ; 004e6d77
    ADD ESP,0x4                         ; 004e6d7d
    MOV EAX,ESP                         ; 004e6d80
    MOV ECX,EDX                         ; 004e6d82
    CMP EAX,EDX                         ; 004e6d84
    JZ 0x004e6d9b                       ; 004e6d86
        ;   XREF to: 004e6d9b (CONDITIONAL_JUMP)  ; LAB_004e6d9b
    MOV EAX,dword ptr [EDX]             ; 004e6d88
    MOV dword ptr [ESP],EAX             ; 004e6d8a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e6d8d
    MOV dword ptr [ESP + 0x4],EAX       ; 004e6d90
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e6d94
    MOV dword ptr [ESP + 0x8],EAX       ; 004e6d97
    LEA EAX,[ESP + 0xc]                 ; 004e6d9b
        ;   Label: LAB_004e6d9b
    LEA EDX,[ECX + 0xc]                 ; 004e6d9f
    CMP EAX,EDX                         ; 004e6da2
    JNZ 0x004e6db9                      ; 004e6da4
        ;   XREF to: 004e6db9 (CONDITIONAL_JUMP)  ; LAB_004e6db9
    MOV ECX,0x6                         ; 004e6da6
        ;   Label: LAB_004e6da6
    MOV ESI,ESP                         ; 004e6dab
    MOV EDI,EBX                         ; 004e6dad
    MOVSD.REP ES:EDI,ESI                ; 004e6daf
    MOV EAX,EBX                         ; 004e6db1
    ADD ESP,0x1c                        ; 004e6db3
    POP EDI                             ; 004e6db6
    POP EBX                             ; 004e6db7
    RET                                 ; 004e6db8
    MOV EAX,dword ptr [EDX]             ; 004e6db9
        ;   Label: LAB_004e6db9
    MOV dword ptr [ESP + 0xc],EAX       ; 004e6dbb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e6dbf
    MOV dword ptr [ESP + 0x10],EAX      ; 004e6dc2
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e6dc6
    MOV dword ptr [ESP + 0x14],EAX      ; 004e6dc9
    JMP 0x004e6da6                      ; 004e6dcd
        ;   XREF to: 004e6da6 (UNCONDITIONAL_JUMP)  ; LAB_004e6da6
    FLD float ptr [ECX + 0x2d4]         ; 004e6dcf
        ;   Label: LAB_004e6dcf
    CALL FUN_005c03a0                   ; 004e6dd5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    PUSH EAX                            ; 004e6dda
    FISTP dword ptr [ESP + 0x1c]        ; 004e6ddb
    CALL FUN_00468900                   ; 004e6ddf
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004e6de4
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e6de7
    MOV EDX,EAX                         ; 004e6deb
    LEA EAX,[ECX*0x4 + 0x0]             ; 004e6ded
    SUB EAX,ECX                         ; 004e6df4
    MOV EDX,dword ptr [EDX + 0x350]     ; 004e6df6
    SHL EAX,0x3                         ; 004e6dfc
    ADD EDX,EAX                         ; 004e6dff
    MOV EAX,ESP                         ; 004e6e01
    MOV ECX,EDX                         ; 004e6e03
    CMP EAX,EDX                         ; 004e6e05
    JZ 0x004e6e1c                       ; 004e6e07
        ;   XREF to: 004e6e1c (CONDITIONAL_JUMP)  ; LAB_004e6e1c
    MOV EAX,dword ptr [EDX]             ; 004e6e09
    MOV dword ptr [ESP],EAX             ; 004e6e0b
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e6e0e
    MOV dword ptr [ESP + 0x4],EAX       ; 004e6e11
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e6e15
    MOV dword ptr [ESP + 0x8],EAX       ; 004e6e18
    LEA EAX,[ESP + 0xc]                 ; 004e6e1c
        ;   Label: LAB_004e6e1c
    LEA EDX,[ECX + 0xc]                 ; 004e6e20
    CMP EAX,EDX                         ; 004e6e23
    JZ 0x004e6da6                       ; 004e6e25
        ;   XREF to: 004e6da6 (CONDITIONAL_JUMP)  ; LAB_004e6da6
    MOV EAX,dword ptr [EDX]             ; 004e6e2b
    MOV dword ptr [ESP + 0xc],EAX       ; 004e6e2d
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e6e31
    MOV dword ptr [ESP + 0x10],EAX      ; 004e6e34
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e6e38
    MOV dword ptr [ESP + 0x14],EAX      ; 004e6e3b
    MOV ECX,0x6                         ; 004e6e3f
    MOV ESI,ESP                         ; 004e6e44
    MOV EDI,EBX                         ; 004e6e46
    MOVSD.REP ES:EDI,ESI                ; 004e6e48
    MOV EAX,EBX                         ; 004e6e4a
    ADD ESP,0x1c                        ; 004e6e4c
    POP EDI                             ; 004e6e4f
    POP EBX                             ; 004e6e50
    RET                                 ; 004e6e51

