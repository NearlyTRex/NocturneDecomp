; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408bb0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[92]:
;   FUN_00409170 at 0040929f
;   FUN_00409f20 at 0040a2fa
;   FUN_0040fcf0 at 0040fd34
;   FUN_00422ab0 at 00422acb
;   FUN_00422d10 at 00422d39
;   FUN_00428ae0 at 0042a18c
;   FUN_0042ccf0 at 0042cd6c
;   FUN_0042d540 at 0042d558
;   FUN_0042ea10 at 0042eb80
;   FUN_00431620 at 0043164a
;   ... and 82 more
;
; Called Functions:
;   FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408bb0
        ;   Label: FUN_00408bb0
    PUSH EDI                            ; 00408bb1
    SUB ESP,0x24                        ; 00408bb2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00408bb5
    MOV EBX,ESI                         ; 00408bb9
    MOV ESI,dword ptr [ESP + 0x34]      ; 00408bbb
    FLD float ptr [ESI + 0x4]           ; 00408bbf
    FLD float ptr [ESI + 0x8]           ; 00408bc2
    FLD float ptr [ESI]                 ; 00408bc5
    LEA EAX,[EDX + 0x20]                ; 00408bc7
    MOV EDI,ESP                         ; 00408bca
    LEA ESI,[ESP + 0xc]                 ; 00408bcc
    FSUB float ptr [EAX]                ; 00408bd0
    FXCH ST2                            ; 00408bd2
    FSUB float ptr [EAX + 0x4]          ; 00408bd4
    FXCH                                ; 00408bd7
    FSUB float ptr [EAX + 0x8]          ; 00408bd9
    FXCH ST2                            ; 00408bdc
    FSTP float ptr [ESP + 0xc]          ; 00408bde
    FSTP float ptr [ESP + 0x10]         ; 00408be2
    MOV EAX,ESP                         ; 00408be6
    FSTP float ptr [ESP + 0x14]         ; 00408be8
    PUSH EAX                            ; 00408bec
    LEA EAX,[EDX + 0x3c]                ; 00408bed
    MOVSD ES:EDI,ESI                    ; 00408bf0
    MOVSD ES:EDI,ESI                    ; 00408bf1
    MOVSD ES:EDI,ESI                    ; 00408bf2
    PUSH EAX                            ; 00408bf3
    LEA ESI,[ESP + 0x20]                ; 00408bf4
    MOV EDI,EBX                         ; 00408bf8
    CALL FUN_0045f700                   ; 00408bfa
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0x20]                ; 00408bff
    ADD ESP,0x8                         ; 00408c03
    MOVSD ES:EDI,ESI                    ; 00408c06
    MOVSD ES:EDI,ESI                    ; 00408c07
    MOVSD ES:EDI,ESI                    ; 00408c08
    MOV EAX,EBX                         ; 00408c09
    ADD ESP,0x24                        ; 00408c0b
    POP EDI                             ; 00408c0e
    POP EBX                             ; 00408c0f
    RET                                 ; 00408c10

