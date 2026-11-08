; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e2cc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc06a
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2cc0
        ;   Label: FUN_004e2cc0
    PUSH EDI                            ; 004e2cc1
    SUB ESP,0x24                        ; 004e2cc2
    MOV EBX,ESI                         ; 004e2cc5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e2cc7
    ADD EAX,0x2b4                       ; 004e2ccb
    PUSH EAX                            ; 004e2cd0
    LEA EDI,[ESP + 0x4]                 ; 004e2cd1
    CALL FUN_0044fd20                   ; 004e2cd5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 004e2cda
    LEA ESI,[EAX + 0x338]               ; 004e2cdf
    ADD ESP,0x4                         ; 004e2ce5
    XOR EDX,EDX                         ; 004e2ce8
    MOVSD.REP ES:EDI,ESI                ; 004e2cea
    MOV dword ptr [ESP + 0x18],EDX      ; 004e2cec
    FLD float ptr [ESP + 0x10]          ; 004e2cf0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e2cf4
    LEA ESI,[ESP + 0x18]                ; 004e2cf8
    MOV EDI,EBX                         ; 004e2cfc
    FADD double ptr [0x005dc06a]        ; 004e2cfe | DAT_005dc06a
    MOV dword ptr [ESP + 0x20],EAX      ; 004e2d04
    FSTP float ptr [ESP + 0x1c]         ; 004e2d08
    MOVSD ES:EDI,ESI                    ; 004e2d0c
    MOVSD ES:EDI,ESI                    ; 004e2d0d
    MOVSD ES:EDI,ESI                    ; 004e2d0e
    MOV EAX,EBX                         ; 004e2d0f
    ADD ESP,0x24                        ; 004e2d11
    POP EDI                             ; 004e2d14
    POP EBX                             ; 004e2d15
    RET                                 ; 004e2d16

