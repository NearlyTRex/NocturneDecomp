; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_CZombie_processDamage_FUN_00561fc0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_lookForHead_0059893d+1
;   string s_f-zombie-die?.wav_0059894a
;   string s_zom-d0?.wav_0059895c
;   string s_f-zombie-hit?.wav_00598968
;   string s_zom-s0?.wav_0059897a
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0
;   core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561fc0
        ;   Label: core_zombie.cpp_CZombie_processDamage_FUN_00561fc0
    PUSH EDI                            ; 00561fc1
    PUSH EBP                            ; 00561fc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00561fc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00561fc7
    PUSH EDI                            ; 00561fcb
    PUSH EBX                            ; 00561fcc
    CALL core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0 ; 00561fcd
        ;   XREF to: 00561cf0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0()
    ADD ESP,0x8                         ; 00561fd2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00561fd5
    PUSH EBX                            ; 00561fdb
    CALL dword ptr [EAX + 0xf0]         ; 00561fdc
    FLD float ptr [EDI + 0x4]           ; 00561fe2
    FSUBR float ptr [EBX + 0x2434]      ; 00561fe5
    MOV EAX,dword ptr [EBX + 0xbdf8]    ; 00561feb
    FSTP float ptr [EBX + 0x2434]       ; 00561ff1
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00561ff7
    ADD ESP,0x4                         ; 00561ffe
    TEST EDX,EDX                        ; 00562001
    JZ 0x005620d7                       ; 00562003
        ;   XREF to: 005620d7 (CONDITIONAL_JUMP)  ; LAB_005620d7
    FLD float ptr [EBX + 0x2434]        ; 00562009
        ;   Label: LAB_00562009
    FLDZ                                ; 0056200f
    LEA EDX,[EBX + 0x150]               ; 00562011
    MOV dword ptr [EBX + 0xbca0],0x3f99999a ; 00562017
    FCOMPP                              ; 00562021
    FNSTSW AX                           ; 00562023
    SAHF                                ; 00562025
    JC 0x00562141                       ; 00562026
        ;   XREF to: 00562141 (CONDITIONAL_JUMP)  ; LAB_00562141
    PUSH EDX                            ; 0056202c
    MOV dword ptr [EBX + 0x2434],0x0    ; 0056202d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00562037
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056203c
    ADD ESP,0x4                         ; 0056203f
    CMP EAX,0x8                         ; 00562042
    JZ 0x005620c9                       ; 00562045
        ;   XREF to: 005620c9 (CONDITIONAL_JUMP)  ; LAB_005620c9
    CMP EAX,0x7                         ; 0056204b
    JZ 0x005620c9                       ; 0056204e
        ;   XREF to: 005620c9 (CONDITIONAL_JUMP)  ; LAB_005620c9
    PUSH ESI                            ; 00562050
    PUSH EBX                            ; 00562051
    CALL core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0 ; 00562052
        ;   XREF to: 005618c0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0()
    MOV EAX,dword ptr [EBX + 0xbdf8]    ; 00562057
    MOV ESI,0x6                         ; 0056205d
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00562062
    ADD ESP,0x4                         ; 00562069
    TEST EBP,EBP                        ; 0056206c
    JZ 0x005620e2                       ; 0056206e
        ;   XREF to: 005620e2 (CONDITIONAL_JUMP)  ; LAB_005620e2
    PUSH 0x1                            ; 00562070
        ;   Label: LAB_00562070
    PUSH ESI                            ; 00562072
    LEA EAX,[EBX + 0x150]               ; 00562073
    PUSH EAX                            ; 00562079
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0056207a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0056207f
    MOV ESI,dword ptr [EBX + 0xbe04]    ; 00562082
    PUSH ESI                            ; 00562088
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00562089
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    MOV EBP,dword ptr [EBX + 0xbdb0]    ; 0056208e
    ADD ESP,0x4                         ; 00562094
    TEST EBP,EBP                        ; 00562097
    JZ 0x00562137                       ; 00562099
        ;   XREF to: 00562137 (CONDITIONAL_JUMP)  ; LAB_00562137
    PUSH 0x59894a                       ; 0056209f | = "f-zombie-die?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005620a4
        ;   Label: LAB_005620a4
    PUSH EBX                            ; 005620aa
    CALL dword ptr [EAX + 0x24]         ; 005620ab
    ADD ESP,0x8                         ; 005620ae
    PUSH 0x41c80000                     ; 005620b1
    PUSH 0x32                           ; 005620b6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005620b8
    PUSH EBX                            ; 005620be
    CALL dword ptr [EAX + 0xa0]         ; 005620bf
    ADD ESP,0xc                         ; 005620c5
    POP ESI                             ; 005620c8
    PUSH EDI                            ; 005620c9
        ;   Label: LAB_005620c9
    PUSH EBX                            ; 005620ca
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 005620cb
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 005620d0
    POP EBP                             ; 005620d3
    POP EDI                             ; 005620d4
    POP EBX                             ; 005620d5
    RET                                 ; 005620d6
    MOV dword ptr [EBX + 0x2434],EDX    ; 005620d7
        ;   Label: LAB_005620d7
    JMP 0x00562009                      ; 005620dd
        ;   XREF to: 00562009 (UNCONDITIONAL_JUMP)  ; LAB_00562009
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 005620e2
        ;   Label: LAB_005620e2
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 005620e8
    JNZ 0x00562106                      ; 005620f0
        ;   XREF to: 00562106 (CONDITIONAL_JUMP)  ; LAB_00562106
    MOV EAX,dword ptr [EBX + 0xbde0]    ; 005620f2
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 005620f8
    JZ 0x00562070                       ; 00562100
        ;   XREF to: 00562070 (CONDITIONAL_JUMP)  ; LAB_00562070
    PUSH 0x0                            ; 00562106
        ;   Label: LAB_00562106
    PUSH 0x59893e                       ; 00562108 | s_lookForHead_0059893d+1
    LEA EAX,[EBX + 0x150]               ; 0056210d
    PUSH EAX                            ; 00562113
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00562114
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 00562119
    PUSH EAX                            ; 0056211c
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0056211d
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    ADD ESP,0xc                         ; 00562122
    TEST EAX,EAX                        ; 00562125
    JL 0x00562070                       ; 00562127
        ;   XREF to: 00562070 (CONDITIONAL_JUMP)  ; LAB_00562070
    MOV ESI,0x9                         ; 0056212d
    JMP 0x00562070                      ; 00562132
        ;   XREF to: 00562070 (UNCONDITIONAL_JUMP)  ; LAB_00562070
    PUSH 0x59895c                       ; 00562137 | = "zom-d0?.wav"
        ;   Label: LAB_00562137
    JMP 0x005620a4                      ; 0056213c
        ;   XREF to: 005620a4 (UNCONDITIONAL_JUMP)  ; LAB_005620a4
    PUSH 0x1                            ; 00562141
        ;   Label: LAB_00562141
    PUSH 0x4                            ; 00562143
    PUSH EDX                            ; 00562145
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00562146
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    FLD float ptr [EBX + 0xbdfc]        ; 0056214b
    FLDZ                                ; 00562151
    ADD ESP,0xc                         ; 00562153
    FCOMPP                              ; 00562156
    FNSTSW AX                           ; 00562158
    SAHF                                ; 0056215a
    JC 0x005620c9                       ; 0056215b
        ;   XREF to: 005620c9 (CONDITIONAL_JUMP)  ; LAB_005620c9
    MOV ECX,dword ptr [EBX + 0xbe04]    ; 00562161
    PUSH ECX                            ; 00562167
    MOV dword ptr [EBX + 0xbdfc],0x40000000 ; 00562168
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00562172
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00562177
    TEST EAX,EAX                        ; 0056217a
    JNZ 0x005620c9                      ; 0056217c
        ;   XREF to: 005620c9 (CONDITIONAL_JUMP)  ; LAB_005620c9
    CMP dword ptr [EBX + 0xbdb0],0x0    ; 00562182
    JZ 0x005621b1                       ; 00562189
        ;   XREF to: 005621b1 (CONDITIONAL_JUMP)  ; LAB_005621b1
    PUSH 0x598968                       ; 0056218b | = "f-zombie-hit?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00562190
    PUSH EBX                            ; 00562196
    CALL dword ptr [EAX + 0x24]         ; 00562197
    ADD ESP,0x8                         ; 0056219a
    MOV dword ptr [EBX + 0xbe04],EAX    ; 0056219d
    PUSH EDI                            ; 005621a3
    PUSH EBX                            ; 005621a4
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 005621a5
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 005621aa
    POP EBP                             ; 005621ad
    POP EDI                             ; 005621ae
    POP EBX                             ; 005621af
    RET                                 ; 005621b0
    PUSH 0x59897a                       ; 005621b1 | = "zom-s0?.wav"
        ;   Label: LAB_005621b1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005621b6
    PUSH EBX                            ; 005621bc
    CALL dword ptr [EAX + 0x24]         ; 005621bd
    ADD ESP,0x8                         ; 005621c0
    MOV dword ptr [EBX + 0xbe04],EAX    ; 005621c3
    PUSH EDI                            ; 005621c9
    PUSH EBX                            ; 005621ca
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 005621cb
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 005621d0
    POP EBP                             ; 005621d3
    POP EDI                             ; 005621d4
    POP EBX                             ; 005621d5
    RET                                 ; 005621d6

