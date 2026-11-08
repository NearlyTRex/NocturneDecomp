; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041bf10(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[4]:
;   FUN_0041be70 at 0041bef3
;   FUN_0041cb40 at 0041cc9d
;   FUN_0041cd00 at 0041cd13
;   FUN_0041ce90 at 0041cf07
;
; Referenced Globals:
;   undefined4 DAT_005cc515
;   undefined4 DAT_0078a123
;
; Called Functions:
;   FUN_00408d70
;   FUN_005b1c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bf10
        ;   Label: FUN_0041bf10
    SUB ESP,0x90                        ; 0041bf11
    MOV EBX,dword ptr [ESP + 0x98]      ; 0041bf17
    FLD float ptr [EBX + 0x4ec]         ; 0041bf1e
    FLDZ                                ; 0041bf24
    MOV dword ptr [EBX + 0x744],0x0     ; 0041bf26
    FCOMPP                              ; 0041bf30
    FNSTSW AX                           ; 0041bf32
    SAHF                                ; 0041bf34
    JNC 0x0041bf59                      ; 0041bf35
        ;   XREF to: 0041bf59 (CONDITIONAL_JUMP)  ; LAB_0041bf59
    CMP dword ptr [EBX + 0x68],0x78a123 ; 0041bf37 | DAT_0078a123
    JNZ 0x0041bf59                      ; 0041bf3e
        ;   XREF to: 0041bf59 (CONDITIONAL_JUMP)  ; LAB_0041bf59
    LEA EAX,[EBX + 0x2b4]               ; 0041bf40
    CMP dword ptr [EAX + 0x178],0x0     ; 0041bf46
    JNZ 0x0041bf61                      ; 0041bf4d
        ;   XREF to: 0041bf61 (CONDITIONAL_JUMP)  ; LAB_0041bf61
    MOV dword ptr [EBX + 0x744],0xffffffff ; 0041bf4f
    ADD ESP,0x90                        ; 0041bf59
        ;   Label: LAB_0041bf59
    POP EBX                             ; 0041bf5f
    RET                                 ; 0041bf60
    PUSH EDI                            ; 0041bf61
        ;   Label: LAB_0041bf61
    PUSH ESI                            ; 0041bf62
    PUSH EBX                            ; 0041bf63
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041bf64
    LEA ESI,[ESP + 0xc]                 ; 0041bf6a
    LEA EDI,[ESP + 0x24]                ; 0041bf6e
    CALL dword ptr [EAX + 0x24]         ; 0041bf72
    MOV ECX,0x6                         ; 0041bf75
    LEA ESI,[ESP + 0xc]                 ; 0041bf7a
    ADD ESP,0x4                         ; 0041bf7e
    MOVSD.REP ES:EDI,ESI                ; 0041bf81
    FLD float ptr [ESP + 0x20]          ; 0041bf83
    FLD float ptr [ESP + 0x24]          ; 0041bf87
    FLD float ptr [ESP + 0x28]          ; 0041bf8b
    LEA EDI,[ESP + 0x80]                ; 0041bf8f
    LEA ESI,[ESP + 0x8c]                ; 0041bf96
    FXCH ST2                            ; 0041bf9d
    FADD float ptr [ESP + 0x2c]         ; 0041bf9f
    FXCH                                ; 0041bfa3
    FADD float ptr [ESP + 0x30]         ; 0041bfa5
    FXCH ST2                            ; 0041bfa9
    FADD float ptr [ESP + 0x34]         ; 0041bfab
    FXCH                                ; 0041bfaf
    FSTP float ptr [ESP + 0x8c]         ; 0041bfb1
    FXCH                                ; 0041bfb8
    FSTP float ptr [ESP + 0x90]         ; 0041bfba
    FSTP float ptr [ESP + 0x94]         ; 0041bfc1
    MOVSD ES:EDI,ESI                    ; 0041bfc8
    MOVSD ES:EDI,ESI                    ; 0041bfc9
    MOVSD ES:EDI,ESI                    ; 0041bfca
    FLD float ptr [0x005cc515]          ; 0041bfcb | DAT_005cc515
    FLD float ptr [ESP + 0x80]          ; 0041bfd1
    FMUL ST1                            ; 0041bfd8
    FLD float ptr [ESP + 0x84]          ; 0041bfda
    FMUL ST2                            ; 0041bfe1
    FLD float ptr [ESP + 0x88]          ; 0041bfe3
    FMULP ST3                           ; 0041bfea
    LEA EDI,[ESP + 0x74]                ; 0041bfec
    LEA ESI,[ESP + 0x68]                ; 0041bff0
    FXCH                                ; 0041bff4
    FSTP float ptr [ESP + 0x68]         ; 0041bff6
    FSTP float ptr [ESP + 0x6c]         ; 0041bffa
    FSTP float ptr [ESP + 0x70]         ; 0041bffe
    MOVSD ES:EDI,ESI                    ; 0041c002
    MOVSD ES:EDI,ESI                    ; 0041c003
    MOVSD ES:EDI,ESI                    ; 0041c004
    LEA ESI,[ESP + 0x74]                ; 0041c005
    PUSH ESI                            ; 0041c009
    PUSH EBX                            ; 0041c00a
    LEA ESI,[ESP + 0x64]                ; 0041c00b
    LEA EDI,[ESP + 0x58]                ; 0041c00f
    CALL FUN_00408d70                   ; 0041c013
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0041c018
    LEA ESI,[ESP + 0x5c]                ; 0041c01b
    FLD float ptr [ESP + 0x2c]          ; 0041c01f
    FLD float ptr [ESP + 0x30]          ; 0041c023
    MOVSD ES:EDI,ESI                    ; 0041c027
    MOVSD ES:EDI,ESI                    ; 0041c028
    MOVSD ES:EDI,ESI                    ; 0041c029
    FLD float ptr [ESP + 0x34]          ; 0041c02a
    LEA EDI,[ESP + 0x44]                ; 0041c02e
    LEA ESI,[ESP + 0x38]                ; 0041c032
    FXCH ST2                            ; 0041c036
    FSUB float ptr [ESP + 0x20]         ; 0041c038
    FXCH                                ; 0041c03c
    FSUB float ptr [ESP + 0x24]         ; 0041c03e
    FXCH ST2                            ; 0041c042
    FSUB float ptr [ESP + 0x28]         ; 0041c044
    FXCH                                ; 0041c048
    FSTP float ptr [ESP + 0x38]         ; 0041c04a
    FXCH                                ; 0041c04e
    FSTP float ptr [ESP + 0x3c]         ; 0041c050
    FSTP float ptr [ESP + 0x40]         ; 0041c054
    MOVSD ES:EDI,ESI                    ; 0041c058
    MOVSD ES:EDI,ESI                    ; 0041c059
    MOVSD ES:EDI,ESI                    ; 0041c05a
    LEA EAX,[ESP + 0x44]                ; 0041c05b
    PUSH dword ptr [EBX + 0x4ec]        ; 0041c05f
    PUSH EAX                            ; 0041c065
    LEA EAX,[EBX + 0x30]                ; 0041c066
    PUSH EAX                            ; 0041c069
    LEA EAX,[ESP + 0x5c]                ; 0041c06a
    PUSH EAX                            ; 0041c06e
    ADD EBX,0x4f0                       ; 0041c06f
    PUSH EBX                            ; 0041c075
    CALL FUN_005b1c80                   ; 0041c076
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c80()
    ADD ESP,0x14                        ; 0041c07b
    POP ESI                             ; 0041c07e
    POP EDI                             ; 0041c07f
    ADD ESP,0x90                        ; 0041c080
    POP EBX                             ; 0041c086
    RET                                 ; 0041c087

