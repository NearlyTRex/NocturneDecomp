; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300 (CActorPropertyList *this_ptr,char *property_name,int *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; int *            Stack[0xc]:4   data_ptr
;
; XREF[7]:
;   core_backgnd.cpp_CBackgroundActor_getPropertyList_FUN_00412a40 at 00412a9a
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 004227fe
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481498
;   core_ladder.cpp_CLadder_getPropertyList_FUN_00502ca0 at 00502cf3
;   core_pendulum.cpp_CPendulum_getPropertyList_FUN_0054a5f0 at 0054a762
;   core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0 at 0054e8b4
;   core_stairs.cpp_FUN_005ba840 at 005ba8eb
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e300
        ;   Label: core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
    PUSH 0x0                            ; 0040e301
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e303
    PUSH EDX                            ; 0040e307
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e308
    PUSH ECX                            ; 0040e30c
    PUSH 0x9                            ; 0040e30d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e30f
    PUSH EBX                            ; 0040e313
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e314
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e319
    MOV dword ptr [EAX + 0x5c],0x0      ; 0040e31c
    POP EBX                             ; 0040e323
    RET                                 ; 0040e324

