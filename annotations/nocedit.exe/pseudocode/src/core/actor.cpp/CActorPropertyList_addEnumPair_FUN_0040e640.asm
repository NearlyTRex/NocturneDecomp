; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640 (CActorPropertyList *this_ptr,void *pairs,int num_pairs,int *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   pairs
; int              Stack[0xc]:4   num_pairs
; int *            Stack[0x10]:4   data_ptr
;
; XREF[15]:
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 00422797
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 at 0042f7ea
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481360
;   core_emitter.cpp_CEmitter_getPropertyList_FUN_004a8db0 at 004a8f8a
;   core_flame.cpp_FUN_004cae70 at 004cae98
;   core_lever.cpp_CLever_getPropertyList_FUN_00505240 at 0050534f
;   core_manpuz.cpp_CMansionPuzzleCircle_getPropertyList_FUN_0050b3e0 at 0050b434
;   core_marquee.cpp_CMarquee_getPropertyList_FUN_0050c3e0 at 0050c438
;   core_melee.cpp_CMelee_getPropertyList_FUN_0050ecf0 at 0050eda3
;   core_spike.cpp_FUN_005b8e90 at 005b8eeb
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e640
        ;   Label: core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
    PUSH 0x0                            ; 0040e641
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040e643
    PUSH EDX                            ; 0040e647
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e648
    PUSH ECX                            ; 0040e64c
    PUSH 0xf                            ; 0040e64d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e64f
    PUSH EBX                            ; 0040e653
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e654
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e659
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e65c
    MOV dword ptr [EAX + 0x5c],EDX      ; 0040e660
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e663
    MOV dword ptr [EAX + 0x60],EDX      ; 0040e667
    POP EBX                             ; 0040e66a
    RET                                 ; 0040e66b

