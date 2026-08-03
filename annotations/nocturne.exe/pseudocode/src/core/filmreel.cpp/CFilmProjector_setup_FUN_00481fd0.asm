; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dest.cpp_CActorDestination_setup_FUN_0044b810
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481fd0
        ;   Label: core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481fd1
    PUSH EBX                            ; 00481fd5
    CALL core_dest.cpp_CActorDestination_setup_FUN_0044b810 ; 00481fd6
        ;   XREF to: 0044b810 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_setup_FUN_0044b810(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 00481fdb
    LEA EAX,[EBX + 0x1ec]               ; 00481fde
    PUSH EAX                            ; 00481fe4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00481fe5
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xf8],0x1      ; 00481fea
    MOV dword ptr [EBX + 0x3d0],0x0     ; 00481ff4
    ADD ESP,0x4                         ; 00481ffe
    MOV dword ptr [EBX + 0x3d4],0x0     ; 00482001
    POP EBX                             ; 0048200b
    RET                                 ; 0048200c

