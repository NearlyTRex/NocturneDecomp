; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_randomize_FUN_005fcb70(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* switchdataD_005fcb58 = 005fcba3
;   TerminatedCString s_jeff_dfm_00658aa7
;   TerminatedCString s_zombie1_dfm_00658ab0
;   TerminatedCString s_zombie2_dfm_00658abc
;   TerminatedCString s_zombie3_dfm_00658ac8
;   TerminatedCString s_fletch_dfm_00658ad4
;   TerminatedCString s_skinned_dfm_00658adf
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_randomize_FUN_004aa250
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcb70
        ;   Label: core_zombie.cpp_CZombie_randomize_FUN_005fcb70
    PUSH ESI                            ; 005fcb71
    PUSH EBP                            ; 005fcb72
    MOV EBP,ESP                         ; 005fcb73
    MOV ESI,dword ptr [EBP + 0x10]      ; 005fcb75
    PUSH ESI                            ; 005fcb78
    CALL core_enemy.cpp_CEnemy_randomize_FUN_004aa250 ; 005fcb79
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_randomize_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005fcb7e
    LEA EBX,[ESI + 0x158]               ; 005fcb81
    PUSH 0x658aa7                       ; 005fcb87 | = "jeff.dfm"
    LEA EAX,[ESI + 0x23b8]              ; 005fcb8c
    PUSH EAX                            ; 005fcb92
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005fcb93
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005fcb98
    TEST EAX,EAX                        ; 005fcb9b
    JNZ 0x005fcbfd                      ; 005fcb9d
        ;   XREF to: 005fcbfd (CONDITIONAL_JUMP)  ; LAB_005fcbfd
    POP EBP                             ; 005fcb9f
        ;   Label: default
    POP ESI                             ; 005fcba0
    POP EBX                             ; 005fcba1
    RET                                 ; 005fcba2
    PUSH 0x658ab0                       ; 005fcba3 | = "zombie1.dfm"
        ;   Label: caseD_0
    PUSH EBX                            ; 005fcba8
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005fcba9
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005fcbae
    POP EBP                             ; 005fcbb1
    POP ESI                             ; 005fcbb2
    POP EBX                             ; 005fcbb3
    RET                                 ; 005fcbb4
    PUSH 0x658abc                       ; 005fcbb5 | = "zombie2.dfm"
        ;   Label: caseD_1
    PUSH EBX                            ; 005fcbba
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005fcbbb
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005fcbc0
    POP EBP                             ; 005fcbc3
    POP ESI                             ; 005fcbc4
    POP EBX                             ; 005fcbc5
    RET                                 ; 005fcbc6
    PUSH 0x658ac8                       ; 005fcbc7 | = "zombie3.dfm"
        ;   Label: caseD_2
    PUSH EBX                            ; 005fcbcc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005fcbcd
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005fcbd2
    POP EBP                             ; 005fcbd5
    POP ESI                             ; 005fcbd6
    POP EBX                             ; 005fcbd7
    RET                                 ; 005fcbd8
    PUSH 0x658ad4                       ; 005fcbd9 | = "fletch.dfm"
        ;   Label: caseD_3
    PUSH EBX                            ; 005fcbde
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005fcbdf
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005fcbe4
    POP EBP                             ; 005fcbe7
    POP ESI                             ; 005fcbe8
    POP EBX                             ; 005fcbe9
    RET                                 ; 005fcbea
    PUSH 0x658adf                       ; 005fcbeb | = "skinned.dfm"
        ;   Label: caseD_4
    PUSH EBX                            ; 005fcbf0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005fcbf1
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005fcbf6
    POP EBP                             ; 005fcbf9
    POP ESI                             ; 005fcbfa
    POP EBX                             ; 005fcbfb
    RET                                 ; 005fcbfc
    PUSH 0x4                            ; 005fcbfd
        ;   Label: LAB_005fcbfd
    PUSH 0x0                            ; 005fcbff
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005fcc01
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005fcc06
    CMP EAX,0x4                         ; 005fcc09
    JA 0x005fcb9f                       ; 005fcc0c
        ;   XREF to: 005fcb9f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5fcb58]  ; 005fcc0e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

