; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_getPropertyList_FUN_00424b10(CBride *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00616cbd
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424b10
        ;   Label: core_bride.cpp_CBride_getPropertyList_FUN_00424b10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00424b11
    PUSH EDX                            ; 00424b15
    MOV ECX,dword ptr [ESP + 0xc]       ; 00424b16
    PUSH ECX                            ; 00424b1a
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00424b1b
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00424b20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424b23
    PUSH 0x0                            ; 00424b27
    ADD EAX,0x158                       ; 00424b29
    PUSH EAX                            ; 00424b2e
    PUSH 0x616cbd                       ; 00424b2f | = "Model"
    MOV EBX,dword ptr [ESP + 0x18]      ; 00424b34
    PUSH EBX                            ; 00424b38
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00424b39
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00424b3e
    POP EBX                             ; 00424b41
    RET                                 ; 00424b42

