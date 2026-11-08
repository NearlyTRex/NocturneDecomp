; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041ede0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007bccdc
;
; Called Functions:
;   FUN_00546790
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ede0
        ;   Label: FUN_0041ede0
    PUSH EDI                            ; 0041ede1
    PUSH EBP                            ; 0041ede2
    MOV EBP,ESP                         ; 0041ede3
    SUB ESP,0x78                        ; 0041ede5
    MOV EBX,ESI                         ; 0041ede8
    MOV EDX,dword ptr [0x007bccdc]      ; 0041edea | DAT_007bccdc
    MOV ESI,dword ptr [EBP + 0x10]      ; 0041edf0
    PUSH EDX                            ; 0041edf3
    ADD ESI,0x2b4                       ; 0041edf4
    PUSH ESI                            ; 0041edfa
    LEA ESI,[EBP + -0x48]               ; 0041edfb
    LEA EDI,[EBP + -0x78]               ; 0041edfe
    CALL FUN_00546790                   ; 0041ee01
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; undefined FUN_00546790()
    MOV ECX,0xc                         ; 0041ee06
    LEA ESI,[EBP + -0x48]               ; 0041ee0b
    MOVSD.REP ES:EDI,ESI                ; 0041ee0e
    ADD ESP,0x8                         ; 0041ee10
    LEA ESI,[EBP + -0x78]               ; 0041ee13
    MOV EDI,0x3e99999a                  ; 0041ee16
    XOR ECX,ECX                         ; 0041ee1b
    PUSH ESI                            ; 0041ee1d
    MOV ESI,0x3f333333                  ; 0041ee1e
    MOV dword ptr [EBP + -0x18],ECX     ; 0041ee23
    MOV dword ptr [EBP + -0x14],ESI     ; 0041ee26
    LEA ESI,[EBP + -0x18]               ; 0041ee29
    MOV dword ptr [EBP + -0x10],EDI     ; 0041ee2c
    PUSH ESI                            ; 0041ee2f
    LEA ESI,[EBP + -0xc]                ; 0041ee30
    MOV EDI,EBX                         ; 0041ee33
    CALL FUN_00591530                   ; 0041ee35
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + -0xc]                ; 0041ee3a
    ADD ESP,0x8                         ; 0041ee3d
    MOVSD ES:EDI,ESI                    ; 0041ee40
    MOVSD ES:EDI,ESI                    ; 0041ee41
    MOVSD ES:EDI,ESI                    ; 0041ee42
    MOV EAX,EBX                         ; 0041ee43
    MOV ESP,EBP                         ; 0041ee45
    POP EBP                             ; 0041ee47
    POP EDI                             ; 0041ee48
    POP EBX                             ; 0041ee49
    RET                                 ; 0041ee4a

