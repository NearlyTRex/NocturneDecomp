; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004faef0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052d0e0 at 0052d245
;
; Referenced Globals:
;   undefined4 DAT_005fa1b0
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_004697a0
;   FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faef0
        ;   Label: FUN_004faef0
    PUSH ESI                            ; 004faef1
    PUSH EDI                            ; 004faef2
    PUSH EBP                            ; 004faef3
    SUB ESP,0x78                        ; 004faef4
    MOV ESI,dword ptr [0x0060b280]      ; 004faef7 | DAT_0060b280
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004faefd
    LEA EBX,[ESP + 0x54]                ; 004faf04
    MOV EAX,EDI                         ; 004faf08
    MOV EDX,dword ptr [ESI]             ; 004faf0a | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 004faf0c
    FMUL float ptr [0x005fa1b0]         ; 004faf0e | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004faf14
    FLD float ptr [EAX + 0x4]           ; 004faf16
    FMUL float ptr [0x005fa1b0]         ; 004faf19 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004faf1f
    FLD float ptr [EAX + 0x8]           ; 004faf22
    FMUL float ptr [0x005fa1b0]         ; 004faf25 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004faf2b
    LEA EAX,[ESP + 0x54]                ; 004faf2e
    PUSH EAX                            ; 004faf32
    PUSH EDX                            ; 004faf33
    CALL FUN_0055d9ec                   ; 004faf34
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    MOV ESI,dword ptr [0x0060b280]      ; 004faf39 | DAT_0060b280
    MOV EAX,dword ptr [ESI]             ; 004faf3f | DAT_01ba5c50
    ADD ESP,0x8                         ; 004faf41
    LEA EDX,[EAX + 0x30]                ; 004faf44
    LEA EBX,[ESP + 0x48]                ; 004faf47
    LEA EAX,[EDI + 0xc]                 ; 004faf4b
    FLD float ptr [EAX]                 ; 004faf4e
    FMUL float ptr [0x005fa1b0]         ; 004faf50 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004faf56
    FLD float ptr [EAX + 0x4]           ; 004faf58
    FMUL float ptr [0x005fa1b0]         ; 004faf5b | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004faf61
    FLD float ptr [EAX + 0x8]           ; 004faf64
    FMUL float ptr [0x005fa1b0]         ; 004faf67 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004faf6d
    LEA EAX,[ESP + 0x48]                ; 004faf70
    PUSH EAX                            ; 004faf74
    PUSH EDX                            ; 004faf75
    CALL FUN_0055d9ec                   ; 004faf76
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    MOV ESI,dword ptr [0x0060b280]      ; 004faf7b | DAT_0060b280
    MOV EAX,dword ptr [ESI]             ; 004faf81 | DAT_01ba5c50
    ADD ESP,0x8                         ; 004faf83
    LEA EDX,[EAX + 0x60]                ; 004faf86
    LEA EBX,[ESP + 0x6c]                ; 004faf89
    LEA EAX,[EDI + 0x18]                ; 004faf8d
    FLD float ptr [EAX]                 ; 004faf90
    FMUL float ptr [0x005fa1b0]         ; 004faf92 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004faf98
    FLD float ptr [EAX + 0x4]           ; 004faf9a
    FMUL float ptr [0x005fa1b0]         ; 004faf9d | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fafa3
    FLD float ptr [EAX + 0x8]           ; 004fafa6
    FMUL float ptr [0x005fa1b0]         ; 004fafa9 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fafaf
    LEA EAX,[ESP + 0x6c]                ; 004fafb2
    PUSH EAX                            ; 004fafb6
    PUSH EDX                            ; 004fafb7
    CALL FUN_0055d9ec                   ; 004fafb8
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    MOV ESI,dword ptr [0x0060b280]      ; 004fafbd | DAT_0060b280
    MOV EAX,dword ptr [ESI]             ; 004fafc3 | DAT_01ba5c50
    ADD ESP,0x8                         ; 004fafc5
    LEA EDX,[EAX + 0x90]                ; 004fafc8
    LEA EBX,[ESP + 0x60]                ; 004fafce
    LEA EAX,[EDI + 0x24]                ; 004fafd2
    FLD float ptr [EAX]                 ; 004fafd5
    FMUL float ptr [0x005fa1b0]         ; 004fafd7 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fafdd
    FLD float ptr [EAX + 0x4]           ; 004fafdf
    FMUL float ptr [0x005fa1b0]         ; 004fafe2 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fafe8
    FLD float ptr [EAX + 0x8]           ; 004fafeb
    FMUL float ptr [0x005fa1b0]         ; 004fafee | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004faff4
    LEA EAX,[ESP + 0x60]                ; 004faff7
    PUSH EAX                            ; 004faffb
    PUSH EDX                            ; 004faffc
    CALL FUN_0055d9ec                   ; 004faffd
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    MOV ESI,dword ptr [0x0060b280]      ; 004fb002 | DAT_0060b280
    ADD ESP,0x8                         ; 004fb008
    XOR EAX,EAX                         ; 004fb00b
    MOV EDX,ESI                         ; 004fb00d
    MOV ECX,dword ptr [ESI]             ; 004fb00f | DAT_01ba5c50
        ;   Label: LAB_004fb00f
    SHL dword ptr [ECX + EAX*0x1],0x4   ; 004fb011
    MOV ECX,dword ptr [ESI]             ; 004fb015 | DAT_01ba5c50
    SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4 ; 004fb017
    MOV ECX,dword ptr [ESI]             ; 004fb01c | DAT_01ba5c50
    SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4 ; 004fb01e
    MOV ECX,dword ptr [ESI]             ; 004fb023 | DAT_01ba5c50
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc] ; 004fb025
    ADD EAX,0x30                        ; 004fb029
    SHR EBX,0x4                         ; 004fb02c
    MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX ; 004fb02f
    CMP EAX,0xc0                        ; 004fb033
    JNZ 0x004fb00f                      ; 004fb038
        ;   XREF to: 004fb00f (CONDITIONAL_JUMP)  ; LAB_004fb00f
    MOV EDI,0x4                         ; 004fb03a
    MOV EAX,0x2                         ; 004fb03f
    MOV ECX,0x3                         ; 004fb044
    MOV dword ptr [0x0060b280],ESI      ; 004fb049 | DAT_0060b280
    XOR EBP,EBP                         ; 004fb04f
    MOV dword ptr [ESP + 0x4],EDI       ; 004fb051
    MOV dword ptr [ESP + 0x14],EBP      ; 004fb055
    MOV dword ptr [ESP + 0x10],EBP      ; 004fb059
    MOV dword ptr [ESP + 0xc],EBP       ; 004fb05d
    MOV dword ptr [ESP + 0x30],EAX      ; 004fb061
    MOV EAX,ESP                         ; 004fb065
    MOV dword ptr [ESP + 0x8],EBP       ; 004fb067
    PUSH EAX                            ; 004fb06b
    MOV dword ptr [ESP + 0x1c],EBP      ; 004fb06c
    MOV EBP,0x1                         ; 004fb070
    PUSH ESI                            ; 004fb075 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x44],ECX      ; 004fb076
    MOV dword ptr [ESP + 0x2c],EBP      ; 004fb07a
    CALL FUN_004697a0                   ; 004fb07e
        ;   XREF to: 004697a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004697a0()
    MOV ESI,dword ptr [0x0060b280]      ; 004fb083 | DAT_0060b280
    ADD ESP,0x8                         ; 004fb089
    ADD ESP,0x78                        ; 004fb08c
    POP EBP                             ; 004fb08f
    POP EDI                             ; 004fb090
    POP ESI                             ; 004fb091
    POP EBX                             ; 004fb092
    RET                                 ; 004fb093

