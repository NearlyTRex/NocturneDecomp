; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419070(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005b7051+1
;   TerminatedCString s_modelName_005b7058
;   TerminatedCString s_guardDistance_005b7062
;   TerminatedCString s_motion_state_005b7070
;   TerminatedCString s_deathEvent_005b707d
;   TerminatedCString s_recombineTime_005b7088
;   TerminatedCString s_blownUp_005b7096
;   TerminatedCString s_param_005b709e
;   TerminatedCString s_boxCount_005b70a4
;   TerminatedCString s_partStatus_005b70ad
;   TerminatedCString s_boxListPos_005b70b8
;   TerminatedCString s_boxListOrient_005b70c3
;   TerminatedCString s_boxListDestOrient_005b70d1
;   TerminatedCString s_boxListStartOrient_005b70e3
;   TerminatedCString s_sourcePos_005b70f6
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archivePartStatus_FUN_0040bba0
;   core_actor.cpp_archiveQuaternion_FUN_0040b5e0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419070
        ;   Label: core_boneguy.cpp_CBoneGuy_archive_FUN_00419070
    PUSH ESI                            ; 00419071
    PUSH EDI                            ; 00419072
    PUSH EBP                            ; 00419073
    SUB ESP,0xc                         ; 00419074
    MOV EDX,dword ptr [ESP + 0x20]      ; 00419077
    PUSH EDX                            ; 0041907b
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 0041907c
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00419081
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419084
    PUSH 0x5b7052                       ; 00419088 | s_speed_005b7051+1
    ADD EAX,0xcdcc                      ; 0041908d
    PUSH EAX                            ; 00419092
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00419093
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00419098
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041909b
    PUSH 0x5b7058                       ; 0041909f | = "modelName"
    ADD EAX,0x158                       ; 004190a4
    PUSH EAX                            ; 004190a9
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004190aa
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x005f0d74]      ; 004190af | g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 004190b5
    CMP ECX,0x4                         ; 004190b8
    JL 0x00419278                       ; 004190bb
        ;   XREF to: 00419278 (CONDITIONAL_JUMP)  ; LAB_00419278
    MOV EBX,dword ptr [ESP + 0x20]      ; 004190c1
        ;   Label: LAB_004190c1
    PUSH 0x5b7070                       ; 004190c5 | = "motion state"
    ADD EBX,0x158                       ; 004190ca
    PUSH EBX                            ; 004190d0
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004190d1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV ESI,dword ptr [0x005f0d74]      ; 004190d6 | g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 004190dc
    CMP ESI,0x2                         ; 004190df
    JL 0x00419260                       ; 004190e2
        ;   XREF to: 00419260 (CONDITIONAL_JUMP)  ; LAB_00419260
    MOV EAX,dword ptr [ESP + 0x20]      ; 004190e8
    PUSH 0x5b707d                       ; 004190ec | = "deathEvent"
    ADD EAX,0xd07c                      ; 004190f1
    PUSH EAX                            ; 004190f6
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004190f7
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004190fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004190ff
    PUSH 0x5b7088                       ; 00419103 | = "recombineTime"
    ADD EAX,0xd0e0                      ; 00419108
    PUSH EAX                            ; 0041910d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041910e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00419113
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419116
    PUSH 0x5b7096                       ; 0041911a | = "blownUp"
    ADD EAX,0xd0e4                      ; 0041911f
    PUSH EAX                            ; 00419124
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00419125
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041912a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041912d
    PUSH 0x5b709e                       ; 00419131 | = "param"
    ADD EAX,0xd694                      ; 00419136
    PUSH EAX                            ; 0041913b
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041913c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00419141
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419144
    PUSH 0x5b70a4                       ; 00419148 | = "boxCount"
    ADD EAX,0xd0e8                      ; 0041914d
    PUSH EAX                            ; 00419152
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00419153
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419158
    PUSH 0x5b70ad                       ; 0041915b | = "partStatus"
    PUSH EBX                            ; 00419160
    CALL core_actor.cpp_archivePartStatus_FUN_0040bba0 ; 00419161
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419166
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419169
    MOV EDI,dword ptr [EAX + 0xd0e8]    ; 0041916d
    XOR EBX,EBX                         ; 00419173
    TEST EDI,EDI                        ; 00419175
    JLE 0x00419260                      ; 00419177
        ;   XREF to: 00419260 (CONDITIONAL_JUMP)  ; LAB_00419260
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041917d
    ADD EAX,0xd0f0                      ; 00419181
    MOV EDI,dword ptr [ESP + 0x20]      ; 00419186
    MOV dword ptr [ESP],EAX             ; 0041918a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041918d
    MOV EBP,dword ptr [ESP + 0x20]      ; 00419191
    ADD EAX,0xd134                      ; 00419195
    ADD ESI,0xd128                      ; 0041919a
    MOV dword ptr [ESP + 0x8],EAX       ; 004191a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004191a4
    ADD EDI,0xd108                      ; 004191a8
    ADD EAX,0xd118                      ; 004191ae
    ADD EBP,0xd0fc                      ; 004191b3
    MOV dword ptr [ESP + 0x4],EAX       ; 004191b9
    IMUL EAX,EBX,0x48                   ; 004191bd
        ;   Label: LAB_004191bd
    MOV EDX,dword ptr [ESP]             ; 004191c0
    PUSH 0x5b70b8                       ; 004191c3 | = "boxListPos"
    ADD EAX,EDX                         ; 004191c8
    PUSH EAX                            ; 004191ca
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 004191cb
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 004191d0
    PUSH 0x5b70c3                       ; 004191d3 | = "boxListOrient"
    PUSH EBP                            ; 004191d8
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 004191d9
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 004191de
    PUSH 0x5b70d1                       ; 004191e1 | = "boxListDestOrient"
    PUSH EDI                            ; 004191e6
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 004191e7
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b5e0()
    ADD ESP,0x8                         ; 004191ec
    PUSH 0x5b70e3                       ; 004191ef | = "boxListStartOrient"
    MOV ECX,dword ptr [ESP + 0x8]       ; 004191f4
    PUSH ECX                            ; 004191f8
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 004191f9
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b5e0()
    ADD ESP,0x8                         ; 004191fe
    PUSH 0x5b70f6                       ; 00419201 | = "sourcePos"
    PUSH ESI                            ; 00419206
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00419207
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0041920c
    PUSH 0x5b7100                       ; 0041920f | = "boxListPart"
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419214
    INC EBX                             ; 00419218
    PUSH EAX                            ; 00419219
    ADD EBP,0x48                        ; 0041921a
    ADD EDI,0x48                        ; 0041921d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00419220
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00419225
    ADD ESI,0x48                        ; 00419228
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041922b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041922f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419233
    ADD EDX,0x48                        ; 00419237
    ADD ECX,0x48                        ; 0041923a
    MOV dword ptr [ESP + 0x8],EDX       ; 0041923d
    MOV EDX,dword ptr [EAX + 0xd0e8]    ; 00419241
    MOV dword ptr [ESP + 0x4],ECX       ; 00419247
    CMP EBX,EDX                         ; 0041924b
    JL 0x004191bd                       ; 0041924d
        ;   XREF to: 004191bd (CONDITIONAL_JUMP)  ; LAB_004191bd
    LEA EAX,[EAX]                       ; 00419253
    LEA EDX,[EDX]                       ; 00419259
    NOP                                 ; 0041925f
    MOV ECX,dword ptr [0x005f0d74]      ; 00419260 | g_CBoneGuyClassVersion
        ;   Label: LAB_00419260
    CMP ECX,0x3                         ; 00419266
    JL 0x00419270                       ; 00419269
        ;   XREF to: 00419270 (CONDITIONAL_JUMP)  ; LAB_00419270
    CMP ECX,0x5                         ; 0041926b
    JL 0x00419294                       ; 0041926e
        ;   XREF to: 00419294 (CONDITIONAL_JUMP)  ; LAB_00419294
    ADD ESP,0xc                         ; 00419270
        ;   Label: LAB_00419270
    POP EBP                             ; 00419273
    POP EDI                             ; 00419274
    POP ESI                             ; 00419275
    POP EBX                             ; 00419276
    RET                                 ; 00419277
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419278
        ;   Label: LAB_00419278
    PUSH 0x5b7062                       ; 0041927c | = "guardDistance"
    ADD EAX,0xcddc                      ; 00419281
    PUSH EAX                            ; 00419286
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00419287
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0041928c
    JMP 0x004190c1                      ; 0041928f
        ;   XREF to: 004190c1 (UNCONDITIONAL_JUMP)  ; LAB_004190c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419294
        ;   Label: LAB_00419294
    PUSH 0x5b710c                       ; 00419298 | = "victimHeight"
    ADD EAX,0xce58                      ; 0041929d
    PUSH EAX                            ; 004192a2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004192a3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004192a8
    ADD ESP,0xc                         ; 004192ab
    POP EBP                             ; 004192ae
    POP EDI                             ; 004192af
    POP ESI                             ; 004192b0
    POP EBX                             ; 004192b1
    RET                                 ; 004192b2

