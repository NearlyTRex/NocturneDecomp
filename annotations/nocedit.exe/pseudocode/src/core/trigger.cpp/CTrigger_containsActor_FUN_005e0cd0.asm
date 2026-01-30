; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(void)
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
;
; XREF[1]:
;   core_trigger.cpp_CTrigger_process_FUN_005dfac0 at 005e0001
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_006557d8
;   TerminatedCString s_CTrigger_containsActor_i_006557ec
;   TerminatedCString s_core_trigger_cpp_00655826
;   TerminatedCString s_Hell_froze_0065583a
;   float FLOAT_00655848 = 0.5
;   double DOUBLE_0065584c = 0.25
;   undefined4 g_CCharacterClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0cd0
        ;   Label: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
    PUSH ESI                            ; 005e0cd1
    PUSH EBP                            ; 005e0cd2
    SUB ESP,0x88                        ; 005e0cd3
    MOV EBX,dword ptr [ESP + 0x98]      ; 005e0cd9
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005e0ce0
    TEST ESI,ESI                        ; 005e0ce7
    JNZ 0x005e0cf7                      ; 005e0ce9
        ;   XREF to: 005e0cf7 (CONDITIONAL_JUMP)  ; LAB_005e0cf7
    XOR EAX,EAX                         ; 005e0ceb
        ;   Label: LAB_005e0ceb
    ADD ESP,0x88                        ; 005e0ced
    POP EBP                             ; 005e0cf3
    POP ESI                             ; 005e0cf4
    POP EBX                             ; 005e0cf5
    RET                                 ; 005e0cf6
    LEA EAX,[ESP + 0x18]                ; 005e0cf7
        ;   Label: LAB_005e0cf7
    PUSH EAX                            ; 005e0cfb
    MOV EDX,dword ptr [ESI + 0x154]     ; 005e0cfc
    PUSH ESI                            ; 005e0d02
    CALL dword ptr [EDX + 0x14]         ; 005e0d03
    LEA EDX,[EAX + 0xc]                 ; 005e0d06
    FLD float ptr [EAX]                 ; 005e0d09
    FADD float ptr [EDX]                ; 005e0d0b
    ADD ESP,0x8                         ; 005e0d0d
    FST float ptr [ESP + 0x60]          ; 005e0d10
    FLD float ptr [EAX + 0x4]           ; 005e0d14
    FADD float ptr [EDX + 0x4]          ; 005e0d17
    FXCH                                ; 005e0d1a
    FLD float ptr [0x00655848]          ; 005e0d1c | FLOAT_00655848
    FXCH                                ; 005e0d22
    FMUL ST1                            ; 005e0d24
    FXCH ST2                            ; 005e0d26
    FST float ptr [ESP + 0x64]          ; 005e0d28
    FMUL ST1                            ; 005e0d2c
    FLD float ptr [EAX + 0x8]           ; 005e0d2e
    FADD float ptr [EDX + 0x8]          ; 005e0d31
    LEA EAX,[ESP + 0x48]                ; 005e0d34
    FST float ptr [ESP + 0x68]          ; 005e0d38
    FMULP ST2                           ; 005e0d3c
    PUSH EAX                            ; 005e0d3e
    LEA EAX,[ESP + 0x58]                ; 005e0d3f
    FXCH ST2                            ; 005e0d43
    FSTP float ptr [ESP + 0x4c]         ; 005e0d45
    PUSH EAX                            ; 005e0d49
    FXCH                                ; 005e0d4a
    FSTP float ptr [ESP + 0x54]         ; 005e0d4c
    PUSH ESI                            ; 005e0d50
    FSTP float ptr [ESP + 0x5c]         ; 005e0d51
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e0d55
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EBX + 0x218]     ; 005e0d5a
    ADD ESP,0xc                         ; 005e0d60
    TEST EDX,EDX                        ; 005e0d63
    JNZ 0x005e0e5a                      ; 005e0d65
        ;   XREF to: 005e0e5a (CONDITIONAL_JUMP)  ; LAB_005e0e5a
    LEA EAX,[EBX + 0x20]                ; 005e0d6b
        ;   Label: LAB_005e0d6b
    FLD float ptr [ESP + 0x54]          ; 005e0d6e
    FSUB float ptr [EAX]                ; 005e0d72
    FMUL ST0                            ; 005e0d74
    FLD float ptr [ESP + 0x58]          ; 005e0d76
    FSUB float ptr [EAX + 0x4]          ; 005e0d7a
    FMUL ST0                            ; 005e0d7d
    FLD float ptr [ESP + 0x5c]          ; 005e0d7f
    FXCH                                ; 005e0d83
    FADDP ST2,ST0                       ; 005e0d85
    FSUB float ptr [EAX + 0x8]          ; 005e0d87
    FMUL ST0                            ; 005e0d8a
    FLD float ptr [EBX + 0x158]         ; 005e0d8c
    FXCH                                ; 005e0d92
    FADDP ST2,ST0                       ; 005e0d94
    FMUL float ptr [EBX + 0x158]        ; 005e0d96
    FXCH                                ; 005e0d9c
    FCOMPP                              ; 005e0d9e
    FNSTSW AX                           ; 005e0da0
    SAHF                                ; 005e0da2
    JA 0x005e0ceb                       ; 005e0da3
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    LEA EAX,[ESP + 0x54]                ; 005e0da9
    PUSH EAX                            ; 005e0dad
    LEA EAX,[ESP + 0x70]                ; 005e0dae
    PUSH EAX                            ; 005e0db2
    PUSH EBX                            ; 005e0db3
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e0db4
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 005e0db9
    LEA EAX,[ESP + 0x60]                ; 005e0dbb
    ADD ESP,0xc                         ; 005e0dbf
    CMP EAX,EDX                         ; 005e0dc2
    JZ 0x005e0dda                       ; 005e0dc4
        ;   XREF to: 005e0dda (CONDITIONAL_JUMP)  ; LAB_005e0dda
    MOV EAX,dword ptr [EDX]             ; 005e0dc6
    MOV dword ptr [ESP + 0x54],EAX      ; 005e0dc8
    MOV EAX,dword ptr [EDX + 0x4]       ; 005e0dcc
    MOV dword ptr [ESP + 0x58],EAX      ; 005e0dcf
    MOV EAX,dword ptr [EDX + 0x8]       ; 005e0dd3
    MOV dword ptr [ESP + 0x5c],EAX      ; 005e0dd6
    MOV EAX,dword ptr [EBX + 0x170]     ; 005e0dda
        ;   Label: LAB_005e0dda
    TEST EAX,EAX                        ; 005e0de0
    JBE 0x005e0e87                      ; 005e0de2
        ;   XREF to: 005e0e87 (CONDITIONAL_JUMP)  ; LAB_005e0e87
    CMP EAX,0x1                         ; 005e0de8
    JNZ 0x005e0f09                      ; 005e0deb
        ;   XREF to: 005e0f09 (CONDITIONAL_JUMP)  ; LAB_005e0f09
    MOV EAX,ESP                         ; 005e0df1
    PUSH EAX                            ; 005e0df3
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e0df4
    PUSH EBX                            ; 005e0dfa
    CALL dword ptr [EDX + 0x14]         ; 005e0dfb
    ADD ESP,0x8                         ; 005e0dfe
    FLD float ptr [ESP + 0x58]          ; 005e0e01
    FCOMP float ptr [ESP + 0x4]         ; 005e0e05
    FNSTSW AX                           ; 005e0e09
    SAHF                                ; 005e0e0b
    JC 0x005e0ceb                       ; 005e0e0c
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [ESP + 0x58]          ; 005e0e12
    FCOMP float ptr [ESP + 0x10]        ; 005e0e16
    FNSTSW AX                           ; 005e0e1a
    SAHF                                ; 005e0e1c
    JA 0x005e0ceb                       ; 005e0e1d
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [ESP + 0x5c]          ; 005e0e23
    FMUL ST0                            ; 005e0e27
    FLD float ptr [ESP + 0x54]          ; 005e0e29
    FMUL ST0                            ; 005e0e2d
    FADDP                               ; 005e0e2f
    FLD float ptr [EBX + 0x160]         ; 005e0e31
    FMUL float ptr [EBX + 0x168]        ; 005e0e37
    FMUL double ptr [0x0065584c]        ; 005e0e3d | DOUBLE_0065584c
    FCOMPP                              ; 005e0e43
    FNSTSW AX                           ; 005e0e45
    SAHF                                ; 005e0e47
    JNC 0x005e0efa                      ; 005e0e48
        ;   XREF to: 005e0efa (CONDITIONAL_JUMP)  ; LAB_005e0efa
    XOR EAX,EAX                         ; 005e0e4e
    ADD ESP,0x88                        ; 005e0e50
    POP EBP                             ; 005e0e56
    POP ESI                             ; 005e0e57
    POP EBX                             ; 005e0e58
    RET                                 ; 005e0e59
    MOV ECX,dword ptr [0x00823c4c]      ; 005e0e5a | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_005e0e5a
    PUSH ECX                            ; 005e0e60
    PUSH ESI                            ; 005e0e61
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e0e62
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e0e67
    TEST EAX,EAX                        ; 005e0e6a
    JZ 0x005e0e7b                       ; 005e0e6c
        ;   XREF to: 005e0e7b (CONDITIONAL_JUMP)  ; LAB_005e0e7b
    CMP dword ptr [EAX + 0x2410],0x0    ; 005e0e6e
    JZ 0x005e0ceb                       ; 005e0e75
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    MOV EAX,dword ptr [ESI + 0x24]      ; 005e0e7b
        ;   Label: LAB_005e0e7b
    MOV dword ptr [ESP + 0x58],EAX      ; 005e0e7e
    JMP 0x005e0d6b                      ; 005e0e82
        ;   XREF to: 005e0d6b (UNCONDITIONAL_JUMP)  ; LAB_005e0d6b
    LEA EAX,[ESP + 0x30]                ; 005e0e87
        ;   Label: LAB_005e0e87
    PUSH EAX                            ; 005e0e8b
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e0e8c
    PUSH EBX                            ; 005e0e92
    CALL dword ptr [EDX + 0x14]         ; 005e0e93
    FLD float ptr [EAX]                 ; 005e0e96
    ADD ESP,0x8                         ; 005e0e98
    MOV EBX,EAX                         ; 005e0e9b
    FCOMP float ptr [ESP + 0x54]        ; 005e0e9d
    FNSTSW AX                           ; 005e0ea1
    SAHF                                ; 005e0ea3
    JA 0x005e0ceb                       ; 005e0ea4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [EBX + 0x4]           ; 005e0eaa
    FCOMP float ptr [ESP + 0x58]        ; 005e0ead
    FNSTSW AX                           ; 005e0eb1
    SAHF                                ; 005e0eb3
    JA 0x005e0ceb                       ; 005e0eb4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [EBX + 0x8]           ; 005e0eba
    FCOMP float ptr [ESP + 0x5c]        ; 005e0ebd
    FNSTSW AX                           ; 005e0ec1
    SAHF                                ; 005e0ec3
    JA 0x005e0ceb                       ; 005e0ec4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [EBX + 0xc]           ; 005e0eca
    FCOMP float ptr [ESP + 0x54]        ; 005e0ecd
    FNSTSW AX                           ; 005e0ed1
    SAHF                                ; 005e0ed3
    JC 0x005e0ceb                       ; 005e0ed4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [EBX + 0x10]          ; 005e0eda
    FCOMP float ptr [ESP + 0x58]        ; 005e0edd
    FNSTSW AX                           ; 005e0ee1
    SAHF                                ; 005e0ee3
    JC 0x005e0ceb                       ; 005e0ee4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    FLD float ptr [EBX + 0x14]          ; 005e0eea
    FCOMP float ptr [ESP + 0x5c]        ; 005e0eed
    FNSTSW AX                           ; 005e0ef1
    SAHF                                ; 005e0ef3
    JC 0x005e0ceb                       ; 005e0ef4
        ;   XREF to: 005e0ceb (CONDITIONAL_JUMP)  ; LAB_005e0ceb
    MOV EAX,0x1                         ; 005e0efa
        ;   Label: LAB_005e0efa
    ADD ESP,0x88                        ; 005e0eff
    POP EBP                             ; 005e0f05
    POP ESI                             ; 005e0f06
    POP EBX                             ; 005e0f07
    RET                                 ; 005e0f08
    PUSH EBX                            ; 005e0f09
        ;   Label: LAB_005e0f09
    MOV EDX,dword ptr [EBX + 0x170]     ; 005e0f0a
    PUSH EDX                            ; 005e0f10
    MOV EBP,0x6557d8                    ; 005e0f11 | = "..\\core\\trigger.cpp"
    MOV EAX,0x37d                       ; 005e0f16
    PUSH 0x6557ec                       ; 005e0f1b | = "CTrigger::containsActor - invalid tri..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005e0f20 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005e0f26 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e0f2b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005e0f30
    MOV EBX,0x383                       ; 005e0f33
    MOV ECX,0x655826                    ; 005e0f38 | = "..\\core\\trigger.cpp"
    PUSH 0x65583a                       ; 005e0f3d | = "Hell froze..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 005e0f42 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 005e0f48 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e0f4e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e0f53
    XOR EAX,EAX                         ; 005e0f56
    ADD ESP,0x88                        ; 005e0f58
    POP EBP                             ; 005e0f5e
    POP ESI                             ; 005e0f5f
    POP EBX                             ; 005e0f60
    RET                                 ; 005e0f61

