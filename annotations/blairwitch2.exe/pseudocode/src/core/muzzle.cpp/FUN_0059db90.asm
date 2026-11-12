; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_muzzle_cpp_FUN_0059db90(int param_1)
;
;
; XREF[5]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 0059ff1e
;   core_basicene.cpp_CBasicEnemy_checkVictim_FUN_0059f6b0 at 0059f729
;   core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 at 0059e5a9
;   core_basicene.cpp_CBasicEnemy_processChasingState_FUN_0059ef90 at 0059f08d
;   core_helldog.cpp_CDog_processChaseFoodState_FUN_005ac0c0 at 005ac1e4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059db90
        ;   Label: core_muzzle.cpp_FUN_0059db90
    MOV EDX,dword ptr [ECX + 0x83c]     ; 0059db94
    DEC EDX                             ; 0059db9a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059db9b
    SUB EAX,EDX                         ; 0059dba2
    SHL EAX,0x3                         ; 0059dba4
    ADD EAX,EDX                         ; 0059dba7
    ADD EAX,ECX                         ; 0059dba9
    RET                                 ; 0059dbab

