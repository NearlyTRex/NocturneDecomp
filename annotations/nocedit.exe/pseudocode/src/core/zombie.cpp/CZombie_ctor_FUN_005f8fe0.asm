; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_factoryFunc_FUN_005f8fa0 at 005f8fbd
;
; Referenced Globals:
;   TerminatedCString s_zombie1_dfm_00658488
;   TerminatedCString s_true_00658494
;   undefined4 s_rue_00658495
;   undefined4 s_ue_00658496
;   undefined4 s_e_00658497
;   TerminatedCString s_mine_geo_00658499
;   float FLOAT_006659cc = 50
;   float FLOAT_006659d0 = 100
;   CDemonActor_vtable g_CZombieVTable
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.geometry_filename[0]
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8fe0
        ;   Label: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
    PUSH ESI                            ; 005f8fe1
    PUSH EDI                            ; 005f8fe2
    PUSH EBP                            ; 005f8fe3
    SUB ESP,0x4                         ; 005f8fe4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005f8fe7
    PUSH EBP                            ; 005f8feb
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005f8fec
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005f8ff1
    PUSH 0x658488                       ; 005f8ff4 | = "zombie1.dfm"
    MOV EBX,EAX                         ; 005f8ff9
    ADD EAX,0x158                       ; 005f8ffb
    PUSH EAX                            ; 005f9000
    MOV ESI,0x658494                    ; 005f9001 | = "true"
    MOV dword ptr [EAX + -0x4],0x6659e4 ; 005f9006 | g_CZombieVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005f900d
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f000000 ; 005f9012
    LEA EDI,[EBX + 0xbedc]              ; 005f901c
    MOV dword ptr [EBX + 0x2de0],0x3f800000 ; 005f9022
    FLD float ptr [0x006659cc]          ; 005f902c | FLOAT_006659cc
    MOV dword ptr [EBX + 0xbecc],0x0    ; 005f9032
    FLD float ptr [0x006659d0]          ; 005f903c | FLOAT_006659d0
    MOV dword ptr [EBX + 0xbec8],0x0    ; 005f9042
    ADD ESP,0x8                         ; 005f904c
    FXCH                                ; 005f904f
    FSTP float ptr [EBX + 0x2de4]       ; 005f9051
    FSTP float ptr [EBX + 0x2de8]       ; 005f9057
    PUSH EDI                            ; 005f905d
    MOV AL,byte ptr [ESI]               ; 005f905e | = "true" | s_ue_00658496
        ;   Label: LAB_005f905e
    MOV byte ptr [EDI],AL               ; 005f9060
    CMP AL,0x0                          ; 005f9062
    JZ 0x005f9076                       ; 005f9064
        ;   XREF to: 005f9076 (CONDITIONAL_JUMP)  ; LAB_005f9076
    MOV AL,byte ptr [ESI + 0x1]         ; 005f9066 | s_rue_00658495 | s_e_00658497
    ADD ESI,0x2                         ; 005f9069
    MOV byte ptr [EDI + 0x1],AL         ; 005f906c
    ADD EDI,0x2                         ; 005f906f
    CMP AL,0x0                          ; 005f9072
    JNZ 0x005f905e                      ; 005f9074
        ;   XREF to: 005f905e (CONDITIONAL_JUMP)  ; LAB_005f905e
    POP EDI                             ; 005f9076
        ;   Label: LAB_005f9076
    PUSH 0x3f800000                     ; 005f9077
    PUSH 0x3e99999a                     ; 005f907c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005f9081
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005f9086
    FLD float ptr [ESP + 0x8]           ; 005f908a
    ADD ESP,0x8                         ; 005f908e
    PUSH 0xff                           ; 005f9091
    MOV dword ptr [EBX + 0xbed4],0x0    ; 005f9096
    PUSH 0x0                            ; 005f90a0
    FSTP float ptr [EBX + 0xbebc]       ; 005f90a2
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005f90a8
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0xbec4],0x0    ; 005f90ad
    MOV dword ptr [EBX + 0xbed8],0x0    ; 005f90b7
    ADD ESP,0x8                         ; 005f90c1
    MOV dword ptr [EBX + 0xbec0],EAX    ; 005f90c4
    MOV EAX,[0x006810c8]                ; 005f90ca | g_CDemonSetPtr
    PUSH 0x658499                       ; 005f90cf | = "mine.geo"
    ADD EAX,0x14d0f0                    ; 005f90d4
    MOV dword ptr [EBX + 0xbf40],0x0    ; 005f90d9
    PUSH EAX                            ; 005f90e3 | g_CDemonSetInstance.geometry_filename[0]
    MOV dword ptr [EBX + 0xbf94],0x0    ; 005f90e4
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005f90ee
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005f90f3
    TEST EAX,EAX                        ; 005f90f6
    SETZ AL                             ; 005f90f8
    MOV dword ptr [EBX + 0xbf44],0x0    ; 005f90fb
    MOV dword ptr [EBX + 0xbfa4],0x0    ; 005f9105
    MOV dword ptr [EBX + 0xbfa8],0x0    ; 005f910f
    AND EAX,0xff                        ; 005f9119
    MOV dword ptr [EBX + 0xbeb8],0x0    ; 005f911e
    MOV dword ptr [EBX + 0xbf40],EAX    ; 005f9128
    MOV EAX,EBX                         ; 005f912e
    ADD ESP,0x4                         ; 005f9130
    POP EBP                             ; 005f9133
    POP EDI                             ; 005f9134
    POP ESI                             ; 005f9135
    POP EBX                             ; 005f9136
    RET                                 ; 005f9137

