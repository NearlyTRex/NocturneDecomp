; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b9f10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c7554
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9f10
        ;   Label: core_xform.cpp_FUN_005b9f10
    PUSH ESI                            ; 005b9f11
    PUSH EDI                            ; 005b9f12
    PUSH EBP                            ; 005b9f13
    MOV ESI,dword ptr [0x007c7554]      ; 005b9f14 | DAT_007c7554
    MOV EAX,0x7c7558                    ; 005b9f1a
    XOR ECX,ECX                         ; 005b9f1f
    TEST ESI,ESI                        ; 005b9f21
    JLE 0x005b9f3d                      ; 005b9f23
        ;   XREF to: 005b9f3d (CONDITIONAL_JUMP)  ; LAB_005b9f3d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b9f25
        ;   Label: LAB_005b9f25
    TEST EDX,EDX                        ; 005b9f28
    JZ 0x005b9f48                       ; 005b9f2a
        ;   XREF to: 005b9f48 (CONDITIONAL_JUMP)  ; LAB_005b9f48
    MOV EBX,dword ptr [EAX + 0x8]       ; 005b9f2c
    CMP EBX,dword ptr [EAX]             ; 005b9f2f
    JGE 0x005b9f56                      ; 005b9f31
        ;   XREF to: 005b9f56 (CONDITIONAL_JUMP)  ; LAB_005b9f56
    MOV dword ptr [EAX],EBX             ; 005b9f33
    INC ECX                             ; 005b9f35
        ;   Label: LAB_005b9f35
    ADD EAX,0x30                        ; 005b9f36
    CMP ECX,ESI                         ; 005b9f39
    JL 0x005b9f25                       ; 005b9f3b
        ;   XREF to: 005b9f25 (CONDITIONAL_JUMP)  ; LAB_005b9f25
    MOV dword ptr [0x007c7554],ESI      ; 005b9f3d | DAT_007c7554
        ;   Label: LAB_005b9f3d
    POP EBP                             ; 005b9f43
    POP EDI                             ; 005b9f44
    POP ESI                             ; 005b9f45
    POP EBX                             ; 005b9f46
    RET                                 ; 005b9f47
    MOV dword ptr [EAX + 0x8],0x1       ; 005b9f48
        ;   Label: LAB_005b9f48
    MOV dword ptr [EAX],EDX             ; 005b9f4f
    MOV dword ptr [EAX + 0x4],EDX       ; 005b9f51
    JMP 0x005b9f35                      ; 005b9f54
        ;   XREF to: 005b9f35 (UNCONDITIONAL_JUMP)  ; LAB_005b9f35
    MOV EDX,EBX                         ; 005b9f56
        ;   Label: LAB_005b9f56
    MOV EDI,dword ptr [EAX]             ; 005b9f58
    NEG EDX                             ; 005b9f5a
    CMP EDX,EDI                         ; 005b9f5c
    JLE 0x005b9f64                      ; 005b9f5e
        ;   XREF to: 005b9f64 (CONDITIONAL_JUMP)  ; LAB_005b9f64
    MOV dword ptr [EAX],EDX             ; 005b9f60
    JMP 0x005b9f35                      ; 005b9f62
        ;   XREF to: 005b9f35 (UNCONDITIONAL_JUMP)  ; LAB_005b9f35
    MOV EBP,dword ptr [EAX + 0x8]       ; 005b9f64
        ;   Label: LAB_005b9f64
    MOV EBX,dword ptr [EAX + 0x4]       ; 005b9f67
    CMP EBX,EBP                         ; 005b9f6a
    JLE 0x005b9f73                      ; 005b9f6c
        ;   XREF to: 005b9f73 (CONDITIONAL_JUMP)  ; LAB_005b9f73
    MOV dword ptr [EAX + 0x4],EBP       ; 005b9f6e
    JMP 0x005b9f35                      ; 005b9f71
        ;   XREF to: 005b9f35 (UNCONDITIONAL_JUMP)  ; LAB_005b9f35
    CMP EDX,EBX                         ; 005b9f73
        ;   Label: LAB_005b9f73
    JLE 0x005b9f35                      ; 005b9f75
        ;   XREF to: 005b9f35 (CONDITIONAL_JUMP)  ; LAB_005b9f35
    MOV dword ptr [EAX + 0x4],EDX       ; 005b9f77
    JMP 0x005b9f35                      ; 005b9f7a
        ;   XREF to: 005b9f35 (UNCONDITIONAL_JUMP)  ; LAB_005b9f35

