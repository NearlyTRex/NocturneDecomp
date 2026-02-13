; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_0047f820(CZombieDog *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_dog2_wav_00621064
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f820
        ;   Label: core_dog.cpp_CZombieDog_processDamage_FUN_0047f820
    PUSH ESI                            ; 0047f821
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047f822
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047f826
    FLD float ptr [EAX + 0x4]           ; 0047f82a
    FSUBR float ptr [EBX + 0x243c]      ; 0047f82d
    LEA ESI,[EBX + 0x158]               ; 0047f833
    FST float ptr [EBX + 0x243c]        ; 0047f839
    FLDZ                                ; 0047f83f
    FCOMPP                              ; 0047f841
    FNSTSW AX                           ; 0047f843
    SAHF                                ; 0047f845
    JNC 0x0047f880                      ; 0047f846
        ;   XREF to: 0047f880 (CONDITIONAL_JUMP)  ; LAB_0047f880
    PUSH 0x1                            ; 0047f848
    PUSH 0x5                            ; 0047f84a
    PUSH ESI                            ; 0047f84c
        ;   Label: LAB_0047f84c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f84d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f852
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 0047f855
        ;   Label: LAB_0047f855
    PUSH EDX                            ; 0047f85b
    MOV ECX,dword ptr [0x00681ef8]      ; 0047f85c | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 0047f862 | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 0047f863
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0047f868
    TEST EAX,EAX                        ; 0047f86b
    JZ 0x0047f8a6                       ; 0047f86d
        ;   XREF to: 0047f8a6 (CONDITIONAL_JUMP)  ; LAB_0047f8a6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047f86f
    PUSH ESI                            ; 0047f873
    PUSH EBX                            ; 0047f874
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 0047f875
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0047f87a
    POP ESI                             ; 0047f87d
    POP EBX                             ; 0047f87e
    RET                                 ; 0047f87f
    PUSH ESI                            ; 0047f880
        ;   Label: LAB_0047f880
    MOV dword ptr [EBX + 0x243c],0x0    ; 0047f881
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0047f88b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047f890
    ADD ESP,0x4                         ; 0047f893
    CMP EAX,0x7                         ; 0047f896
    JZ 0x0047f855                       ; 0047f899
        ;   XREF to: 0047f855 (CONDITIONAL_JUMP)  ; LAB_0047f855
    CMP EAX,0x6                         ; 0047f89b
    JZ 0x0047f855                       ; 0047f89e
        ;   XREF to: 0047f855 (CONDITIONAL_JUMP)  ; LAB_0047f855
    PUSH 0x1                            ; 0047f8a0
    PUSH 0x6                            ; 0047f8a2
    JMP 0x0047f84c                      ; 0047f8a4
        ;   XREF to: 0047f84c (UNCONDITIONAL_JUMP)  ; LAB_0047f84c
    PUSH 0x621064                       ; 0047f8a6 | = "dog2.wav"
        ;   Label: LAB_0047f8a6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047f8ab
    PUSH EBX                            ; 0047f8b1
    CALL dword ptr [EAX + 0x24]         ; 0047f8b2
    ADD ESP,0x8                         ; 0047f8b5
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0047f8b8
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047f8be
    PUSH ESI                            ; 0047f8c2
    PUSH EBX                            ; 0047f8c3
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 0047f8c4
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0047f8c9
    POP ESI                             ; 0047f8cc
    POP EBX                             ; 0047f8cd
    RET                                 ; 0047f8ce

