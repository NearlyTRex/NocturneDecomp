; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045cff0(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5)
;
;
; Called Functions:
;   FUN_0045cde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cff0
        ;   Label: FUN_0045cff0
    PUSH ESI                            ; 0045cff1
    PUSH EBP                            ; 0045cff2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045cff3
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cff7
    MOV EDX,EBX                         ; 0045cffb
    MOV EAX,EBX                         ; 0045cffd
    SAR EDX,0x1f                        ; 0045cfff
    SUB EAX,EDX                         ; 0045d002
    SAR EAX,0x1                         ; 0045d004
    ADD EAX,dword ptr [ESP + 0x14]      ; 0045d006
    TEST BL,0x1                         ; 0045d00a
    JZ 0x0045d05c                       ; 0045d00d
        ;   XREF to: 0045d05c (CONDITIONAL_JUMP)  ; LAB_0045d05c
    MOV ESI,EAX                         ; 0045d00f
        ;   Label: LAB_0045d00f
    MOV EDX,ECX                         ; 0045d011
    MOV EAX,ECX                         ; 0045d013
    SAR EDX,0x1f                        ; 0045d015
    SUB EAX,EDX                         ; 0045d018
    SAR EAX,0x1                         ; 0045d01a
    ADD EAX,dword ptr [ESP + 0x18]      ; 0045d01c
    TEST CL,0x1                         ; 0045d020
    JZ 0x0045d05f                       ; 0045d023
        ;   XREF to: 0045d05f (CONDITIONAL_JUMP)  ; LAB_0045d05f
    PUSH EAX                            ; 0045d025
        ;   Label: LAB_0045d025
    MOV EDX,ECX                         ; 0045d026
    MOV EAX,ECX                         ; 0045d028
    SAR EDX,0x1f                        ; 0045d02a
    SUB EAX,EDX                         ; 0045d02d
    SAR EAX,0x1                         ; 0045d02f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045d031
    MOV EDX,EBX                         ; 0045d035
    SUB ECX,EAX                         ; 0045d037
    MOV EAX,EBX                         ; 0045d039
    SAR EDX,0x1f                        ; 0045d03b
    SUB EAX,EDX                         ; 0045d03e
    SAR EAX,0x1                         ; 0045d040
    PUSH ESI                            ; 0045d042
    PUSH ECX                            ; 0045d043
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045d044
    SUB ECX,EAX                         ; 0045d048
    PUSH ECX                            ; 0045d04a
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045d04b
    PUSH EBP                            ; 0045d04f
    CALL FUN_0045cde0                   ; 0045d050
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045cde0()
    ADD ESP,0x14                        ; 0045d055
    POP EBP                             ; 0045d058
    POP ESI                             ; 0045d059
    POP EBX                             ; 0045d05a
    RET                                 ; 0045d05b
    DEC EAX                             ; 0045d05c
        ;   Label: LAB_0045d05c
    JMP 0x0045d00f                      ; 0045d05d
        ;   XREF to: 0045d00f (UNCONDITIONAL_JUMP)  ; LAB_0045d00f
    DEC EAX                             ; 0045d05f
        ;   Label: LAB_0045d05f
    JMP 0x0045d025                      ; 0045d060
        ;   XREF to: 0045d025 (UNCONDITIONAL_JUMP)  ; LAB_0045d025

