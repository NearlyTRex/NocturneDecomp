; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004dd0a0(undefined4 param_1,CDemonActor *param_2,int param_3)
;
;
; XREF[2]:
;   core_inv.cpp_FUN_004db9d0 at 004dbad8
;   core_inv.cpp_FUN_004dd9b0 at 004ddbbd
;
; Referenced Globals:
;   undefined4 DAT_005db9f2
;   TerminatedCString s_CShotgun_005db9f7
;   TerminatedCString s_CCrossbow_005dba00
;   TerminatedCString s_CTommyGun_005dba0a
;   TerminatedCString s_CElephantGun_005dba14
;   TerminatedCString s_CRifle_005dba21
;   TerminatedCString s_CFlameThrower_005dba28
;   TerminatedCString s_CLightGun_005dba36
;   TerminatedCString s_CMelee_005dba40
;   TerminatedCString s_CCross_005dba47
;   TerminatedCString s_CSimpleCross_005dba4e
;   TerminatedCString s_CDynamite_005dba5b
;   TerminatedCString s_CFlashlight_005dba65
;   TerminatedCString s_CSimpleCross_005dba71
;   TerminatedCString s_CCross_005dba7e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd0a0
        ;   Label: core_inv.cpp_FUN_004dd0a0
    PUSH ESI                            ; 004dd0a1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004dd0a2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004dd0a6
    CMP ESI,0x5                         ; 004dd0aa
    JZ 0x004dd0e1                       ; 004dd0ad
        ;   XREF to: 004dd0e1 (CONDITIONAL_JUMP)  ; LAB_004dd0e1
    TEST ESI,ESI                        ; 004dd0af
    JZ 0x004dd0e9                       ; 004dd0b1
        ;   XREF to: 004dd0e9 (CONDITIONAL_JUMP)  ; LAB_004dd0e9
    CMP ESI,0x1                         ; 004dd0b3
        ;   Label: LAB_004dd0b3
    JZ 0x004dd103                       ; 004dd0b6
        ;   XREF to: 004dd103 (CONDITIONAL_JUMP)  ; LAB_004dd103
    CMP ESI,0x2                         ; 004dd0b8
    JZ 0x004dd17a                       ; 004dd0bb
        ;   XREF to: 004dd17a (CONDITIONAL_JUMP)  ; LAB_004dd17a
    CMP ESI,0x3                         ; 004dd0c1
        ;   Label: LAB_004dd0c1
    JZ 0x004dd1b2                       ; 004dd0c4
        ;   XREF to: 004dd1b2 (CONDITIONAL_JUMP)  ; LAB_004dd1b2
    CMP ESI,0x4                         ; 004dd0ca
        ;   Label: LAB_004dd0ca
    JZ 0x004dd1fc                       ; 004dd0cd
        ;   XREF to: 004dd1fc (CONDITIONAL_JUMP)  ; LAB_004dd1fc
    CMP ESI,0x6                         ; 004dd0d3
        ;   Label: LAB_004dd0d3
    JZ 0x004dd234                       ; 004dd0d6
        ;   XREF to: 004dd234 (CONDITIONAL_JUMP)  ; LAB_004dd234
    XOR EAX,EAX                         ; 004dd0dc
        ;   Label: LAB_004dd0dc
    POP ESI                             ; 004dd0de
        ;   Label: LAB_004dd0de
    POP EBX                             ; 004dd0df
    RET                                 ; 004dd0e0
    MOV EAX,0x1                         ; 004dd0e1
        ;   Label: LAB_004dd0e1
    POP ESI                             ; 004dd0e6
    POP EBX                             ; 004dd0e7
    RET                                 ; 004dd0e8
    PUSH 0x5db9f2                       ; 004dd0e9 | DAT_005db9f2
        ;   Label: LAB_004dd0e9
    PUSH EBX                            ; 004dd0ee
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd0ef
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd0f4
    TEST EAX,EAX                        ; 004dd0f7
    JZ 0x004dd0b3                       ; 004dd0f9
        ;   XREF to: 004dd0b3 (CONDITIONAL_JUMP)  ; LAB_004dd0b3
    MOV EAX,0x1                         ; 004dd0fb
    POP ESI                             ; 004dd100
    POP EBX                             ; 004dd101
    RET                                 ; 004dd102
    PUSH 0x5db9f7                       ; 004dd103 | = "CShotgun"
        ;   Label: LAB_004dd103
    PUSH EBX                            ; 004dd108
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd109
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd10e
    TEST EAX,EAX                        ; 004dd111
    JZ 0x004dd11a                       ; 004dd113
        ;   XREF to: 004dd11a (CONDITIONAL_JUMP)  ; LAB_004dd11a
    MOV EAX,ESI                         ; 004dd115
    POP ESI                             ; 004dd117
    POP EBX                             ; 004dd118
    RET                                 ; 004dd119
    PUSH 0x5dba00                       ; 004dd11a | = "CCrossbow"
        ;   Label: LAB_004dd11a
    PUSH EBX                            ; 004dd11f
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd120
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd125
    TEST EAX,EAX                        ; 004dd128
    JZ 0x004dd131                       ; 004dd12a
        ;   XREF to: 004dd131 (CONDITIONAL_JUMP)  ; LAB_004dd131
    MOV EAX,ESI                         ; 004dd12c
    POP ESI                             ; 004dd12e
    POP EBX                             ; 004dd12f
    RET                                 ; 004dd130
    PUSH 0x5dba0a                       ; 004dd131 | = "CTommyGun"
        ;   Label: LAB_004dd131
    PUSH EBX                            ; 004dd136
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd137
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd13c
    TEST EAX,EAX                        ; 004dd13f
    JZ 0x004dd148                       ; 004dd141
        ;   XREF to: 004dd148 (CONDITIONAL_JUMP)  ; LAB_004dd148
    MOV EAX,ESI                         ; 004dd143
    POP ESI                             ; 004dd145
    POP EBX                             ; 004dd146
    RET                                 ; 004dd147
    PUSH 0x5dba14                       ; 004dd148 | = "CElephantGun"
        ;   Label: LAB_004dd148
    PUSH EBX                            ; 004dd14d
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd14e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd153
    TEST EAX,EAX                        ; 004dd156
    JZ 0x004dd15f                       ; 004dd158
        ;   XREF to: 004dd15f (CONDITIONAL_JUMP)  ; LAB_004dd15f
    MOV EAX,ESI                         ; 004dd15a
    POP ESI                             ; 004dd15c
    POP EBX                             ; 004dd15d
    RET                                 ; 004dd15e
    PUSH 0x5dba21                       ; 004dd15f | = "CRifle"
        ;   Label: LAB_004dd15f
    PUSH EBX                            ; 004dd164
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd165
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd16a
    TEST EAX,EAX                        ; 004dd16d
    JZ 0x004dd0de                       ; 004dd16f
        ;   XREF to: 004dd0de (CONDITIONAL_JUMP)  ; LAB_004dd0de
    MOV EAX,ESI                         ; 004dd175
    POP ESI                             ; 004dd177
    POP EBX                             ; 004dd178
    RET                                 ; 004dd179
    PUSH 0x5dba28                       ; 004dd17a | = "CFlameThrower"
        ;   Label: LAB_004dd17a
    PUSH EBX                            ; 004dd17f
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd180
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd185
    TEST EAX,EAX                        ; 004dd188
    JZ 0x004dd194                       ; 004dd18a
        ;   XREF to: 004dd194 (CONDITIONAL_JUMP)  ; LAB_004dd194
    MOV EAX,0x1                         ; 004dd18c
    POP ESI                             ; 004dd191
    POP EBX                             ; 004dd192
    RET                                 ; 004dd193
    PUSH 0x5dba36                       ; 004dd194 | = "CLightGun"
        ;   Label: LAB_004dd194
    PUSH EBX                            ; 004dd199
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd19a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd19f
    TEST EAX,EAX                        ; 004dd1a2
    JZ 0x004dd0c1                       ; 004dd1a4
        ;   XREF to: 004dd0c1 (CONDITIONAL_JUMP)  ; LAB_004dd0c1
    MOV EAX,0x1                         ; 004dd1aa
    POP ESI                             ; 004dd1af
    POP EBX                             ; 004dd1b0
    RET                                 ; 004dd1b1
    PUSH 0x5dba40                       ; 004dd1b2 | = "CMelee"
        ;   Label: LAB_004dd1b2
    PUSH EBX                            ; 004dd1b7
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd1b8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd1bd
    TEST EAX,EAX                        ; 004dd1c0
    JZ 0x004dd0ca                       ; 004dd1c2
        ;   XREF to: 004dd0ca (CONDITIONAL_JUMP)  ; LAB_004dd0ca
    PUSH 0x5dba47                       ; 004dd1c8 | = "CCross"
    PUSH EBX                            ; 004dd1cd
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd1ce
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd1d3
    TEST EAX,EAX                        ; 004dd1d6
    JNZ 0x004dd0ca                      ; 004dd1d8
        ;   XREF to: 004dd0ca (CONDITIONAL_JUMP)  ; LAB_004dd0ca
    PUSH 0x5dba4e                       ; 004dd1de | = "CSimpleCross"
    PUSH EBX                            ; 004dd1e3
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd1e4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd1e9
    TEST EAX,EAX                        ; 004dd1ec
    JNZ 0x004dd0ca                      ; 004dd1ee
        ;   XREF to: 004dd0ca (CONDITIONAL_JUMP)  ; LAB_004dd0ca
    MOV EAX,0x1                         ; 004dd1f4
    POP ESI                             ; 004dd1f9
    POP EBX                             ; 004dd1fa
    RET                                 ; 004dd1fb
    PUSH 0x5dba5b                       ; 004dd1fc | = "CDynamite"
        ;   Label: LAB_004dd1fc
    PUSH EBX                            ; 004dd201
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd202
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd207
    TEST EAX,EAX                        ; 004dd20a
    JZ 0x004dd216                       ; 004dd20c
        ;   XREF to: 004dd216 (CONDITIONAL_JUMP)  ; LAB_004dd216
    MOV EAX,0x1                         ; 004dd20e
    POP ESI                             ; 004dd213
    POP EBX                             ; 004dd214
    RET                                 ; 004dd215
    PUSH 0x5dba65                       ; 004dd216 | = "CFlashlight"
        ;   Label: LAB_004dd216
    PUSH EBX                            ; 004dd21b
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd21c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd221
    TEST EAX,EAX                        ; 004dd224
    JZ 0x004dd0d3                       ; 004dd226
        ;   XREF to: 004dd0d3 (CONDITIONAL_JUMP)  ; LAB_004dd0d3
    MOV EAX,0x1                         ; 004dd22c
    POP ESI                             ; 004dd231
    POP EBX                             ; 004dd232
    RET                                 ; 004dd233
    PUSH 0x5dba71                       ; 004dd234 | = "CSimpleCross"
        ;   Label: LAB_004dd234
    PUSH EBX                            ; 004dd239
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd23a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd23f
    TEST EAX,EAX                        ; 004dd242
    JZ 0x004dd24e                       ; 004dd244
        ;   XREF to: 004dd24e (CONDITIONAL_JUMP)  ; LAB_004dd24e
    MOV EAX,0x1                         ; 004dd246
    POP ESI                             ; 004dd24b
    POP EBX                             ; 004dd24c
    RET                                 ; 004dd24d
    PUSH 0x5dba7e                       ; 004dd24e | = "CCross"
        ;   Label: LAB_004dd24e
    PUSH EBX                            ; 004dd253
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dd254
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd259
    TEST EAX,EAX                        ; 004dd25c
    JZ 0x004dd0dc                       ; 004dd25e
        ;   XREF to: 004dd0dc (CONDITIONAL_JUMP)  ; LAB_004dd0dc
    MOV EAX,0x1                         ; 004dd264
    POP ESI                             ; 004dd269
    POP EBX                             ; 004dd26a
    RET                                 ; 004dd26b

