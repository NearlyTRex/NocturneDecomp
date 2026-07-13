; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00414f50(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414f50
        ;   Label: FUN_00414f50
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414f51
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414f55
    ADD EAX,0x150                       ; 00414f59
    PUSH EAX                            ; 00414f5e
    CALL FUN_00454530                   ; 00414f5f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 00414f64
    MOV EDX,dword ptr [EAX]             ; 00414f6a
    LEA ECX,[EAX + 0x4]                 ; 00414f6c
    MOV dword ptr [EBX],EDX             ; 00414f6f
    LEA EDX,[EBX + 0x4]                 ; 00414f71
    MOV ECX,dword ptr [ECX]             ; 00414f74
    MOV dword ptr [EDX],ECX             ; 00414f76
    LEA ECX,[EAX + 0x8]                 ; 00414f78
    MOV ECX,dword ptr [ECX]             ; 00414f7b
    MOV dword ptr [EDX + 0x4],ECX       ; 00414f7d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00414f80
    ADD EAX,0xc                         ; 00414f83
    MOV dword ptr [EDX + 0x8],ECX       ; 00414f86
    LEA ECX,[EAX + 0x4]                 ; 00414f89
    MOV ECX,dword ptr [ECX]             ; 00414f8c
    MOV dword ptr [EDX + 0xc],ECX       ; 00414f8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00414f91
    ADD ESP,0x4                         ; 00414f94
    MOV dword ptr [EDX + 0x10],EAX      ; 00414f97
    MOV EAX,EBX                         ; 00414f9a
    POP EBX                             ; 00414f9c
    RET                                 ; 00414f9d

