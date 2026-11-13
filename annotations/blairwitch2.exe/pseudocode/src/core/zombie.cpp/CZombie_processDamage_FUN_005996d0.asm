; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005996d0(CZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_lookForHead_005ef381+1
;   TerminatedCString s_f_zombie_die_wav_005ef38e
;   TerminatedCString s_zom_d0_wav_005ef3a0
;   TerminatedCString s_f_zombie_hit_wav_005ef3ac
;   TerminatedCString s_zom_s0_wav_005ef3be
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_motion.cpp_FUN_005035c0
;   core_zombie.cpp_CZombie_dropAndClearTarget_FUN_00598f20
;   core_zombie.cpp_CZombie_processDismemberment_FUN_00599400
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005996d0
        ;   Label: core_zombie.cpp_CZombie_processDamage_FUN_005996d0
    PUSH EDI                            ; 005996d1
    PUSH EBP                            ; 005996d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005996d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005996d7
    PUSH EDI                            ; 005996db
    PUSH EBX                            ; 005996dc
    CALL core_zombie.cpp_CZombie_processDismemberment_FUN_00599400 ; 005996dd
        ;   XREF to: 00599400 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_processDismemberment_FUN_00599400(CZombie * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005996e2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005996e5
    PUSH EBX                            ; 005996eb
    CALL dword ptr [EAX + 0x100]        ; 005996ec
    FLD float ptr [EDI + 0x4]           ; 005996f2
    FSUBR float ptr [EBX + 0x25a8]      ; 005996f5
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 005996fb
    FSTP float ptr [EBX + 0x25a8]       ; 00599701
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00599707
    ADD ESP,0x4                         ; 0059970e
    TEST EDX,EDX                        ; 00599711
    JZ 0x005997e7                       ; 00599713
        ;   XREF to: 005997e7 (CONDITIONAL_JUMP)  ; LAB_005997e7
    FLD float ptr [EBX + 0x25a8]        ; 00599719
        ;   Label: LAB_00599719
    FLDZ                                ; 0059971f
    LEA EDX,[EBX + 0x2b4]               ; 00599721
    MOV dword ptr [EBX + 0x10a74],0x3f99999a ; 00599727
    FCOMPP                              ; 00599731
    FNSTSW AX                           ; 00599733
    SAHF                                ; 00599735
    JC 0x00599851                       ; 00599736
        ;   XREF to: 00599851 (CONDITIONAL_JUMP)  ; LAB_00599851
    PUSH EDX                            ; 0059973c
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0059973d
    CALL core_motion.cpp_FUN_005035c0   ; 00599747
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059974c
    ADD ESP,0x4                         ; 0059974f
    CMP EAX,0x8                         ; 00599752
    JZ 0x005997d9                       ; 00599755
        ;   XREF to: 005997d9 (CONDITIONAL_JUMP)  ; LAB_005997d9
    CMP EAX,0x7                         ; 0059975b
    JZ 0x005997d9                       ; 0059975e
        ;   XREF to: 005997d9 (CONDITIONAL_JUMP)  ; LAB_005997d9
    PUSH ESI                            ; 00599760
    PUSH EBX                            ; 00599761
    CALL core_zombie.cpp_CZombie_dropAndClearTarget_FUN_00598f20 ; 00599762
        ;   XREF to: 00598f20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_dropAndClearTarget_FUN_00598f20(CZombie * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 00599767
    MOV ESI,0x6                         ; 0059976d
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00599772
    ADD ESP,0x4                         ; 00599779
    TEST EBP,EBP                        ; 0059977c
    JZ 0x005997f2                       ; 0059977e
        ;   XREF to: 005997f2 (CONDITIONAL_JUMP)  ; LAB_005997f2
    PUSH 0x1                            ; 00599780
        ;   Label: LAB_00599780
    PUSH ESI                            ; 00599782
    LEA EAX,[EBX + 0x2b4]               ; 00599783
    PUSH EAX                            ; 00599789
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059978a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059978f
    MOV ESI,dword ptr [EBX + 0x10bd8]   ; 00599792
    PUSH ESI                            ; 00599798
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00599799
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV EBP,dword ptr [EBX + 0x10b84]   ; 0059979e
    ADD ESP,0x4                         ; 005997a4
    TEST EBP,EBP                        ; 005997a7
    JZ 0x00599847                       ; 005997a9
        ;   XREF to: 00599847 (CONDITIONAL_JUMP)  ; LAB_00599847
    PUSH 0x5ef38e                       ; 005997af | = "f-zombie-die?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005997b4
        ;   Label: LAB_005997b4
    PUSH EBX                            ; 005997ba
    CALL dword ptr [EAX + 0x34]         ; 005997bb
    ADD ESP,0x8                         ; 005997be
    PUSH 0x41c80000                     ; 005997c1
    PUSH 0x32                           ; 005997c6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005997c8
    PUSH EBX                            ; 005997ce
    CALL dword ptr [EAX + 0xb0]         ; 005997cf
    ADD ESP,0xc                         ; 005997d5
    POP ESI                             ; 005997d8
    PUSH EDI                            ; 005997d9
        ;   Label: LAB_005997d9
    PUSH EBX                            ; 005997da
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005997db
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005997e0
    POP EBP                             ; 005997e3
    POP EDI                             ; 005997e4
    POP EBX                             ; 005997e5
    RET                                 ; 005997e6
    MOV dword ptr [EBX + 0x25a8],EDX    ; 005997e7
        ;   Label: LAB_005997e7
    JMP 0x00599719                      ; 005997ed
        ;   XREF to: 00599719 (UNCONDITIONAL_JUMP)  ; LAB_00599719
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 005997f2
        ;   Label: LAB_005997f2
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 005997f8
    JNZ 0x00599816                      ; 00599800
        ;   XREF to: 00599816 (CONDITIONAL_JUMP)  ; LAB_00599816
    MOV EAX,dword ptr [EBX + 0x10bb4]   ; 00599802
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00599808
    JZ 0x00599780                       ; 00599810
        ;   XREF to: 00599780 (CONDITIONAL_JUMP)  ; LAB_00599780
    PUSH 0x0                            ; 00599816
        ;   Label: LAB_00599816
    PUSH 0x5ef382                       ; 00599818 | s_lookForHead_005ef381+1
    LEA EAX,[EBX + 0x2b4]               ; 0059981d
    PUSH EAX                            ; 00599823
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00599824
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00599829
    PUSH EAX                            ; 0059982c
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 0059982d
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00599832
    TEST EAX,EAX                        ; 00599835
    JL 0x00599780                       ; 00599837
        ;   XREF to: 00599780 (CONDITIONAL_JUMP)  ; LAB_00599780
    MOV ESI,0x9                         ; 0059983d
    JMP 0x00599780                      ; 00599842
        ;   XREF to: 00599780 (UNCONDITIONAL_JUMP)  ; LAB_00599780
    PUSH 0x5ef3a0                       ; 00599847 | = "zom-d0?.wav"
        ;   Label: LAB_00599847
    JMP 0x005997b4                      ; 0059984c
        ;   XREF to: 005997b4 (UNCONDITIONAL_JUMP)  ; LAB_005997b4
    PUSH 0x1                            ; 00599851
        ;   Label: LAB_00599851
    PUSH 0x4                            ; 00599853
    PUSH EDX                            ; 00599855
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00599856
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0x10bd0]       ; 0059985b
    FLDZ                                ; 00599861
    ADD ESP,0xc                         ; 00599863
    FCOMPP                              ; 00599866
    FNSTSW AX                           ; 00599868
    SAHF                                ; 0059986a
    JC 0x005997d9                       ; 0059986b
        ;   XREF to: 005997d9 (CONDITIONAL_JUMP)  ; LAB_005997d9
    MOV ECX,dword ptr [EBX + 0x10bd8]   ; 00599871
    PUSH ECX                            ; 00599877
    MOV dword ptr [EBX + 0x10bd0],0x40000000 ; 00599878
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00599882
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00599887
    TEST EAX,EAX                        ; 0059988a
    JNZ 0x005997d9                      ; 0059988c
        ;   XREF to: 005997d9 (CONDITIONAL_JUMP)  ; LAB_005997d9
    CMP dword ptr [EBX + 0x10b84],0x0   ; 00599892
    JZ 0x005998c1                       ; 00599899
        ;   XREF to: 005998c1 (CONDITIONAL_JUMP)  ; LAB_005998c1
    PUSH 0x5ef3ac                       ; 0059989b | = "f-zombie-hit?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005998a0
    PUSH EBX                            ; 005998a6
    CALL dword ptr [EAX + 0x34]         ; 005998a7
    ADD ESP,0x8                         ; 005998aa
    MOV dword ptr [EBX + 0x10bd8],EAX   ; 005998ad
    PUSH EDI                            ; 005998b3
    PUSH EBX                            ; 005998b4
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005998b5
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005998ba
    POP EBP                             ; 005998bd
    POP EDI                             ; 005998be
    POP EBX                             ; 005998bf
    RET                                 ; 005998c0
    PUSH 0x5ef3be                       ; 005998c1 | = "zom-s0?.wav"
        ;   Label: LAB_005998c1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005998c6
    PUSH EBX                            ; 005998cc
    CALL dword ptr [EAX + 0x34]         ; 005998cd
    ADD ESP,0x8                         ; 005998d0
    MOV dword ptr [EBX + 0x10bd8],EAX   ; 005998d3
    PUSH EDI                            ; 005998d9
    PUSH EBX                            ; 005998da
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005998db
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005998e0
    POP EBP                             ; 005998e3
    POP EDI                             ; 005998e4
    POP EBX                             ; 005998e5
    RET                                 ; 005998e6

