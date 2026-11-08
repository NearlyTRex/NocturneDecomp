; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488ea0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x40]:1  local_40
;
; XREF[1]:
;   FUN_00487eb0 at 004884ca
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488ea0
        ;   Label: FUN_00488ea0
    PUSH EDI                            ; 00488ea1
    PUSH EBP                            ; 00488ea2
    SUB ESP,0x4c                        ; 00488ea3
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00488ea6
    MOV EBX,ESI                         ; 00488eaa
    PUSH EBP                            ; 00488eac
    MOV EAX,dword ptr [EBP + 0x154]     ; 00488ead
    LEA ESI,[ESP + 0x1c]                ; 00488eb3
    LEA EDI,[ESP + 0x4]                 ; 00488eb7
    CALL dword ptr [EAX + 0x1c]         ; 00488ebb
    MOV ECX,0x6                         ; 00488ebe
    LEA ESI,[ESP + 0x1c]                ; 00488ec3
    ADD ESP,0x4                         ; 00488ec7
    MOVSD.REP ES:EDI,ESI                ; 00488eca
    PUSH dword ptr [ESP + 0xc]          ; 00488ecc
    PUSH dword ptr [ESP + 0x4]          ; 00488ed0
    CALL FUN_0040ce40                   ; 00488ed4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x50],EAX      ; 00488ed9
    FLD float ptr [ESP + 0x50]          ; 00488edd
    ADD ESP,0x8                         ; 00488ee1
    PUSH dword ptr [ESP + 0x10]         ; 00488ee4
    PUSH dword ptr [ESP + 0x8]          ; 00488ee8
    FSTP float ptr [ESP + 0x38]         ; 00488eec
    CALL FUN_0040ce40                   ; 00488ef0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x50],EAX      ; 00488ef5
    FLD float ptr [ESP + 0x50]          ; 00488ef9
    ADD ESP,0x8                         ; 00488efd
    PUSH dword ptr [ESP + 0x14]         ; 00488f00
    PUSH dword ptr [ESP + 0xc]          ; 00488f04
    FSTP float ptr [ESP + 0x3c]         ; 00488f08
    CALL FUN_0040ce40                   ; 00488f0c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x50],EAX      ; 00488f11
    FLD float ptr [ESP + 0x50]          ; 00488f15
    ADD ESP,0x8                         ; 00488f19
    LEA ESI,[ESP + 0x30]                ; 00488f1c
    PUSH ESI                            ; 00488f20
    MOV EDI,EBX                         ; 00488f21
    LEA ESI,[ESP + 0x40]                ; 00488f23
    PUSH EBP                            ; 00488f27
    FSTP float ptr [ESP + 0x40]         ; 00488f28
    CALL FUN_00408b80                   ; 00488f2c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x44]                ; 00488f31
    ADD ESP,0x8                         ; 00488f35
    MOVSD ES:EDI,ESI                    ; 00488f38
    MOVSD ES:EDI,ESI                    ; 00488f39
    MOVSD ES:EDI,ESI                    ; 00488f3a
    MOV EAX,EBX                         ; 00488f3b
    ADD ESP,0x4c                        ; 00488f3d
    POP EBP                             ; 00488f40
    POP EDI                             ; 00488f41
    POP EBX                             ; 00488f42
    RET                                 ; 00488f43

