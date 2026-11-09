; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_005a2d00(CTurret *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x130]:1  local_130
;
; Referenced Globals:
;   TerminatedCString s_s_has_no_guard_trigger_005f8b43
;   undefined4 DAT_005f8b60
;   undefined4 DAT_005f8b64
;   undefined4 DAT_005f8b68
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_006074cc
;   undefined4 DAT_006074d0
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040c550
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_CBoundingBox3D_reset_FUN_00421570
;   core_box.cpp_FUN_00420570
;   core_turret.cpp_CTurret_updatePatrol_FUN_005a3650
;   core_turret.cpp_FUN_005a3350
;   core_vecdir.cpp_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2d00
        ;   Label: core_turret.cpp_FUN_005a2d00
    PUSH ESI                            ; 005a2d01
    PUSH EDI                            ; 005a2d02
    PUSH EBP                            ; 005a2d03
    MOV EBP,ESP                         ; 005a2d04
    SUB ESP,0x1dc                       ; 005a2d06
    AND ESP,0xfffffff8                  ; 005a2d0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a2d0f
    MOV EDX,dword ptr [EAX + 0x780]     ; 005a2d12
    TEST EDX,EDX                        ; 005a2d18
    JZ 0x005a2efc                       ; 005a2d1a
        ;   XREF to: 005a2efc (CONDITIONAL_JUMP)  ; LAB_005a2efc
    MOV EAX,EDX                         ; 005a2d20
    PUSH EAX                            ; 005a2d22
    MOV EDX,dword ptr [EDX + 0x154]     ; 005a2d23
    LEA ESI,[ESP + 0xc4]                ; 005a2d29
    LEA EDI,[ESP + 0x7c]                ; 005a2d30
    CALL dword ptr [EDX + 0x1c]         ; 005a2d34
    MOV ECX,0x6                         ; 005a2d37
    LEA ESI,[ESP + 0xc4]                ; 005a2d3c
    ADD ESP,0x4                         ; 005a2d43
    LEA EAX,[ESP + 0xd8]                ; 005a2d46
    XOR EBX,EBX                         ; 005a2d4d
    PUSH EAX                            ; 005a2d4f
    MOVSD.REP ES:EDI,ESI                ; 005a2d50
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00421570 ; 005a2d52
        ;   XREF to: 00421570 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005a2d57
    PUSH EBX                            ; 005a2d5a
        ;   Label: LAB_005a2d5a
    LEA EAX,[ESP + 0x7c]                ; 005a2d5b
    PUSH EAX                            ; 005a2d5f
    LEA ESI,[ESP + 0x1b8]               ; 005a2d60
    LEA EDI,[ESP + 0x170]               ; 005a2d67
    CALL core_box.cpp_FUN_00420570      ; 005a2d6e
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    ADD ESP,0x8                         ; 005a2d73
    LEA EAX,[ESP + 0x168]               ; 005a2d76
    LEA ESI,[ESP + 0x1b0]               ; 005a2d7d
    PUSH EAX                            ; 005a2d84
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a2d85
    MOVSD ES:EDI,ESI                    ; 005a2d88
    MOVSD ES:EDI,ESI                    ; 005a2d89
    MOVSD ES:EDI,ESI                    ; 005a2d8a
    MOV ESI,dword ptr [EAX + 0x780]     ; 005a2d8b
    PUSH ESI                            ; 005a2d91
    LEA ESI,[ESP + 0x164]               ; 005a2d92
    LEA EDI,[ESP + 0x1c4]               ; 005a2d99
    CALL core_actor.cpp_FUN_00408b40    ; 005a2da0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005a2da5
    LEA EAX,[ESP + 0x1bc]               ; 005a2da8
    LEA ESI,[ESP + 0x15c]               ; 005a2daf
    PUSH EAX                            ; 005a2db6
    LEA EAX,[ESP + 0xdc]                ; 005a2db7
    INC EBX                             ; 005a2dbe
    PUSH EAX                            ; 005a2dbf
    MOVSD ES:EDI,ESI                    ; 005a2dc0
    MOVSD ES:EDI,ESI                    ; 005a2dc1
    MOVSD ES:EDI,ESI                    ; 005a2dc2
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a2dc3
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a2dc8
    CMP EBX,0x8                         ; 005a2dcb
    JL 0x005a2d5a                       ; 005a2dce
        ;   XREF to: 005a2d5a (CONDITIONAL_JUMP)  ; LAB_005a2d5a
    FLD float ptr [ESP + 0xd8]          ; 005a2dd0
    FLD float ptr [ESP + 0xdc]          ; 005a2dd7
    FLD float ptr [ESP + 0xe0]          ; 005a2dde
    FLD float ptr [ESP + 0xe4]          ; 005a2de5
    FLD float ptr [ESP + 0xe8]          ; 005a2dec
    FLD float ptr [ESP + 0xec]          ; 005a2df3
    MOV EDI,0x4479c000                  ; 005a2dfa
    LEA EAX,[ESP + 0xa8]                ; 005a2dff
    XOR ECX,ECX                         ; 005a2e06
    MOV dword ptr [ESP + 0x18c],EDI     ; 005a2e08
    MOV dword ptr [ESP + 0x190],EDI     ; 005a2e0f
    MOV dword ptr [ESP + 0x194],EDI     ; 005a2e16
    MOV dword ptr [ESP + 0x1d8],ECX     ; 005a2e1d
    ADD EAX,0xc                         ; 005a2e24
    MOV dword ptr [ESP + 0x1d0],ECX     ; 005a2e27
    FXCH ST5                            ; 005a2e2e
    FLD float ptr [0x005f8b60]          ; 005a2e30 | DAT_005f8b60
    FXCH                                ; 005a2e36
    FADD ST0,ST1                        ; 005a2e38
    FXCH ST5                            ; 005a2e3a
    FADD ST0,ST1                        ; 005a2e3c
    FXCH ST4                            ; 005a2e3e
    FADDP                               ; 005a2e40
    FXCH ST2                            ; 005a2e42
    FLD float ptr [0x005f8b64]          ; 005a2e44 | DAT_005f8b64
    FXCH                                ; 005a2e4a
    FADD ST0,ST1                        ; 005a2e4c
    FXCH ST2                            ; 005a2e4e
    FADD ST0,ST1                        ; 005a2e50
    FXCH ST6                            ; 005a2e52
    FADDP                               ; 005a2e54
    FXCH ST3                            ; 005a2e56
    FSTP float ptr [ESP + 0xdc]         ; 005a2e58
    FXCH                                ; 005a2e5f
    FSTP float ptr [ESP + 0xe0]         ; 005a2e61
    FSTP float ptr [ESP + 0xe4]         ; 005a2e68
    FXCH ST2                            ; 005a2e6f
    FSTP float ptr [ESP + 0xe8]         ; 005a2e71
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005a2e78
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a2e7f
    FXCH                                ; 005a2e82
    FSTP float ptr [ESP + 0xec]         ; 005a2e84
    ADD EAX,0x784                       ; 005a2e8b
    FSTP float ptr [ESP + 0xd8]         ; 005a2e90
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005a2e97
    MOV EAX,[0x00622c18]                ; 005a2e9e | g_CDemonSetPtr
        ;   Label: LAB_005a2e9e
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 005a2ea3
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 005a2eaa | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x005a32d8                      ; 005a2eb0
        ;   XREF to: 005a32d8 (CONDITIONAL_JUMP)  ; LAB_005a32d8
    MOV EBX,dword ptr [ESP + 0x1d0]     ; 005a2eb6
    MOV ESI,dword ptr [ESP + 0x1c8]     ; 005a2ebd
    ADD EAX,EBX                         ; 005a2ec4
    PUSH ESI                            ; 005a2ec6
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 005a2ec7 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 005a2ecd
    CALL core_actor.cpp_FUN_0040c550    ; 005a2ece
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005a2ed3
    TEST EAX,EAX                        ; 005a2ed6
    JNZ 0x005a2f18                      ; 005a2ed8
        ;   XREF to: 005a2f18 (CONDITIONAL_JUMP)  ; LAB_005a2f18
    MOV ECX,dword ptr [ESP + 0x1d8]     ; 005a2eda
        ;   Label: LAB_005a2eda
    MOV EDX,dword ptr [ESP + 0x1d0]     ; 005a2ee1
    INC ECX                             ; 005a2ee8
    ADD EDX,0x4                         ; 005a2ee9
    MOV dword ptr [ESP + 0x1d8],ECX     ; 005a2eec
    MOV dword ptr [ESP + 0x1d0],EDX     ; 005a2ef3
    JMP 0x005a2e9e                      ; 005a2efa
        ;   XREF to: 005a2e9e (UNCONDITIONAL_JUMP)  ; LAB_005a2e9e
    PUSH EAX                            ; 005a2efc
        ;   Label: LAB_005a2efc
    PUSH 0x5f8b43                       ; 005a2efd | = "%s has no guard trigger!\n"
    MOV EBX,dword ptr [0x00611100]      ; 005a2f02 | g_CConsolePtr
    PUSH EBX                            ; 005a2f08 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005a2f09
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005a2f0e
    MOV ESP,EBP                         ; 005a2f11
    POP EBP                             ; 005a2f13
    POP EDI                             ; 005a2f14
    POP ESI                             ; 005a2f15
    POP EBX                             ; 005a2f16
    RET                                 ; 005a2f17
    LEA EDX,[EBX + 0x20]                ; 005a2f18
        ;   Label: LAB_005a2f18
    FLD float ptr [ESP + 0xd8]          ; 005a2f1b
    FCOMP float ptr [EDX]               ; 005a2f22
    FNSTSW AX                           ; 005a2f24
    SAHF                                ; 005a2f26
    JA 0x005a2eda                       ; 005a2f27
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0xdc]          ; 005a2f29
    FCOMP float ptr [EDX + 0x4]         ; 005a2f30
    FNSTSW AX                           ; 005a2f33
    SAHF                                ; 005a2f35
    JA 0x005a2eda                       ; 005a2f36
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0xe0]          ; 005a2f38
    FCOMP float ptr [EDX + 0x8]         ; 005a2f3f
    FNSTSW AX                           ; 005a2f42
    SAHF                                ; 005a2f44
    JA 0x005a2eda                       ; 005a2f45
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0xe4]          ; 005a2f47
    FCOMP float ptr [EDX]               ; 005a2f4e
    FNSTSW AX                           ; 005a2f50
    SAHF                                ; 005a2f52
    JC 0x005a2eda                       ; 005a2f53
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0xe8]          ; 005a2f55
    FCOMP float ptr [EDX + 0x4]         ; 005a2f5c
    FNSTSW AX                           ; 005a2f5f
    SAHF                                ; 005a2f61
    JC 0x005a2eda                       ; 005a2f62
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0xec]          ; 005a2f68
    FCOMP float ptr [EDX + 0x8]         ; 005a2f6f
    FNSTSW AX                           ; 005a2f72
    SAHF                                ; 005a2f74
    JC 0x005a2eda                       ; 005a2f75
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    PUSH EBX                            ; 005a2f7b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2f7c
    CALL dword ptr [EAX + 0x5c]         ; 005a2f82
    ADD ESP,0x4                         ; 005a2f85
    TEST EAX,EAX                        ; 005a2f88
    JZ 0x005a2eda                       ; 005a2f8a
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    PUSH 0x5fb430                       ; 005a2f90 | g_CVectorTypeInfo
    PUSH 0xa                            ; 005a2f95
    LEA EAX,[ESP + 0x8]                 ; 005a2f97
    PUSH EAX                            ; 005a2f9b
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005a2f9c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005a2fa1
    MOV EDX,ESP                         ; 005a2fa4
    PUSH EDX                            ; 005a2fa6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2fa7
    PUSH EBX                            ; 005a2fad
    CALL dword ptr [EAX + 0x54]         ; 005a2fae
    ADD ESP,0x8                         ; 005a2fb1
    CMP EAX,0x1                         ; 005a2fb4
    JGE 0x005a30b0                      ; 005a2fb7
        ;   XREF to: 005a30b0 (CONDITIONAL_JUMP)  ; LAB_005a30b0
    PUSH EBX                            ; 005a2fbd
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2fbe
    LEA ESI,[ESP + 0x94]                ; 005a2fc4
    LEA EDI,[ESP + 0xac]                ; 005a2fcb
    CALL dword ptr [EAX + 0x1c]         ; 005a2fd2
    MOV ECX,0x6                         ; 005a2fd5
    LEA ESI,[ESP + 0x94]                ; 005a2fda
    ADD ESP,0x4                         ; 005a2fe1
    MOVSD.REP ES:EDI,ESI                ; 005a2fe4
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005a2fe6
    FLD float ptr [ESP + 0xa8]          ; 005a2fed
    FLD float ptr [ESP + 0xac]          ; 005a2ff4
    FLD float ptr [ESP + 0xb0]          ; 005a2ffb
    LEA EDI,[ESP + 0x174]               ; 005a3002
    LEA ESI,[ESP + 0x12c]               ; 005a3009
    FXCH ST2                            ; 005a3010
    FADD float ptr [EAX]                ; 005a3012
    FXCH                                ; 005a3014
    FADD float ptr [EAX + 0x4]          ; 005a3016
    FXCH ST2                            ; 005a3019
    FADD float ptr [EAX + 0x8]          ; 005a301b
    FXCH                                ; 005a301e
    FSTP float ptr [ESP + 0x12c]        ; 005a3020
    FXCH                                ; 005a3027
    FSTP float ptr [ESP + 0x130]        ; 005a3029
    FSTP float ptr [ESP + 0x134]        ; 005a3030
    MOVSD ES:EDI,ESI                    ; 005a3037
    MOVSD ES:EDI,ESI                    ; 005a3038
    MOVSD ES:EDI,ESI                    ; 005a3039
    FLD float ptr [0x005f8b68]          ; 005a303a | DAT_005f8b68
    FLD float ptr [ESP + 0x174]         ; 005a3040
    FMUL ST1                            ; 005a3047
    FLD float ptr [ESP + 0x178]         ; 005a3049
    FMUL ST2                            ; 005a3050
    FLD float ptr [ESP + 0x17c]         ; 005a3052
    FMULP ST3                           ; 005a3059
    MOV EDX,ESP                         ; 005a305b
    LEA EAX,[ESP + 0x120]               ; 005a305d
    LEA EDI,[ESP + 0x120]               ; 005a3064
    LEA ESI,[ESP + 0x114]               ; 005a306b
    FXCH                                ; 005a3072
    FSTP float ptr [ESP + 0x114]        ; 005a3074
    FSTP float ptr [ESP + 0x118]        ; 005a307b
    FSTP float ptr [ESP + 0x11c]        ; 005a3082
    MOVSD ES:EDI,ESI                    ; 005a3089
    MOVSD ES:EDI,ESI                    ; 005a308a
    MOVSD ES:EDI,ESI                    ; 005a308b
    CMP EDX,EAX                         ; 005a308c
    JZ 0x005a30b0                       ; 005a308e
        ;   XREF to: 005a30b0 (CONDITIONAL_JUMP)  ; LAB_005a30b0
    MOV EAX,dword ptr [ESP + 0x120]     ; 005a3090
    MOV dword ptr [ESP],EAX             ; 005a3097
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a309a
    MOV dword ptr [ESP + 0x4],EAX       ; 005a30a1
    MOV EAX,dword ptr [ESP + 0x128]     ; 005a30a5
    MOV dword ptr [ESP + 0x8],EAX       ; 005a30ac
    MOV EAX,ESP                         ; 005a30b0
        ;   Label: LAB_005a30b0
    PUSH EAX                            ; 005a30b2
    PUSH EBX                            ; 005a30b3
    LEA ESI,[ESP + 0x1ac]               ; 005a30b4
    LEA EDI,[ESP + 0x140]               ; 005a30bb
    CALL core_actor.cpp_FUN_00408b40    ; 005a30c2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005a30c7
    LEA EAX,[ESP + 0x138]               ; 005a30ca
    LEA ESI,[ESP + 0x1a4]               ; 005a30d1
    PUSH EAX                            ; 005a30d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a30d9
    MOVSD ES:EDI,ESI                    ; 005a30dc
    MOVSD ES:EDI,ESI                    ; 005a30dd
    MOVSD ES:EDI,ESI                    ; 005a30de
    MOV EDI,dword ptr [EAX + 0x780]     ; 005a30df
    PUSH EDI                            ; 005a30e5
    LEA ESI,[ESP + 0x1a0]               ; 005a30e6
    CALL core_actor.cpp_FUN_00408bb0    ; 005a30ed
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0x14c]               ; 005a30f2
    LEA ESI,[ESP + 0x1a0]               ; 005a30f9
    ADD ESP,0x8                         ; 005a3100
    MOVSD ES:EDI,ESI                    ; 005a3103
    MOVSD ES:EDI,ESI                    ; 005a3104
    MOVSD ES:EDI,ESI                    ; 005a3105
    FLD float ptr [ESP + 0x78]          ; 005a3106
    FCOMP float ptr [ESP + 0x144]       ; 005a310a
    FNSTSW AX                           ; 005a3111
    SAHF                                ; 005a3113
    JA 0x005a2eda                       ; 005a3114
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x7c]          ; 005a311a
    FCOMP float ptr [ESP + 0x148]       ; 005a311e
    FNSTSW AX                           ; 005a3125
    SAHF                                ; 005a3127
    JA 0x005a2eda                       ; 005a3128
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x80]          ; 005a312e
    FCOMP float ptr [ESP + 0x14c]       ; 005a3135
    FNSTSW AX                           ; 005a313c
    SAHF                                ; 005a313e
    JA 0x005a2eda                       ; 005a313f
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x84]          ; 005a3145
    FCOMP float ptr [ESP + 0x144]       ; 005a314c
    FNSTSW AX                           ; 005a3153
    SAHF                                ; 005a3155
    JC 0x005a2eda                       ; 005a3156
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x88]          ; 005a315c
    FCOMP float ptr [ESP + 0x148]       ; 005a3163
    FNSTSW AX                           ; 005a316a
    SAHF                                ; 005a316c
    JC 0x005a2eda                       ; 005a316d
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x8c]          ; 005a3173
    FCOMP float ptr [ESP + 0x14c]       ; 005a317a
    FNSTSW AX                           ; 005a3181
    SAHF                                ; 005a3183
    JC 0x005a2eda                       ; 005a3184
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    LEA EAX,[ESP + 0x138]               ; 005a318a
    PUSH EAX                            ; 005a3191
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a3192
    PUSH EAX                            ; 005a3195
    LEA ESI,[ESP + 0xf8]                ; 005a3196
    LEA EDI,[ESP + 0x188]               ; 005a319d
    CALL core_actor.cpp_FUN_00408bb0    ; 005a31a4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xf8]                ; 005a31a9
    ADD ESP,0x8                         ; 005a31b0
    LEA EAX,[ESP + 0x180]               ; 005a31b3
    MOVSD ES:EDI,ESI                    ; 005a31ba
    MOVSD ES:EDI,ESI                    ; 005a31bb
    MOVSD ES:EDI,ESI                    ; 005a31bc
    PUSH EAX                            ; 005a31bd
    LEA ESI,[ESP + 0x100]               ; 005a31be
    LEA EDI,[ESP + 0x154]               ; 005a31c5
    CALL core_vecdir.cpp_FUN_005a7520   ; 005a31cc
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x100]               ; 005a31d1
    ADD ESP,0x4                         ; 005a31d8
    MOVSD ES:EDI,ESI                    ; 005a31db
    MOVSD ES:EDI,ESI                    ; 005a31dc
    MOVSD ES:EDI,ESI                    ; 005a31dd
    FLD float ptr [ESP + 0x150]         ; 005a31de
    FCOMP float ptr [0x006074cc]        ; 005a31e5 | DAT_006074cc
    FNSTSW AX                           ; 005a31eb
    SAHF                                ; 005a31ed
    JC 0x005a2eda                       ; 005a31ee
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x150]         ; 005a31f4
    FCOMP float ptr [0x006074d0]        ; 005a31fb | DAT_006074d0
    FNSTSW AX                           ; 005a3201
    SAHF                                ; 005a3203
    JA 0x005a2eda                       ; 005a3204
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    FLD float ptr [ESP + 0x154]         ; 005a320a
    FMUL ST0                            ; 005a3211
    FLD float ptr [ESP + 0x150]         ; 005a3213
    FMUL ST0                            ; 005a321a
    FADDP                               ; 005a321c
    FLD float ptr [ESP + 0x158]         ; 005a321e
    FMUL ST0                            ; 005a3225
    FADDP                               ; 005a3227
    FSQRT                               ; 005a3229
    FLD float ptr [ESP + 0x190]         ; 005a322b
    FMUL ST0                            ; 005a3232
    FLD float ptr [ESP + 0x18c]         ; 005a3234
    FMUL ST0                            ; 005a323b
    FADDP                               ; 005a323d
    FLD float ptr [ESP + 0x194]         ; 005a323f
    FMUL ST0                            ; 005a3246
    FADDP                               ; 005a3248
    FSQRT                               ; 005a324a
    FCOMPP                              ; 005a324c
    FNSTSW AX                           ; 005a324e
    SAHF                                ; 005a3250
    JC 0x005a2eda                       ; 005a3251
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    LEA EAX,[ESP + 0x18c]               ; 005a3257
    LEA EDX,[ESP + 0x150]               ; 005a325e
    CMP EAX,EDX                         ; 005a3265
    JZ 0x005a3293                       ; 005a3267
        ;   XREF to: 005a3293 (CONDITIONAL_JUMP)  ; LAB_005a3293
    MOV EAX,dword ptr [ESP + 0x150]     ; 005a3269
    MOV dword ptr [ESP + 0x18c],EAX     ; 005a3270
    MOV EAX,dword ptr [ESP + 0x154]     ; 005a3277
    MOV dword ptr [ESP + 0x190],EAX     ; 005a327e
    MOV EAX,dword ptr [ESP + 0x158]     ; 005a3285
    MOV dword ptr [ESP + 0x194],EAX     ; 005a328c
    LEA EAX,[ESP + 0x108]               ; 005a3293
        ;   Label: LAB_005a3293
    LEA EDX,[ESP + 0x138]               ; 005a329a
    CMP EAX,EDX                         ; 005a32a1
    JZ 0x005a2eda                       ; 005a32a3
        ;   XREF to: 005a2eda (CONDITIONAL_JUMP)  ; LAB_005a2eda
    MOV EAX,dword ptr [ESP + 0x138]     ; 005a32a9
    MOV dword ptr [ESP + 0x108],EAX     ; 005a32b0
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005a32b7
    MOV dword ptr [ESP + 0x10c],EAX     ; 005a32be
    MOV EAX,dword ptr [ESP + 0x140]     ; 005a32c5
    MOV dword ptr [ESP + 0x110],EAX     ; 005a32cc
    JMP 0x005a2eda                      ; 005a32d3
        ;   XREF to: 005a2eda (UNCONDITIONAL_JUMP)  ; LAB_005a2eda
    CMP dword ptr [ESP + 0x190],0x42c60000 ; 005a32d8
        ;   Label: LAB_005a32d8
    JG 0x005a3338                       ; 005a32e3
        ;   XREF to: 005a3338 (CONDITIONAL_JUMP)  ; LAB_005a3338
    LEA EAX,[ESP + 0x108]               ; 005a32e5
    PUSH dword ptr [EBP + 0x18]         ; 005a32ec
    PUSH EAX                            ; 005a32ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a32f0
    PUSH EAX                            ; 005a32f3
    CALL core_turret.cpp_FUN_005a3350   ; 005a32f4
        ;   XREF to: 005a3350 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_FUN_005a3350(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    ADD ESP,0xc                         ; 005a32f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a32fc
    FLD float ptr [EAX + 0x300]         ; 005a32ff
    FLDZ                                ; 005a3305
    FCOMPP                              ; 005a3307
    FNSTSW AX                           ; 005a3309
    SAHF                                ; 005a330b
    JC 0x005a3324                       ; 005a330c
        ;   XREF to: 005a3324 (CONDITIONAL_JUMP)  ; LAB_005a3324
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a330e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a3311
    PUSH EDX                            ; 005a3314
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a3315
    CALL dword ptr [EAX + 0xe4]         ; 005a331b
    ADD ESP,0x4                         ; 005a3321
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a3324
        ;   Label: LAB_005a3324
    MOV dword ptr [EAX + 0x86c],0x3f800000 ; 005a3327
    MOV ESP,EBP                         ; 005a3331
    POP EBP                             ; 005a3333
    POP EDI                             ; 005a3334
    POP ESI                             ; 005a3335
    POP EBX                             ; 005a3336
    RET                                 ; 005a3337
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a3338
        ;   Label: LAB_005a3338
    PUSH dword ptr [EBP + 0x18]         ; 005a333b
    PUSH ECX                            ; 005a333e
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_005a3650 ; 005a333f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_005a3650(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a3344
    MOV ESP,EBP                         ; 005a3347
    POP EBP                             ; 005a3349
    POP EDI                             ; 005a334a
    POP ESI                             ; 005a334b
    POP EBX                             ; 005a334c
    RET                                 ; 005a334d

