; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053ece0(CCharacter *param_1)
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
;   core_shadow.cpp_FUN_0053c500 at 0053c954
;
; Referenced Globals:
;   undefined4 s_Chain_stretched_to_f_005e679b+2
;   undefined4 DAT_005e67b5
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_FUN_00423a60
;   core_xform.cpp_FUN_00591530
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ece0
        ;   Label: core_shadow.cpp_FUN_0053ece0
    PUSH ESI                            ; 0053ece1
    PUSH EDI                            ; 0053ece2
    PUSH EBP                            ; 0053ece3
    MOV EBP,ESP                         ; 0053ece4
    SUB ESP,0x8c                        ; 0053ece6
    SUB EBP,0x7e                        ; 0053ecec
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053ecef
    CMP dword ptr [EBX + 0x10b2c],0x0   ; 0053ecf5
    JZ 0x0053ed07                       ; 0053ecfc
        ;   XREF to: 0053ed07 (CONDITIONAL_JUMP)  ; LAB_0053ed07
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0053ecfe
    JNZ 0x0053ed0f                      ; 0053ed05
        ;   XREF to: 0053ed0f (CONDITIONAL_JUMP)  ; LAB_0053ed0f
    LEA ESP,[EBP + 0x7e]                ; 0053ed07
        ;   Label: LAB_0053ed07
    POP EBP                             ; 0053ed0a
    POP EDI                             ; 0053ed0b
    POP ESI                             ; 0053ed0c
    POP EBX                             ; 0053ed0d
    RET                                 ; 0053ed0e
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0053ed0f
        ;   Label: LAB_0053ed0f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053ed15
    MOV EDI,0xbe99999a                  ; 0053ed1c
    SUB EAX,EDX                         ; 0053ed21
    XOR ESI,ESI                         ; 0053ed23
    SHL EAX,0x4                         ; 0053ed25
    LEA EDX,[EBX + 0x1134]              ; 0053ed28
    MOV dword ptr [EBP + 0x16],ESI      ; 0053ed2e
    ADD EAX,EDX                         ; 0053ed31
    MOV dword ptr [EBP + 0x1a],EDI      ; 0053ed33
    PUSH EAX                            ; 0053ed36
    LEA EAX,[EBP + 0x16]                ; 0053ed37
    MOV dword ptr [EBP + 0x1e],ESI      ; 0053ed3a
    PUSH EAX                            ; 0053ed3d
    LEA ESI,[EBP + 0xa]                 ; 0053ed3e
    LEA EDI,[EBP + 0x2e]                ; 0053ed41
    CALL core_xform.cpp_FUN_00591530    ; 0053ed44
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0xa]                 ; 0053ed49
    MOVSD ES:EDI,ESI                    ; 0053ed4c
    MOVSD ES:EDI,ESI                    ; 0053ed4d
    MOVSD ES:EDI,ESI                    ; 0053ed4e
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 0053ed4f
    ADD ESP,0x8                         ; 0053ed55
    ADD EAX,0x20                        ; 0053ed58
    PUSH EAX                            ; 0053ed5b
    PUSH EBX                            ; 0053ed5c
    LEA ESI,[EBP + -0x2]                ; 0053ed5d
    LEA EDI,[EBP + -0xe]                ; 0053ed60
    CALL core_actor.cpp_FUN_00408de0    ; 0053ed63
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + -0x2]                ; 0053ed68
    MOVSD ES:EDI,ESI                    ; 0053ed6b
    MOVSD ES:EDI,ESI                    ; 0053ed6c
    MOVSD ES:EDI,ESI                    ; 0053ed6d
    ADD ESP,0x8                         ; 0053ed6e
    FLD float ptr [EBP + -0xa]          ; 0053ed71
    FCOMP double ptr [0x005e67b5]       ; 0053ed74 | DAT_005e67b5
    FNSTSW AX                           ; 0053ed7a
    SAHF                                ; 0053ed7c
    JC 0x0053eea1                       ; 0053ed7d
        ;   XREF to: 0053eea1 (CONDITIONAL_JUMP)  ; LAB_0053eea1
    FLD float ptr [EBP + -0xe]          ; 0053ed83
    FLD float ptr [EBP + -0xa]          ; 0053ed86
    FLD float ptr [EBP + -0x6]          ; 0053ed89
    LEA EDI,[EBP + 0x46]                ; 0053ed8c
    LEA ESI,[EBP + 0x22]                ; 0053ed8f
    FXCH ST2                            ; 0053ed92
    FSUB float ptr [EBP + 0x2e]         ; 0053ed94
    FXCH                                ; 0053ed97
    FSUB float ptr [EBP + 0x32]         ; 0053ed99
    FXCH ST2                            ; 0053ed9c
    FSUB float ptr [EBP + 0x36]         ; 0053ed9e
    FXCH                                ; 0053eda1
    FSTP float ptr [EBP + 0x22]         ; 0053eda3
    FXCH                                ; 0053eda6
    FSTP float ptr [EBP + 0x26]         ; 0053eda8
    FSTP float ptr [EBP + 0x2a]         ; 0053edab
    MOVSD ES:EDI,ESI                    ; 0053edae
    MOVSD ES:EDI,ESI                    ; 0053edaf
    MOVSD ES:EDI,ESI                    ; 0053edb0
    FLD float ptr [EBP + 0x4a]          ; 0053edb1
    FMUL ST0                            ; 0053edb4
    FLD float ptr [EBP + 0x46]          ; 0053edb6
    FMUL ST0                            ; 0053edb9
    FXCH                                ; 0053edbb
    FSTP float ptr [EBP + 0x6e]         ; 0053edbd
    FADD float ptr [EBP + 0x6e]         ; 0053edc0
    FLD float ptr [EBP + 0x4e]          ; 0053edc3
    FMUL ST0                            ; 0053edc6
    FADDP                               ; 0053edc8
    FSQRT                               ; 0053edca
    SUB ESP,0x8                         ; 0053edcc
    FST float ptr [EBP + 0x66]          ; 0053edcf
    FSTP double ptr [ESP]               ; 0053edd2
    PUSH 0x5e679d                       ; 0053edd5 | s_Chain_stretched_to_f_005e679b+2
    MOV EDX,dword ptr [0x00609ed0]      ; 0053edda | g_CConsolePtr
    PUSH EDX                            ; 0053ede0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0053ede1
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    FLD float ptr [EBP + 0x66]          ; 0053ede6
    ADD ESP,0x10                        ; 0053ede9
    FCOMP float ptr [EBX + 0x10b30]     ; 0053edec
    FNSTSW AX                           ; 0053edf2
    SAHF                                ; 0053edf4
    JBE 0x0053ed07                      ; 0053edf5
        ;   XREF to: 0053ed07 (CONDITIONAL_JUMP)  ; LAB_0053ed07
    FLD float ptr [EBX + 0x10b30]       ; 0053edfb
    FMUL ST0                            ; 0053ee01
    FSUB float ptr [EBP + 0x6e]         ; 0053ee03
    FLDZ                                ; 0053ee06
    FXCH                                ; 0053ee08
    FSTP double ptr [EBP + 0x5e]        ; 0053ee0a
    FCOMP double ptr [EBP + 0x5e]       ; 0053ee0d
    FNSTSW AX                           ; 0053ee10
    SAHF                                ; 0053ee12
    JA 0x0053ed07                       ; 0053ee13
        ;   XREF to: 0053ed07 (CONDITIONAL_JUMP)  ; LAB_0053ed07
    FLD double ptr [EBP + 0x5e]         ; 0053ee19
    FSQRT                               ; 0053ee1c
    LEA EDI,[EBP + 0x3a]                ; 0053ee1e
    LEA ESI,[EBP + 0x22]                ; 0053ee21
    MOVSD ES:EDI,ESI                    ; 0053ee24
    MOVSD ES:EDI,ESI                    ; 0053ee25
    MOVSD ES:EDI,ESI                    ; 0053ee26
    FLD float ptr [EBP + 0x3a]          ; 0053ee27
    FMUL ST0                            ; 0053ee2a
    FLD float ptr [EBP + 0x42]          ; 0053ee2c
    FMUL ST0                            ; 0053ee2f
    FADDP                               ; 0053ee31
    FSQRT                               ; 0053ee33
    XOR ECX,ECX                         ; 0053ee35
    MOV dword ptr [EBP + 0x3e],ECX      ; 0053ee37
    FXCH                                ; 0053ee3a
    FSTP float ptr [EBP + 0x7a]         ; 0053ee3c
    FST float ptr [EBP + 0x72]          ; 0053ee3f
    FLDZ                                ; 0053ee42
    FCOMPP                              ; 0053ee44
    FNSTSW AX                           ; 0053ee46
    SAHF                                ; 0053ee48
    JNC 0x0053ed07                      ; 0053ee49
        ;   XREF to: 0053ed07 (CONDITIONAL_JUMP)  ; LAB_0053ed07
    FLD float ptr [EBP + 0x72]          ; 0053ee4f
    FSUB float ptr [EBP + 0x7a]         ; 0053ee52
    FST float ptr [EBP + 0x6a]          ; 0053ee55
    FLDZ                                ; 0053ee58
    FCOMPP                              ; 0053ee5a
    FNSTSW AX                           ; 0053ee5c
    SAHF                                ; 0053ee5e
    JNC 0x0053ed07                      ; 0053ee5f
        ;   XREF to: 0053ed07 (CONDITIONAL_JUMP)  ; LAB_0053ed07
    FLD float ptr [EBP + 0x6a]          ; 0053ee65
    FDIV float ptr [EBP + 0x72]         ; 0053ee68
    FLD float ptr [EBP + 0x3a]          ; 0053ee6b
    FXCH                                ; 0053ee6e
    FSTP float ptr [EBP + 0x76]         ; 0053ee70
    FMUL float ptr [EBP + 0x76]         ; 0053ee73
    FLDZ                                ; 0053ee76
    FMUL float ptr [EBP + 0x76]         ; 0053ee78
    LEA EAX,[EBP + 0x3a]                ; 0053ee7b
    FLD float ptr [EBP + 0x42]          ; 0053ee7e
    PUSH EAX                            ; 0053ee81
    FMUL float ptr [EBP + 0x76]         ; 0053ee82
    PUSH EBX                            ; 0053ee85
    FXCH ST2                            ; 0053ee86
    FSTP float ptr [EBP + 0x3a]         ; 0053ee88
    FSTP float ptr [EBP + 0x3e]         ; 0053ee8b
    FSTP float ptr [EBP + 0x42]         ; 0053ee8e
    CALL core_charactr.cpp_FUN_00423a60 ; 0053ee91
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0053ee96
    LEA ESP,[EBP + 0x7e]                ; 0053ee99
    POP EBP                             ; 0053ee9c
    POP EDI                             ; 0053ee9d
    POP ESI                             ; 0053ee9e
    POP EBX                             ; 0053ee9f
    RET                                 ; 0053eea0
    LEA EDI,[EBP + 0x52]                ; 0053eea1
        ;   Label: LAB_0053eea1
    LEA ESI,[EBP + -0x2]                ; 0053eea4
    LEA EAX,[EBP + 0x52]                ; 0053eea7
    MOVSD ES:EDI,ESI                    ; 0053eeaa
    MOVSD ES:EDI,ESI                    ; 0053eeab
    MOVSD ES:EDI,ESI                    ; 0053eeac
    PUSH EAX                            ; 0053eead
    XOR ESI,ESI                         ; 0053eeae
    PUSH EBX                            ; 0053eeb0
    MOV dword ptr [EBP + 0x56],ESI      ; 0053eeb1
    CALL core_charactr.cpp_FUN_00423a60 ; 0053eeb4
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0053eeb9
    LEA ESP,[EBP + 0x7e]                ; 0053eebc
    POP EBP                             ; 0053eebf
    POP EDI                             ; 0053eec0
    POP ESI                             ; 0053eec1
    POP EBX                             ; 0053eec2
    RET                                 ; 0053eec3

