; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496520(int param_1)
;
;
; Called Functions:
;   FUN_004591b0
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496520
        ;   Label: FUN_00496520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496521
    PUSH EBX                            ; 00496525
    CALL FUN_004591b0                   ; 00496526
        ;   XREF to: 004591b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004591b0()
    ADD ESP,0x4                         ; 0049652b
    LEA EAX,[EBX + 0x1f4]               ; 0049652e
    PUSH EAX                            ; 00496534
    CALL FUN_00462580                   ; 00496535
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    MOV dword ptr [EBX + 0xf8],0x1      ; 0049653a
    MOV dword ptr [EBX + 0x3d8],0x0     ; 00496544
    ADD ESP,0x4                         ; 0049654e
    MOV dword ptr [EBX + 0x3dc],0x0     ; 00496551
    POP EBX                             ; 0049655b
    RET                                 ; 0049655c

