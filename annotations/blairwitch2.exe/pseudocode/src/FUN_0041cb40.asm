; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cb40(int param_1,undefined4 param_2,float *param_3)
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
; XREF[3]:
;   FUN_00450c60 at 00451aa2
;   FUN_004ad640 at 004ade21
;   FUN_00563060 at 00563d9a
;
; Referenced Globals:
;   undefined4 DAT_005cc671
;
; Called Functions:
;   FUN_00408d30
;   FUN_00408de0
;   FUN_0041af70
;   FUN_0041bf10
;   FUN_0041cda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cb40
        ;   Label: FUN_0041cb40
    PUSH ESI                            ; 0041cb41
    PUSH EDI                            ; 0041cb42
    PUSH EBP                            ; 0041cb43
    MOV EBP,ESP                         ; 0041cb44
    SUB ESP,0x94                        ; 0041cb46
    AND ESP,0xfffffff8                  ; 0041cb4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041cb4f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0041cb52
    PUSH EDX                            ; 0041cb55
    PUSH EBX                            ; 0041cb56
    LEA ESI,[ESP + 0x58]                ; 0041cb57
    CALL FUN_00408de0                   ; 0041cb5b
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 0041cb60
    LEA EDI,[ESP + 0x5c]                ; 0041cb63
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0041cb67
    LEA ESI,[ESP + 0x50]                ; 0041cb6a
    PUSH ECX                            ; 0041cb6e
    MOVSD ES:EDI,ESI                    ; 0041cb6f
    MOVSD ES:EDI,ESI                    ; 0041cb70
    MOVSD ES:EDI,ESI                    ; 0041cb71
    PUSH EBX                            ; 0041cb72
    LEA ESI,[ESP + 0x70]                ; 0041cb73
    LEA EDI,[ESP + 0x40]                ; 0041cb77
    CALL FUN_00408d30                   ; 0041cb7b
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d30()
    LEA ESI,[ESP + 0x70]                ; 0041cb80
    ADD ESP,0x8                         ; 0041cb84
    MOVSD ES:EDI,ESI                    ; 0041cb87
    MOVSD ES:EDI,ESI                    ; 0041cb88
    MOVSD ES:EDI,ESI                    ; 0041cb89
    FLD float ptr [ESP + 0x3c]          ; 0041cb8a
    FMUL float ptr [ESP + 0x60]         ; 0041cb8e
    FLD float ptr [ESP + 0x38]          ; 0041cb92
    FMUL float ptr [ESP + 0x5c]         ; 0041cb96
    FADDP                               ; 0041cb9a
    FLD float ptr [ESP + 0x40]          ; 0041cb9c
    FMUL float ptr [ESP + 0x64]         ; 0041cba0
    FADDP                               ; 0041cba4
    FLDZ                                ; 0041cba6
    FCOMPP                              ; 0041cba8
    FNSTSW AX                           ; 0041cbaa
    SAHF                                ; 0041cbac
    JA 0x0041cbb6                       ; 0041cbad
        ;   XREF to: 0041cbb6 (CONDITIONAL_JUMP)  ; LAB_0041cbb6
    MOV ESP,EBP                         ; 0041cbaf
        ;   Label: LAB_0041cbaf
    POP EBP                             ; 0041cbb1
    POP EDI                             ; 0041cbb2
    POP ESI                             ; 0041cbb3
    POP EBX                             ; 0041cbb4
    RET                                 ; 0041cbb5
    PUSH EBX                            ; 0041cbb6
        ;   Label: LAB_0041cbb6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041cbb7
    LEA ESI,[ESP + 0x24]                ; 0041cbbd
    CALL dword ptr [EAX + 0x24]         ; 0041cbc1
    ADD ESP,0x4                         ; 0041cbc4
    LEA EAX,[ESP + 0x44]                ; 0041cbc7
    PUSH EAX                            ; 0041cbcb
    LEA EAX,[ESP + 0x3c]                ; 0041cbcc
    LEA EDI,[ESP + 0xc]                 ; 0041cbd0
    PUSH EAX                            ; 0041cbd4
    LEA EAX,[ESP + 0x64]                ; 0041cbd5
    MOV ECX,0x6                         ; 0041cbd9
    PUSH EAX                            ; 0041cbde
    LEA EAX,[ESP + 0x14]                ; 0041cbdf
    LEA ESI,[ESP + 0x2c]                ; 0041cbe3
    PUSH EAX                            ; 0041cbe7
    MOVSD.REP ES:EDI,ESI                ; 0041cbe8
    CALL FUN_0041af70                   ; 0041cbea
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0041af70()
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041cbef
    FLD float ptr [ESP + 0xa0]          ; 0041cbf6
    ADD ESP,0x10                        ; 0041cbfd
    FLDZ                                ; 0041cc00
    FXCH                                ; 0041cc02
    FSTP double ptr [ESP]               ; 0041cc04
    FCOMP double ptr [ESP]              ; 0041cc07
    FNSTSW AX                           ; 0041cc0a
    SAHF                                ; 0041cc0c
    JA 0x0041cbaf                       ; 0041cc0d
        ;   XREF to: 0041cbaf (CONDITIONAL_JUMP)  ; LAB_0041cbaf
    FLD1                                ; 0041cc0f
    FCOMP double ptr [ESP]              ; 0041cc11
    FNSTSW AX                           ; 0041cc14
    SAHF                                ; 0041cc16
    JBE 0x0041cbaf                      ; 0041cc17
        ;   XREF to: 0041cbaf (CONDITIONAL_JUMP)  ; LAB_0041cbaf
    FLD double ptr [0x005cc671]         ; 0041cc19 | DAT_005cc671
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0041cc1f
    FSUB double ptr [ESP]               ; 0041cc22
    FLD float ptr [EAX]                 ; 0041cc25
    FXCH                                ; 0041cc27
    FSTP float ptr [ESP + 0x8c]         ; 0041cc29
    FMUL float ptr [ESP + 0x8c]         ; 0041cc30
    FLD float ptr [EAX + 0x4]           ; 0041cc37
    FMUL float ptr [ESP + 0x8c]         ; 0041cc3a
    FLD float ptr [EAX + 0x8]           ; 0041cc41
    FMUL float ptr [ESP + 0x8c]         ; 0041cc44
    LEA EDI,[ESP + 0x74]                ; 0041cc4b
    LEA ESI,[ESP + 0x80]                ; 0041cc4f
    LEA EAX,[EBX + 0x20]                ; 0041cc56
    FXCH ST2                            ; 0041cc59
    FSTP float ptr [ESP + 0x80]         ; 0041cc5b
    FSTP float ptr [ESP + 0x84]         ; 0041cc62
    FSTP float ptr [ESP + 0x88]         ; 0041cc69
    MOVSD ES:EDI,ESI                    ; 0041cc70
    MOVSD ES:EDI,ESI                    ; 0041cc71
    MOVSD ES:EDI,ESI                    ; 0041cc72
    PUSH EBX                            ; 0041cc73
    FLD float ptr [EAX]                 ; 0041cc74
    FLD float ptr [EAX + 0x4]           ; 0041cc76
    FLD float ptr [EAX + 0x8]           ; 0041cc79
    FXCH ST2                            ; 0041cc7c
    FADD float ptr [ESP + 0x78]         ; 0041cc7e
    FXCH                                ; 0041cc82
    FADD float ptr [ESP + 0x7c]         ; 0041cc84
    FXCH ST2                            ; 0041cc88
    FADD float ptr [ESP + 0x80]         ; 0041cc8a
    FXCH                                ; 0041cc91
    FSTP float ptr [EAX]                ; 0041cc93
    FXCH                                ; 0041cc95
    FSTP float ptr [EAX + 0x4]          ; 0041cc97
    FSTP float ptr [EAX + 0x8]          ; 0041cc9a
    CALL FUN_0041bf10                   ; 0041cc9d
        ;   XREF to: 0041bf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bf10()
    ADD ESP,0x4                         ; 0041cca2
    PUSH EBX                            ; 0041cca5
    CALL FUN_0041cda0                   ; 0041cca6
        ;   XREF to: 0041cda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cda0()
    ADD ESP,0x4                         ; 0041ccab
    MOV ESP,EBP                         ; 0041ccae
    POP EBP                             ; 0041ccb0
    POP EDI                             ; 0041ccb1
    POP ESI                             ; 0041ccb2
    POP EBX                             ; 0041ccb3
    RET                                 ; 0041ccb4

