; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046a450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_0046a3e0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a450
        ;   Label: FUN_0046a450
    PUSH ESI                            ; 0046a451
    PUSH EDI                            ; 0046a452
    PUSH EBP                            ; 0046a453
    SUB ESP,0x1004                      ; 0046a454
    LEA EAX,[ESP + 0x1030]              ; 0046a45a
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a461
    LEA EAX,[ESP + 0x1000]              ; 0046a468
    PUSH EAX                            ; 0046a46f
    MOV EDX,dword ptr [ESP + 0x1030]    ; 0046a470
    PUSH EDX                            ; 0046a477
    LEA EAX,[ESP + 0x8]                 ; 0046a478
    PUSH EAX                            ; 0046a47c
    CALL FUN_005a2898                   ; 0046a47d
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0046a482
    MOV EBX,dword ptr [ESP + 0x1028]    ; 0046a485
    PUSH EBX                            ; 0046a48c
    MOV ESI,dword ptr [ESP + 0x1028]    ; 0046a48d
    PUSH ESI                            ; 0046a494
    MOV EDI,dword ptr [ESP + 0x1028]    ; 0046a495
    PUSH EDI                            ; 0046a49c
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0046a49d
    PUSH EBP                            ; 0046a4a4
    LEA EAX,[ESP + 0x10]                ; 0046a4a5
    PUSH EAX                            ; 0046a4a9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 0046a4aa
    XOR ECX,ECX                         ; 0046a4b1
    PUSH EAX                            ; 0046a4b3
    MOV dword ptr [ESP + 0x1018],ECX    ; 0046a4b4
    CALL FUN_0046a3e0                   ; 0046a4bb
        ;   XREF to: 0046a3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a3e0()
    ADD ESP,0x18                        ; 0046a4c0
    ADD ESP,0x1004                      ; 0046a4c3
    POP EBP                             ; 0046a4c9
    POP EDI                             ; 0046a4ca
    POP ESI                             ; 0046a4cb
    POP EBX                             ; 0046a4cc
    RET                                 ; 0046a4cd

