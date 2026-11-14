; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00492cd0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dest.cpp_CActorDestination_setup_FUN_00447100
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492cd0
        ;   Label: core_filmreel.cpp_CFilmProjector_setup_FUN_00492cd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492cd1
    PUSH EBX                            ; 00492cd5
    CALL core_dest.cpp_CActorDestination_setup_FUN_00447100 ; 00492cd6
        ;   XREF to: 00447100 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_setup_FUN_00447100(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 00492cdb
    LEA EAX,[EBX + 0x350]               ; 00492cde
    PUSH EAX                            ; 00492ce4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00492ce5
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xf8],0x1      ; 00492cea
    MOV dword ptr [EBX + 0x534],0x0     ; 00492cf4
    ADD ESP,0x4                         ; 00492cfe
    MOV dword ptr [EBX + 0x538],0x0     ; 00492d01
    POP EBX                             ; 00492d0b
    RET                                 ; 00492d0c

