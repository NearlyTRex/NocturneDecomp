; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220 (CActorPropertyList *this_ptr,char *property_name,int *data_ptr,int min_value, int max_value,CDemonActor_CActorPropertyValidatorFunc *callback)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; int *            Stack[0xc]:4   data_ptr
; int              Stack[0x10]:4   min_value
; int              Stack[0x14]:4   max_value
; CDemonActor_CActorPropertyValidatorFunc * Stack[0x18]:4   callback
;
; XREF[4]:
;   core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0 at 00427811
;   core_flies.cpp_FUN_004ccaa0 at 004ccad0
;   core_ghoul.cpp_CGhoul_getPropertyList_FUN_004e8dc0 at 004e8e11
;   core_hero.cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60 at 004f3f8d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e220
        ;   Label: core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220
    PUSH ESI                            ; 0040e221
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040e222
    PUSH EDX                            ; 0040e226
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e227
    PUSH ECX                            ; 0040e22b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e22c
    PUSH EBX                            ; 0040e230
    PUSH 0x0                            ; 0040e231
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e233
    PUSH ESI                            ; 0040e237
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e238
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    MOV dword ptr [EAX + 0x5c],0x1      ; 0040e23d
    ADD ESP,0x14                        ; 0040e244
    MOV dword ptr [EAX + 0x6c],0x1      ; 0040e247
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e24e
    MOV dword ptr [EAX + 0x60],EDX      ; 0040e252
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040e255
    MOV dword ptr [EAX + 0x64],EDX      ; 0040e259
    POP ESI                             ; 0040e25c
    POP EBX                             ; 0040e25d
    RET                                 ; 0040e25e

