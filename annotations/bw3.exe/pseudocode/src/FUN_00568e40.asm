; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568e40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   FUN_00408bf0
;   FUN_004f6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568e40
        ;   Label: FUN_00568e40
    PUSH ESI                            ; 00568e41
    PUSH EDI                            ; 00568e42
    SUB ESP,0x48                        ; 00568e43
    MOV EBX,dword ptr [ESP + 0x58]      ; 00568e46
    CMP dword ptr [EBX + 0x164],0x0     ; 00568e4a
    JNZ 0x00568e5a                      ; 00568e51
        ;   XREF to: 00568e5a (CONDITIONAL_JUMP)  ; LAB_00568e5a
    ADD ESP,0x48                        ; 00568e53
        ;   Label: LAB_00568e53
    POP EDI                             ; 00568e56
    POP ESI                             ; 00568e57
    POP EBX                             ; 00568e58
    RET                                 ; 00568e59
    MOV ESI,dword ptr [0x01d5ba14]      ; 00568e5a | DAT_01d5ba14
        ;   Label: LAB_00568e5a
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 00568e60
    ADD ESI,0x20                        ; 00568e67
    PUSH ESI                            ; 00568e6a
    PUSH EBX                            ; 00568e6b
    LEA ESI,[ESP + 0x44]                ; 00568e6c
    LEA EDI,[ESP + 0x38]                ; 00568e70
    CALL FUN_00408bf0                   ; 00568e74
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x44]                ; 00568e79
    ADD ESP,0x8                         ; 00568e7d
    MOVSD ES:EDI,ESI                    ; 00568e80
    MOVSD ES:EDI,ESI                    ; 00568e81
    MOVSD ES:EDI,ESI                    ; 00568e82
    PUSH EBX                            ; 00568e83
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568e84
    LEA ESI,[ESP + 0x1c]                ; 00568e8a
    LEA EDI,[ESP + 0x4]                 ; 00568e8e
    CALL dword ptr [EAX + 0x1c]         ; 00568e92
    MOV ECX,0x6                         ; 00568e95
    LEA ESI,[ESP + 0x1c]                ; 00568e9a
    ADD ESP,0x4                         ; 00568e9e
    MOVSD.REP ES:EDI,ESI                ; 00568ea1
    FLD float ptr [ESP]                 ; 00568ea3
    FCOMP float ptr [ESP + 0x30]        ; 00568ea6
    FNSTSW AX                           ; 00568eaa
    SAHF                                ; 00568eac
    JA 0x00568e53                       ; 00568ead
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    FLD float ptr [ESP + 0x4]           ; 00568eaf
    FCOMP float ptr [ESP + 0x34]        ; 00568eb3
    FNSTSW AX                           ; 00568eb7
    SAHF                                ; 00568eb9
    JA 0x00568e53                       ; 00568eba
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    FLD float ptr [ESP + 0x8]           ; 00568ebc
    FCOMP float ptr [ESP + 0x38]        ; 00568ec0
    FNSTSW AX                           ; 00568ec4
    SAHF                                ; 00568ec6
    JA 0x00568e53                       ; 00568ec7
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    FLD float ptr [ESP + 0xc]           ; 00568ec9
    FCOMP float ptr [ESP + 0x30]        ; 00568ecd
    FNSTSW AX                           ; 00568ed1
    SAHF                                ; 00568ed3
    JC 0x00568e53                       ; 00568ed4
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    FLD float ptr [ESP + 0x10]          ; 00568eda
    FCOMP float ptr [ESP + 0x34]        ; 00568ede
    FNSTSW AX                           ; 00568ee2
    SAHF                                ; 00568ee4
    JC 0x00568e53                       ; 00568ee5
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    FLD float ptr [ESP + 0x14]          ; 00568eeb
    FCOMP float ptr [ESP + 0x38]        ; 00568eef
    FNSTSW AX                           ; 00568ef3
    SAHF                                ; 00568ef5
    JC 0x00568e53                       ; 00568ef6
        ;   XREF to: 00568e53 (CONDITIONAL_JUMP)  ; LAB_00568e53
    MOV EBX,dword ptr [EBX + 0x164]     ; 00568efc
    ADD EBX,0x20                        ; 00568f02
    PUSH EBX                            ; 00568f05
    MOV ECX,dword ptr [0x00600530]      ; 00568f06 | DAT_00600530
    PUSH ECX                            ; 00568f0c
    CALL FUN_004f6ed0                   ; 00568f0d
        ;   XREF to: 004f6ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6ed0()
    ADD ESP,0x8                         ; 00568f12
    ADD ESP,0x48                        ; 00568f15
    POP EDI                             ; 00568f18
    POP ESI                             ; 00568f19
    POP EBX                             ; 00568f1a
    RET                                 ; 00568f1b

