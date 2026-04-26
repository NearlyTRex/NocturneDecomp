; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value,float max_value)
;
; Parameters:
; float            Stack[0x4]:4   min_value
; float            Stack[0x8]:4   max_value
;
; XREF[131]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 0041313f
;   core_bat.cpp_CBat_process_FUN_00414a00 at 00414bca
;   core_bat.cpp_CBat_setup_FUN_004148a0 at 004148f5
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415752
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416f4e
;   core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50 at 0041af6a
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210 at 0041b23b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a5a6
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419db5
;   core_bodypart.cpp_createBodyPart_FUN_00418e10 at 00418f30
;   ... and 121 more
;
; Referenced Globals:
;   float FLOAT_006142f0 = 0.00003051851
;   float FLOAT_006142f4 = 5.960465E-8
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cba0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040cc10
        ;   Label: core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
    FLD float ptr [ESP + 0x18]          ; 0040cc13
    MOV EAX,[0x0067b654]                ; 0040cc17 | g_CGameInstance | g_CGamePtr
    FSUB float ptr [ESP + 0x14]         ; 0040cc1c
    MOV EDX,dword ptr [EAX + 0x23c]     ; 0040cc20 | g_CGameInstance.is_processing
    FSTP float ptr [ESP + 0x4]          ; 0040cc26
    TEST EDX,EDX                        ; 0040cc2a
    JZ 0x0040cc5b                       ; 0040cc2c
        ;   XREF to: 0040cc5b (CONDITIONAL_JUMP)  ; LAB_0040cc5b
    CALL core_actor.cpp_generateRandomValue_FUN_0040cba0 ; 0040cc2e
        ;   XREF to: 0040cba0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cba0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cc33
    FILD dword ptr [ESP + 0xc]          ; 0040cc37
    FMUL float ptr [0x006142f4]         ; 0040cc3b | FLOAT_006142f4
    FSTP float ptr [ESP + 0x8]          ; 0040cc41
        ;   Label: LAB_0040cc41
    FLD float ptr [ESP + 0x8]           ; 0040cc45
    FMUL float ptr [ESP + 0x4]          ; 0040cc49
    FADD float ptr [ESP + 0x14]         ; 0040cc4d
    FSTP float ptr [ESP]                ; 0040cc51
    MOV EAX,dword ptr [ESP]             ; 0040cc54
    ADD ESP,0x10                        ; 0040cc57
    RET                                 ; 0040cc5a
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0040cc5b
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_0040cc5b
    MOV dword ptr [ESP + 0xc],EAX       ; 0040cc60
    FILD dword ptr [ESP + 0xc]          ; 0040cc64
    FMUL float ptr [0x006142f0]         ; 0040cc68 | FLOAT_006142f0
    JMP 0x0040cc41                      ; 0040cc6e
        ;   XREF to: 0040cc41 (UNCONDITIONAL_JUMP)  ; LAB_0040cc41

