; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004da860(int param_1)
;
;
; XREF[3]:
;   FUN_004da840 at 004da846
;   FUN_004da900 at 004da90b
;   FUN_004dc4b0 at 004dc4c2
;
; Called Functions:
;   FUN_004db8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da860
        ;   Label: FUN_004da860
    PUSH EBP                            ; 004da861
    MOV EBX,dword ptr [ESP + 0xc]       ; 004da862
    CMP dword ptr [EBX + 0x10],0x0      ; 004da866
    JLE 0x004da894                      ; 004da86a
        ;   XREF to: 004da894 (CONDITIONAL_JUMP)  ; LAB_004da894
    PUSH EDI                            ; 004da86c
    PUSH ESI                            ; 004da86d
    CMP dword ptr [EBX + 0x460],0x0     ; 004da86e
        ;   Label: LAB_004da86e
    SETZ AL                             ; 004da875
    AND EAX,0xff                        ; 004da878
    PUSH EAX                            ; 004da87d
    MOV ESI,dword ptr [EBX + 0x14]      ; 004da87e
    PUSH ESI                            ; 004da881
    PUSH EBX                            ; 004da882
    CALL FUN_004db8e0                   ; 004da883
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004db8e0()
    MOV EDI,dword ptr [EBX + 0x10]      ; 004da888
    ADD ESP,0xc                         ; 004da88b
    TEST EDI,EDI                        ; 004da88e
    JG 0x004da86e                       ; 004da890
        ;   XREF to: 004da86e (CONDITIONAL_JUMP)  ; LAB_004da86e
    POP ESI                             ; 004da892
    POP EDI                             ; 004da893
    MOV EAX,EBX                         ; 004da894
        ;   Label: LAB_004da894
    LEA EDX,[EBX + 0x14]                ; 004da896
    XOR ECX,ECX                         ; 004da899
    ADD EAX,0x4                         ; 004da89b
        ;   Label: LAB_004da89b
    MOV dword ptr [EAX + 0x5f8],ECX     ; 004da89e
    MOV dword ptr [EAX + 0x60c],ECX     ; 004da8a4
    CMP EAX,EDX                         ; 004da8aa
    JNZ 0x004da89b                      ; 004da8ac
        ;   XREF to: 004da89b (CONDITIONAL_JUMP)  ; LAB_004da89b
    MOV EBP,dword ptr [EBX + 0x464]     ; 004da8ae
    MOV dword ptr [EBX + 0x460],0x0     ; 004da8b4
    TEST EBP,EBP                        ; 004da8be
    JZ 0x004da8d0                       ; 004da8c0
        ;   XREF to: 004da8d0 (CONDITIONAL_JUMP)  ; LAB_004da8d0
    MOV EAX,EBP                         ; 004da8c2
    JNZ 0x004da8e1                      ; 004da8c4
        ;   XREF to: 004da8e1 (CONDITIONAL_JUMP)  ; LAB_004da8e1
    MOV dword ptr [EBX + 0x464],0x0     ; 004da8c6
        ;   Label: LAB_004da8c6
    MOV dword ptr [EBX + 0xc],0x0       ; 004da8d0
        ;   Label: LAB_004da8d0
    MOV dword ptr [EBX + 0x8],0x0       ; 004da8d7
    POP EBP                             ; 004da8de
    POP EBX                             ; 004da8df
    RET                                 ; 004da8e0
    PUSH 0x2                            ; 004da8e1
        ;   Label: LAB_004da8e1
    MOV EDX,dword ptr [EBP + 0x2b0]     ; 004da8e3
    PUSH EBP                            ; 004da8e9
    CALL dword ptr [EDX + 0xd8]         ; 004da8ea
    ADD ESP,0x8                         ; 004da8f0
    JMP 0x004da8c6                      ; 004da8f3
        ;   XREF to: 004da8c6 (UNCONDITIONAL_JUMP)  ; LAB_004da8c6

