; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e3ad0(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004e3ad0
        ;   Label: FUN_004e3ad0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e3ad3
    CMP dword ptr [EAX + 0x6c8],0x6     ; 004e3ad7
    JNZ 0x004e3aec                      ; 004e3ade
        ;   XREF to: 004e3aec (CONDITIONAL_JUMP)  ; LAB_004e3aec
    XOR ECX,ECX                         ; 004e3ae0
    MOV dword ptr [ESP],ECX             ; 004e3ae2
    MOV EAX,dword ptr [ESP]             ; 004e3ae5
    ADD ESP,0x8                         ; 004e3ae8
    RET                                 ; 004e3aeb
    PUSH 0x420c0000                     ; 004e3aec
        ;   Label: LAB_004e3aec
    PUSH 0x41700000                     ; 004e3af1
    CALL FUN_0040cf60                   ; 004e3af6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3afb
    FLD float ptr [ESP + 0xc]           ; 004e3aff
    ADD ESP,0x8                         ; 004e3b03
    FSTP float ptr [ESP]                ; 004e3b06
    MOV EAX,dword ptr [ESP]             ; 004e3b09
    ADD ESP,0x8                         ; 004e3b0c
    RET                                 ; 004e3b0f

