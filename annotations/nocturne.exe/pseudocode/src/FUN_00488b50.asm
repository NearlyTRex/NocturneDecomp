; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0048c4a0 at 0048c4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488b50
        ;   Label: FUN_00488b50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00488b51
    MOV ECX,dword ptr [ESP + 0xc]       ; 00488b55
    MOV EBX,dword ptr [ESP + 0x10]      ; 00488b59
    LEA EAX,[EDX + 0x4]                 ; 00488b5d
    CMP EAX,ECX                         ; 00488b60
    JNZ 0x00488b88                      ; 00488b62
        ;   XREF to: 00488b88 (CONDITIONAL_JUMP)  ; LAB_00488b88
    LEA EAX,[EDX + 0x1c]                ; 00488b64
        ;   Label: LAB_00488b64
    CMP EAX,EBX                         ; 00488b67
    JNZ 0x00488b9c                      ; 00488b69
        ;   XREF to: 00488b9c (CONDITIONAL_JUMP)  ; LAB_00488b9c
    MOV dword ptr [EDX],0x1             ; 00488b6b
        ;   Label: LAB_00488b6b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00488b71
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 00488b75
    MOV dword ptr [EDX + 0x18],EAX      ; 00488b7c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00488b7f
    MOV dword ptr [EDX + 0x28],EAX      ; 00488b83
    POP EBX                             ; 00488b86
    RET                                 ; 00488b87
    PUSH ESI                            ; 00488b88
        ;   Label: LAB_00488b88
    MOV ESI,dword ptr [ECX]             ; 00488b89
    MOV dword ptr [EAX],ESI             ; 00488b8b
    MOV ESI,dword ptr [ECX + 0x4]       ; 00488b8d
    MOV dword ptr [EAX + 0x4],ESI       ; 00488b90
    MOV ESI,dword ptr [ECX + 0x8]       ; 00488b93
    MOV dword ptr [EAX + 0x8],ESI       ; 00488b96
    POP ESI                             ; 00488b99
    JMP 0x00488b64                      ; 00488b9a
        ;   XREF to: 00488b64 (UNCONDITIONAL_JUMP)  ; LAB_00488b64
    MOV ECX,dword ptr [EBX]             ; 00488b9c
        ;   Label: LAB_00488b9c
    MOV dword ptr [EAX],ECX             ; 00488b9e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00488ba0
    MOV dword ptr [EAX + 0x4],ECX       ; 00488ba3
    MOV ECX,dword ptr [EBX + 0x8]       ; 00488ba6
    MOV dword ptr [EAX + 0x8],ECX       ; 00488ba9
    JMP 0x00488b6b                      ; 00488bac
        ;   XREF to: 00488b6b (UNCONDITIONAL_JUMP)  ; LAB_00488b6b

