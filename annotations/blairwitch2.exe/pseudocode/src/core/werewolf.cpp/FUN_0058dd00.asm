; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_0058dd00(CCharacter *param_1)
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
;   core_werewolf.cpp_CWerewolf_process_FUN_0058b950 at 0058bdd6
;
; Referenced Globals:
;   TerminatedCString s_Chain_stretched_to_f_005ee812
;   undefined4 DAT_005ee82a
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

    PUSH EBX                            ; 0058dd00
        ;   Label: core_werewolf.cpp_FUN_0058dd00
    PUSH ESI                            ; 0058dd01
    PUSH EDI                            ; 0058dd02
    PUSH EBP                            ; 0058dd03
    MOV EBP,ESP                         ; 0058dd04
    SUB ESP,0x8c                        ; 0058dd06
    SUB EBP,0x7e                        ; 0058dd0c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0058dd0f
    CMP dword ptr [EBX + 0x10b24],0x0   ; 0058dd15
    JZ 0x0058dd27                       ; 0058dd1c
        ;   XREF to: 0058dd27 (CONDITIONAL_JUMP)  ; LAB_0058dd27
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0058dd1e
    JNZ 0x0058dd2f                      ; 0058dd25
        ;   XREF to: 0058dd2f (CONDITIONAL_JUMP)  ; LAB_0058dd2f
    LEA ESP,[EBP + 0x7e]                ; 0058dd27
        ;   Label: LAB_0058dd27
    POP EBP                             ; 0058dd2a
    POP EDI                             ; 0058dd2b
    POP ESI                             ; 0058dd2c
    POP EBX                             ; 0058dd2d
    RET                                 ; 0058dd2e
    MOV EDX,dword ptr [EBX + 0x10b0c]   ; 0058dd2f
        ;   Label: LAB_0058dd2f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058dd35
    MOV EDI,0xbe99999a                  ; 0058dd3c
    SUB EAX,EDX                         ; 0058dd41
    XOR ESI,ESI                         ; 0058dd43
    SHL EAX,0x4                         ; 0058dd45
    LEA EDX,[EBX + 0x1134]              ; 0058dd48
    MOV dword ptr [EBP + 0x16],ESI      ; 0058dd4e
    ADD EAX,EDX                         ; 0058dd51
    MOV dword ptr [EBP + 0x1a],EDI      ; 0058dd53
    PUSH EAX                            ; 0058dd56
    LEA EAX,[EBP + 0x16]                ; 0058dd57
    MOV dword ptr [EBP + 0x1e],ESI      ; 0058dd5a
    PUSH EAX                            ; 0058dd5d
    LEA ESI,[EBP + 0xa]                 ; 0058dd5e
    LEA EDI,[EBP + 0x2e]                ; 0058dd61
    CALL core_xform.cpp_FUN_00591530    ; 0058dd64
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0xa]                 ; 0058dd69
    MOVSD ES:EDI,ESI                    ; 0058dd6c
    MOVSD ES:EDI,ESI                    ; 0058dd6d
    MOVSD ES:EDI,ESI                    ; 0058dd6e
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 0058dd6f
    ADD ESP,0x8                         ; 0058dd75
    ADD EAX,0x20                        ; 0058dd78
    PUSH EAX                            ; 0058dd7b
    PUSH EBX                            ; 0058dd7c
    LEA ESI,[EBP + -0x2]                ; 0058dd7d
    LEA EDI,[EBP + -0xe]                ; 0058dd80
    CALL core_actor.cpp_FUN_00408de0    ; 0058dd83
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + -0x2]                ; 0058dd88
    MOVSD ES:EDI,ESI                    ; 0058dd8b
    MOVSD ES:EDI,ESI                    ; 0058dd8c
    MOVSD ES:EDI,ESI                    ; 0058dd8d
    ADD ESP,0x8                         ; 0058dd8e
    FLD float ptr [EBP + -0xa]          ; 0058dd91
    FCOMP double ptr [0x005ee82a]       ; 0058dd94 | DAT_005ee82a
    FNSTSW AX                           ; 0058dd9a
    SAHF                                ; 0058dd9c
    JC 0x0058dec1                       ; 0058dd9d
        ;   XREF to: 0058dec1 (CONDITIONAL_JUMP)  ; LAB_0058dec1
    FLD float ptr [EBP + -0xe]          ; 0058dda3
    FLD float ptr [EBP + -0xa]          ; 0058dda6
    FLD float ptr [EBP + -0x6]          ; 0058dda9
    LEA EDI,[EBP + 0x46]                ; 0058ddac
    LEA ESI,[EBP + 0x22]                ; 0058ddaf
    FXCH ST2                            ; 0058ddb2
    FSUB float ptr [EBP + 0x2e]         ; 0058ddb4
    FXCH                                ; 0058ddb7
    FSUB float ptr [EBP + 0x32]         ; 0058ddb9
    FXCH ST2                            ; 0058ddbc
    FSUB float ptr [EBP + 0x36]         ; 0058ddbe
    FXCH                                ; 0058ddc1
    FSTP float ptr [EBP + 0x22]         ; 0058ddc3
    FXCH                                ; 0058ddc6
    FSTP float ptr [EBP + 0x26]         ; 0058ddc8
    FSTP float ptr [EBP + 0x2a]         ; 0058ddcb
    MOVSD ES:EDI,ESI                    ; 0058ddce
    MOVSD ES:EDI,ESI                    ; 0058ddcf
    MOVSD ES:EDI,ESI                    ; 0058ddd0
    FLD float ptr [EBP + 0x4a]          ; 0058ddd1
    FMUL ST0                            ; 0058ddd4
    FLD float ptr [EBP + 0x46]          ; 0058ddd6
    FMUL ST0                            ; 0058ddd9
    FXCH                                ; 0058dddb
    FSTP float ptr [EBP + 0x6e]         ; 0058dddd
    FADD float ptr [EBP + 0x6e]         ; 0058dde0
    FLD float ptr [EBP + 0x4e]          ; 0058dde3
    FMUL ST0                            ; 0058dde6
    FADDP                               ; 0058dde8
    FSQRT                               ; 0058ddea
    SUB ESP,0x8                         ; 0058ddec
    FST float ptr [EBP + 0x66]          ; 0058ddef
    FSTP double ptr [ESP]               ; 0058ddf2
    PUSH 0x5ee812                       ; 0058ddf5 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0058ddfa | g_CConsolePtr
    PUSH EDX                            ; 0058de00 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0058de01
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    FLD float ptr [EBP + 0x66]          ; 0058de06
    ADD ESP,0x10                        ; 0058de09
    FCOMP float ptr [EBX + 0x10b28]     ; 0058de0c
    FNSTSW AX                           ; 0058de12
    SAHF                                ; 0058de14
    JBE 0x0058dd27                      ; 0058de15
        ;   XREF to: 0058dd27 (CONDITIONAL_JUMP)  ; LAB_0058dd27
    FLD float ptr [EBX + 0x10b28]       ; 0058de1b
    FMUL ST0                            ; 0058de21
    FSUB float ptr [EBP + 0x6e]         ; 0058de23
    FLDZ                                ; 0058de26
    FXCH                                ; 0058de28
    FSTP double ptr [EBP + 0x5e]        ; 0058de2a
    FCOMP double ptr [EBP + 0x5e]       ; 0058de2d
    FNSTSW AX                           ; 0058de30
    SAHF                                ; 0058de32
    JA 0x0058dd27                       ; 0058de33
        ;   XREF to: 0058dd27 (CONDITIONAL_JUMP)  ; LAB_0058dd27
    FLD double ptr [EBP + 0x5e]         ; 0058de39
    FSQRT                               ; 0058de3c
    LEA EDI,[EBP + 0x3a]                ; 0058de3e
    LEA ESI,[EBP + 0x22]                ; 0058de41
    MOVSD ES:EDI,ESI                    ; 0058de44
    MOVSD ES:EDI,ESI                    ; 0058de45
    MOVSD ES:EDI,ESI                    ; 0058de46
    FLD float ptr [EBP + 0x3a]          ; 0058de47
    FMUL ST0                            ; 0058de4a
    FLD float ptr [EBP + 0x42]          ; 0058de4c
    FMUL ST0                            ; 0058de4f
    FADDP                               ; 0058de51
    FSQRT                               ; 0058de53
    XOR ECX,ECX                         ; 0058de55
    MOV dword ptr [EBP + 0x3e],ECX      ; 0058de57
    FXCH                                ; 0058de5a
    FSTP float ptr [EBP + 0x7a]         ; 0058de5c
    FST float ptr [EBP + 0x72]          ; 0058de5f
    FLDZ                                ; 0058de62
    FCOMPP                              ; 0058de64
    FNSTSW AX                           ; 0058de66
    SAHF                                ; 0058de68
    JNC 0x0058dd27                      ; 0058de69
        ;   XREF to: 0058dd27 (CONDITIONAL_JUMP)  ; LAB_0058dd27
    FLD float ptr [EBP + 0x72]          ; 0058de6f
    FSUB float ptr [EBP + 0x7a]         ; 0058de72
    FST float ptr [EBP + 0x6a]          ; 0058de75
    FLDZ                                ; 0058de78
    FCOMPP                              ; 0058de7a
    FNSTSW AX                           ; 0058de7c
    SAHF                                ; 0058de7e
    JNC 0x0058dd27                      ; 0058de7f
        ;   XREF to: 0058dd27 (CONDITIONAL_JUMP)  ; LAB_0058dd27
    FLD float ptr [EBP + 0x6a]          ; 0058de85
    FDIV float ptr [EBP + 0x72]         ; 0058de88
    FLD float ptr [EBP + 0x3a]          ; 0058de8b
    FXCH                                ; 0058de8e
    FSTP float ptr [EBP + 0x76]         ; 0058de90
    FMUL float ptr [EBP + 0x76]         ; 0058de93
    FLDZ                                ; 0058de96
    FMUL float ptr [EBP + 0x76]         ; 0058de98
    LEA EAX,[EBP + 0x3a]                ; 0058de9b
    FLD float ptr [EBP + 0x42]          ; 0058de9e
    PUSH EAX                            ; 0058dea1
    FMUL float ptr [EBP + 0x76]         ; 0058dea2
    PUSH EBX                            ; 0058dea5
    FXCH ST2                            ; 0058dea6
    FSTP float ptr [EBP + 0x3a]         ; 0058dea8
    FSTP float ptr [EBP + 0x3e]         ; 0058deab
    FSTP float ptr [EBP + 0x42]         ; 0058deae
    CALL core_charactr.cpp_FUN_00423a60 ; 0058deb1
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058deb6
    LEA ESP,[EBP + 0x7e]                ; 0058deb9
    POP EBP                             ; 0058debc
    POP EDI                             ; 0058debd
    POP ESI                             ; 0058debe
    POP EBX                             ; 0058debf
    RET                                 ; 0058dec0
    LEA EDI,[EBP + 0x52]                ; 0058dec1
        ;   Label: LAB_0058dec1
    LEA ESI,[EBP + -0x2]                ; 0058dec4
    LEA EAX,[EBP + 0x52]                ; 0058dec7
    MOVSD ES:EDI,ESI                    ; 0058deca
    MOVSD ES:EDI,ESI                    ; 0058decb
    MOVSD ES:EDI,ESI                    ; 0058decc
    PUSH EAX                            ; 0058decd
    XOR ESI,ESI                         ; 0058dece
    PUSH EBX                            ; 0058ded0
    MOV dword ptr [EBP + 0x56],ESI      ; 0058ded1
    CALL core_charactr.cpp_FUN_00423a60 ; 0058ded4
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058ded9
    LEA ESP,[EBP + 0x7e]                ; 0058dedc
    POP EBP                             ; 0058dedf
    POP EDI                             ; 0058dee0
    POP ESI                             ; 0058dee1
    POP EBX                             ; 0058dee2
    RET                                 ; 0058dee3

