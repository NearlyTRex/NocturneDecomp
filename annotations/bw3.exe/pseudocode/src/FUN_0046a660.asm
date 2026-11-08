; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046a660(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0046a640
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a660
        ;   Label: FUN_0046a660
    SUB ESP,0x1004                      ; 0046a661
    LEA EAX,[ESP + 0x1014]              ; 0046a667
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a66e
    LEA EAX,[ESP + 0x1000]              ; 0046a675
    PUSH EAX                            ; 0046a67c
    MOV EDX,dword ptr [ESP + 0x1014]    ; 0046a67d
    PUSH EDX                            ; 0046a684
    LEA EAX,[ESP + 0x8]                 ; 0046a685
    PUSH EAX                            ; 0046a689
    CALL FUN_005a2898                   ; 0046a68a
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0046a68f
    MOV EAX,ESP                         ; 0046a692
    PUSH EAX                            ; 0046a694
    MOV EBX,dword ptr [ESP + 0x1010]    ; 0046a695
    XOR ECX,ECX                         ; 0046a69c
    PUSH EBX                            ; 0046a69e
    MOV dword ptr [ESP + 0x1008],ECX    ; 0046a69f
    CALL FUN_0046a640                   ; 0046a6a6
        ;   XREF to: 0046a640 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a640()
    ADD ESP,0x8                         ; 0046a6ab
    ADD ESP,0x1004                      ; 0046a6ae
    POP EBX                             ; 0046a6b4
    RET                                 ; 0046a6b5

