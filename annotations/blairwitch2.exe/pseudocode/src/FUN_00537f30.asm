; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; XREF[2]:
;   FUN_004162b0 at 00416490
;   FUN_0041c090 at 0041c56e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537f30
        ;   Label: FUN_00537f30
    PUSH EBP                            ; 00537f31
    SUB ESP,0x3c                        ; 00537f32
    MOV EAX,dword ptr [ESP + 0x48]      ; 00537f35
    MOV EDX,dword ptr [EAX + 0x14f0a8]  ; 00537f39
    XOR EBX,EBX                         ; 00537f3f
    TEST EDX,EDX                        ; 00537f41
    JLE 0x00537f93                      ; 00537f43
        ;   XREF to: 00537f93 (CONDITIONAL_JUMP)  ; LAB_00537f93
    PUSH EDI                            ; 00537f45
    PUSH ESI                            ; 00537f46
    MOV EBP,EAX                         ; 00537f47
    MOV ECX,0xf                         ; 00537f49
        ;   Label: LAB_00537f49
    LEA EDI,[ESP + 0x8]                 ; 00537f4e
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00537f52
    MOV EAX,dword ptr [EBP + 0x14f0ac]  ; 00537f56
    MOVSD.REP ES:EDI,ESI                ; 00537f5c
    PUSH 0x0                            ; 00537f5e
    LEA ECX,[ESP + 0xc]                 ; 00537f60
    PUSH ECX                            ; 00537f64
    MOV ECX,dword ptr [ESP + 0x60]      ; 00537f65
    PUSH ECX                            ; 00537f69
    MOV ESI,dword ptr [ESP + 0x60]      ; 00537f6a
    PUSH ESI                            ; 00537f6e
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00537f6f
    PUSH EAX                            ; 00537f75
    CALL dword ptr [EDX + 0x10c]        ; 00537f76
    ADD ESP,0x14                        ; 00537f7c
    MOV EAX,dword ptr [ESP + 0x50]      ; 00537f7f
    INC EBX                             ; 00537f83
    MOV EDI,dword ptr [EAX + 0x14f0a8]  ; 00537f84
    ADD EBP,0x4                         ; 00537f8a
    CMP EBX,EDI                         ; 00537f8d
    JL 0x00537f49                       ; 00537f8f
        ;   XREF to: 00537f49 (CONDITIONAL_JUMP)  ; LAB_00537f49
    POP ESI                             ; 00537f91
    POP EDI                             ; 00537f92
    ADD ESP,0x3c                        ; 00537f93
        ;   Label: LAB_00537f93
    POP EBP                             ; 00537f96
    POP EBX                             ; 00537f97
    RET                                 ; 00537f98

