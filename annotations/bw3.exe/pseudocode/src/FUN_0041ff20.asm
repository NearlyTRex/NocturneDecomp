; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041ff20(int param_1,undefined4 param_2,float *param_3)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
;
; XREF[1]:
;   FUN_00518cd0 at 00519e1e
;
; Referenced Globals:
;   undefined4 DAT_005b7661
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408bf0
;   FUN_0041e220
;   FUN_0041f1e0
;   FUN_004201a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ff20
        ;   Label: FUN_0041ff20
    PUSH ESI                            ; 0041ff21
    PUSH EDI                            ; 0041ff22
    PUSH EBP                            ; 0041ff23
    MOV EBP,ESP                         ; 0041ff24
    SUB ESP,0x94                        ; 0041ff26
    AND ESP,0xfffffff8                  ; 0041ff2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ff2f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0041ff32
    PUSH EDX                            ; 0041ff35
    PUSH EBX                            ; 0041ff36
    LEA ESI,[ESP + 0x58]                ; 0041ff37
    CALL FUN_00408bf0                   ; 0041ff3b
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    ADD ESP,0x8                         ; 0041ff40
    LEA EDI,[ESP + 0x5c]                ; 0041ff43
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0041ff47
    LEA ESI,[ESP + 0x50]                ; 0041ff4a
    PUSH ECX                            ; 0041ff4e
    MOVSD ES:EDI,ESI                    ; 0041ff4f
    MOVSD ES:EDI,ESI                    ; 0041ff50
    MOVSD ES:EDI,ESI                    ; 0041ff51
    PUSH EBX                            ; 0041ff52
    LEA ESI,[ESP + 0x70]                ; 0041ff53
    LEA EDI,[ESP + 0x40]                ; 0041ff57
    CALL FUN_00408b40                   ; 0041ff5b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x70]                ; 0041ff60
    ADD ESP,0x8                         ; 0041ff64
    MOVSD ES:EDI,ESI                    ; 0041ff67
    MOVSD ES:EDI,ESI                    ; 0041ff68
    MOVSD ES:EDI,ESI                    ; 0041ff69
    FLD float ptr [ESP + 0x3c]          ; 0041ff6a
    FMUL float ptr [ESP + 0x60]         ; 0041ff6e
    FLD float ptr [ESP + 0x38]          ; 0041ff72
    FMUL float ptr [ESP + 0x5c]         ; 0041ff76
    FADDP                               ; 0041ff7a
    FLD float ptr [ESP + 0x40]          ; 0041ff7c
    FMUL float ptr [ESP + 0x64]         ; 0041ff80
    FADDP                               ; 0041ff84
    FLDZ                                ; 0041ff86
    FCOMPP                              ; 0041ff88
    FNSTSW AX                           ; 0041ff8a
    SAHF                                ; 0041ff8c
    JA 0x0041ff96                       ; 0041ff8d
        ;   XREF to: 0041ff96 (CONDITIONAL_JUMP)  ; LAB_0041ff96
    MOV ESP,EBP                         ; 0041ff8f
        ;   Label: LAB_0041ff8f
    POP EBP                             ; 0041ff91
    POP EDI                             ; 0041ff92
    POP ESI                             ; 0041ff93
    POP EBX                             ; 0041ff94
    RET                                 ; 0041ff95
    PUSH EBX                            ; 0041ff96
        ;   Label: LAB_0041ff96
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041ff97
    LEA ESI,[ESP + 0x24]                ; 0041ff9d
    CALL dword ptr [EAX + 0x1c]         ; 0041ffa1
    ADD ESP,0x4                         ; 0041ffa4
    LEA EAX,[ESP + 0x44]                ; 0041ffa7
    PUSH EAX                            ; 0041ffab
    LEA EAX,[ESP + 0x3c]                ; 0041ffac
    LEA EDI,[ESP + 0xc]                 ; 0041ffb0
    PUSH EAX                            ; 0041ffb4
    LEA EAX,[ESP + 0x64]                ; 0041ffb5
    MOV ECX,0x6                         ; 0041ffb9
    PUSH EAX                            ; 0041ffbe
    LEA EAX,[ESP + 0x14]                ; 0041ffbf
    LEA ESI,[ESP + 0x2c]                ; 0041ffc3
    PUSH EAX                            ; 0041ffc7
    MOVSD.REP ES:EDI,ESI                ; 0041ffc8
    CALL FUN_0041e220                   ; 0041ffca
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e220()
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041ffcf
    FLD float ptr [ESP + 0xa0]          ; 0041ffd6
    ADD ESP,0x10                        ; 0041ffdd
    FLDZ                                ; 0041ffe0
    FXCH                                ; 0041ffe2
    FSTP double ptr [ESP]               ; 0041ffe4
    FCOMP double ptr [ESP]              ; 0041ffe7
    FNSTSW AX                           ; 0041ffea
    SAHF                                ; 0041ffec
    JA 0x0041ff8f                       ; 0041ffed
        ;   XREF to: 0041ff8f (CONDITIONAL_JUMP)  ; LAB_0041ff8f
    FLD1                                ; 0041ffef
    FCOMP double ptr [ESP]              ; 0041fff1
    FNSTSW AX                           ; 0041fff4
    SAHF                                ; 0041fff6
    JBE 0x0041ff8f                      ; 0041fff7
        ;   XREF to: 0041ff8f (CONDITIONAL_JUMP)  ; LAB_0041ff8f
    FLD double ptr [0x005b7661]         ; 0041fff9 | DAT_005b7661
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0041ffff
    FSUB double ptr [ESP]               ; 00420002
    FLD float ptr [EAX]                 ; 00420005
    FXCH                                ; 00420007
    FSTP float ptr [ESP + 0x8c]         ; 00420009
    FMUL float ptr [ESP + 0x8c]         ; 00420010
    FLD float ptr [EAX + 0x4]           ; 00420017
    FMUL float ptr [ESP + 0x8c]         ; 0042001a
    FLD float ptr [EAX + 0x8]           ; 00420021
    FMUL float ptr [ESP + 0x8c]         ; 00420024
    LEA EDI,[ESP + 0x74]                ; 0042002b
    LEA ESI,[ESP + 0x80]                ; 0042002f
    LEA EAX,[EBX + 0x20]                ; 00420036
    FXCH ST2                            ; 00420039
    FSTP float ptr [ESP + 0x80]         ; 0042003b
    FSTP float ptr [ESP + 0x84]         ; 00420042
    FSTP float ptr [ESP + 0x88]         ; 00420049
    MOVSD ES:EDI,ESI                    ; 00420050
    MOVSD ES:EDI,ESI                    ; 00420051
    MOVSD ES:EDI,ESI                    ; 00420052
    PUSH EBX                            ; 00420053
    FLD float ptr [EAX]                 ; 00420054
    FLD float ptr [EAX + 0x4]           ; 00420056
    FLD float ptr [EAX + 0x8]           ; 00420059
    FXCH ST2                            ; 0042005c
    FADD float ptr [ESP + 0x78]         ; 0042005e
    FXCH                                ; 00420062
    FADD float ptr [ESP + 0x7c]         ; 00420064
    FXCH ST2                            ; 00420068
    FADD float ptr [ESP + 0x80]         ; 0042006a
    FXCH                                ; 00420071
    FSTP float ptr [EAX]                ; 00420073
    FXCH                                ; 00420075
    FSTP float ptr [EAX + 0x4]          ; 00420077
    FSTP float ptr [EAX + 0x8]          ; 0042007a
    CALL FUN_0041f1e0                   ; 0042007d
        ;   XREF to: 0041f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f1e0()
    ADD ESP,0x4                         ; 00420082
    PUSH EBX                            ; 00420085
    CALL FUN_004201a0                   ; 00420086
        ;   XREF to: 004201a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004201a0()
    ADD ESP,0x4                         ; 0042008b
    MOV ESP,EBP                         ; 0042008e
    POP EBP                             ; 00420090
    POP EDI                             ; 00420091
    POP ESI                             ; 00420092
    POP EBX                             ; 00420093
    RET                                 ; 00420094

