; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_getPropertyList_FUN_00502ca0 (CLadder *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00630e60
;   TerminatedCString s_Master_actor_00630e66
;   TerminatedCString s_ground_type_00630e73
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502ca0
        ;   Label: core_ladder.cpp_CLadder_getPropertyList_FUN_00502ca0
    PUSH ESI                            ; 00502ca1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00502ca2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00502ca6
    PUSH ESI                            ; 00502caa
    PUSH EBX                            ; 00502cab
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00502cac
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00502cb1
    PUSH 0x0                            ; 00502cb4
    LEA EAX,[EBX + 0x158]               ; 00502cb6
    PUSH EAX                            ; 00502cbc
    PUSH 0x630e60                       ; 00502cbd | = "Model"
    PUSH ESI                            ; 00502cc2
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 00502cc3
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00502cc8
    PUSH 0x0                            ; 00502ccb
    PUSH 0x0                            ; 00502ccd
    PUSH 0x1                            ; 00502ccf
    LEA EAX,[EBX + 0x2e0]               ; 00502cd1
    PUSH EAX                            ; 00502cd7
    PUSH 0x630e66                       ; 00502cd8 | = "Master actor"
    PUSH ESI                            ; 00502cdd
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 00502cde
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 00502ce3
    ADD EBX,0x2fc                       ; 00502ce6
    PUSH EBX                            ; 00502cec
    PUSH 0x630e73                       ; 00502ced | = "ground type"
    PUSH ESI                            ; 00502cf2
    CALL core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300 ; 00502cf3
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00502cf8
    POP ESI                             ; 00502cfb
    POP EBX                             ; 00502cfc
    RET                                 ; 00502cfd

