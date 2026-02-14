; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dest_cpp_CActorDestination_getPropertyList_FUN_0046fe80(CActorDestination *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_getPropertyList_FUN_004bee30 at 004bee3c
;
; Referenced Globals:
;   TerminatedCString s_CDemonActor_0061e434
;   TerminatedCString s_Actor_who_goes_here_0061e440
;   TerminatedCString s_Event_to_raise_when_in_p_0061e454
;   TerminatedCString s_Actor_class_to_go_here_0061e471
;   TerminatedCString s_Persistant_event_flag_0061e488
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fe80
        ;   Label: core_dest.cpp_CActorDestination_getPropertyList_FUN_0046fe80
    PUSH ESI                            ; 0046fe81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046fe82
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046fe86
    PUSH ESI                            ; 0046fe8a
    PUSH EBX                            ; 0046fe8b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0046fe8c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0046fe91
    PUSH 0x0                            ; 0046fe94
    PUSH 0x61e434                       ; 0046fe96 | = "CDemonActor"
    PUSH 0x1                            ; 0046fe9b
    LEA EAX,[EBX + 0x158]               ; 0046fe9d
    PUSH EAX                            ; 0046fea3
    PUSH 0x61e440                       ; 0046fea4 | = "Actor who goes here"
    PUSH ESI                            ; 0046fea9
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 0046feaa
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 0046feaf
    LEA EAX,[EBX + 0x188]               ; 0046feb2
    PUSH EAX                            ; 0046feb8
    PUSH 0x61e454                       ; 0046feb9 | = "Event to raise when in place"
    PUSH ESI                            ; 0046febe
    CALL core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480 ; 0046febf
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0046fec4
    PUSH 0x0                            ; 0046fec7
    PUSH 0x27                           ; 0046fec9
    LEA EAX,[EBX + 0x15c]               ; 0046fecb
    PUSH EAX                            ; 0046fed1
    PUSH 0x61e471                       ; 0046fed2 | = "Actor class to go here"
    PUSH ESI                            ; 0046fed7
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0046fed8
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0046fedd
    ADD EBX,0x1ec                       ; 0046fee0
    PUSH EBX                            ; 0046fee6
    PUSH 0x61e488                       ; 0046fee7 | = "Persistant event flag"
    PUSH ESI                            ; 0046feec
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0046feed
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0046fef2
    POP ESI                             ; 0046fef5
    POP EBX                             ; 0046fef6
    RET                                 ; 0046fef7

