; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_CCharacter_attractActorToward_FUN_00428160(int param_1,CDemonActor *param_2,CVector3f *param_3)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0057a032 = 5
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428160
        ;   Label: core_charactr.cpp_CCharacter_attractActorToward_FUN_00428160
    PUSH EBP                            ; 00428161
    MOV EBP,ESP                         ; 00428162
    SUB ESP,0x3c                        ; 00428164
    MOV ECX,dword ptr [EBP + 0xc]       ; 00428167
    MOV EBX,dword ptr [EBP + 0x10]      ; 0042816a
    TEST EBX,EBX                        ; 0042816d
    JNZ 0x00428178                      ; 0042816f
        ;   XREF to: 00428178 (CONDITIONAL_JUMP)  ; LAB_00428178
    XOR EAX,EAX                         ; 00428171
    MOV ESP,EBP                         ; 00428173
        ;   Label: LAB_00428173
    POP EBP                             ; 00428175
    POP EBX                             ; 00428176
    RET                                 ; 00428177
    LEA EAX,[EBP + -0x18]               ; 00428178
        ;   Label: LAB_00428178
    PUSH EAX                            ; 0042817b
    MOV EDX,dword ptr [ECX + 0x14c]     ; 0042817c
    PUSH ECX                            ; 00428182
    CALL dword ptr [EDX + 0x10c]        ; 00428183
    ADD ESP,0x8                         ; 00428189
    TEST EAX,EAX                        ; 0042818c
    JZ 0x00428173                       ; 0042818e
        ;   XREF to: 00428173 (CONDITIONAL_JUMP)  ; LAB_00428173
    MOV EDX,dword ptr [EBP + 0x14]      ; 00428190
    PUSH EDX                            ; 00428193
    LEA EAX,[EBP + -0x3c]               ; 00428194
    PUSH EAX                            ; 00428197
    PUSH EBX                            ; 00428198
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00428199
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EBP + -0x14]         ; 0042819e
    FLD float ptr [EBP + -0x18]         ; 004281a1
    FSUB float ptr [EAX]                ; 004281a4
    FLD float ptr [EBP + -0x10]         ; 004281a6
    FXCH                                ; 004281a9
    FSTP float ptr [EBP + -0x24]        ; 004281ab
    FXCH                                ; 004281ae
    FSUB float ptr [EAX + 0x4]          ; 004281b0
    FLD float ptr [EBP + -0x24]         ; 004281b3
    FXCH                                ; 004281b6
    FSTP float ptr [EBP + -0x20]        ; 004281b8
    FXCH                                ; 004281bb
    FSUB float ptr [EAX + 0x8]          ; 004281bd
    FXCH                                ; 004281c0
    FMUL float ptr [EBP + -0x24]        ; 004281c2
    FXCH                                ; 004281c5
    FST float ptr [EBP + -0x1c]         ; 004281c7
    FMUL float ptr [EBP + -0x1c]        ; 004281ca
    XOR ECX,ECX                         ; 004281cd
    MOV EAX,[0x005b9354]                ; 004281cf | g_CGame_PTR_005b9354
    MOV dword ptr [EBP + -0x20],ECX     ; 004281d4
    FADDP                               ; 004281d7
    FLD float ptr [EAX + 0x264]         ; 004281d9 | g_CGame_01c775ec.delta_time_float
    FXCH                                ; 004281df
    FSQRT                               ; 004281e1
    FXCH                                ; 004281e3
    FMUL double ptr [0x0057a032]        ; 004281e5 | DOUBLE_0057a032
    ADD ESP,0xc                         ; 004281eb
    FSTP float ptr [EBP + -0xc]         ; 004281ee
    FST float ptr [EBP + -0x8]          ; 004281f1
    FCOMP float ptr [EBP + -0xc]        ; 004281f4
    FNSTSW AX                           ; 004281f7
    SAHF                                ; 004281f9
    JBE 0x00428223                      ; 004281fa
        ;   XREF to: 00428223 (CONDITIONAL_JUMP)  ; LAB_00428223
    FLD float ptr [EBP + -0xc]          ; 004281fc
    FDIV float ptr [EBP + -0x8]         ; 004281ff
    FLD float ptr [EBP + -0x24]         ; 00428202
    FXCH                                ; 00428205
    FSTP float ptr [EBP + -0x4]         ; 00428207
    FMUL float ptr [EBP + -0x4]         ; 0042820a
    FLDZ                                ; 0042820d
    FMUL float ptr [EBP + -0x4]         ; 0042820f
    FLD float ptr [EBP + -0x1c]         ; 00428212
    FMUL float ptr [EBP + -0x4]         ; 00428215
    FXCH ST2                            ; 00428218
    FSTP float ptr [EBP + -0x24]        ; 0042821a
    FSTP float ptr [EBP + -0x20]        ; 0042821d
    FSTP float ptr [EBP + -0x1c]        ; 00428220
    LEA EAX,[EBX + 0x30]                ; 00428223
        ;   Label: LAB_00428223
    PUSH EAX                            ; 00428226
    LEA EAX,[EBX + 0x20]                ; 00428227
    FLD float ptr [EAX]                 ; 0042822a
    FADD float ptr [EBP + -0x24]        ; 0042822c
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0042822f
    FSTP float ptr [EBP + -0x30]        ; 00428235
    FLD float ptr [EAX + 0x4]           ; 00428238
    FADD float ptr [EBP + -0x20]        ; 0042823b
    FSTP float ptr [EBP + -0x2c]        ; 0042823e
    FLD float ptr [EAX + 0x8]           ; 00428241
    LEA EAX,[EBP + -0x30]               ; 00428244
    PUSH EAX                            ; 00428247
    FADD float ptr [EBP + -0x1c]        ; 00428248
    PUSH EBX                            ; 0042824b
    FSTP float ptr [EBP + -0x28]        ; 0042824c
    CALL dword ptr [EDX + 0x60]         ; 0042824f
    MOV EAX,0x1                         ; 00428252
    ADD ESP,0xc                         ; 00428257
    MOV ESP,EBP                         ; 0042825a
    POP EBP                             ; 0042825c
    POP EBX                             ; 0042825d
    RET                                 ; 0042825e

