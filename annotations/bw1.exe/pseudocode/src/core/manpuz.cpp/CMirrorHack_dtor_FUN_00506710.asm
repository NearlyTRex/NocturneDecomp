; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_00506710(CMirrorHack *this_ptr,uint flags)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMirrorHackTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506710
        ;   Label: core_manpuz.cpp_CMirrorHack_dtor_FUN_00506710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506711
    TEST byte ptr [ESP + 0xc],0x4       ; 00506715
    JNZ 0x00506736                      ; 0050671a
        ;   XREF to: 00506736 (CONDITIONAL_JUMP)  ; LAB_00506736
    PUSH 0x1                            ; 0050671c
    PUSH EBX                            ; 0050671e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0050671f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00506724
    MOV DL,byte ptr [ESP + 0xc]         ; 00506727
    MOV EBX,EAX                         ; 0050672b
    TEST DL,0x2                         ; 0050672d
    JNZ 0x00506751                      ; 00506730
        ;   XREF to: 00506751 (CONDITIONAL_JUMP)  ; LAB_00506751
    MOV EAX,EBX                         ; 00506732
    POP EBX                             ; 00506734
    RET                                 ; 00506735
    PUSH 0x603670                       ; 00506736 | g_CMirrorHackTypeInfo
        ;   Label: LAB_00506736
    PUSH EBX                            ; 0050673b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0050673c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00506741
    PUSH EAX                            ; 00506744
    CALL crt_unknown.c_FUN_005c0336     ; 00506745
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0050674a
    MOV EAX,EBX                         ; 0050674d
    POP EBX                             ; 0050674f
    RET                                 ; 00506750
    PUSH EAX                            ; 00506751
        ;   Label: LAB_00506751
    CALL crt_unknown.c_FUN_005c0344     ; 00506752
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00506757
    MOV EAX,EBX                         ; 0050675a
    POP EBX                             ; 0050675c
    RET                                 ; 0050675d

