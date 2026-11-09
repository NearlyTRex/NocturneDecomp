; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3b60(undefined4 param_1,int param_2,undefined4 *param_3)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004a3b60
        ;   Label: core_fire.cpp_FUN_004a3b60
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a3b64
    TEST EDX,EDX                        ; 004a3b68
    JL 0x004a3b8e                       ; 004a3b6a
        ;   XREF to: 004a3b8e (CONDITIONAL_JUMP)  ; LAB_004a3b8e
    CMP EDX,0x1f4                       ; 004a3b6c
    JGE 0x004a3b8e                      ; 004a3b72
        ;   XREF to: 004a3b8e (CONDITIONAL_JUMP)  ; LAB_004a3b8e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3b74
    SUB EAX,EDX                         ; 004a3b7b
    SHL EAX,0x2                         ; 004a3b7d
    SUB EAX,EDX                         ; 004a3b80
    SHL EAX,0x2                         ; 004a3b82
    ADD EAX,0x1cfb8bc                   ; 004a3b85
    CMP EAX,ECX                         ; 004a3b8a
    JNZ 0x004a3b8f                      ; 004a3b8c
        ;   XREF to: 004a3b8f (CONDITIONAL_JUMP)  ; LAB_004a3b8f
    RET                                 ; 004a3b8e
        ;   Label: LAB_004a3b8e
    MOV EDX,dword ptr [ECX]             ; 004a3b8f
        ;   Label: LAB_004a3b8f
    MOV dword ptr [EAX],EDX             ; 004a3b91
    MOV EDX,dword ptr [ECX + 0x4]       ; 004a3b93
    MOV dword ptr [EAX + 0x4],EDX       ; 004a3b96
    MOV EDX,dword ptr [ECX + 0x8]       ; 004a3b99
    MOV dword ptr [EAX + 0x8],EDX       ; 004a3b9c
    RET                                 ; 004a3b9f

