; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_keyactor_cpp_CKeyActor_getPropertyList_FUN_00501940 (CKeyActor *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00630c7d
;   TerminatedCString s_Key_mask_00630c8f
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501940
        ;   Label: core_keyactor.cpp_CKeyActor_getPropertyList_FUN_00501940
    PUSH ESI                            ; 00501941
    MOV EBX,dword ptr [ESP + 0xc]       ; 00501942
    MOV ESI,dword ptr [ESP + 0x10]      ; 00501946
    PUSH ESI                            ; 0050194a
    PUSH EBX                            ; 0050194b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0050194c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00501951
    PUSH 0x0                            ; 00501954
    LEA EAX,[EBX + 0x158]               ; 00501956
    PUSH EAX                            ; 0050195c
    PUSH 0x630c7d                       ; 0050195d | = "Model file (.kfm)"
    PUSH ESI                            ; 00501962
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00501963
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00501968
    PUSH 0x0                            ; 0050196b
    LEA EAX,[EBX + 0x2d4]               ; 0050196d
    PUSH EAX                            ; 00501973
    PUSH 0x630c8f                       ; 00501974 | = "Key mask"
    PUSH ESI                            ; 00501979
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 0050197a
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0050197f
    POP ESI                             ; 00501982
    POP EBX                             ; 00501983
    RET                                 ; 00501984

