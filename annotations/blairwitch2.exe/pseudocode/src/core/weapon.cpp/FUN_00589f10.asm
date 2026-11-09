; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_00589f10(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;   core_weapon.cpp_FUN_0058a2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589f10
        ;   Label: core_weapon.cpp_FUN_00589f10
    PUSH ESI                            ; 00589f11
    PUSH EDI                            ; 00589f12
    PUSH EBP                            ; 00589f13
    SUB ESP,0x18                        ; 00589f14
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00589f17
    MOV EBP,dword ptr [ESP + 0x30]      ; 00589f1b
    PUSH EBX                            ; 00589f1f
    MOV dword ptr [EBX + 0x460],0x0     ; 00589f20
    CALL core_weapon.cpp_FUN_0058a2f0   ; 00589f2a
        ;   XREF to: 0058a2f0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0058a2f0()
    ADD ESP,0x4                         ; 00589f2f
    TEST EBP,EBP                        ; 00589f32
    JNZ 0x00589f5a                      ; 00589f34
        ;   XREF to: 00589f5a (CONDITIONAL_JUMP)  ; LAB_00589f5a
    PUSH 0x0                            ; 00589f36
        ;   Label: LAB_00589f36
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00589f38
    PUSH EBX                            ; 00589f3e
    CALL dword ptr [EAX + 0xe4]         ; 00589f3f
    ADD ESP,0x8                         ; 00589f45
    MOV dword ptr [EBX + 0x6cc],0x40a00000 ; 00589f48
    ADD ESP,0x18                        ; 00589f52
    POP EBP                             ; 00589f55
    POP EDI                             ; 00589f56
    POP ESI                             ; 00589f57
    POP EBX                             ; 00589f58
    RET                                 ; 00589f59
    PUSH EBP                            ; 00589f5a
        ;   Label: LAB_00589f5a
    LEA EAX,[EBX + 0x47c]               ; 00589f5b
    PUSH EAX                            ; 00589f61
    LEA ESI,[ESP + 0x14]                ; 00589f62
    LEA EDI,[ESP + 0x8]                 ; 00589f66
    CALL core_dirmat.cpp_FUN_004495a0   ; 00589f6a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x14]                ; 00589f6f
    LEA EAX,[ESP + 0x8]                 ; 00589f73
    ADD ESP,0x8                         ; 00589f77
    LEA EDX,[EBX + 0x4b0]               ; 00589f7a
    MOVSD ES:EDI,ESI                    ; 00589f80
    MOVSD ES:EDI,ESI                    ; 00589f81
    MOVSD ES:EDI,ESI                    ; 00589f82
    CMP EDX,EAX                         ; 00589f83
    JZ 0x00589f9a                       ; 00589f85
        ;   XREF to: 00589f9a (CONDITIONAL_JUMP)  ; LAB_00589f9a
    MOV EAX,dword ptr [ESP]             ; 00589f87
    MOV dword ptr [EDX],EAX             ; 00589f8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00589f8c
    MOV dword ptr [EDX + 0x4],EAX       ; 00589f90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00589f93
    MOV dword ptr [EDX + 0x8],EAX       ; 00589f97
    LEA EAX,[EBX + 0x4a4]               ; 00589f9a
        ;   Label: LAB_00589f9a
    CMP EAX,EBP                         ; 00589fa0
    JZ 0x00589f36                       ; 00589fa2
        ;   XREF to: 00589f36 (CONDITIONAL_JUMP)  ; LAB_00589f36
    MOV EDX,dword ptr [EBP]             ; 00589fa4
    MOV dword ptr [EAX],EDX             ; 00589fa7
    MOV EDX,dword ptr [EBP + 0x4]       ; 00589fa9
    MOV dword ptr [EAX + 0x4],EDX       ; 00589fac
    MOV EDX,dword ptr [EBP + 0x8]       ; 00589faf
    MOV dword ptr [EAX + 0x8],EDX       ; 00589fb2
    JMP 0x00589f36                      ; 00589fb5
        ;   XREF to: 00589f36 (UNCONDITIONAL_JUMP)  ; LAB_00589f36

