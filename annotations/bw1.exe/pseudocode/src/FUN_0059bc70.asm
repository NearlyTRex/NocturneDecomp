; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059bc70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; Called Functions:
;   FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bc70
        ;   Label: FUN_0059bc70
    PUSH ESI                            ; 0059bc71
    PUSH EDI                            ; 0059bc72
    SUB ESP,0x4c                        ; 0059bc73
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0059bc76
    CMP dword ptr [EBX + 0x174],0x3     ; 0059bc7a
    JZ 0x0059bc96                       ; 0059bc81
        ;   XREF to: 0059bc96 (CONDITIONAL_JUMP)  ; LAB_0059bc96
    MOV dword ptr [ESP + 0x48],0xbf800000 ; 0059bc83
        ;   Label: LAB_0059bc83
    MOV EAX,dword ptr [ESP + 0x48]      ; 0059bc8b
    ADD ESP,0x4c                        ; 0059bc8f
    POP EDI                             ; 0059bc92
    POP ESI                             ; 0059bc93
    POP EBX                             ; 0059bc94
    RET                                 ; 0059bc95
    MOV ECX,dword ptr [ESP + 0x64]      ; 0059bc96
        ;   Label: LAB_0059bc96
    PUSH ECX                            ; 0059bc9a
    PUSH EBX                            ; 0059bc9b
    LEA ESI,[ESP + 0x38]                ; 0059bc9c
    LEA EDI,[ESP + 0x44]                ; 0059bca0
    CALL FUN_00408bb0                   ; 0059bca4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x38]                ; 0059bca9
    ADD ESP,0x8                         ; 0059bcad
    MOVSD ES:EDI,ESI                    ; 0059bcb0
    MOVSD ES:EDI,ESI                    ; 0059bcb1
    MOVSD ES:EDI,ESI                    ; 0059bcb2
    PUSH EBX                            ; 0059bcb3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059bcb4
    LEA ESI,[ESP + 0x1c]                ; 0059bcba
    LEA EDI,[ESP + 0x4]                 ; 0059bcbe
    CALL dword ptr [EAX + 0x1c]         ; 0059bcc2
    MOV ECX,0x6                         ; 0059bcc5
    LEA ESI,[ESP + 0x1c]                ; 0059bcca
    ADD ESP,0x4                         ; 0059bcce
    MOVSD.REP ES:EDI,ESI                ; 0059bcd1
    FLD float ptr [ESP]                 ; 0059bcd3
    FCOMP float ptr [ESP + 0x3c]        ; 0059bcd6
    FNSTSW AX                           ; 0059bcda
    SAHF                                ; 0059bcdc
    JA 0x0059bc83                       ; 0059bcdd
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    FLD float ptr [ESP + 0x4]           ; 0059bcdf
    FCOMP float ptr [ESP + 0x40]        ; 0059bce3
    FNSTSW AX                           ; 0059bce7
    SAHF                                ; 0059bce9
    JA 0x0059bc83                       ; 0059bcea
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    FLD float ptr [ESP + 0x8]           ; 0059bcec
    FCOMP float ptr [ESP + 0x44]        ; 0059bcf0
    FNSTSW AX                           ; 0059bcf4
    SAHF                                ; 0059bcf6
    JA 0x0059bc83                       ; 0059bcf7
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    FLD float ptr [ESP + 0xc]           ; 0059bcf9
    FCOMP float ptr [ESP + 0x3c]        ; 0059bcfd
    FNSTSW AX                           ; 0059bd01
    SAHF                                ; 0059bd03
    JC 0x0059bc83                       ; 0059bd04
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    FLD float ptr [ESP + 0x10]          ; 0059bd0a
    FCOMP float ptr [ESP + 0x40]        ; 0059bd0e
    FNSTSW AX                           ; 0059bd12
    SAHF                                ; 0059bd14
    JC 0x0059bc83                       ; 0059bd15
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    FLD float ptr [ESP + 0x14]          ; 0059bd1b
    FCOMP float ptr [ESP + 0x44]        ; 0059bd1f
    FNSTSW AX                           ; 0059bd23
    SAHF                                ; 0059bd25
    JC 0x0059bc83                       ; 0059bd26
        ;   XREF to: 0059bc83 (CONDITIONAL_JUMP)  ; LAB_0059bc83
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 0059bd2c
    XOR ESI,ESI                         ; 0059bd32
    MOV EBX,dword ptr [ESP + 0x68]      ; 0059bd34
    MOV dword ptr [ESP + 0x48],ESI      ; 0059bd38
    MOV dword ptr [EBX],EAX             ; 0059bd3c
    MOV EAX,dword ptr [ESP + 0x48]      ; 0059bd3e
    ADD ESP,0x4c                        ; 0059bd42
    POP EDI                             ; 0059bd45
    POP ESI                             ; 0059bd46
    POP EBX                             ; 0059bd47
    RET                                 ; 0059bd48

