; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005be750(CZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_lookForHead_005fa953+1
;   TerminatedCString s_f_zombie_die_wav_005fa960
;   TerminatedCString s_zom_d0_wav_005fa972
;   TerminatedCString s_f_zombie_hit_wav_005fa97e
;   TerminatedCString s_zom_s0_wav_005fa990
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005bdfa0
;   core_zombie.cpp_CZombie_processDismemberment_FUN_005be480
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be750
        ;   Label: core_zombie.cpp_CZombie_processDamage_FUN_005be750
    PUSH EDI                            ; 005be751
    PUSH EBP                            ; 005be752
    MOV EBX,dword ptr [ESP + 0x10]      ; 005be753
    MOV EDI,dword ptr [ESP + 0x14]      ; 005be757
    PUSH EDI                            ; 005be75b
    PUSH EBX                            ; 005be75c
    CALL core_zombie.cpp_CZombie_processDismemberment_FUN_005be480 ; 005be75d
        ;   XREF to: 005be480 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_processDismemberment_FUN_005be480(CZombie * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005be762
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be765
    PUSH EBX                            ; 005be76b
    CALL dword ptr [EAX + 0xf8]         ; 005be76c
    FLD float ptr [EDI + 0x4]           ; 005be772
    FSUBR float ptr [EBX + 0x2538]      ; 005be775
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005be77b
    FSTP float ptr [EBX + 0x2538]       ; 005be781
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005be787
    ADD ESP,0x4                         ; 005be78e
    TEST EDX,EDX                        ; 005be791
    JZ 0x005be867                       ; 005be793
        ;   XREF to: 005be867 (CONDITIONAL_JUMP)  ; LAB_005be867
    FLD float ptr [EBX + 0x2538]        ; 005be799
        ;   Label: LAB_005be799
    FLDZ                                ; 005be79f
    LEA EDX,[EBX + 0x158]               ; 005be7a1
    MOV dword ptr [EBX + 0xc1e4],0x3f99999a ; 005be7a7
    FCOMPP                              ; 005be7b1
    FNSTSW AX                           ; 005be7b3
    SAHF                                ; 005be7b5
    JC 0x005be8d1                       ; 005be7b6
        ;   XREF to: 005be8d1 (CONDITIONAL_JUMP)  ; LAB_005be8d1
    PUSH EDX                            ; 005be7bc
    MOV dword ptr [EBX + 0x2538],0x0    ; 005be7bd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005be7c7
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005be7cc
    ADD ESP,0x4                         ; 005be7cf
    CMP EAX,0x8                         ; 005be7d2
    JZ 0x005be859                       ; 005be7d5
        ;   XREF to: 005be859 (CONDITIONAL_JUMP)  ; LAB_005be859
    CMP EAX,0x7                         ; 005be7db
    JZ 0x005be859                       ; 005be7de
        ;   XREF to: 005be859 (CONDITIONAL_JUMP)  ; LAB_005be859
    PUSH ESI                            ; 005be7e0
    PUSH EBX                            ; 005be7e1
    CALL core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005bdfa0 ; 005be7e2
        ;   XREF to: 005bdfa0 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005bdfa0(CZombie * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005be7e7
    MOV ESI,0x6                         ; 005be7ed
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005be7f2
    ADD ESP,0x4                         ; 005be7f9
    TEST EBP,EBP                        ; 005be7fc
    JZ 0x005be872                       ; 005be7fe
        ;   XREF to: 005be872 (CONDITIONAL_JUMP)  ; LAB_005be872
    PUSH 0x1                            ; 005be800
        ;   Label: LAB_005be800
    PUSH ESI                            ; 005be802
    LEA EAX,[EBX + 0x158]               ; 005be803
    PUSH EAX                            ; 005be809
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005be80a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005be80f
    MOV ESI,dword ptr [EBX + 0xc348]    ; 005be812
    PUSH ESI                            ; 005be818
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005be819
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV EBP,dword ptr [EBX + 0xc2f4]    ; 005be81e
    ADD ESP,0x4                         ; 005be824
    TEST EBP,EBP                        ; 005be827
    JZ 0x005be8c7                       ; 005be829
        ;   XREF to: 005be8c7 (CONDITIONAL_JUMP)  ; LAB_005be8c7
    PUSH 0x5fa960                       ; 005be82f | = "f-zombie-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be834
        ;   Label: LAB_005be834
    PUSH EBX                            ; 005be83a
    CALL dword ptr [EAX + 0x2c]         ; 005be83b
    ADD ESP,0x8                         ; 005be83e
    PUSH 0x41c80000                     ; 005be841
    PUSH 0x32                           ; 005be846
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be848
    PUSH EBX                            ; 005be84e
    CALL dword ptr [EAX + 0xa8]         ; 005be84f
    ADD ESP,0xc                         ; 005be855
    POP ESI                             ; 005be858
    PUSH EDI                            ; 005be859
        ;   Label: LAB_005be859
    PUSH EBX                            ; 005be85a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 005be85b
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005be860
    POP EBP                             ; 005be863
    POP EDI                             ; 005be864
    POP EBX                             ; 005be865
    RET                                 ; 005be866
    MOV dword ptr [EBX + 0x2538],EDX    ; 005be867
        ;   Label: LAB_005be867
    JMP 0x005be799                      ; 005be86d
        ;   XREF to: 005be799 (UNCONDITIONAL_JUMP)  ; LAB_005be799
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 005be872
        ;   Label: LAB_005be872
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005be878
    JNZ 0x005be896                      ; 005be880
        ;   XREF to: 005be896 (CONDITIONAL_JUMP)  ; LAB_005be896
    MOV EAX,dword ptr [EBX + 0xc324]    ; 005be882
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005be888
    JZ 0x005be800                       ; 005be890
        ;   XREF to: 005be800 (CONDITIONAL_JUMP)  ; LAB_005be800
    PUSH 0x0                            ; 005be896
        ;   Label: LAB_005be896
    PUSH 0x5fa954                       ; 005be898 | s_lookForHead_005fa953+1
    LEA EAX,[EBX + 0x158]               ; 005be89d
    PUSH EAX                            ; 005be8a3
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 005be8a4
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005be8a9
    PUSH EAX                            ; 005be8ac
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 005be8ad
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005be8b2
    TEST EAX,EAX                        ; 005be8b5
    JL 0x005be800                       ; 005be8b7
        ;   XREF to: 005be800 (CONDITIONAL_JUMP)  ; LAB_005be800
    MOV ESI,0x9                         ; 005be8bd
    JMP 0x005be800                      ; 005be8c2
        ;   XREF to: 005be800 (UNCONDITIONAL_JUMP)  ; LAB_005be800
    PUSH 0x5fa972                       ; 005be8c7 | = "zom-d0?.wav"
        ;   Label: LAB_005be8c7
    JMP 0x005be834                      ; 005be8cc
        ;   XREF to: 005be834 (UNCONDITIONAL_JUMP)  ; LAB_005be834
    PUSH 0x1                            ; 005be8d1
        ;   Label: LAB_005be8d1
    PUSH 0x4                            ; 005be8d3
    PUSH EDX                            ; 005be8d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005be8d6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0xc340]        ; 005be8db
    FLDZ                                ; 005be8e1
    ADD ESP,0xc                         ; 005be8e3
    FCOMPP                              ; 005be8e6
    FNSTSW AX                           ; 005be8e8
    SAHF                                ; 005be8ea
    JC 0x005be859                       ; 005be8eb
        ;   XREF to: 005be859 (CONDITIONAL_JUMP)  ; LAB_005be859
    MOV ECX,dword ptr [EBX + 0xc348]    ; 005be8f1
    PUSH ECX                            ; 005be8f7
    MOV dword ptr [EBX + 0xc340],0x40000000 ; 005be8f8
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005be902
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005be907
    TEST EAX,EAX                        ; 005be90a
    JNZ 0x005be859                      ; 005be90c
        ;   XREF to: 005be859 (CONDITIONAL_JUMP)  ; LAB_005be859
    CMP dword ptr [EBX + 0xc2f4],0x0    ; 005be912
    JZ 0x005be941                       ; 005be919
        ;   XREF to: 005be941 (CONDITIONAL_JUMP)  ; LAB_005be941
    PUSH 0x5fa97e                       ; 005be91b | = "f-zombie-hit?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be920
    PUSH EBX                            ; 005be926
    CALL dword ptr [EAX + 0x2c]         ; 005be927
    ADD ESP,0x8                         ; 005be92a
    MOV dword ptr [EBX + 0xc348],EAX    ; 005be92d
    PUSH EDI                            ; 005be933
    PUSH EBX                            ; 005be934
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 005be935
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005be93a
    POP EBP                             ; 005be93d
    POP EDI                             ; 005be93e
    POP EBX                             ; 005be93f
    RET                                 ; 005be940
    PUSH 0x5fa990                       ; 005be941 | = "zom-s0?.wav"
        ;   Label: LAB_005be941
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be946
    PUSH EBX                            ; 005be94c
    CALL dword ptr [EAX + 0x2c]         ; 005be94d
    ADD ESP,0x8                         ; 005be950
    MOV dword ptr [EBX + 0xc348],EAX    ; 005be953
    PUSH EDI                            ; 005be959
    PUSH EBX                            ; 005be95a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 005be95b
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005be960
    POP EBP                             ; 005be963
    POP EDI                             ; 005be964
    POP EBX                             ; 005be965
    RET                                 ; 005be966

