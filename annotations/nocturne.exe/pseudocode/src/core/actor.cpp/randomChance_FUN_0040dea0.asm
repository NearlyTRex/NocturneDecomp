; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[44]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00412e8a
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041287b
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780 at 00413785
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 0041469a
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413fa1
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0 at 00417eb5
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420d1f
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10 at 00420aaf
;   core_bride.cpp_FUN_0041fe40 at 004201c7
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0 at 0042783d
;   ... and 34 more
;
; Referenced Globals:
;   float FLOAT_00578061 = 0.00003051851
;   float FLOAT_00578065 = 5.960465E-8
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77828
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040dd30
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040dea0
        ;   Label: core_actor.cpp_randomChance_FUN_0040dea0
    MOV EAX,[0x005b9354]                ; 0040dea3 | DAT_005b9354
    CMP dword ptr [EAX + 0x23c],0x0     ; 0040dea8 | DAT_01c77828
    JZ 0x0040dedd                       ; 0040deaf
        ;   XREF to: 0040dedd (CONDITIONAL_JUMP)  ; LAB_0040dedd
    CALL core_actor.cpp_generateRandomValue_FUN_0040dd30 ; 0040deb1
        ;   XREF to: 0040dd30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_generateRandomValue_FUN_0040dd30()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040deb6
    FILD dword ptr [ESP + 0x4]          ; 0040deba
    FMUL float ptr [0x00578065]         ; 0040debe | FLOAT_00578065
    FSTP float ptr [ESP]                ; 0040dec4
        ;   Label: LAB_0040dec4
    FLD float ptr [ESP]                 ; 0040dec7
    FCOMP float ptr [ESP + 0xc]         ; 0040deca
    FNSTSW AX                           ; 0040dece
    SAHF                                ; 0040ded0
    SETC AL                             ; 0040ded1
    AND EAX,0xff                        ; 0040ded4
    ADD ESP,0x8                         ; 0040ded9
    RET                                 ; 0040dedc
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0040dedd
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_0040dedd
    MOV dword ptr [ESP + 0x4],EAX       ; 0040dee2
    FILD dword ptr [ESP + 0x4]          ; 0040dee6
    FMUL float ptr [0x00578061]         ; 0040deea | FLOAT_00578061
    JMP 0x0040dec4                      ; 0040def0
        ;   XREF to: 0040dec4 (UNCONDITIONAL_JUMP)  ; LAB_0040dec4

