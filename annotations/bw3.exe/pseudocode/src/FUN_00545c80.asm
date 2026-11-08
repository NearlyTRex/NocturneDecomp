; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00545c80(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xa4]:8  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_005438d0 at 00543d3a
;
; Referenced Globals:
;   undefined4 s_Chain_stretched_to_f_005d13c4+2
;   undefined4 DAT_005d13de
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00408bf0
;   FUN_0042c230
;   FUN_00441ff0
;   FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545c80
        ;   Label: FUN_00545c80
    PUSH ESI                            ; 00545c81
    PUSH EDI                            ; 00545c82
    PUSH EBP                            ; 00545c83
    MOV EBP,ESP                         ; 00545c84
    SUB ESP,0x8c                        ; 00545c86
    SUB EBP,0x7e                        ; 00545c8c
    MOV EBX,dword ptr [EBP + 0x92]      ; 00545c8f
    CMP dword ptr [EBX + 0xd088],0x0    ; 00545c95
    JZ 0x00545ca7                       ; 00545c9c
        ;   XREF to: 00545ca7 (CONDITIONAL_JUMP)  ; LAB_00545ca7
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00545c9e
    JNZ 0x00545caf                      ; 00545ca5
        ;   XREF to: 00545caf (CONDITIONAL_JUMP)  ; LAB_00545caf
    LEA ESP,[EBP + 0x7e]                ; 00545ca7
        ;   Label: LAB_00545ca7
    POP EBP                             ; 00545caa
    POP EDI                             ; 00545cab
    POP ESI                             ; 00545cac
    POP EBX                             ; 00545cad
    RET                                 ; 00545cae
    MOV EDX,dword ptr [EBX + 0xd064]    ; 00545caf
        ;   Label: LAB_00545caf
    LEA EAX,[EDX*0x4 + 0x0]             ; 00545cb5
    MOV EDI,0xbe99999a                  ; 00545cbc
    SUB EAX,EDX                         ; 00545cc1
    XOR ESI,ESI                         ; 00545cc3
    SHL EAX,0x4                         ; 00545cc5
    LEA EDX,[EBX + 0xfd8]               ; 00545cc8
    MOV dword ptr [EBP + 0x16],ESI      ; 00545cce
    ADD EAX,EDX                         ; 00545cd1
    MOV dword ptr [EBP + 0x1a],EDI      ; 00545cd3
    PUSH EAX                            ; 00545cd6
    LEA EAX,[EBP + 0x16]                ; 00545cd7
    MOV dword ptr [EBP + 0x1e],ESI      ; 00545cda
    PUSH EAX                            ; 00545cdd
    LEA ESI,[EBP + 0xa]                 ; 00545cde
    LEA EDI,[EBP + 0x2e]                ; 00545ce1
    CALL FUN_00583260                   ; 00545ce4
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[EBP + 0xa]                 ; 00545ce9
    MOVSD ES:EDI,ESI                    ; 00545cec
    MOVSD ES:EDI,ESI                    ; 00545ced
    MOVSD ES:EDI,ESI                    ; 00545cee
    MOV EAX,dword ptr [EBX + 0xd088]    ; 00545cef
    ADD ESP,0x8                         ; 00545cf5
    ADD EAX,0x20                        ; 00545cf8
    PUSH EAX                            ; 00545cfb
    PUSH EBX                            ; 00545cfc
    LEA ESI,[EBP + -0x2]                ; 00545cfd
    LEA EDI,[EBP + -0xe]                ; 00545d00
    CALL FUN_00408bf0                   ; 00545d03
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[EBP + -0x2]                ; 00545d08
    MOVSD ES:EDI,ESI                    ; 00545d0b
    MOVSD ES:EDI,ESI                    ; 00545d0c
    MOVSD ES:EDI,ESI                    ; 00545d0d
    ADD ESP,0x8                         ; 00545d0e
    FLD float ptr [EBP + -0xa]          ; 00545d11
    FCOMP double ptr [0x005d13de]       ; 00545d14 | DAT_005d13de
    FNSTSW AX                           ; 00545d1a
    SAHF                                ; 00545d1c
    JC 0x00545e41                       ; 00545d1d
        ;   XREF to: 00545e41 (CONDITIONAL_JUMP)  ; LAB_00545e41
    FLD float ptr [EBP + -0xe]          ; 00545d23
    FLD float ptr [EBP + -0xa]          ; 00545d26
    FLD float ptr [EBP + -0x6]          ; 00545d29
    LEA EDI,[EBP + 0x46]                ; 00545d2c
    LEA ESI,[EBP + 0x22]                ; 00545d2f
    FXCH ST2                            ; 00545d32
    FSUB float ptr [EBP + 0x2e]         ; 00545d34
    FXCH                                ; 00545d37
    FSUB float ptr [EBP + 0x32]         ; 00545d39
    FXCH ST2                            ; 00545d3c
    FSUB float ptr [EBP + 0x36]         ; 00545d3e
    FXCH                                ; 00545d41
    FSTP float ptr [EBP + 0x22]         ; 00545d43
    FXCH                                ; 00545d46
    FSTP float ptr [EBP + 0x26]         ; 00545d48
    FSTP float ptr [EBP + 0x2a]         ; 00545d4b
    MOVSD ES:EDI,ESI                    ; 00545d4e
    MOVSD ES:EDI,ESI                    ; 00545d4f
    MOVSD ES:EDI,ESI                    ; 00545d50
    FLD float ptr [EBP + 0x4a]          ; 00545d51
    FMUL ST0                            ; 00545d54
    FLD float ptr [EBP + 0x46]          ; 00545d56
    FMUL ST0                            ; 00545d59
    FXCH                                ; 00545d5b
    FSTP float ptr [EBP + 0x6e]         ; 00545d5d
    FADD float ptr [EBP + 0x6e]         ; 00545d60
    FLD float ptr [EBP + 0x4e]          ; 00545d63
    FMUL ST0                            ; 00545d66
    FADDP                               ; 00545d68
    FSQRT                               ; 00545d6a
    SUB ESP,0x8                         ; 00545d6c
    FST float ptr [EBP + 0x66]          ; 00545d6f
    FSTP double ptr [ESP]               ; 00545d72
    PUSH 0x5d13c6                       ; 00545d75 | s_Chain_stretched_to_f_005d13c4+2
    MOV EDX,dword ptr [0x005f1690]      ; 00545d7a | PTR_DAT_005f1690
    PUSH EDX                            ; 00545d80 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 00545d81
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    FLD float ptr [EBP + 0x66]          ; 00545d86
    ADD ESP,0x10                        ; 00545d89
    FCOMP float ptr [EBX + 0xd08c]      ; 00545d8c
    FNSTSW AX                           ; 00545d92
    SAHF                                ; 00545d94
    JBE 0x00545ca7                      ; 00545d95
        ;   XREF to: 00545ca7 (CONDITIONAL_JUMP)  ; LAB_00545ca7
    FLD float ptr [EBX + 0xd08c]        ; 00545d9b
    FMUL ST0                            ; 00545da1
    FSUB float ptr [EBP + 0x6e]         ; 00545da3
    FLDZ                                ; 00545da6
    FXCH                                ; 00545da8
    FSTP double ptr [EBP + 0x5e]        ; 00545daa
    FCOMP double ptr [EBP + 0x5e]       ; 00545dad
    FNSTSW AX                           ; 00545db0
    SAHF                                ; 00545db2
    JA 0x00545ca7                       ; 00545db3
        ;   XREF to: 00545ca7 (CONDITIONAL_JUMP)  ; LAB_00545ca7
    FLD double ptr [EBP + 0x5e]         ; 00545db9
    FSQRT                               ; 00545dbc
    LEA EDI,[EBP + 0x3a]                ; 00545dbe
    LEA ESI,[EBP + 0x22]                ; 00545dc1
    MOVSD ES:EDI,ESI                    ; 00545dc4
    MOVSD ES:EDI,ESI                    ; 00545dc5
    MOVSD ES:EDI,ESI                    ; 00545dc6
    FLD float ptr [EBP + 0x3a]          ; 00545dc7
    FMUL ST0                            ; 00545dca
    FLD float ptr [EBP + 0x42]          ; 00545dcc
    FMUL ST0                            ; 00545dcf
    FADDP                               ; 00545dd1
    FSQRT                               ; 00545dd3
    XOR ECX,ECX                         ; 00545dd5
    MOV dword ptr [EBP + 0x3e],ECX      ; 00545dd7
    FXCH                                ; 00545dda
    FSTP float ptr [EBP + 0x7a]         ; 00545ddc
    FST float ptr [EBP + 0x72]          ; 00545ddf
    FLDZ                                ; 00545de2
    FCOMPP                              ; 00545de4
    FNSTSW AX                           ; 00545de6
    SAHF                                ; 00545de8
    JNC 0x00545ca7                      ; 00545de9
        ;   XREF to: 00545ca7 (CONDITIONAL_JUMP)  ; LAB_00545ca7
    FLD float ptr [EBP + 0x72]          ; 00545def
    FSUB float ptr [EBP + 0x7a]         ; 00545df2
    FST float ptr [EBP + 0x6a]          ; 00545df5
    FLDZ                                ; 00545df8
    FCOMPP                              ; 00545dfa
    FNSTSW AX                           ; 00545dfc
    SAHF                                ; 00545dfe
    JNC 0x00545ca7                      ; 00545dff
        ;   XREF to: 00545ca7 (CONDITIONAL_JUMP)  ; LAB_00545ca7
    FLD float ptr [EBP + 0x6a]          ; 00545e05
    FDIV float ptr [EBP + 0x72]         ; 00545e08
    FLD float ptr [EBP + 0x3a]          ; 00545e0b
    FXCH                                ; 00545e0e
    FSTP float ptr [EBP + 0x76]         ; 00545e10
    FMUL float ptr [EBP + 0x76]         ; 00545e13
    FLDZ                                ; 00545e16
    FMUL float ptr [EBP + 0x76]         ; 00545e18
    LEA EAX,[EBP + 0x3a]                ; 00545e1b
    FLD float ptr [EBP + 0x42]          ; 00545e1e
    PUSH EAX                            ; 00545e21
    FMUL float ptr [EBP + 0x76]         ; 00545e22
    PUSH EBX                            ; 00545e25
    FXCH ST2                            ; 00545e26
    FSTP float ptr [EBP + 0x3a]         ; 00545e28
    FSTP float ptr [EBP + 0x3e]         ; 00545e2b
    FSTP float ptr [EBP + 0x42]         ; 00545e2e
    CALL FUN_0042c230                   ; 00545e31
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 00545e36
    LEA ESP,[EBP + 0x7e]                ; 00545e39
    POP EBP                             ; 00545e3c
    POP EDI                             ; 00545e3d
    POP ESI                             ; 00545e3e
    POP EBX                             ; 00545e3f
    RET                                 ; 00545e40
    LEA EDI,[EBP + 0x52]                ; 00545e41
        ;   Label: LAB_00545e41
    LEA ESI,[EBP + -0x2]                ; 00545e44
    LEA EAX,[EBP + 0x52]                ; 00545e47
    MOVSD ES:EDI,ESI                    ; 00545e4a
    MOVSD ES:EDI,ESI                    ; 00545e4b
    MOVSD ES:EDI,ESI                    ; 00545e4c
    PUSH EAX                            ; 00545e4d
    XOR ESI,ESI                         ; 00545e4e
    PUSH EBX                            ; 00545e50
    MOV dword ptr [EBP + 0x56],ESI      ; 00545e51
    CALL FUN_0042c230                   ; 00545e54
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 00545e59
    LEA ESP,[EBP + 0x7e]                ; 00545e5c
    POP EBP                             ; 00545e5f
    POP EDI                             ; 00545e60
    POP ESI                             ; 00545e61
    POP EBX                             ; 00545e62
    RET                                 ; 00545e63

