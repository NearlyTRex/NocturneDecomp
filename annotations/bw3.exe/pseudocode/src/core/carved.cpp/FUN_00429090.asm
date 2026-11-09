; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00429090(int param_1)
;
; Local Variables:
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
;
; XREF[2]:
;   core_carved.cpp_FUN_00425da0 at 00426eaf
;   core_carved.cpp_FUN_00427bc0 at 00428075
;
; Referenced Globals:
;   undefined4 DAT_005b7ec7
;   undefined4 DAT_005dcf4c
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_FUN_004fc930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429090
        ;   Label: core_carved.cpp_FUN_00429090
    PUSH ESI                            ; 00429091
    PUSH EDI                            ; 00429092
    PUSH EBP                            ; 00429093
    MOV EBP,ESP                         ; 00429094
    SUB ESP,0x28                        ; 00429096
    AND ESP,0xfffffff8                  ; 00429099
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042909c
    MOV EDX,dword ptr [EBX + 0xd070]    ; 0042909f
    LEA ESI,[EBX + 0x158]               ; 004290a5
    TEST EDX,EDX                        ; 004290ab
    JNZ 0x0042917f                      ; 004290ad
        ;   XREF to: 0042917f (CONDITIONAL_JUMP)  ; LAB_0042917f
    CMP dword ptr [EBX + 0xcde4],0x0    ; 004290b3
    JZ 0x004291c3                       ; 004290ba
        ;   XREF to: 004291c3 (CONDITIONAL_JUMP)  ; LAB_004291c3
    PUSH ESI                            ; 004290c0
    CALL core_motion.cpp_FUN_004fc930   ; 004290c1
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x28],EAX      ; 004290c6
    FLD float ptr [ESP + 0x28]          ; 004290ca
    ADD ESP,0x4                         ; 004290ce
    FCOMP double ptr [0x005b7ec7]       ; 004290d1 | DAT_005b7ec7
    FNSTSW AX                           ; 004290d7
    SAHF                                ; 004290d9
    JBE 0x00429178                      ; 004290da
        ;   XREF to: 00429178 (CONDITIONAL_JUMP)  ; LAB_00429178
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004290e0
    LEA EDI,[ESP + 0xc]                 ; 004290e6
    LEA ESI,[EBX + 0x20]                ; 004290ea
    FLD float ptr [EAX + 0x20]          ; 004290ed
    FLD float ptr [EAX + 0x24]          ; 004290f0
    FLD float ptr [EAX + 0x28]          ; 004290f3
    FXCH ST2                            ; 004290f6
    FSUB float ptr [ESI]                ; 004290f8
    FXCH                                ; 004290fa
    FSUB float ptr [ESI + 0x4]          ; 004290fc
    FXCH ST2                            ; 004290ff
    FSUB float ptr [ESI + 0x8]          ; 00429101
    FXCH                                ; 00429104
    FSTP float ptr [ESP + 0x18]         ; 00429106
    FXCH                                ; 0042910a
    FSTP float ptr [ESP + 0x1c]         ; 0042910c
    LEA ESI,[ESP + 0x18]                ; 00429110
    FSTP float ptr [ESP + 0x20]         ; 00429114
    MOVSD ES:EDI,ESI                    ; 00429118
    MOVSD ES:EDI,ESI                    ; 00429119
    MOVSD ES:EDI,ESI                    ; 0042911a
    MOV EAX,ESP                         ; 0042911b
    LEA ESI,[ESP + 0xc]                 ; 0042911d
    CMP EAX,ESI                         ; 00429121
    JNZ 0x00429194                      ; 00429123
        ;   XREF to: 00429194 (CONDITIONAL_JUMP)  ; LAB_00429194
    FLD float ptr [ESP + 0x4]           ; 00429125
        ;   Label: LAB_00429125
    FMUL ST0                            ; 00429129
    FLD float ptr [ESP]                 ; 0042912b
    FMUL ST0                            ; 0042912e
    FADDP                               ; 00429130
    FLD float ptr [ESP + 0x8]           ; 00429132
    FMUL ST0                            ; 00429136
    FADDP                               ; 00429138
    FSQRT                               ; 0042913a
    FCOMP float ptr [0x005dcf4c]        ; 0042913c | DAT_005dcf4c
    FNSTSW AX                           ; 00429142
    SAHF                                ; 00429144
    JNC 0x004291b0                      ; 00429145
        ;   XREF to: 004291b0 (CONDITIONAL_JUMP)  ; LAB_004291b0
    PUSH 0x3                            ; 00429147
    PUSH 0x0                            ; 00429149
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0042914b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429150
    CMP EAX,0x1                         ; 00429153
    JNZ 0x004291b0                      ; 00429156
        ;   XREF to: 004291b0 (CONDITIONAL_JUMP)  ; LAB_004291b0
    PUSH EAX                            ; 00429158
    PUSH 0x3                            ; 00429159
    PUSH 0x0                            ; 0042915b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0042915d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429162
    ADD EAX,0x3                         ; 00429165
    PUSH EAX                            ; 00429168
        ;   Label: LAB_00429168
    ADD EBX,0x158                       ; 00429169
    PUSH EBX                            ; 0042916f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00429170
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00429170
    ADD ESP,0xc                         ; 00429175
    MOV ESP,EBP                         ; 00429178
        ;   Label: LAB_00429178
    POP EBP                             ; 0042917a
    POP EDI                             ; 0042917b
    POP ESI                             ; 0042917c
    POP EBX                             ; 0042917d
    RET                                 ; 0042917e
    PUSH 0x1                            ; 0042917f
        ;   Label: LAB_0042917f
    PUSH 0x3                            ; 00429181
    PUSH 0x0                            ; 00429183
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00429185
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042918a
    ADD EAX,0x7                         ; 0042918d
    PUSH EAX                            ; 00429190
    PUSH ESI                            ; 00429191
    JMP 0x00429170                      ; 00429192
        ;   XREF to: 00429170 (UNCONDITIONAL_JUMP)  ; LAB_00429170
    MOV EAX,dword ptr [ESP + 0xc]       ; 00429194
        ;   Label: LAB_00429194
    MOV dword ptr [ESP],EAX             ; 00429198
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042919b
    MOV dword ptr [ESP + 0x4],EAX       ; 0042919f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004291a3
    MOV dword ptr [ESP + 0x8],EAX       ; 004291a7
    JMP 0x00429125                      ; 004291ab
        ;   XREF to: 00429125 (UNCONDITIONAL_JUMP)  ; LAB_00429125
    PUSH 0x1                            ; 004291b0
        ;   Label: LAB_004291b0
    PUSH 0x3                            ; 004291b2
    PUSH 0x0                            ; 004291b4
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004291b6
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004291bb
    ADD EAX,0x7                         ; 004291be
    JMP 0x00429168                      ; 004291c1
        ;   XREF to: 00429168 (UNCONDITIONAL_JUMP)  ; LAB_00429168
    PUSH 0x1                            ; 004291c3
        ;   Label: LAB_004291c3
    PUSH 0x3                            ; 004291c5
    PUSH EDX                            ; 004291c7
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004291c8
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004291cd
    ADD EAX,0x3                         ; 004291d0
    PUSH EAX                            ; 004291d3
    PUSH ESI                            ; 004291d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004291d5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004291da
    MOV ESP,EBP                         ; 004291dd
    POP EBP                             ; 004291df
    POP EDI                             ; 004291e0
    POP ESI                             ; 004291e1
    POP EBX                             ; 004291e2
    RET                                 ; 004291e3

