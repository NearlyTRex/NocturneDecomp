; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value,float max_value)
;
; Parameters:
; float            Stack[0x4]:4   min_value
; float            Stack[0x8]:4   max_value
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[155]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040ccd1
;   core_ammo.cpp_CAmmo_process_FUN_0040ded0 at 0040df8a
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fb5f
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a04b1
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 at 0059f8c9
;   core_bat.cpp_CBat_process_FUN_00411200 at 004113d2
;   core_bat.cpp_CBat_setup_FUN_004110a0 at 004110f5
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411d62
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 0041375e
;   core_bodypart.cpp_CBodyPart_addFire_FUN_00417690 at 004177ba
;   ... and 145 more
;
; Referenced Globals:
;   undefined4 DAT_005caf1a
;   undefined4 DAT_005caf1e
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cef0
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040cf60
        ;   Label: core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
    FLD float ptr [ESP + 0x18]          ; 0040cf63
    MOV EAX,[0x00616494]                ; 0040cf67 | g_CGamePtr
    FSUB float ptr [ESP + 0x14]         ; 0040cf6c
    MOV EDX,dword ptr [EAX + 0x258]     ; 0040cf70 | g_CGameInstance.is_processing
    FSTP float ptr [ESP + 0x4]          ; 0040cf76
    TEST EDX,EDX                        ; 0040cf7a
    JZ 0x0040cfab                       ; 0040cf7c
        ;   XREF to: 0040cfab (CONDITIONAL_JUMP)  ; LAB_0040cfab
    CALL core_actor.cpp_generateRandomValue_FUN_0040cef0 ; 0040cf7e
        ;   XREF to: 0040cef0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cef0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cf83
    FILD dword ptr [ESP + 0xc]          ; 0040cf87
    FMUL float ptr [0x005caf1e]         ; 0040cf8b | DAT_005caf1e
    FSTP float ptr [ESP + 0x8]          ; 0040cf91
        ;   Label: LAB_0040cf91
    FLD float ptr [ESP + 0x8]           ; 0040cf95
    FMUL float ptr [ESP + 0x4]          ; 0040cf99
    FADD float ptr [ESP + 0x14]         ; 0040cf9d
    FSTP float ptr [ESP]                ; 0040cfa1
    MOV EAX,dword ptr [ESP]             ; 0040cfa4
    ADD ESP,0x10                        ; 0040cfa7
    RET                                 ; 0040cfaa
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0040cfab
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_0040cfab
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cfb0
    FILD dword ptr [ESP + 0xc]          ; 0040cfb4
    FMUL float ptr [0x005caf1a]         ; 0040cfb8 | DAT_005caf1a
    JMP 0x0040cf91                      ; 0040cfbe
        ;   XREF to: 0040cf91 (UNCONDITIONAL_JUMP)  ; LAB_0040cf91

