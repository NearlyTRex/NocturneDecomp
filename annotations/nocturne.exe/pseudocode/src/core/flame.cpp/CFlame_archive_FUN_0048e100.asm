; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_CFlame_archive_FUN_0048e100(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_flameSize_005815ae+1
;   string s_whichFlame_005815b9
;   string s_globeScalar_005815c4
;   string s_onEvent_005815d0
;   string s_onEvent_005815d8
;   string s_flameState_005815e0
;   string s_intensity_005815eb
;   string s_randomness_005815f5
;   string s_burnHero_00581600
;   string s_burnEnemy_00581609
;   undefined4 DAT_005b91c0
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e100
        ;   Label: core_flame.cpp_CFlame_archive_FUN_0048e100
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048e101
    PUSH EBX                            ; 0048e105
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0048e106
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0048e10b
    PUSH 0x5815af                       ; 0048e10e | s_flameSize_005815ae+1
    LEA EAX,[EBX + 0x150]               ; 0048e113
    PUSH EAX                            ; 0048e119
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0048e11a
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    MOV EDX,dword ptr [0x005b91c0]      ; 0048e11f | DAT_005b91c0
    ADD ESP,0x8                         ; 0048e125
    CMP EDX,0x2                         ; 0048e128
    JGE 0x0048e1c4                      ; 0048e12b
        ;   XREF to: 0048e1c4 (CONDITIONAL_JUMP)  ; LAB_0048e1c4
    CMP dword ptr [0x005b91c0],0x3      ; 0048e131 | DAT_005b91c0
        ;   Label: LAB_0048e131
    JL 0x0048e14e                       ; 0048e138
        ;   XREF to: 0048e14e (CONDITIONAL_JUMP)  ; LAB_0048e14e
    PUSH 0x5815d0                       ; 0048e13a | = "onEvent"
    LEA EAX,[EBX + 0x1b0]               ; 0048e13f
    PUSH EAX                            ; 0048e145
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0048e146
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0048e14b
    CMP dword ptr [0x005b91c0],0x4      ; 0048e14e | DAT_005b91c0
        ;   Label: LAB_0048e14e
    JL 0x0048e16b                       ; 0048e155
        ;   XREF to: 0048e16b (CONDITIONAL_JUMP)  ; LAB_0048e16b
    PUSH 0x5815d8                       ; 0048e157 | = "onEvent"
    LEA EAX,[EBX + 0x214]               ; 0048e15c
    PUSH EAX                            ; 0048e162
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0048e163
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0048e168
    CMP dword ptr [0x005b91c0],0x5      ; 0048e16b | DAT_005b91c0
        ;   Label: LAB_0048e16b
    JL 0x0048e188                       ; 0048e172
        ;   XREF to: 0048e188 (CONDITIONAL_JUMP)  ; LAB_0048e188
    PUSH 0x5815e0                       ; 0048e174 | = "flameState"
    LEA EAX,[EBX + 0x1ac]               ; 0048e179
    PUSH EAX                            ; 0048e17f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048e180
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048e185
    CMP dword ptr [0x005b91c0],0x6      ; 0048e188 | DAT_005b91c0
        ;   Label: LAB_0048e188
    JL 0x0048e1b9                       ; 0048e18f
        ;   XREF to: 0048e1b9 (CONDITIONAL_JUMP)  ; LAB_0048e1b9
    PUSH 0x5815eb                       ; 0048e191 | = "intensity"
    LEA EAX,[EBX + 0x278]               ; 0048e196
    PUSH EAX                            ; 0048e19c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0048e19d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0048e1a2
    PUSH 0x5815f5                       ; 0048e1a5 | = "randomness"
    LEA EAX,[EBX + 0x27c]               ; 0048e1aa
    PUSH EAX                            ; 0048e1b0
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0048e1b1
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0048e1b6
    CMP dword ptr [0x005b91c0],0x7      ; 0048e1b9 | DAT_005b91c0
        ;   Label: LAB_0048e1b9
    JGE 0x0048e1f1                      ; 0048e1c0
        ;   XREF to: 0048e1f1 (CONDITIONAL_JUMP)  ; LAB_0048e1f1
    POP EBX                             ; 0048e1c2
    RET                                 ; 0048e1c3
    PUSH 0x5815b9                       ; 0048e1c4 | = "whichFlame"
        ;   Label: LAB_0048e1c4
    LEA EAX,[EBX + 0x1a0]               ; 0048e1c9
    PUSH EAX                            ; 0048e1cf
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048e1d0
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048e1d5
    PUSH 0x5815c4                       ; 0048e1d8 | = "globeScalar"
    LEA EAX,[EBX + 0x1a4]               ; 0048e1dd
    PUSH EAX                            ; 0048e1e3
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0048e1e4
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0048e1e9
    JMP 0x0048e131                      ; 0048e1ec
        ;   XREF to: 0048e131 (UNCONDITIONAL_JUMP)  ; LAB_0048e131
    PUSH 0x581600                       ; 0048e1f1 | = "burnHero"
        ;   Label: LAB_0048e1f1
    LEA EAX,[EBX + 0x280]               ; 0048e1f6
    PUSH EAX                            ; 0048e1fc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048e1fd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048e202
    PUSH 0x581609                       ; 0048e205 | = "burnEnemy"
    ADD EBX,0x284                       ; 0048e20a
    PUSH EBX                            ; 0048e210
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048e211
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048e216
    POP EBX                             ; 0048e219
    RET                                 ; 0048e21a

