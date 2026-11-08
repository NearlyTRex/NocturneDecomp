; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cf60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041bd30
;   FUN_00449c70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041cf60
        ;   Label: FUN_0041cf60
    PUSH EAX                            ; 0041cf64
    CALL FUN_0041bd30                   ; 0041cf65
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bd30()
    ADD ESP,0x4                         ; 0041cf6a
    PUSH 0x100                          ; 0041cf6d
    PUSH 0x100                          ; 0041cf72
    ADD EAX,0x7d8                       ; 0041cf77
    PUSH EAX                            ; 0041cf7c
    CALL FUN_00449c70                   ; 0041cf7d
        ;   XREF to: 00449c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c70()
    SUB EAX,0x7d8                       ; 0041cf82
    MOV dword ptr [EAX + 0x2b0],0x5f3b14 ; 0041cf87
    LEA EDX,[EAX + 0x3788]              ; 0041cf91
    MOV dword ptr [EAX + 0x248c],0x1    ; 0041cf97
    MOV dword ptr [EDX + 0x8],0x0       ; 0041cfa1
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041cfa8
    MOV dword ptr [EDX + 0x4],ECX       ; 0041cfab
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041cfae
    MOV dword ptr [EDX],ECX             ; 0041cfb1
    LEA EDX,[EAX + 0x3794]              ; 0041cfb3
    MOV dword ptr [EDX + 0x8],0x0       ; 0041cfb9
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041cfc0
    MOV dword ptr [EDX + 0x4],ECX       ; 0041cfc3
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041cfc6
    MOV dword ptr [EDX],ECX             ; 0041cfc9
    MOV dword ptr [EAX + 0x37a0],0x0    ; 0041cfcb
    ADD ESP,0xc                         ; 0041cfd5
    MOV dword ptr [EAX + 0x7d4],0x1     ; 0041cfd8
    RET                                 ; 0041cfe2

