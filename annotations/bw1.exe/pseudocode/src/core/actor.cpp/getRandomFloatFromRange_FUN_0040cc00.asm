; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value,float max_value)
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
; XREF[156]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040c870 at 0040c9fe
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f6df
;   core_bat.cpp_CBat_process_FUN_00410d80 at 00410f52
;   core_bat.cpp_CBat_setup_FUN_00410c20 at 00410c75
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 004119c6
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00413458
;   core_bird.cpp_CBird_ctor_FUN_004151f0 at 00415251
;   core_bodypart.cpp_CBodyPart_addFire_FUN_0041ab20 at 0041ac3a
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50 at 0041af7b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 at 0041a178
;   ... and 146 more
;
; Referenced Globals:
;   undefined4 DAT_005d2e95
;   undefined4 DAT_005d2e99
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cb90
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040cc00
        ;   Label: core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
    FLD float ptr [ESP + 0x18]          ; 0040cc03
    MOV EAX,[0x0061d95c]                ; 0040cc07 | g_CGamePtr
    FSUB float ptr [ESP + 0x14]         ; 0040cc0c
    MOV EDX,dword ptr [EAX + 0x258]     ; 0040cc10 | g_CGameInstance.is_processing
    FSTP float ptr [ESP + 0x4]          ; 0040cc16
    TEST EDX,EDX                        ; 0040cc1a
    JZ 0x0040cc4b                       ; 0040cc1c
        ;   XREF to: 0040cc4b (CONDITIONAL_JUMP)  ; LAB_0040cc4b
    CALL core_actor.cpp_generateRandomValue_FUN_0040cb90 ; 0040cc1e
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cb90()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cc23
    FILD dword ptr [ESP + 0xc]          ; 0040cc27
    FMUL float ptr [0x005d2e99]         ; 0040cc2b | DAT_005d2e99
    FSTP float ptr [ESP + 0x8]          ; 0040cc31
        ;   Label: LAB_0040cc31
    FLD float ptr [ESP + 0x8]           ; 0040cc35
    FMUL float ptr [ESP + 0x4]          ; 0040cc39
    FADD float ptr [ESP + 0x14]         ; 0040cc3d
    FSTP float ptr [ESP]                ; 0040cc41
    MOV EAX,dword ptr [ESP]             ; 0040cc44
    ADD ESP,0x10                        ; 0040cc47
    RET                                 ; 0040cc4a
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0040cc4b
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_0040cc4b
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cc50
    FILD dword ptr [ESP + 0xc]          ; 0040cc54
    FMUL float ptr [0x005d2e95]         ; 0040cc58 | DAT_005d2e95
    JMP 0x0040cc31                      ; 0040cc5e
        ;   XREF to: 0040cc31 (UNCONDITIONAL_JUMP)  ; LAB_0040cc31

