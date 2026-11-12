; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_getBloodColorParams_FUN_004ae020(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae020
        ;   Label: core_gore.cpp_getBloodColorParams_FUN_004ae020
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ae021
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ae025
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ae029
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ae02d
    CMP EAX,0x1                         ; 004ae031
    JC 0x004ae051                       ; 004ae034
        ;   XREF to: 004ae051 (CONDITIONAL_JUMP)  ; LAB_004ae051
    JBE 0x004ae059                      ; 004ae036
        ;   XREF to: 004ae059 (CONDITIONAL_JUMP)  ; LAB_004ae059
    CMP EAX,0x2                         ; 004ae038
    JNZ 0x004ae051                      ; 004ae03b
        ;   XREF to: 004ae051 (CONDITIONAL_JUMP)  ; LAB_004ae051
    MOV dword ptr [EDX],0x0             ; 004ae03d
    MOV dword ptr [EBX],0x0             ; 004ae043
        ;   Label: LAB_004ae043
    MOV dword ptr [ECX],0x0             ; 004ae049
    POP EBX                             ; 004ae04f
    RET                                 ; 004ae050
    MOV dword ptr [EDX],0x2000          ; 004ae051
        ;   Label: LAB_004ae051
    JMP 0x004ae043                      ; 004ae057
        ;   XREF to: 004ae043 (UNCONDITIONAL_JUMP)  ; LAB_004ae043
    MOV dword ptr [EDX],0x0             ; 004ae059
        ;   Label: LAB_004ae059
    MOV dword ptr [EBX],0x7f80          ; 004ae05f
    MOV dword ptr [ECX],0x0             ; 004ae065
    POP EBX                             ; 004ae06b
    RET                                 ; 004ae06c

