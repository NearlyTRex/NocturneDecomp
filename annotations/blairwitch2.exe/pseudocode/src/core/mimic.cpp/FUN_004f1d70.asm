; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1d70(int param_1)
;
;
; XREF[1]:
;   FUN_004f0e10 at 004f12c1
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005dda05
;   TerminatedCString s_CMimic_beginMorph_can_t_005dda17
;   TerminatedCString s_s_morphing_into_type_s_005dda60
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00436710
;   FUN_004e4500
;   FUN_004f1e90
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1d70
        ;   Label: FUN_004f1d70
    PUSH EDI                            ; 004f1d71
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f1d72
    CMP dword ptr [EBX + 0x4c350],0x0   ; 004f1d76
    JZ 0x004f1e5a                       ; 004f1d7d
        ;   XREF to: 004f1e5a (CONDITIONAL_JUMP)  ; LAB_004f1e5a
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f1d83
        ;   Label: LAB_004f1d83
    MOV EDX,dword ptr [EBX + 0x108]     ; 004f1d89
    MOV dword ptr [EAX + 0x108],EDX     ; 004f1d8f
    MOV EDX,dword ptr [EBX + 0x4c350]   ; 004f1d95
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004f1d9b
    MOV dword ptr [EDX + 0x10c],EAX     ; 004f1da1
    MOV EDX,dword ptr [EBX + 0x4c350]   ; 004f1da7
    MOV EAX,dword ptr [EBX + 0x110]     ; 004f1dad
    MOV dword ptr [EDX + 0x110],EAX     ; 004f1db3
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f1db9
    MOV dword ptr [EAX + 0x10ae8],0x1   ; 004f1dbf
    LEA EAX,[EBX + 0x20]                ; 004f1dc9
    MOV EDX,dword ptr [EBX + 0x4c350]   ; 004f1dcc
    MOV ECX,dword ptr [EAX]             ; 004f1dd2
    MOV dword ptr [EDX + 0x20],ECX      ; 004f1dd4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f1dd7
    MOV dword ptr [EDX + 0x24],ECX      ; 004f1dda
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f1ddd
    MOV dword ptr [EDX + 0x28],ECX      ; 004f1de0
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f1de3
    MOV dword ptr [EDX + 0x2c],EAX      ; 004f1de6
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f1de9
    LEA EDX,[EBX + 0x30]                ; 004f1def
    ADD EAX,0x30                        ; 004f1df2
    CMP EAX,EDX                         ; 004f1df5
    JZ 0x004f1e09                       ; 004f1df7
        ;   XREF to: 004f1e09 (CONDITIONAL_JUMP)  ; LAB_004f1e09
    MOV ECX,dword ptr [EDX]             ; 004f1df9
    MOV dword ptr [EAX],ECX             ; 004f1dfb
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f1dfd
    MOV dword ptr [EAX + 0x4],ECX       ; 004f1e00
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f1e03
    MOV dword ptr [EAX + 0x8],ECX       ; 004f1e06
    PUSH 0x1                            ; 004f1e09
        ;   Label: LAB_004f1e09
    PUSH 0x0                            ; 004f1e0b
    LEA EAX,[EBX + 0x2b4]               ; 004f1e0d
    PUSH EAX                            ; 004f1e13
    MOV dword ptr [EBX + 0x4c34c],0x0   ; 004f1e14
    CALL FUN_00503620                   ; 004f1e1e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004f1e23
    PUSH 0x0                            ; 004f1e26
    PUSH EBX                            ; 004f1e28
    CALL FUN_004f1e90                   ; 004f1e29
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e90()
    ADD ESP,0x8                         ; 004f1e2e
    LEA EAX,[EBX + 0x4b6f8]             ; 004f1e31
    PUSH EAX                            ; 004f1e37
    PUSH EBX                            ; 004f1e38
    PUSH 0x5dda60                       ; 004f1e39 | = "%s morphing into type %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 004f1e3e | PTR_DAT_00609ed0
    PUSH EDI                            ; 004f1e44 | DAT_007c158c
    MOV dword ptr [EBX + 0xfc],0x1      ; 004f1e45
    CALL FUN_00436710                   ; 004f1e4f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004f1e54
    POP EDI                             ; 004f1e57
    POP EBX                             ; 004f1e58
    RET                                 ; 004f1e59
    PUSH ESI                            ; 004f1e5a
        ;   Label: LAB_004f1e5a
    MOV ECX,0x5dda05                    ; 004f1e5b | = "..\\core\\mimic.cpp"
    MOV ESI,0x499                       ; 004f1e60
    PUSH 0x5dda17                       ; 004f1e65 | = "CMimic::beginMorph() - can't do this ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004f1e6a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f1e70 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f1e76
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f1e7b
    POP ESI                             ; 004f1e7e
    JMP 0x004f1d83                      ; 004f1e7f
        ;   XREF to: 004f1d83 (UNCONDITIONAL_JUMP)  ; LAB_004f1d83

