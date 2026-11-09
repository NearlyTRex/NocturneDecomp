; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004ab680(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dest.cpp_CActorDestination_setup_FUN_0045d260
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab680
        ;   Label: core_filmreel.cpp_CFilmProjector_setup_FUN_004ab680
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ab681
    PUSH EBX                            ; 004ab685
    CALL core_dest.cpp_CActorDestination_setup_FUN_0045d260 ; 004ab686
        ;   XREF to: 0045d260 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_setup_FUN_0045d260(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 004ab68b
    LEA EAX,[EBX + 0x1f4]               ; 004ab68e
    PUSH EAX                            ; 004ab694
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004ab695
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xf8],0x1      ; 004ab69a
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004ab6a4
    ADD ESP,0x4                         ; 004ab6ae
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004ab6b1
    POP EBX                             ; 004ab6bb
    RET                                 ; 004ab6bc

