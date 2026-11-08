; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8d10(int param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004c9ad0 at 004c9af2
;
; Referenced Globals:
;   undefined4 DAT_005d94ea
;   undefined4 DAT_005f7ba8
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00534ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8d10
        ;   Label: FUN_004c8d10
    PUSH ESI                            ; 004c8d11
    SUB ESP,0x4                         ; 004c8d12
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c8d15
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8d19
    PUSH 0x3                            ; 004c8d1d
    PUSH 0x0                            ; 004c8d1f
    CALL FUN_0040cfc0                   ; 004c8d21
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 004c8d26
    MOV EDX,dword ptr [0x0061b5a8]      ; 004c8d29 | DAT_0061b5a8
    PUSH 0x0                            ; 004c8d2f
    MOV dword ptr [ESI + 0x14],EAX      ; 004c8d31
    PUSH EBX                            ; 004c8d34
    FLD float ptr [EBX]                 ; 004c8d35
    PUSH EDX                            ; 004c8d37 | DAT_01e661b8
    FSTP float ptr [ESI + 0x4]          ; 004c8d38
    CALL FUN_00534ea0                   ; 004c8d3b
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534ea0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004c8d40
    FLD float ptr [ESP + 0xc]           ; 004c8d44
    LEA EAX,[ESI + 0x4]                 ; 004c8d48
    FSTP float ptr [ESI + 0x8]          ; 004c8d4b
    ADD ESP,0xc                         ; 004c8d4e
    FLD float ptr [ESI + 0x8]           ; 004c8d51
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c8d54
    MOV dword ptr [ESI + 0xc],EDX       ; 004c8d57
    MOV dword ptr [ESI + 0x18],0x0      ; 004c8d5a
    FADD float ptr [0x005d94ea]         ; 004c8d61 | DAT_005d94ea
    LEA EBX,[ESI + 0x1c]                ; 004c8d67
    FSTP float ptr [ESI + 0x8]          ; 004c8d6a
    FLD float ptr [EAX]                 ; 004c8d6d
    FMUL float ptr [0x005f7ba8]         ; 004c8d6f | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c8d75
    FLD float ptr [EAX + 0x4]           ; 004c8d77
    FMUL float ptr [0x005f7ba8]         ; 004c8d7a | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8d80
    FLD float ptr [EAX + 0x8]           ; 004c8d83
    FMUL float ptr [0x005f7ba8]         ; 004c8d86 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8d8c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c8d8f
    MOV dword ptr [ESI + 0x10],EAX      ; 004c8d93
    ADD ESP,0x4                         ; 004c8d96
    POP ESI                             ; 004c8d99
    POP EBX                             ; 004c8d9a
    RET                                 ; 004c8d9b

