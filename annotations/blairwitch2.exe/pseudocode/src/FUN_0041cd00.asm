; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cd00(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0041bf10
;   FUN_005b4610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cd00
        ;   Label: FUN_0041cd00
    SUB ESP,0xc                         ; 0041cd01
    MOV EBX,dword ptr [ESP + 0x14]      ; 0041cd04
    PUSH EBX                            ; 0041cd08
    MOV dword ptr [EBX + 0x474],0x0     ; 0041cd09
    CALL FUN_0041bf10                   ; 0041cd13
        ;   XREF to: 0041bf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bf10()
    ADD ESP,0x4                         ; 0041cd18
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041cd1b
    TEST EDX,EDX                        ; 0041cd1f
    JNZ 0x0041cd28                      ; 0041cd21
        ;   XREF to: 0041cd28 (CONDITIONAL_JUMP)  ; LAB_0041cd28
    ADD ESP,0xc                         ; 0041cd23
    POP EBX                             ; 0041cd26
    RET                                 ; 0041cd27
    PUSH EDI                            ; 0041cd28
        ;   Label: LAB_0041cd28
    LEA EAX,[ESP + 0x4]                 ; 0041cd29
    PUSH EAX                            ; 0041cd2d
    MOV EDI,0x4116cbe4                  ; 0041cd2e
    XOR ECX,ECX                         ; 0041cd33
    PUSH EDX                            ; 0041cd35
    LEA EAX,[EBX + 0x4f0]               ; 0041cd36
    MOV dword ptr [ESP + 0x14],ECX      ; 0041cd3c
    PUSH EAX                            ; 0041cd40
    MOV dword ptr [ESP + 0x14],ECX      ; 0041cd41
    MOV dword ptr [ESP + 0x10],EDI      ; 0041cd45
    CALL FUN_005b4610                   ; 0041cd49
        ;   XREF to: 005b4610 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4610()
    ADD ESP,0xc                         ; 0041cd4e
    POP EDI                             ; 0041cd51
    ADD ESP,0xc                         ; 0041cd52
    POP EBX                             ; 0041cd55
    RET                                 ; 0041cd56

