; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041ef90(int param_1,undefined4 param_2,float *param_3)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[2]:
;   FUN_00495a20 at 00496164
;   FUN_00535900 at 0053646a
;
; Referenced Globals:
;   undefined4 DAT_0057995d
;
; Called Functions:
;   FUN_0040a220
;   FUN_0040a290
;   FUN_0041d550
;   FUN_0041e4d0
;   FUN_0041f190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ef90
        ;   Label: FUN_0041ef90
    PUSH ESI                            ; 0041ef91
    PUSH EBP                            ; 0041ef92
    MOV EBP,ESP                         ; 0041ef93
    SUB ESP,0x58                        ; 0041ef95
    AND ESP,0xfffffff8                  ; 0041ef98
    MOV EBX,dword ptr [EBP + 0x10]      ; 0041ef9b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0041ef9e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041efa1
    PUSH EDX                            ; 0041efa4
    LEA EAX,[ESP + 0x24]                ; 0041efa5
    PUSH EAX                            ; 0041efa9
    PUSH EBX                            ; 0041efaa
    CALL FUN_0040a290                   ; 0041efab
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 0041efb0
    PUSH ESI                            ; 0041efb3
    LEA EAX,[ESP + 0x48]                ; 0041efb4
    PUSH EAX                            ; 0041efb8
    PUSH EBX                            ; 0041efb9
    CALL FUN_0040a220                   ; 0041efba
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a220()
    ADD ESP,0xc                         ; 0041efbf
    FLD float ptr [ESP + 0x48]          ; 0041efc2
    FMUL float ptr [ESP + 0x24]         ; 0041efc6
    FLD float ptr [ESP + 0x44]          ; 0041efca
    FMUL float ptr [ESP + 0x20]         ; 0041efce
    FADDP                               ; 0041efd2
    FLD float ptr [ESP + 0x4c]          ; 0041efd4
    FMUL float ptr [ESP + 0x28]         ; 0041efd8
    FADDP                               ; 0041efdc
    FLDZ                                ; 0041efde
    FCOMPP                              ; 0041efe0
    FNSTSW AX                           ; 0041efe2
    SAHF                                ; 0041efe4
    JA 0x0041efed                       ; 0041efe5
        ;   XREF to: 0041efed (CONDITIONAL_JUMP)  ; LAB_0041efed
    MOV ESP,EBP                         ; 0041efe7
        ;   Label: LAB_0041efe7
    POP EBP                             ; 0041efe9
    POP ESI                             ; 0041efea
    POP EBX                             ; 0041efeb
    RET                                 ; 0041efec
    LEA EAX,[ESP + 0x8]                 ; 0041efed
        ;   Label: LAB_0041efed
    PUSH EAX                            ; 0041eff1
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0041eff2
    PUSH EBX                            ; 0041eff8
    CALL dword ptr [EDX + 0x14]         ; 0041eff9
    ADD ESP,0x8                         ; 0041effc
    LEA EAX,[ESP + 0x2c]                ; 0041efff
    PUSH EAX                            ; 0041f003
    LEA EAX,[ESP + 0x48]                ; 0041f004
    PUSH EAX                            ; 0041f008
    LEA EAX,[ESP + 0x28]                ; 0041f009
    PUSH EAX                            ; 0041f00d
    LEA EAX,[ESP + 0x14]                ; 0041f00e
    PUSH EAX                            ; 0041f012
    CALL FUN_0041d550                   ; 0041f013
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d550()
    MOV dword ptr [ESP + 0x64],EAX      ; 0041f018
    FLD float ptr [ESP + 0x64]          ; 0041f01c
    ADD ESP,0x10                        ; 0041f020
    FLDZ                                ; 0041f023
    FXCH                                ; 0041f025
    FSTP double ptr [ESP]               ; 0041f027
    FCOMP double ptr [ESP]              ; 0041f02a
    FNSTSW AX                           ; 0041f02d
    SAHF                                ; 0041f02f
    JA 0x0041efe7                       ; 0041f030
        ;   XREF to: 0041efe7 (CONDITIONAL_JUMP)  ; LAB_0041efe7
    FLD1                                ; 0041f032
    FCOMP double ptr [ESP]              ; 0041f034
    FNSTSW AX                           ; 0041f037
    SAHF                                ; 0041f039
    JBE 0x0041efe7                      ; 0041f03a
        ;   XREF to: 0041efe7 (CONDITIONAL_JUMP)  ; LAB_0041efe7
    FLD double ptr [0x0057995d]         ; 0041f03c | DAT_0057995d
    FSUB double ptr [ESP]               ; 0041f042
    FLD float ptr [ESI]                 ; 0041f045
    FXCH                                ; 0041f047
    FSTP float ptr [ESP + 0x50]         ; 0041f049
    FMUL float ptr [ESP + 0x50]         ; 0041f04d
    FSTP float ptr [ESP + 0x38]         ; 0041f051
    FLD float ptr [ESI + 0x4]           ; 0041f055
    FMUL float ptr [ESP + 0x50]         ; 0041f058
    FSTP float ptr [ESP + 0x3c]         ; 0041f05c
    FLD float ptr [ESI + 0x8]           ; 0041f060
    FMUL float ptr [ESP + 0x50]         ; 0041f063
    LEA EAX,[EBX + 0x20]                ; 0041f067
    FSTP float ptr [ESP + 0x40]         ; 0041f06a
    FLD float ptr [EAX]                 ; 0041f06e
    FADD float ptr [ESP + 0x38]         ; 0041f070
    FLD float ptr [EAX + 0x4]           ; 0041f074
    FXCH                                ; 0041f077
    FSTP float ptr [EAX]                ; 0041f079
    FADD float ptr [ESP + 0x3c]         ; 0041f07b
    FLD float ptr [EAX + 0x8]           ; 0041f07f
    FXCH                                ; 0041f082
    FSTP float ptr [EAX + 0x4]          ; 0041f084
    FADD float ptr [ESP + 0x40]         ; 0041f087
    PUSH EBX                            ; 0041f08b
    FSTP float ptr [EAX + 0x8]          ; 0041f08c
    CALL FUN_0041e4d0                   ; 0041f08f
        ;   XREF to: 0041e4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e4d0()
    ADD ESP,0x4                         ; 0041f094
    PUSH EBX                            ; 0041f097
    CALL FUN_0041f190                   ; 0041f098
        ;   XREF to: 0041f190 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f190()
    ADD ESP,0x4                         ; 0041f09d
    MOV ESP,EBP                         ; 0041f0a0
    POP EBP                             ; 0041f0a2
    POP ESI                             ; 0041f0a3
    POP EBX                             ; 0041f0a4
    RET                                 ; 0041f0a5

