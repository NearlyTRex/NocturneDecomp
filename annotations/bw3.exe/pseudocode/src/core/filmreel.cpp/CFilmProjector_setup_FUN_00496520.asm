; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00496520(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dest.cpp_CActorDestination_setup_FUN_004591b0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496520
        ;   Label: core_filmreel.cpp_CFilmProjector_setup_FUN_00496520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496521
    PUSH EBX                            ; 00496525
    CALL core_dest.cpp_CActorDestination_setup_FUN_004591b0 ; 00496526
        ;   XREF to: 004591b0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_setup_FUN_004591b0(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 0049652b
    LEA EAX,[EBX + 0x1f4]               ; 0049652e
    PUSH EAX                            ; 00496534
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00496535
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xf8],0x1      ; 0049653a
    MOV dword ptr [EBX + 0x3d8],0x0     ; 00496544
    ADD ESP,0x4                         ; 0049654e
    MOV dword ptr [EBX + 0x3dc],0x0     ; 00496551
    POP EBX                             ; 0049655b
    RET                                 ; 0049655c

