; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mobster.cpp_FUN_00526d90()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_FUN_00525840 at 0052649a
;
; Referenced Globals:
;   TerminatedCString s_CTommyGun_00639906
;   double DOUBLE_00639916 = 0.333333333333333
;   double DOUBLE_0063991e = 5
;   double DOUBLE_00639926 = 0.400000000000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_bodypart.cpp_FUN_0041b4e0
;   core_bodypart.cpp_FUN_0041b540
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526d90
        ;   Label: core_mobster.cpp_FUN_00526d90
    PUSH ESI                            ; 00526d91
    PUSH EDI                            ; 00526d92
    PUSH EBP                            ; 00526d93
    MOV EBP,ESP                         ; 00526d94
    SUB ESP,0xa0                        ; 00526d96
    AND ESP,0xfffffff8                  ; 00526d9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526d9f
    CMP dword ptr [EAX + 0xbe30],0x0    ; 00526da2
    JNZ 0x00527091                      ; 00526da9
        ;   XREF to: 00527091 (CONDITIONAL_JUMP)  ; LAB_00527091
    FLD float ptr [EAX + 0xbec0]        ; 00526daf
    FSUB float ptr [EBP + 0x18]         ; 00526db5
    FST float ptr [EAX + 0xbec0]        ; 00526db8
    FLDZ                                ; 00526dbe
    FCOMPP                              ; 00526dc0
    FNSTSW AX                           ; 00526dc2
    SAHF                                ; 00526dc4
    JC 0x00526e7d                       ; 00526dc5
        ;   XREF to: 00526e7d (CONDITIONAL_JUMP)  ; LAB_00526e7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526dcb
        ;   Label: LAB_00526dcb
    MOV EAX,dword ptr [EAX + 0x24f4]    ; 00526dce
    MOV EBX,dword ptr [EBP + 0x14]      ; 00526dd4
    SHL EAX,0x2                         ; 00526dd7
    ADD EAX,EBX                         ; 00526dda
    CMP dword ptr [EAX + 0x2298],0x0    ; 00526ddc
    JZ 0x00527091                       ; 00526de3
        ;   XREF to: 00527091 (CONDITIONAL_JUMP)  ; LAB_00527091
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 00526de9
    TEST EDI,EDI                        ; 00526def
    JNZ 0x00527091                      ; 00526df1
        ;   XREF to: 00527091 (CONDITIONAL_JUMP)  ; LAB_00527091
    FLD float ptr [EBX + 0xbec4]        ; 00526df7
    FLDZ                                ; 00526dfd
    FCOMPP                              ; 00526dff
    FNSTSW AX                           ; 00526e01
    SAHF                                ; 00526e03
    JC 0x00526ebb                       ; 00526e04
        ;   XREF to: 00526ebb (CONDITIONAL_JUMP)  ; LAB_00526ebb
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 00526e0a
    LEA ESI,[EBX + 0x20]                ; 00526e10
    TEST EDX,EDX                        ; 00526e13
    JNZ 0x00526ee6                      ; 00526e15
        ;   XREF to: 00526ee6 (CONDITIONAL_JUMP)  ; LAB_00526ee6
    MOV dword ptr [ESP + 0x8c],EDI      ; 00526e1b
    MOV dword ptr [ESP + 0x94],EDI      ; 00526e22
    MOV dword ptr [ESP + 0x90],ESI      ; 00526e29
    XOR ESI,ESI                         ; 00526e30
    MOV EAX,[0x006810c8]                ; 00526e32 | g_CDemonSetPtr
        ;   Label: LAB_00526e32
    MOV EBX,dword ptr [ESP + 0x94]      ; 00526e37
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 00526e3e | g_CDemonSetInstance.actor_list_ptr
    JGE 0x00527157                      ; 00526e44
        ;   XREF to: 00527157 (CONDITIONAL_JUMP)  ; LAB_00527157
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 00526e4a | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH EBX                            ; 00526e51
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526e52
    CALL dword ptr [EAX + 0x8c]         ; 00526e58
    ADD ESP,0x4                         ; 00526e5e
    TEST EAX,EAX                        ; 00526e61
    JZ 0x005270b3                       ; 00526e63
        ;   XREF to: 005270b3 (CONDITIONAL_JUMP)  ; LAB_005270b3
    MOV EAX,dword ptr [ESP + 0x94]      ; 00526e69
        ;   Label: LAB_00526e69
    INC EAX                             ; 00526e70
    ADD EDI,0x4                         ; 00526e71
    MOV dword ptr [ESP + 0x94],EAX      ; 00526e74
    JMP 0x00526e32                      ; 00526e7b
        ;   XREF to: 00526e32 (UNCONDITIONAL_JUMP)  ; LAB_00526e32
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526e7d
        ;   Label: LAB_00526e7d
    MOV ECX,dword ptr [EAX + 0xbebc]    ; 00526e80
    PUSH 0x41200000                     ; 00526e86
    INC ECX                             ; 00526e8b
    PUSH 0x40a00000                     ; 00526e8c
    MOV dword ptr [EAX + 0xbebc],ECX    ; 00526e91
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00526e97
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    FLD float ptr [EBX + 0xbec4]        ; 00526ebb
        ;   Label: LAB_00526ebb
    FSUB float ptr [EBP + 0x18]         ; 00526ec1
    FST float ptr [EBX + 0xbec4]        ; 00526ec4
    FLDZ                                ; 00526eca
    FCOMPP                              ; 00526ecc
    FNSTSW AX                           ; 00526ece
    SAHF                                ; 00526ed0
    JBE 0x00527091                      ; 00526ed1
        ;   XREF to: 00527091 (CONDITIONAL_JUMP)  ; LAB_00527091
    MOV dword ptr [EBX + 0xbec4],EDI    ; 00526ed7
    XOR EAX,EAX                         ; 00526edd
    MOV ESP,EBP                         ; 00526edf
    POP EBP                             ; 00526ee1
    POP EDI                             ; 00526ee2
    POP ESI                             ; 00526ee3
    POP EBX                             ; 00526ee4
    RET                                 ; 00526ee5
    PUSH EDX                            ; 00526ee6
        ;   Label: LAB_00526ee6
    MOV EBX,dword ptr [EDX + 0x154]     ; 00526ee7
    CALL dword ptr [EBX + 0x8c]         ; 00526eed
    ADD ESP,0x4                         ; 00526ef3
    TEST EAX,EAX                        ; 00526ef6
    JNZ 0x00527043                      ; 00526ef8
        ;   XREF to: 00527043 (CONDITIONAL_JUMP)  ; LAB_00527043
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526efe
    MOV EAX,dword ptr [EAX + 0xbec8]    ; 00526f01
    FLD float ptr [ESI]                 ; 00526f07
    FSUB float ptr [EAX + 0x20]         ; 00526f09
    FMUL ST0                            ; 00526f0c
    FLD float ptr [ESI + 0x8]           ; 00526f0e
    FSUB float ptr [EAX + 0x28]         ; 00526f11
    FMUL ST0                            ; 00526f14
    FADDP                               ; 00526f16
    FSQRT                               ; 00526f18
    FMUL double ptr [0x00639916]        ; 00526f1a | DOUBLE_00639916
    FSUBR double ptr [0x0063991e]       ; 00526f20 | DOUBLE_0063991e
    FST float ptr [ESP]                 ; 00526f26
    FLD1                                ; 00526f29
    FCOMPP                              ; 00526f2b
    FNSTSW AX                           ; 00526f2d
    SAHF                                ; 00526f2f
    JBE 0x00526f39                      ; 00526f30
        ;   XREF to: 00526f39 (CONDITIONAL_JUMP)  ; LAB_00526f39
    MOV dword ptr [ESP],0x3f800000      ; 00526f32
    FLD float ptr [EBP + 0x18]          ; 00526f39
        ;   Label: LAB_00526f39
    FMUL float ptr [ESP]                ; 00526f3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526f3f
    FADD float ptr [EAX + 0xbec4]       ; 00526f42
    MOV EBX,0xffffffff                  ; 00526f48
    FST float ptr [EAX + 0xbec4]        ; 00526f4d
    FLDZ                                ; 00526f53
    FCOMPP                              ; 00526f55
    FNSTSW AX                           ; 00526f57
    SAHF                                ; 00526f59
    JBE 0x0052702e                      ; 00526f5a
        ;   XREF to: 0052702e (CONDITIONAL_JUMP)  ; LAB_0052702e
    MOV EDI,dword ptr [EBP + 0x14]      ; 00526f60
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526f63
    PUSH EDI                            ; 00526f66
    MOV EAX,dword ptr [EAX + 0xbec8]    ; 00526f67
    PUSH EAX                            ; 00526f6d
    MOV ESI,dword ptr [EAX + 0x154]     ; 00526f6e
    CALL dword ptr [ESI + 0x7c]         ; 00526f74
    ADD ESP,0x8                         ; 00526f77
    CMP EAX,0x3                         ; 00526f7a
    JNZ 0x0052702e                      ; 00526f7d
        ;   XREF to: 0052702e (CONDITIONAL_JUMP)  ; LAB_0052702e
    LEA ESI,[ESP + 0x30]                ; 00526f83
    MOV EBX,dword ptr [EDI + 0xbec8]    ; 00526f87
    PUSH ESI                            ; 00526f8d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526f8e
    PUSH EBX                            ; 00526f94
    CALL dword ptr [EAX + 0x14]         ; 00526f95
    MOV EAX,0x3f000000                  ; 00526f98
    ADD ESP,0x8                         ; 00526f9d
    MOV dword ptr [ESP + 0x88],EAX      ; 00526fa0
    LEA EAX,[ESP + 0x88]                ; 00526fa7
    PUSH EAX                            ; 00526fae
    LEA EAX,[ESP + 0x70]                ; 00526faf
    PUSH EAX                            ; 00526fb3
    LEA EAX,[ESP + 0x44]                ; 00526fb4
    PUSH EAX                            ; 00526fb8
    LEA EAX,[ESP + 0x84]                ; 00526fb9
    PUSH EAX                            ; 00526fc0
    LEA EAX,[ESP + 0x40]                ; 00526fc1
    PUSH EAX                            ; 00526fc5
    CALL core_bodypart.cpp_FUN_0041b540 ; 00526fc6
        ;   XREF to: 0041b540 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b540()
    ADD ESP,0xc                         ; 00526fcb
    PUSH EAX                            ; 00526fce
    CALL core_bodypart.cpp_FUN_0041b4e0 ; 00526fcf
        ;   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b4e0()
    ADD ESP,0xc                         ; 00526fd4
    LEA EAX,[ESP + 0x6c]                ; 00526fd7
    PUSH EAX                            ; 00526fdb
    LEA EAX,[ESP + 0x64]                ; 00526fdc
    FLD float ptr [ESP + 0x3c]          ; 00526fe0
    PUSH EAX                            ; 00526fe4
    FADD double ptr [0x00639926]        ; 00526fe5 | DOUBLE_00639926
    PUSH EBX                            ; 00526feb
    FSTP float ptr [ESP + 0x80]         ; 00526fec
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00526ff3
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00526ff8
    PUSH 0x3d0efa35                     ; 00526ffb
    LEA EAX,[ESP + 0x4c]                ; 00527000
    PUSH 0x3e99999a                     ; 00527004
    PUSH EAX                            ; 00527009
    XOR ECX,ECX                         ; 0052700a
    PUSH ECX                            ; 0052700c
    LEA EAX,[ESP + 0x70]                ; 0052700d
    MOV EDX,0x3fc00000                  ; 00527011
    PUSH EAX                            ; 00527016
    MOV dword ptr [ESP + 0x5c],EDX      ; 00527017
    PUSH EDI                            ; 0052701b
    MOV dword ptr [ESP + 0x64],ECX      ; 0052701c
    MOV dword ptr [ESP + 0x68],ECX      ; 00527020
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00527024
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00527029
    MOV EBX,EAX                         ; 0052702c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052702e
        ;   Label: LAB_0052702e
    ADD EAX,0x158                       ; 00527031
    TEST EBX,EBX                        ; 00527036
    JL 0x0052706d                       ; 00527038
        ;   XREF to: 0052706d (CONDITIONAL_JUMP)  ; LAB_0052706d
    JG 0x0052709a                       ; 0052703a
        ;   XREF to: 0052709a (CONDITIONAL_JUMP)  ; LAB_0052709a
    MOV EAX,0x1                         ; 0052703c
    JMP 0x00527093                      ; 00527041
        ;   XREF to: 00527093 (UNCONDITIONAL_JUMP)  ; LAB_00527093
    MOV EAX,dword ptr [EBP + 0x14]      ; 00527043
        ;   Label: LAB_00527043
    PUSH 0x1                            ; 00527046
    ADD EAX,0x158                       ; 00527048
    PUSH 0x1                            ; 0052704d
    MOV dword ptr [EAX + 0xbd70],EDI    ; 0052704f
    PUSH EAX                            ; 00527055
    MOV dword ptr [EAX + 0xbd6c],EDI    ; 00527056
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052705c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00527061
    XOR EAX,EAX                         ; 00527064
    MOV ESP,EBP                         ; 00527066
    POP EBP                             ; 00527068
    POP EDI                             ; 00527069
    POP ESI                             ; 0052706a
    POP EBX                             ; 0052706b
    RET                                 ; 0052706c
    PUSH 0x1                            ; 0052706d
        ;   Label: LAB_0052706d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052706f
    PUSH 0x1                            ; 00527072
    MOV dword ptr [EDX + 0xbec8],0x0    ; 00527074
    PUSH EAX                            ; 0052707e
    MOV dword ptr [EDX + 0xbec4],0x41a00000 ; 0052707f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00527089
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052708e
    XOR EAX,EAX                         ; 00527091
        ;   Label: LAB_00527091
    MOV ESP,EBP                         ; 00527093
        ;   Label: LAB_00527093
    POP EBP                             ; 00527095
    POP EDI                             ; 00527096
    POP ESI                             ; 00527097
    POP EBX                             ; 00527098
    RET                                 ; 00527099
    PUSH 0x1                            ; 0052709a
        ;   Label: LAB_0052709a
    PUSH 0x7                            ; 0052709c
    PUSH EAX                            ; 0052709e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052709f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 005270a4
    ADD ESP,0xc                         ; 005270a9
    MOV ESP,EBP                         ; 005270ac
    POP EBP                             ; 005270ae
    POP EDI                             ; 005270af
    POP ESI                             ; 005270b0
    POP EBX                             ; 005270b1
    RET                                 ; 005270b2
    PUSH 0x639906                       ; 005270b3 | = "CTommyGun"
        ;   Label: LAB_005270b3
    PUSH EBX                            ; 005270b8
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005270b9
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005270be
    TEST EAX,EAX                        ; 005270c1
    JZ 0x00526e69                       ; 005270c3
        ;   XREF to: 00526e69 (CONDITIONAL_JUMP)  ; LAB_00526e69
    LEA EAX,[EBX + 0x20]                ; 005270c9
    MOV EDX,dword ptr [ESP + 0x90]      ; 005270cc
    FLD float ptr [EAX]                 ; 005270d3
    FSUB float ptr [EDX]                ; 005270d5
    FSTP float ptr [ESP + 0x54]         ; 005270d7
    FLD float ptr [EAX + 0x4]           ; 005270db
    FSUB float ptr [EDX + 0x4]          ; 005270de
    FST float ptr [ESP + 0x58]          ; 005270e1
    FMUL float ptr [ESP + 0x58]         ; 005270e5
    FLD float ptr [EAX + 0x8]           ; 005270e9
    FSUB float ptr [EDX + 0x8]          ; 005270ec
    FXCH                                ; 005270ef
    FST float ptr [ESP + 0x58]          ; 005270f1
    FMUL float ptr [ESP + 0x58]         ; 005270f5
    FST float ptr [ESP + 0x58]          ; 005270f9
    FMUL float ptr [ESP + 0x58]         ; 005270fd
    FLD float ptr [ESP + 0x54]          ; 00527101
    FMUL ST0                            ; 00527105
    FADDP                               ; 00527107
    FXCH                                ; 00527109
    FST float ptr [ESP + 0x5c]          ; 0052710b
    FMUL float ptr [ESP + 0x5c]         ; 0052710f
    FADDP                               ; 00527113
    FSQRT                               ; 00527115
    FST float ptr [ESP + 0x4]           ; 00527117
    FCOMP double ptr [0x0063991e]       ; 0052711b | DOUBLE_0063991e
    FNSTSW AX                           ; 00527121
    SAHF                                ; 00527123
    JC 0x00526e69                       ; 00527124
        ;   XREF to: 00526e69 (CONDITIONAL_JUMP)  ; LAB_00526e69
    CMP dword ptr [ESP + 0x4],0x41700000 ; 0052712a
    JG 0x00526e69                       ; 00527132
        ;   XREF to: 00526e69 (CONDITIONAL_JUMP)  ; LAB_00526e69
    MOV dword ptr [ESP + ESI*0x1 + 0x8],EBX ; 00527138
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0052713c
    INC EBX                             ; 00527143
    ADD ESI,0x4                         ; 00527144
    MOV dword ptr [ESP + 0x8c],EBX      ; 00527147
    CMP ESI,0x28                        ; 0052714e
    JL 0x00526e69                       ; 00527151
        ;   XREF to: 00526e69 (CONDITIONAL_JUMP)  ; LAB_00526e69
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00527157
        ;   Label: LAB_00527157
    CMP ESI,0x1                         ; 0052715e
    JL 0x00527091                       ; 00527161
        ;   XREF to: 00527091 (CONDITIONAL_JUMP)  ; LAB_00527091
    LEA EAX,[ESI + -0x1]                ; 00527167
    PUSH EAX                            ; 0052716a
    PUSH 0x0                            ; 0052716b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0052716d
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00527172
    MOV EDX,dword ptr [EBP + 0x14]      ; 00527175
    PUSH 0x1                            ; 00527178
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0052717a
    MOV dword ptr [EDX + 0xbec4],0xc2200000 ; 0052717e
    PUSH 0x1                            ; 00527188
    MOV EDI,dword ptr [EDX + 0xbebc]    ; 0052718a
    MOV dword ptr [EDX + 0xbec8],EAX    ; 00527190
    LEA EAX,[EDX + 0x158]               ; 00527196
    INC EDI                             ; 0052719c
    PUSH EAX                            ; 0052719d
    MOV dword ptr [EDX + 0xbebc],EDI    ; 0052719e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005271a4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 005271a9
    ADD ESP,0xc                         ; 005271ae
    MOV ESP,EBP                         ; 005271b1
    POP EBP                             ; 005271b3
    POP EDI                             ; 005271b4
    POP ESI                             ; 005271b5
    POP EBX                             ; 005271b6
    RET                                 ; 005271b7

