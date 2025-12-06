; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLadder * core_ladder.cpp_FUN_00502ed0(CLadder * this_ptr, uint d1, uint d2)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CLadderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502ed0
        ;   Label: core_ladder.cpp_FUN_00502ed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502ed1
    TEST byte ptr [ESP + 0xc],0x4       ; 00502ed5
    JNZ 0x00502ef6                      ; 00502eda | LAB_00502ef6
        ;   XREF to: 00502ef6 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00502edc
    PUSH EBX                            ; 00502ede
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00502edf | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00502ee4
    MOV DL,byte ptr [ESP + 0xc]         ; 00502ee7
    MOV EBX,EAX                         ; 00502eeb
    TEST DL,0x2                         ; 00502eed
    JNZ 0x00502f11                      ; 00502ef0 | LAB_00502f11
        ;   XREF to: 00502f11 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00502ef2
    POP EBX                             ; 00502ef4
    RET                                 ; 00502ef5
    PUSH 0x6606e0                       ; 00502ef6 | WatcomTypeInfo g_CLadderTypeInfo
        ;   Label: LAB_00502ef6
    PUSH EBX                            ; 00502efb
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00502efc | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00502f01
    PUSH EAX                            ; 00502f04
    CALL crt_memory.c_free_FUN_005fe659 ; 00502f05 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502f0a
    MOV EAX,EBX                         ; 00502f0d
    POP EBX                             ; 00502f0f
    RET                                 ; 00502f10
    PUSH EAX                            ; 00502f11
        ;   Label: LAB_00502f11
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00502f12 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502f17
    MOV EAX,EBX                         ; 00502f1a
    POP EBX                             ; 00502f1c
    RET                                 ; 00502f1d

