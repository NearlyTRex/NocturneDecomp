; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trash_cpp_CTrash_getPropertyList_FUN_005df6e0 (CTrash *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_006555ca
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df6e0
        ;   Label: core_trash.cpp_CTrash_getPropertyList_FUN_005df6e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005df6e1
    PUSH EDX                            ; 005df6e5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005df6e6
    PUSH ECX                            ; 005df6ea
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005df6eb
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005df6f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005df6f3
    PUSH 0x0                            ; 005df6f7
    ADD EAX,0x158                       ; 005df6f9
    PUSH EAX                            ; 005df6fe
    PUSH 0x6555ca                       ; 005df6ff | = "Model file (.kfm)"
    MOV EBX,dword ptr [ESP + 0x18]      ; 005df704
    PUSH EBX                            ; 005df708
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005df709
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005df70e
    POP EBX                             ; 005df711
    RET                                 ; 005df712

