; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 (CKeyFramedModelInstance *this_ptr,_FILE *file_handle)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[21]:
;   core_ammo.cpp_CAmmo_addFilesToExtract_FUN_004113e0 at 004114d3
;   core_ammobox.cpp_CAmmoBox_addFilesToExtract_FUN_00411c00 at 00411c0f
;   core_backgnd.cpp_CBackgroundActor_addFilesToExtract_FUN_00412ab0 at 00412abf
;   core_bat.cpp_CBat_addFilesToExtract_FUN_00414ec0 at 00414edc
;   core_door.cpp_CDoor_addFilesToExtract_FUN_00481630 at 0048163f
;   core_drip.cpp_CDrip_addFilesToExtract_FUN_0048ea60 at 0048ea82
;   core_emitter.cpp_CEmitter_addFilesToExtract_FUN_004a9390 at 004a93a9
;   core_frankgen.cpp_FUN_004d2560 at 004d25ba
;   core_grave.cpp_FUN_004eeb10 at 004eeb32
;   core_health.cpp_CHealthItem_addFilesToExtract_FUN_004f20b0 at 004f20bf
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00620f23
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047edd0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047edd1
    PUSH EBX                            ; 0047edd5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0047edd6
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047eddb
    PUSH EBX                            ; 0047edde
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0047eddf
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0047ede4
    ADD ESP,0x4                         ; 0047edea
    CMP EDX,0x1                         ; 0047eded
    JGE 0x0047edf4                      ; 0047edf0
        ;   XREF to: 0047edf4 (CONDITIONAL_JUMP)  ; LAB_0047edf4
    POP EBX                             ; 0047edf2
    RET                                 ; 0047edf3
    PUSH ESI                            ; 0047edf4
        ;   Label: LAB_0047edf4
    LEA EAX,[EBX + 0x78]                ; 0047edf5
    PUSH EAX                            ; 0047edf8
    PUSH 0x620f23                       ; 0047edf9 | = "MODELS\\%s\n"
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047edfe
    PUSH ECX                            ; 0047ee02
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047ee03
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0047ee08
    PUSH 0x0                            ; 0047ee0b
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047ee0d
    PUSH ESI                            ; 0047ee11
    PUSH EBX                            ; 0047ee12
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0047ee13
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047ee18
    PUSH EAX                            ; 0047ee1b
    CALL core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00 ; 0047ee1c
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel * this_ptr, _FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 0047ee21
    POP ESI                             ; 0047ee24
    POP EBX                             ; 0047ee25
    RET                                 ; 0047ee26

