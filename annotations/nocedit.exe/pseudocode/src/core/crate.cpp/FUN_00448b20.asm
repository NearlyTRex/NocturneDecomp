; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_00448b20()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00619b3d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448b20
        ;   Label: core_crate.cpp_FUN_00448b20
    MOV EDX,dword ptr [ESP + 0xc]       ; 00448b21
    PUSH EDX                            ; 00448b25
    MOV ECX,dword ptr [ESP + 0xc]       ; 00448b26
    PUSH ECX                            ; 00448b2a
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00448b2b
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00448b30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448b33
    PUSH 0x0                            ; 00448b37
    ADD EAX,0x158                       ; 00448b39
    PUSH EAX                            ; 00448b3e
    PUSH 0x619b3d                       ; 00448b3f | = "Model file (.kfm)"
    MOV EBX,dword ptr [ESP + 0x18]      ; 00448b44
    PUSH EBX                            ; 00448b48
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00448b49
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00448b4e
    POP EBX                             ; 00448b51
    RET                                 ; 00448b52

