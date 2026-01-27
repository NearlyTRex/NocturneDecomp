; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[30]:
;   core_ammo.cpp_CAmmo_FUN_00410fd0 at 0041110c
;   core_ammo.cpp_CAmmo_setup_FUN_00410e50 at 00410e5a
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810 at 0041281c
;   core_baron.cpp_CBaron_FUN_00412cb0 at 00412e5a
;   core_bat.cpp_CBat_FUN_004148a0 at 004148af
;   core_biggs.cpp_FUN_00418680 at 004186a6
;   core_bodypart.cpp_FUN_0041add0 at 0041ae2e
;   core_boxactor.cpp_CLightActor_FUN_00422d60 at 00422db7
;   core_bugs.cpp_FUN_00424e50 at 004250bf
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 at 0047edd6
;   ... and 20 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_00478c00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00478d60
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
    ADD EAX,0x78                        ; 00478d64
    PUSH EAX                            ; 00478d67
    CALL core_dmodel.cpp_loadModel_FUN_00478c00 ; 00478d68
        ;   XREF to: 00478c00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
    ADD ESP,0x4                         ; 00478d6d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00478d70
    MOV dword ptr [EDX + 0x178],EAX     ; 00478d74
    RET                                 ; 00478d7a

