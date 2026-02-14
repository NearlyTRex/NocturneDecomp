; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gasmask_cpp_CGasMask_getPropertyList_FUN_004e5eb0(CGasMask *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_0062dac5
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5eb0
        ;   Label: core_gasmask.cpp_CGasMask_getPropertyList_FUN_004e5eb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5eb1
    PUSH EDX                            ; 004e5eb5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e5eb6
    PUSH ECX                            ; 004e5eba
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004e5ebb
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004e5ec0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e5ec3
    PUSH 0x0                            ; 004e5ec7
    ADD EAX,0x158                       ; 004e5ec9
    PUSH EAX                            ; 004e5ece
    PUSH 0x62dac5                       ; 004e5ecf | = "Model file (.kfm)"
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e5ed4
    PUSH EBX                            ; 004e5ed8
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 004e5ed9
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 004e5ede
    POP EBX                             ; 004e5ee1
    RET                                 ; 004e5ee2

