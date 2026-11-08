; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7900(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7900
        ;   Label: FUN_004e7900
    PUSH EDI                            ; 004e7901
    SUB ESP,0x18                        ; 004e7902
    MOV EBX,ESI                         ; 004e7905
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e7907
    ADD EAX,0x2b4                       ; 004e790b
    PUSH EAX                            ; 004e7910
    LEA EDI,[ESP + 0x4]                 ; 004e7911
    CALL FUN_0044fd20                   ; 004e7915
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 004e791a
    LEA ESI,[EAX + 0x338]               ; 004e791f
    ADD ESP,0x4                         ; 004e7925
    MOVSD.REP ES:EDI,ESI                ; 004e7928
    MOV ECX,0x6                         ; 004e792a
    MOV ESI,ESP                         ; 004e792f
    MOV EDI,EBX                         ; 004e7931
    MOVSD.REP ES:EDI,ESI                ; 004e7933
    MOV EAX,EBX                         ; 004e7935
    ADD ESP,0x18                        ; 004e7937
    POP EDI                             ; 004e793a
    POP EBX                             ; 004e793b
    RET                                 ; 004e793c

