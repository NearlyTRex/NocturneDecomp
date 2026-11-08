; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408de0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[93]:
;   FUN_004093a0 at 004094d2
;   FUN_0040a050 at 0040a609
;   FUN_00410170 at 004101b4
;   FUN_0041cb40 at 0041cb5b
;   FUN_0041cda0 at 0041cdc9
;   FUN_00423000 at 0042307c
;   FUN_00423850 at 00423868
;   FUN_00424c80 at 00424df0
;   FUN_00427bf0 at 00427c1a
;   FUN_00427c80 at 00427cb4
;   ... and 83 more
;
; Called Functions:
;   FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408de0
        ;   Label: FUN_00408de0
    PUSH EDI                            ; 00408de1
    SUB ESP,0x24                        ; 00408de2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00408de5
    MOV EBX,ESI                         ; 00408de9
    MOV ESI,dword ptr [ESP + 0x34]      ; 00408deb
    FLD float ptr [ESI + 0x4]           ; 00408def
    FLD float ptr [ESI + 0x8]           ; 00408df2
    FLD float ptr [ESI]                 ; 00408df5
    LEA EAX,[EDX + 0x20]                ; 00408df7
    MOV EDI,ESP                         ; 00408dfa
    LEA ESI,[ESP + 0xc]                 ; 00408dfc
    FSUB float ptr [EAX]                ; 00408e00
    FXCH ST2                            ; 00408e02
    FSUB float ptr [EAX + 0x4]          ; 00408e04
    FXCH                                ; 00408e07
    FSUB float ptr [EAX + 0x8]          ; 00408e09
    FXCH ST2                            ; 00408e0c
    FSTP float ptr [ESP + 0xc]          ; 00408e0e
    FSTP float ptr [ESP + 0x10]         ; 00408e12
    MOV EAX,ESP                         ; 00408e16
    FSTP float ptr [ESP + 0x14]         ; 00408e18
    PUSH EAX                            ; 00408e1c
    LEA EAX,[EDX + 0x3c]                ; 00408e1d
    MOVSD ES:EDI,ESI                    ; 00408e20
    MOVSD ES:EDI,ESI                    ; 00408e21
    MOVSD ES:EDI,ESI                    ; 00408e22
    PUSH EAX                            ; 00408e23
    LEA ESI,[ESP + 0x20]                ; 00408e24
    MOV EDI,EBX                         ; 00408e28
    CALL FUN_004495a0                   ; 00408e2a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004495a0()
    LEA ESI,[ESP + 0x20]                ; 00408e2f
    ADD ESP,0x8                         ; 00408e33
    MOVSD ES:EDI,ESI                    ; 00408e36
    MOVSD ES:EDI,ESI                    ; 00408e37
    MOVSD ES:EDI,ESI                    ; 00408e38
    MOV EAX,EBX                         ; 00408e39
    ADD ESP,0x24                        ; 00408e3b
    POP EDI                             ; 00408e3e
    POP EBX                             ; 00408e3f
    RET                                 ; 00408e40

