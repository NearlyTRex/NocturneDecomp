; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d880(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00414a60 at 00414b1d
;
; Called Functions:
;   FUN_0046d960
;   FUN_0046e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d880
        ;   Label: FUN_0046d880
    PUSH ESI                            ; 0046d881
    PUSH EDI                            ; 0046d882
    PUSH EBP                            ; 0046d883
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046d884
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046d888
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046d88c
    CMP EDI,-0x1                        ; 0046d890
    JNZ 0x0046d89a                      ; 0046d893
        ;   XREF to: 0046d89a (CONDITIONAL_JUMP)  ; LAB_0046d89a
    MOV EDI,0x2cd                       ; 0046d895
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046d89a
        ;   Label: LAB_0046d89a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046d89e
    JZ 0x0046d8d5                       ; 0046d8a2
        ;   XREF to: 0046d8d5 (CONDITIONAL_JUMP)  ; LAB_0046d8d5
    XOR EBX,EBX                         ; 0046d8a4
    TEST EBP,EBP                        ; 0046d8a6
    JLE 0x0046d8d0                      ; 0046d8a8
        ;   XREF to: 0046d8d0 (CONDITIONAL_JUMP)  ; LAB_0046d8d0
    PUSH EDI                            ; 0046d8aa
        ;   Label: LAB_0046d8aa
    PUSH ESI                            ; 0046d8ab
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046d8ac
    PUSH EAX                            ; 0046d8b0
    INC EBX                             ; 0046d8b1
    CALL FUN_0046e160                   ; 0046d8b2
        ;   XREF to: 0046e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e160()
    ADD ESI,0x3c                        ; 0046d8b7
    ADD ESP,0xc                         ; 0046d8ba
    CMP EBX,EBP                         ; 0046d8bd
    JL 0x0046d8aa                       ; 0046d8bf
        ;   XREF to: 0046d8aa (CONDITIONAL_JUMP)  ; LAB_0046d8aa
    LEA EAX,[EAX]                       ; 0046d8c1
    LEA EDX,[EDX]                       ; 0046d8c7
    LEA EAX,[EAX]                       ; 0046d8cd
    POP EBP                             ; 0046d8d0
        ;   Label: LAB_0046d8d0
    POP EDI                             ; 0046d8d1
    POP ESI                             ; 0046d8d2
    POP EBX                             ; 0046d8d3
    RET                                 ; 0046d8d4
    PUSH EDI                            ; 0046d8d5
        ;   Label: LAB_0046d8d5
    PUSH 0x3c                           ; 0046d8d6
    PUSH EBP                            ; 0046d8d8
    PUSH ESI                            ; 0046d8d9
    PUSH EBX                            ; 0046d8da
    CALL FUN_0046d960                   ; 0046d8db
        ;   XREF to: 0046d960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d960()
    ADD ESP,0x14                        ; 0046d8e0
    POP EBP                             ; 0046d8e3
    POP EDI                             ; 0046d8e4
    POP ESI                             ; 0046d8e5
    POP EBX                             ; 0046d8e6
    RET                                 ; 0046d8e7

