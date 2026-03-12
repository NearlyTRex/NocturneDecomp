; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30(CDemonMission *this_ptr,CStrList *name_list,CDemonActor *class_type,char *class_name ,CActorPropertyFilterFunc *filter_func)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   name_list
; CDemonActor *    Stack[0xc]:4   class_type
; char *           Stack[0x10]:4   class_name
; CActorPropertyFilterFunc * Stack[0x14]:4   filter_func
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_pickActorDialog_FUN_0053cad0 at 0053cb2c
;   core_teleport.cpp_CTeleportDest_processInEditor_FUN_005da870 at 005da8bb
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cc30
        ;   Label: core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
    PUSH ESI                            ; 0053cc31
    PUSH EDI                            ; 0053cc32
    PUSH EBP                            ; 0053cc33
    SUB ESP,0x4                         ; 0053cc34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0053cc37
    MOV ESI,dword ptr [ESP + 0x24]      ; 0053cc3b
    MOV EDI,dword ptr [ESP + 0x28]      ; 0053cc3f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053cc43
    MOV EAX,dword ptr [EBP]             ; 0053cc47
    MOV EBX,dword ptr [EBX + 0x548]     ; 0053cc4a
    MOV dword ptr [ESP],EAX             ; 0053cc50
    TEST EBX,EBX                        ; 0053cc53
    JZ 0x0053cc95                       ; 0053cc55
        ;   XREF to: 0053cc95 (CONDITIONAL_JUMP)  ; LAB_0053cc95
    TEST ESI,ESI                        ; 0053cc57
        ;   Label: LAB_0053cc57
    JZ 0x0053cc6e                       ; 0053cc59
        ;   XREF to: 0053cc6e (CONDITIONAL_JUMP)  ; LAB_0053cc6e
    CMP byte ptr [ESI],0x0              ; 0053cc5b
    JZ 0x0053cc6e                       ; 0053cc5e
        ;   XREF to: 0053cc6e (CONDITIONAL_JUMP)  ; LAB_0053cc6e
    PUSH ESI                            ; 0053cc60
    PUSH EBX                            ; 0053cc61
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0053cc62
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053cc67
    TEST EAX,EAX                        ; 0053cc6a
    JZ 0x0053cc8b                       ; 0053cc6c
        ;   XREF to: 0053cc8b (CONDITIONAL_JUMP)  ; LAB_0053cc8b
    TEST EDI,EDI                        ; 0053cc6e
        ;   Label: LAB_0053cc6e
    JZ 0x0053cc81                       ; 0053cc70
        ;   XREF to: 0053cc81 (CONDITIONAL_JUMP)  ; LAB_0053cc81
    PUSH EBX                            ; 0053cc72
    MOV EDX,dword ptr [ESP + 0x24]      ; 0053cc73
    PUSH EDX                            ; 0053cc77
    CALL EDI                            ; 0053cc78
    ADD ESP,0x8                         ; 0053cc7a
    TEST EAX,EAX                        ; 0053cc7d
    JZ 0x0053cc8b                       ; 0053cc7f
        ;   XREF to: 0053cc8b (CONDITIONAL_JUMP)  ; LAB_0053cc8b
    PUSH EBX                            ; 0053cc81
        ;   Label: LAB_0053cc81
    PUSH EBP                            ; 0053cc82
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053cc83
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053cc88
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053cc8b
        ;   Label: LAB_0053cc8b
    TEST EBX,EBX                        ; 0053cc91
    JNZ 0x0053cc57                      ; 0053cc93
        ;   XREF to: 0053cc57 (CONDITIONAL_JUMP)  ; LAB_0053cc57
    MOV EAX,dword ptr [EBP]             ; 0053cc95
        ;   Label: LAB_0053cc95
    DEC EAX                             ; 0053cc98
    PUSH EAX                            ; 0053cc99
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053cc9a
    PUSH ECX                            ; 0053cc9e
    MOV EBX,dword ptr [EBP + 0xc]       ; 0053cc9f
    PUSH EBP                            ; 0053cca2
    CALL dword ptr [EBX + 0x8]          ; 0053cca3
    ADD ESP,0xc                         ; 0053cca6
    ADD ESP,0x4                         ; 0053cca9
    POP EBP                             ; 0053ccac
    POP EDI                             ; 0053ccad
    POP ESI                             ; 0053ccae
    POP EBX                             ; 0053ccaf
    RET                                 ; 0053ccb0

