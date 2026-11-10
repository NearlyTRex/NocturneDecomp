; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_0057fad0(CCharacter *param_1)
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
;   core_werewolf.cpp_CWerewolf_process_FUN_0057d720 at 0057dba4
;
; Referenced Globals:
;   TerminatedCString s_Chain_stretched_to_f_005d7c0b
;   undefined4 DAT_005d7c23
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;   core_charactr.cpp_FUN_0042c230
;   core_xform.cpp_FUN_00583260
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fad0
        ;   Label: core_werewolf.cpp_FUN_0057fad0
    PUSH ESI                            ; 0057fad1
    PUSH EDI                            ; 0057fad2
    PUSH EBP                            ; 0057fad3
    MOV EBP,ESP                         ; 0057fad4
    SUB ESP,0x8c                        ; 0057fad6
    SUB EBP,0x7e                        ; 0057fadc
    MOV EBX,dword ptr [EBP + 0x92]      ; 0057fadf
    CMP dword ptr [EBX + 0xd080],0x0    ; 0057fae5
    JZ 0x0057faf7                       ; 0057faec
        ;   XREF to: 0057faf7 (CONDITIONAL_JUMP)  ; LAB_0057faf7
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0057faee
    JNZ 0x0057faff                      ; 0057faf5
        ;   XREF to: 0057faff (CONDITIONAL_JUMP)  ; LAB_0057faff
    LEA ESP,[EBP + 0x7e]                ; 0057faf7
        ;   Label: LAB_0057faf7
    POP EBP                             ; 0057fafa
    POP EDI                             ; 0057fafb
    POP ESI                             ; 0057fafc
    POP EBX                             ; 0057fafd
    RET                                 ; 0057fafe
    MOV EDX,dword ptr [EBX + 0xd068]    ; 0057faff
        ;   Label: LAB_0057faff
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057fb05
    MOV EDI,0xbe99999a                  ; 0057fb0c
    SUB EAX,EDX                         ; 0057fb11
    XOR ESI,ESI                         ; 0057fb13
    SHL EAX,0x4                         ; 0057fb15
    LEA EDX,[EBX + 0xfd8]               ; 0057fb18
    MOV dword ptr [EBP + 0x16],ESI      ; 0057fb1e
    ADD EAX,EDX                         ; 0057fb21
    MOV dword ptr [EBP + 0x1a],EDI      ; 0057fb23
    PUSH EAX                            ; 0057fb26
    LEA EAX,[EBP + 0x16]                ; 0057fb27
    MOV dword ptr [EBP + 0x1e],ESI      ; 0057fb2a
    PUSH EAX                            ; 0057fb2d
    LEA ESI,[EBP + 0xa]                 ; 0057fb2e
    LEA EDI,[EBP + 0x2e]                ; 0057fb31
    CALL core_xform.cpp_FUN_00583260    ; 0057fb34
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0xa]                 ; 0057fb39
    MOVSD ES:EDI,ESI                    ; 0057fb3c
    MOVSD ES:EDI,ESI                    ; 0057fb3d
    MOVSD ES:EDI,ESI                    ; 0057fb3e
    MOV EAX,dword ptr [EBX + 0xd080]    ; 0057fb3f
    ADD ESP,0x8                         ; 0057fb45
    ADD EAX,0x20                        ; 0057fb48
    PUSH EAX                            ; 0057fb4b
    PUSH EBX                            ; 0057fb4c
    LEA ESI,[EBP + -0x2]                ; 0057fb4d
    LEA EDI,[EBP + -0xe]                ; 0057fb50
    CALL core_actor.cpp_FUN_00408bf0    ; 0057fb53
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + -0x2]                ; 0057fb58
    MOVSD ES:EDI,ESI                    ; 0057fb5b
    MOVSD ES:EDI,ESI                    ; 0057fb5c
    MOVSD ES:EDI,ESI                    ; 0057fb5d
    ADD ESP,0x8                         ; 0057fb5e
    FLD float ptr [EBP + -0xa]          ; 0057fb61
    FCOMP double ptr [0x005d7c23]       ; 0057fb64 | DAT_005d7c23
    FNSTSW AX                           ; 0057fb6a
    SAHF                                ; 0057fb6c
    JC 0x0057fc91                       ; 0057fb6d
        ;   XREF to: 0057fc91 (CONDITIONAL_JUMP)  ; LAB_0057fc91
    FLD float ptr [EBP + -0xe]          ; 0057fb73
    FLD float ptr [EBP + -0xa]          ; 0057fb76
    FLD float ptr [EBP + -0x6]          ; 0057fb79
    LEA EDI,[EBP + 0x46]                ; 0057fb7c
    LEA ESI,[EBP + 0x22]                ; 0057fb7f
    FXCH ST2                            ; 0057fb82
    FSUB float ptr [EBP + 0x2e]         ; 0057fb84
    FXCH                                ; 0057fb87
    FSUB float ptr [EBP + 0x32]         ; 0057fb89
    FXCH ST2                            ; 0057fb8c
    FSUB float ptr [EBP + 0x36]         ; 0057fb8e
    FXCH                                ; 0057fb91
    FSTP float ptr [EBP + 0x22]         ; 0057fb93
    FXCH                                ; 0057fb96
    FSTP float ptr [EBP + 0x26]         ; 0057fb98
    FSTP float ptr [EBP + 0x2a]         ; 0057fb9b
    MOVSD ES:EDI,ESI                    ; 0057fb9e
    MOVSD ES:EDI,ESI                    ; 0057fb9f
    MOVSD ES:EDI,ESI                    ; 0057fba0
    FLD float ptr [EBP + 0x4a]          ; 0057fba1
    FMUL ST0                            ; 0057fba4
    FLD float ptr [EBP + 0x46]          ; 0057fba6
    FMUL ST0                            ; 0057fba9
    FXCH                                ; 0057fbab
    FSTP float ptr [EBP + 0x6e]         ; 0057fbad
    FADD float ptr [EBP + 0x6e]         ; 0057fbb0
    FLD float ptr [EBP + 0x4e]          ; 0057fbb3
    FMUL ST0                            ; 0057fbb6
    FADDP                               ; 0057fbb8
    FSQRT                               ; 0057fbba
    SUB ESP,0x8                         ; 0057fbbc
    FST float ptr [EBP + 0x66]          ; 0057fbbf
    FSTP double ptr [ESP]               ; 0057fbc2
    PUSH 0x5d7c0b                       ; 0057fbc5 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0057fbca | g_CConsolePtr
    PUSH EDX                            ; 0057fbd0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0057fbd1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    FLD float ptr [EBP + 0x66]          ; 0057fbd6
    ADD ESP,0x10                        ; 0057fbd9
    FCOMP float ptr [EBX + 0xd084]      ; 0057fbdc
    FNSTSW AX                           ; 0057fbe2
    SAHF                                ; 0057fbe4
    JBE 0x0057faf7                      ; 0057fbe5
        ;   XREF to: 0057faf7 (CONDITIONAL_JUMP)  ; LAB_0057faf7
    FLD float ptr [EBX + 0xd084]        ; 0057fbeb
    FMUL ST0                            ; 0057fbf1
    FSUB float ptr [EBP + 0x6e]         ; 0057fbf3
    FLDZ                                ; 0057fbf6
    FXCH                                ; 0057fbf8
    FSTP double ptr [EBP + 0x5e]        ; 0057fbfa
    FCOMP double ptr [EBP + 0x5e]       ; 0057fbfd
    FNSTSW AX                           ; 0057fc00
    SAHF                                ; 0057fc02
    JA 0x0057faf7                       ; 0057fc03
        ;   XREF to: 0057faf7 (CONDITIONAL_JUMP)  ; LAB_0057faf7
    FLD double ptr [EBP + 0x5e]         ; 0057fc09
    FSQRT                               ; 0057fc0c
    LEA EDI,[EBP + 0x3a]                ; 0057fc0e
    LEA ESI,[EBP + 0x22]                ; 0057fc11
    MOVSD ES:EDI,ESI                    ; 0057fc14
    MOVSD ES:EDI,ESI                    ; 0057fc15
    MOVSD ES:EDI,ESI                    ; 0057fc16
    FLD float ptr [EBP + 0x3a]          ; 0057fc17
    FMUL ST0                            ; 0057fc1a
    FLD float ptr [EBP + 0x42]          ; 0057fc1c
    FMUL ST0                            ; 0057fc1f
    FADDP                               ; 0057fc21
    FSQRT                               ; 0057fc23
    XOR ECX,ECX                         ; 0057fc25
    MOV dword ptr [EBP + 0x3e],ECX      ; 0057fc27
    FXCH                                ; 0057fc2a
    FSTP float ptr [EBP + 0x7a]         ; 0057fc2c
    FST float ptr [EBP + 0x72]          ; 0057fc2f
    FLDZ                                ; 0057fc32
    FCOMPP                              ; 0057fc34
    FNSTSW AX                           ; 0057fc36
    SAHF                                ; 0057fc38
    JNC 0x0057faf7                      ; 0057fc39
        ;   XREF to: 0057faf7 (CONDITIONAL_JUMP)  ; LAB_0057faf7
    FLD float ptr [EBP + 0x72]          ; 0057fc3f
    FSUB float ptr [EBP + 0x7a]         ; 0057fc42
    FST float ptr [EBP + 0x6a]          ; 0057fc45
    FLDZ                                ; 0057fc48
    FCOMPP                              ; 0057fc4a
    FNSTSW AX                           ; 0057fc4c
    SAHF                                ; 0057fc4e
    JNC 0x0057faf7                      ; 0057fc4f
        ;   XREF to: 0057faf7 (CONDITIONAL_JUMP)  ; LAB_0057faf7
    FLD float ptr [EBP + 0x6a]          ; 0057fc55
    FDIV float ptr [EBP + 0x72]         ; 0057fc58
    FLD float ptr [EBP + 0x3a]          ; 0057fc5b
    FXCH                                ; 0057fc5e
    FSTP float ptr [EBP + 0x76]         ; 0057fc60
    FMUL float ptr [EBP + 0x76]         ; 0057fc63
    FLDZ                                ; 0057fc66
    FMUL float ptr [EBP + 0x76]         ; 0057fc68
    LEA EAX,[EBP + 0x3a]                ; 0057fc6b
    FLD float ptr [EBP + 0x42]          ; 0057fc6e
    PUSH EAX                            ; 0057fc71
    FMUL float ptr [EBP + 0x76]         ; 0057fc72
    PUSH EBX                            ; 0057fc75
    FXCH ST2                            ; 0057fc76
    FSTP float ptr [EBP + 0x3a]         ; 0057fc78
    FSTP float ptr [EBP + 0x3e]         ; 0057fc7b
    FSTP float ptr [EBP + 0x42]         ; 0057fc7e
    CALL core_charactr.cpp_FUN_0042c230 ; 0057fc81
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0057fc86
    LEA ESP,[EBP + 0x7e]                ; 0057fc89
    POP EBP                             ; 0057fc8c
    POP EDI                             ; 0057fc8d
    POP ESI                             ; 0057fc8e
    POP EBX                             ; 0057fc8f
    RET                                 ; 0057fc90
    LEA EDI,[EBP + 0x52]                ; 0057fc91
        ;   Label: LAB_0057fc91
    LEA ESI,[EBP + -0x2]                ; 0057fc94
    LEA EAX,[EBP + 0x52]                ; 0057fc97
    MOVSD ES:EDI,ESI                    ; 0057fc9a
    MOVSD ES:EDI,ESI                    ; 0057fc9b
    MOVSD ES:EDI,ESI                    ; 0057fc9c
    PUSH EAX                            ; 0057fc9d
    XOR ESI,ESI                         ; 0057fc9e
    PUSH EBX                            ; 0057fca0
    MOV dword ptr [EBP + 0x56],ESI      ; 0057fca1
    CALL core_charactr.cpp_FUN_0042c230 ; 0057fca4
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0057fca9
    LEA ESP,[EBP + 0x7e]                ; 0057fcac
    POP EBP                             ; 0057fcaf
    POP EDI                             ; 0057fcb0
    POP ESI                             ; 0057fcb1
    POP EBX                             ; 0057fcb2
    RET                                 ; 0057fcb3

