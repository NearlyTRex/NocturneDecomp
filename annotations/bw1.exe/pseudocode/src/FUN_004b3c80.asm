; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3c80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_004b70f0 at 004b711f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3c80
        ;   Label: FUN_004b3c80
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b3c84
    CMP EAX,EDX                         ; 004b3c88
    JNZ 0x004b3cb3                      ; 004b3c8a
        ;   XREF to: 004b3cb3 (CONDITIONAL_JUMP)  ; LAB_004b3cb3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b3c8c
        ;   Label: LAB_004b3c8c
    MOV dword ptr [EAX + 0xc],EDX       ; 004b3c90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3c93
    MOV dword ptr [EAX + 0x14],EDX      ; 004b3c97
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b3c9a
    MOV dword ptr [EAX + 0x10],EDX      ; 004b3c9e
    MOV dword ptr [EAX + 0x18],EDX      ; 004b3ca1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3ca4
    MOV dword ptr [EAX + 0x1c],EDX      ; 004b3ca8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004b3cab
    MOV dword ptr [EAX + 0x20],EDX      ; 004b3caf
    RET                                 ; 004b3cb2
    MOV ECX,dword ptr [EDX]             ; 004b3cb3
        ;   Label: LAB_004b3cb3
    MOV dword ptr [EAX],ECX             ; 004b3cb5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b3cb7
    MOV dword ptr [EAX + 0x4],ECX       ; 004b3cba
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b3cbd
    MOV dword ptr [EAX + 0x8],ECX       ; 004b3cc0
    JMP 0x004b3c8c                      ; 004b3cc3
        ;   XREF to: 004b3c8c (UNCONDITIONAL_JUMP)  ; LAB_004b3c8c

