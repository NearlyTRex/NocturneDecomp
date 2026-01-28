; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_werewolf_cpp_FUN_005f1e40(void)
;
; Local Variables:
; undefined8       Stack[-0x7c]:8  local_7c
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
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 at 005f01e8
;
; Referenced Globals:
;   TerminatedCString s_Chain_stretched_to_f_00657e6c
;   double DOUBLE_00657e84 = 2
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1e40
        ;   Label: core_werewolf.cpp_FUN_005f1e40
    PUSH ESI                            ; 005f1e41
    PUSH EDI                            ; 005f1e42
    PUSH EBP                            ; 005f1e43
    MOV EBP,ESP                         ; 005f1e44
    SUB ESP,0x64                        ; 005f1e46
    MOV EBX,dword ptr [EBP + 0x14]      ; 005f1e49
    CMP dword ptr [EBX + 0xbee8],0x0    ; 005f1e4c
    JZ 0x005f1e5e                       ; 005f1e53
        ;   XREF to: 005f1e5e (CONDITIONAL_JUMP)  ; LAB_005f1e5e
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005f1e55
    JNZ 0x005f1e65                      ; 005f1e5c
        ;   XREF to: 005f1e65 (CONDITIONAL_JUMP)  ; LAB_005f1e65
    MOV ESP,EBP                         ; 005f1e5e
        ;   Label: LAB_005f1e5e
    POP EBP                             ; 005f1e60
    POP EDI                             ; 005f1e61
    POP ESI                             ; 005f1e62
    POP EBX                             ; 005f1e63
    RET                                 ; 005f1e64
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 005f1e65
        ;   Label: LAB_005f1e65
    LEA EAX,[EDX*0x4 + 0x0]             ; 005f1e6b
    SUB EAX,EDX                         ; 005f1e72
    SHL EAX,0x4                         ; 005f1e74
    LEA EDX,[EBX + 0xfd8]               ; 005f1e77
    ADD EAX,EDX                         ; 005f1e7d
    MOV EDI,0xbe99999a                  ; 005f1e7f
    PUSH EAX                            ; 005f1e84
    LEA EAX,[EBP + -0x40]               ; 005f1e85
    XOR ESI,ESI                         ; 005f1e88
    PUSH EAX                            ; 005f1e8a
    LEA EAX,[EBP + -0x4c]               ; 005f1e8b
    MOV dword ptr [EBP + -0x40],ESI     ; 005f1e8e
    PUSH EAX                            ; 005f1e91
    MOV dword ptr [EBP + -0x3c],EDI     ; 005f1e92
    MOV dword ptr [EBP + -0x38],ESI     ; 005f1e95
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005f1e98
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 005f1e9d
    ADD ESP,0xc                         ; 005f1ea3
    ADD EAX,0x20                        ; 005f1ea6
    PUSH EAX                            ; 005f1ea9
    LEA EAX,[EBP + -0x58]               ; 005f1eaa
    PUSH EAX                            ; 005f1ead
    PUSH EBX                            ; 005f1eae
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005f1eaf
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EBP + -0x54]         ; 005f1eb4
    ADD ESP,0xc                         ; 005f1eb7
    FCOMP double ptr [0x00657e84]       ; 005f1eba | DOUBLE_00657e84
    FNSTSW AX                           ; 005f1ec0
    SAHF                                ; 005f1ec2
    JC 0x005f1fdb                       ; 005f1ec3
        ;   XREF to: 005f1fdb (CONDITIONAL_JUMP)  ; LAB_005f1fdb
    FLD float ptr [EBP + -0x58]         ; 005f1ec9
    FLD float ptr [EBP + -0x54]         ; 005f1ecc
    FSUB float ptr [EBP + -0x48]        ; 005f1ecf
    FXCH                                ; 005f1ed2
    FSUB float ptr [EBP + -0x4c]        ; 005f1ed4
    FXCH                                ; 005f1ed7
    FST float ptr [EBP + -0x60]         ; 005f1ed9
    FMUL float ptr [EBP + -0x60]        ; 005f1edc
    FXCH                                ; 005f1edf
    FST float ptr [EBP + -0x64]         ; 005f1ee1
    FMUL float ptr [EBP + -0x64]        ; 005f1ee4
    FLD float ptr [EBP + -0x50]         ; 005f1ee7
    FSUB float ptr [EBP + -0x44]        ; 005f1eea
    FXCH                                ; 005f1eed
    FADDP ST2,ST0                       ; 005f1eef
    FST float ptr [EBP + -0x5c]         ; 005f1ef1
    FMUL float ptr [EBP + -0x5c]        ; 005f1ef4
    FADDP                               ; 005f1ef7
    FSQRT                               ; 005f1ef9
    SUB ESP,0x8                         ; 005f1efb
    FST float ptr [EBP + -0xc]          ; 005f1efe
    FSTP double ptr [ESP]               ; 005f1f01
    PUSH 0x657e6c                       ; 005f1f04 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005f1f09 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005f1f0f | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f1f10
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    FLD float ptr [EBP + -0xc]          ; 005f1f15
    ADD ESP,0x10                        ; 005f1f18
    FCOMP float ptr [EBX + 0xbeec]      ; 005f1f1b
    FNSTSW AX                           ; 005f1f21
    SAHF                                ; 005f1f23
    JBE 0x005f1e5e                      ; 005f1f24
        ;   XREF to: 005f1e5e (CONDITIONAL_JUMP)  ; LAB_005f1e5e
    FLD float ptr [EBX + 0xbeec]        ; 005f1f2a
    FMUL ST0                            ; 005f1f30
    FLD float ptr [EBP + -0x60]         ; 005f1f32
    FMUL ST0                            ; 005f1f35
    FSUBP                               ; 005f1f37
    FLDZ                                ; 005f1f39
    FXCH                                ; 005f1f3b
    FSTP double ptr [EBP + -0x1c]       ; 005f1f3d
    FCOMP double ptr [EBP + -0x1c]      ; 005f1f40
    FNSTSW AX                           ; 005f1f43
    SAHF                                ; 005f1f45
    JA 0x005f1e5e                       ; 005f1f46
        ;   XREF to: 005f1e5e (CONDITIONAL_JUMP)  ; LAB_005f1e5e
    FLD double ptr [EBP + -0x1c]        ; 005f1f4c
    FSQRT                               ; 005f1f4f
    MOV EAX,dword ptr [EBP + -0x64]     ; 005f1f51
    MOV dword ptr [EBP + -0x28],EAX     ; 005f1f54
    FLD float ptr [EBP + -0x28]         ; 005f1f57
    MOV EAX,dword ptr [EBP + -0x60]     ; 005f1f5a
    FMUL float ptr [EBP + -0x28]        ; 005f1f5d
    MOV dword ptr [EBP + -0x24],EAX     ; 005f1f60
    MOV EAX,dword ptr [EBP + -0x5c]     ; 005f1f63
    MOV dword ptr [EBP + -0x20],EAX     ; 005f1f66
    FLD float ptr [EBP + -0x20]         ; 005f1f69
    FMUL ST0                            ; 005f1f6c
    FADDP                               ; 005f1f6e
    FSQRT                               ; 005f1f70
    FXCH                                ; 005f1f72
    FSTP float ptr [EBP + -0x10]        ; 005f1f74
    MOV dword ptr [EBP + -0x24],ESI     ; 005f1f77
    FST float ptr [EBP + -0x4]          ; 005f1f7a
    FLDZ                                ; 005f1f7d
    FCOMPP                              ; 005f1f7f
    FNSTSW AX                           ; 005f1f81
    SAHF                                ; 005f1f83
    JNC 0x005f1e5e                      ; 005f1f84
        ;   XREF to: 005f1e5e (CONDITIONAL_JUMP)  ; LAB_005f1e5e
    FLD float ptr [EBP + -0x4]          ; 005f1f8a
    FSUB float ptr [EBP + -0x10]        ; 005f1f8d
    FST float ptr [EBP + -0x8]          ; 005f1f90
    FLDZ                                ; 005f1f93
    FCOMPP                              ; 005f1f95
    FNSTSW AX                           ; 005f1f97
    SAHF                                ; 005f1f99
    JNC 0x005f1e5e                      ; 005f1f9a
        ;   XREF to: 005f1e5e (CONDITIONAL_JUMP)  ; LAB_005f1e5e
    FLD float ptr [EBP + -0x8]          ; 005f1fa0
    FDIV float ptr [EBP + -0x4]         ; 005f1fa3
    FLD float ptr [EBP + -0x28]         ; 005f1fa6
    FXCH                                ; 005f1fa9
    FSTP float ptr [EBP + -0x14]        ; 005f1fab
    FMUL float ptr [EBP + -0x14]        ; 005f1fae
    FLDZ                                ; 005f1fb1
    FMUL float ptr [EBP + -0x14]        ; 005f1fb3
    LEA EAX,[EBP + -0x28]               ; 005f1fb6
    FLD float ptr [EBP + -0x20]         ; 005f1fb9
    PUSH EAX                            ; 005f1fbc
    FMUL float ptr [EBP + -0x14]        ; 005f1fbd
    PUSH EBX                            ; 005f1fc0
    FXCH ST2                            ; 005f1fc1
    FSTP float ptr [EBP + -0x28]        ; 005f1fc3
    FSTP float ptr [EBP + -0x24]        ; 005f1fc6
    FSTP float ptr [EBP + -0x20]        ; 005f1fc9
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 005f1fcc
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005f1fd1
    MOV ESP,EBP                         ; 005f1fd4
    POP EBP                             ; 005f1fd6
    POP EDI                             ; 005f1fd7
    POP ESI                             ; 005f1fd8
    POP EBX                             ; 005f1fd9
    RET                                 ; 005f1fda
    MOV EAX,dword ptr [EBP + -0x58]     ; 005f1fdb
        ;   Label: LAB_005f1fdb
    MOV dword ptr [EBP + -0x34],EAX     ; 005f1fde
    MOV EAX,dword ptr [EBP + -0x54]     ; 005f1fe1
    MOV dword ptr [EBP + -0x30],EAX     ; 005f1fe4
    MOV EAX,dword ptr [EBP + -0x50]     ; 005f1fe7
    MOV dword ptr [EBP + -0x2c],EAX     ; 005f1fea
    LEA EAX,[EBP + -0x34]               ; 005f1fed
    PUSH EAX                            ; 005f1ff0
    PUSH EBX                            ; 005f1ff1
    MOV dword ptr [EBP + -0x30],ESI     ; 005f1ff2
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 005f1ff5
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005f1ffa
    MOV ESP,EBP                         ; 005f1ffd
    POP EBP                             ; 005f1fff
    POP EDI                             ; 005f2000
    POP ESI                             ; 005f2001
    POP EBX                             ; 005f2002
    RET                                 ; 005f2003

