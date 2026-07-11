; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055cc30(undefined4 *param_1,undefined4 *param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0xd8]:8  local_d8
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   FUN_00429220 at 0042943c
;   FUN_0053a760 at 0053a9ee
;   FUN_00544760 at 005447b2
;
; Called Functions:
;   FUN_0055cd70
;   FUN_0055cf10
;   FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055cc30
        ;   Label: FUN_0055cc30
    PUSH EDI                            ; 0055cc31
    PUSH EBP                            ; 0055cc32
    MOV EBP,ESP                         ; 0055cc33
    SUB ESP,0xcc                        ; 0055cc35
    AND ESP,0xfffffff8                  ; 0055cc3b
    MOV EBX,ESI                         ; 0055cc3e
    FLD float ptr [EBP + 0x18]          ; 0055cc40
    FLDZ                                ; 0055cc43
    FXCH                                ; 0055cc45
    FSTP double ptr [ESP]               ; 0055cc47
    FCOMP double ptr [ESP]              ; 0055cc4a
    FNSTSW AX                           ; 0055cc4d
    SAHF                                ; 0055cc4f
    JNC 0x0055cc7f                      ; 0055cc50
        ;   XREF to: 0055cc7f (CONDITIONAL_JUMP)  ; LAB_0055cc7f
    FLD1                                ; 0055cc52
    FCOMP double ptr [ESP]              ; 0055cc54
    FNSTSW AX                           ; 0055cc57
    SAHF                                ; 0055cc59
    JA 0x0055cc8d                       ; 0055cc5a
        ;   XREF to: 0055cc8d (CONDITIONAL_JUMP)  ; LAB_0055cc8d
    MOV ECX,0xc                         ; 0055cc5c
    LEA EDI,[ESP + 0x38]                ; 0055cc61
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055cc65
    MOVSD.REP ES:EDI,ESI                ; 0055cc68
        ;   Label: LAB_0055cc68
    MOV ECX,0xc                         ; 0055cc6a
    LEA ESI,[ESP + 0x38]                ; 0055cc6f
    MOV EDI,EBX                         ; 0055cc73
    MOVSD.REP ES:EDI,ESI                ; 0055cc75
    MOV EAX,EBX                         ; 0055cc77
    MOV ESP,EBP                         ; 0055cc79
    POP EBP                             ; 0055cc7b
    POP EDI                             ; 0055cc7c
    POP EBX                             ; 0055cc7d
    RET                                 ; 0055cc7e
    MOV ECX,0xc                         ; 0055cc7f
        ;   Label: LAB_0055cc7f
    LEA EDI,[ESP + 0x38]                ; 0055cc84
    MOV ESI,dword ptr [EBP + 0x10]      ; 0055cc88
    JMP 0x0055cc68                      ; 0055cc8b
        ;   XREF to: 0055cc68 (UNCONDITIONAL_JUMP)  ; LAB_0055cc68
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055cc8d
        ;   Label: LAB_0055cc8d
    PUSH EDX                            ; 0055cc90
    LEA ESI,[ESP + 0xbc]                ; 0055cc91
    LEA EDI,[ESP + 0x6c]                ; 0055cc98
    CALL FUN_0055cf10                   ; 0055cc9c
        ;   XREF to: 0055cf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cf10()
    ADD ESP,0x4                         ; 0055cca1
    LEA ESI,[ESP + 0xb8]                ; 0055cca4
    MOV ECX,dword ptr [EBP + 0x14]      ; 0055ccab
    MOVSD ES:EDI,ESI                    ; 0055ccae
    MOVSD ES:EDI,ESI                    ; 0055ccaf
    MOVSD ES:EDI,ESI                    ; 0055ccb0
    MOVSD ES:EDI,ESI                    ; 0055ccb1
    PUSH ECX                            ; 0055ccb2
    LEA ESI,[ESP + 0x7c]                ; 0055ccb3
    LEA EDI,[ESP + 0x9c]                ; 0055ccb7
    CALL FUN_0055cf10                   ; 0055ccbe
        ;   XREF to: 0055cf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cf10()
    LEA ESI,[ESP + 0x7c]                ; 0055ccc3
    ADD ESP,0x4                         ; 0055ccc7
    MOVSD ES:EDI,ESI                    ; 0055ccca
    MOVSD ES:EDI,ESI                    ; 0055cccb
    MOVSD ES:EDI,ESI                    ; 0055cccc
    MOVSD ES:EDI,ESI                    ; 0055cccd
    LEA ESI,[ESP + 0x98]                ; 0055ccce
    PUSH dword ptr [EBP + 0x18]         ; 0055ccd5
    PUSH ESI                            ; 0055ccd8
    LEA ESI,[ESP + 0x70]                ; 0055ccd9
    PUSH ESI                            ; 0055ccdd
    LEA ESI,[ESP + 0x94]                ; 0055ccde
    LEA EDI,[ESP + 0xb4]                ; 0055cce5
    CALL FUN_0055d2d0                   ; 0055ccec
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d2d0()
    LEA ESI,[ESP + 0x94]                ; 0055ccf1
    ADD ESP,0xc                         ; 0055ccf8
    MOVSD ES:EDI,ESI                    ; 0055ccfb
    MOVSD ES:EDI,ESI                    ; 0055ccfc
    MOVSD ES:EDI,ESI                    ; 0055ccfd
    MOVSD ES:EDI,ESI                    ; 0055ccfe
    LEA ESI,[ESP + 0xa8]                ; 0055ccff
    PUSH ESI                            ; 0055cd06
    LEA ESI,[ESP + 0xc]                 ; 0055cd07
    PUSH ESI                            ; 0055cd0b
    CALL FUN_0055cd70                   ; 0055cd0c
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cd70()
    ADD ESP,0x8                         ; 0055cd11
    FLD1                                ; 0055cd14
    MOV ESI,dword ptr [EBP + 0x10]      ; 0055cd16
    FSUB double ptr [ESP]               ; 0055cd19
    FLD float ptr [ESI + 0xc]           ; 0055cd1c
    FMUL ST1                            ; 0055cd1f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055cd21
    FLD float ptr [ESI + 0xc]           ; 0055cd24
    FMUL float ptr [EBP + 0x18]         ; 0055cd27
    FADDP                               ; 0055cd2a
    MOV ESI,dword ptr [EBP + 0x10]      ; 0055cd2c
    FSTP float ptr [ESP + 0x14]         ; 0055cd2f
    FLD float ptr [ESI + 0x1c]          ; 0055cd33
    FMUL ST1                            ; 0055cd36
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055cd38
    FLD float ptr [ESI + 0x1c]          ; 0055cd3b
    FMUL float ptr [EBP + 0x18]         ; 0055cd3e
    FADDP                               ; 0055cd41
    MOV ESI,dword ptr [EBP + 0x10]      ; 0055cd43
    FSTP float ptr [ESP + 0x24]         ; 0055cd46
    FMUL float ptr [ESI + 0x2c]         ; 0055cd4a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055cd4d
    FLD float ptr [ESI + 0x2c]          ; 0055cd50
    FMUL float ptr [EBP + 0x18]         ; 0055cd53
    LEA EDI,[ESP + 0x38]                ; 0055cd56
    MOV ECX,0xc                         ; 0055cd5a
    FADDP                               ; 0055cd5f
    LEA ESI,[ESP + 0x8]                 ; 0055cd61
    FSTP float ptr [ESP + 0x34]         ; 0055cd65
    JMP 0x0055cc68                      ; 0055cd69
        ;   XREF to: 0055cc68 (UNCONDITIONAL_JUMP)  ; LAB_0055cc68

