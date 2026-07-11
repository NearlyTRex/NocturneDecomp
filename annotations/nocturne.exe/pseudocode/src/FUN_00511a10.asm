; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511a10(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0046baa0
;   FUN_004f1e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511a10
        ;   Label: FUN_00511a10
    SUB ESP,0x30                        ; 00511a11
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00511a14
    MOV EDX,ESP                         ; 00511a18
    PUSH EDX                            ; 00511a1a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00511a1b
    PUSH EBX                            ; 00511a21
    CALL dword ptr [EAX + 0x14]         ; 00511a22
    MOV EDX,EAX                         ; 00511a25
    MOV ECX,EAX                         ; 00511a27
    LEA EAX,[ESP + 0x20]                ; 00511a29
    ADD ESP,0x8                         ; 00511a2d
    CMP EAX,EDX                         ; 00511a30
    JNZ 0x00511a7c                      ; 00511a32
        ;   XREF to: 00511a7c (CONDITIONAL_JUMP)  ; LAB_00511a7c
    LEA EAX,[ESP + 0x24]                ; 00511a34
        ;   Label: LAB_00511a34
    LEA EDX,[ECX + 0xc]                 ; 00511a38
    CMP EAX,EDX                         ; 00511a3b
    JZ 0x00511a53                       ; 00511a3d
        ;   XREF to: 00511a53 (CONDITIONAL_JUMP)  ; LAB_00511a53
    MOV EAX,dword ptr [EDX]             ; 00511a3f
    MOV dword ptr [ESP + 0x24],EAX      ; 00511a41
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511a45
    MOV dword ptr [ESP + 0x28],EAX      ; 00511a48
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511a4c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00511a4f
    LEA EAX,[ESP + 0x24]                ; 00511a53
        ;   Label: LAB_00511a53
    PUSH EAX                            ; 00511a57
    LEA EAX,[ESP + 0x1c]                ; 00511a58
    PUSH EAX                            ; 00511a5c
    LEA EAX,[EBX + 0x30]                ; 00511a5d
    PUSH EAX                            ; 00511a60
    ADD EBX,0x20                        ; 00511a61
    PUSH EBX                            ; 00511a64
    PUSH 0x1fba938                      ; 00511a65 | DAT_01fba938
    CALL FUN_0046baa0                   ; 00511a6a
        ;   XREF to: 0046baa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046baa0()
    ADD ESP,0x14                        ; 00511a6f
    CALL FUN_004f1e90                   ; 00511a72
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e90()
    ADD ESP,0x30                        ; 00511a77
    POP EBX                             ; 00511a7a
    RET                                 ; 00511a7b
    MOV EAX,dword ptr [EDX]             ; 00511a7c
        ;   Label: LAB_00511a7c
    MOV dword ptr [ESP + 0x18],EAX      ; 00511a7e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511a82
    MOV dword ptr [ESP + 0x1c],EAX      ; 00511a85
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511a89
    MOV dword ptr [ESP + 0x20],EAX      ; 00511a8c
    JMP 0x00511a34                      ; 00511a90
        ;   XREF to: 00511a34 (UNCONDITIONAL_JUMP)  ; LAB_00511a34

