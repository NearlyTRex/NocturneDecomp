; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00409d00(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_0042b8d0 at 0042b8f0
;
; Called Functions:
;   FUN_004088f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409d00
        ;   Label: FUN_00409d00
    PUSH ESI                            ; 00409d01
    MOV ECX,dword ptr [ESP + 0xc]       ; 00409d02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00409d06
    MOV EDX,dword ptr [ESP + 0x14]      ; 00409d0a
    LEA EAX,[ECX + 0x20]                ; 00409d0e
    MOV ESI,dword ptr [EBX]             ; 00409d11
    MOV dword ptr [EAX],ESI             ; 00409d13
    MOV ESI,dword ptr [EBX + 0x4]       ; 00409d15
    MOV dword ptr [EAX + 0x4],ESI       ; 00409d18
    MOV ESI,dword ptr [EBX + 0x8]       ; 00409d1b
    MOV dword ptr [EAX + 0x8],ESI       ; 00409d1e
    LEA EAX,[ECX + 0x30]                ; 00409d21
    CMP EAX,EDX                         ; 00409d24
    JZ 0x00409d38                       ; 00409d26
        ;   XREF to: 00409d38 (CONDITIONAL_JUMP)  ; LAB_00409d38
    MOV EBX,dword ptr [EDX]             ; 00409d28
    MOV dword ptr [EAX],EBX             ; 00409d2a
    MOV EBX,dword ptr [EDX + 0x4]       ; 00409d2c
    MOV dword ptr [EAX + 0x4],EBX       ; 00409d2f
    MOV EBX,dword ptr [EDX + 0x8]       ; 00409d32
    MOV dword ptr [EAX + 0x8],EBX       ; 00409d35
    PUSH ECX                            ; 00409d38
        ;   Label: LAB_00409d38
    CALL FUN_004088f0                   ; 00409d39
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088f0()
    ADD ESP,0x4                         ; 00409d3e
    POP ESI                             ; 00409d41
    POP EBX                             ; 00409d42
    LEA EAX,[EAX]                       ; 00409d43
    LEA EDX,[EDX]                       ; 00409d49
    NOP                                 ; 00409d4f

