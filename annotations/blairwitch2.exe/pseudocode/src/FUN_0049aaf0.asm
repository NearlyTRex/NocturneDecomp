; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049aaf0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0049e6e0 at 0049e70b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049aaf0
        ;   Label: FUN_0049aaf0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049aaf4
    LEA EAX,[EDX + 0x4]                 ; 0049aaf8
    CMP EAX,ECX                         ; 0049aafb
    JNZ 0x0049ab1b                      ; 0049aafd
        ;   XREF to: 0049ab1b (CONDITIONAL_JUMP)  ; LAB_0049ab1b
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 0049aaff
        ;   Label: LAB_0049aaff
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049ab06
    MOV dword ptr [EDX],0x0             ; 0049ab0a
    MOV dword ptr [EDX + 0x10],EAX      ; 0049ab10
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049ab13
    MOV dword ptr [EDX + 0x18],EAX      ; 0049ab17
    RET                                 ; 0049ab1a
    PUSH EBX                            ; 0049ab1b
        ;   Label: LAB_0049ab1b
    MOV EBX,dword ptr [ECX]             ; 0049ab1c
    MOV dword ptr [EAX],EBX             ; 0049ab1e
    MOV EBX,dword ptr [ECX + 0x4]       ; 0049ab20
    MOV dword ptr [EAX + 0x4],EBX       ; 0049ab23
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049ab26
    MOV dword ptr [EAX + 0x8],EBX       ; 0049ab29
    POP EBX                             ; 0049ab2c
    JMP 0x0049aaff                      ; 0049ab2d
        ;   XREF to: 0049aaff (UNCONDITIONAL_JUMP)  ; LAB_0049aaff

