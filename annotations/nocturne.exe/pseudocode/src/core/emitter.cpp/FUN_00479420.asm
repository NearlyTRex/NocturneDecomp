; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_emitter_cpp_FUN_00479420(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CEmitterTypeInfo_0059cd70
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479420
        ;   Label: core_emitter.cpp_FUN_00479420
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479421
    TEST byte ptr [ESP + 0xc],0x4       ; 00479425
    JNZ 0x00479446                      ; 0047942a
        ;   XREF to: 00479446 (CONDITIONAL_JUMP)  ; LAB_00479446
    PUSH 0x1                            ; 0047942c
    PUSH EBX                            ; 0047942e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0047942f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00479434
    MOV DL,byte ptr [ESP + 0xc]         ; 00479437
    MOV EBX,EAX                         ; 0047943b
    TEST DL,0x2                         ; 0047943d
    JNZ 0x00479461                      ; 00479440
        ;   XREF to: 00479461 (CONDITIONAL_JUMP)  ; LAB_00479461
    MOV EAX,EBX                         ; 00479442
    POP EBX                             ; 00479444
    RET                                 ; 00479445
    PUSH 0x59cd70                       ; 00479446 | g_CEmitterTypeInfo_0059cd70
        ;   Label: LAB_00479446
    PUSH EBX                            ; 0047944b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0047944c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00479451
    PUSH EAX                            ; 00479454
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00479455
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0047945a
    MOV EAX,EBX                         ; 0047945d
    POP EBX                             ; 0047945f
    RET                                 ; 00479460
    PUSH EAX                            ; 00479461
        ;   Label: LAB_00479461
    CALL crt_unknown.c_FUN_00564494     ; 00479462
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00479467
    MOV EAX,EBX                         ; 0047946a
    POP EBX                             ; 0047946c
    RET                                 ; 0047946d

