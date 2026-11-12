; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_confedrt.cpp_CConfederate_processDamage_FUN_005a1a70 at 005a1a98
;   core_fforest.cpp_CTwigZombie_processDamage_FUN_005a2e90 at 005a2ea1
;   core_schngeis.cpp_CSchnellGeist_processDamage_FUN_005a3ba0 at 005a3bdf
;   core_union.cpp_CUnion_processDamage_FUN_005a59f0 at 005a5a26
;
; Referenced Globals:
;   TerminatedCString s_ShotInvulnerable_005ef99c
;   TerminatedCString s_Death_005ef9ad
;   undefined4 DAT_005ef9b7
;   undefined4 DAT_006141f0
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_muzzle.cpp_FUN_0059d8e0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f800
        ;   Label: core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800
    PUSH ESI                            ; 0059f801
    PUSH EDI                            ; 0059f802
    PUSH EBP                            ; 0059f803
    SUB ESP,0x4                         ; 0059f804
    MOV EBX,dword ptr [ESP + 0x18]      ; 0059f807
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059f80b
    CMP dword ptr [EBX + 0x281c],0x0    ; 0059f80f
    JZ 0x0059f821                       ; 0059f816
        ;   XREF to: 0059f821 (CONDITIONAL_JUMP)  ; LAB_0059f821
    CMP dword ptr [ESI + 0x4],0x461c3c00 ; 0059f818
    JNZ 0x0059f883                      ; 0059f81f
        ;   XREF to: 0059f883 (CONDITIONAL_JUMP)  ; LAB_0059f883
    FLD float ptr [ESI + 0x4]           ; 0059f821
        ;   Label: LAB_0059f821
    FSUBR float ptr [EBX + 0x25a8]      ; 0059f824
    FST float ptr [EBX + 0x25a8]        ; 0059f82a
    FLDZ                                ; 0059f830
    FCOMPP                              ; 0059f832
    FNSTSW AX                           ; 0059f834
    SAHF                                ; 0059f836
    JC 0x0059f895                       ; 0059f837
        ;   XREF to: 0059f895 (CONDITIONAL_JUMP)  ; LAB_0059f895
    CMP byte ptr [EBX + 0x11543],0x0    ; 0059f839
    JZ 0x0059f85d                       ; 0059f840
        ;   XREF to: 0059f85d (CONDITIONAL_JUMP)  ; LAB_0059f85d
    LEA EAX,[EBX + 0x20]                ; 0059f842
    PUSH EAX                            ; 0059f845
    LEA EAX,[EBX + 0x11543]             ; 0059f846
    PUSH EAX                            ; 0059f84c
    PUSH EBX                            ; 0059f84d
    MOV EBP,dword ptr [0x0061c068]      ; 0059f84e | DAT_0061c068
    PUSH EBP                            ; 0059f854
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0059f855
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0059f85a
    PUSH 0x5ef9ad                       ; 0059f85d | = "Death"
        ;   Label: LAB_0059f85d
    ADD EBX,0x10af8                     ; 0059f862
    PUSH EBX                            ; 0059f868
    MOV dword ptr [EBX + 0xffff1ab0],0x0 ; 0059f869
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 0059f873
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059f878
        ;   Label: LAB_0059f878
    ADD ESP,0x4                         ; 0059f87b
        ;   Label: LAB_0059f87b
    POP EBP                             ; 0059f87e
    POP EDI                             ; 0059f87f
    POP ESI                             ; 0059f880
    POP EBX                             ; 0059f881
    RET                                 ; 0059f882
    PUSH 0x5ef99c                       ; 0059f883 | = "ShotInvulnerable"
        ;   Label: LAB_0059f883
    MOV EAX,[0x006141f0]                ; 0059f888 | DAT_006141f0
    PUSH EAX                            ; 0059f88d
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0059f88e
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    JMP 0x0059f878                      ; 0059f893
        ;   XREF to: 0059f878 (UNCONDITIONAL_JUMP)  ; LAB_0059f878
    PUSH ESI                            ; 0059f895
        ;   Label: LAB_0059f895
    PUSH EBX                            ; 0059f896
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0059f897
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    MOV EAX,dword ptr [ESI + 0x38]      ; 0059f89c
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0059f89f
    ADD ESP,0x8                         ; 0059f8a5
    CMP EAX,ESI                         ; 0059f8a8
    JNZ 0x0059f8b8                      ; 0059f8aa
        ;   XREF to: 0059f8b8 (CONDITIONAL_JUMP)  ; LAB_0059f8b8
    MOV EAX,dword ptr [EBX + 0x11378]   ; 0059f8ac
    MOV dword ptr [EBX + 0x10a7c],EAX   ; 0059f8b2
    PUSH 0x3f800000                     ; 0059f8b8
        ;   Label: LAB_0059f8b8
    PUSH 0x0                            ; 0059f8bd
    MOV dword ptr [EBX + 0x11404],0x0   ; 0059f8bf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0059f8c9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0059f8ce
    FLD float ptr [ESP + 0x8]           ; 0059f8d2
    ADD ESP,0x8                         ; 0059f8d6
    FCOMP double ptr [0x005ef9b7]       ; 0059f8d9 | DAT_005ef9b7
    FNSTSW AX                           ; 0059f8df
    SAHF                                ; 0059f8e1
    JBE 0x0059f8ee                      ; 0059f8e2
        ;   XREF to: 0059f8ee (CONDITIONAL_JUMP)  ; LAB_0059f8ee
    MOV dword ptr [EBX + 0x113d0],0x1   ; 0059f8e4
    CMP byte ptr [EBX + 0x11444],0x0    ; 0059f8ee
        ;   Label: LAB_0059f8ee
    JZ 0x0059f87b                       ; 0059f8f5
        ;   XREF to: 0059f87b (CONDITIONAL_JUMP)  ; LAB_0059f87b
    MOV EDI,dword ptr [EBX + 0x1184c]   ; 0059f8f7
    PUSH EDI                            ; 0059f8fd
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0059f8fe
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f903
    TEST EAX,EAX                        ; 0059f906
    JNZ 0x0059f87b                      ; 0059f908
        ;   XREF to: 0059f87b (CONDITIONAL_JUMP)  ; LAB_0059f87b
    LEA EAX,[EBX + 0x11444]             ; 0059f90e
    PUSH EAX                            ; 0059f914
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0059f915
    PUSH EBX                            ; 0059f91b
    CALL dword ptr [ESI + 0x34]         ; 0059f91c
    ADD ESP,0x8                         ; 0059f91f
    MOV dword ptr [EBX + 0x1184c],EAX   ; 0059f922
    ADD ESP,0x4                         ; 0059f928
    POP EBP                             ; 0059f92b
    POP EDI                             ; 0059f92c
    POP ESI                             ; 0059f92d
    POP EBX                             ; 0059f92e
    RET                                 ; 0059f92f

