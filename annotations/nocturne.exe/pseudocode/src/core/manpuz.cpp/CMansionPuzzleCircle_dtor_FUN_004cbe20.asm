; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CMansionPuzzleCircle *this_ptr,uint flags)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo_005a0290
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_manpuz.cpp_FUN_004cc020
;   core_manpuz.cpp_FUN_004cc040
;   core_manpuz.cpp_FUN_004cc060
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbe20
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbe21
    TEST byte ptr [ESP + 0xc],0x4       ; 004cbe25
    JNZ 0x004cbe7d                      ; 004cbe2a
        ;   XREF to: 004cbe7d (CONDITIONAL_JUMP)  ; LAB_004cbe7d
    PUSH 0x0                            ; 004cbe2c
    ADD EBX,0x1338                      ; 004cbe2e
    PUSH EBX                            ; 004cbe34
    CALL core_manpuz.cpp_FUN_004cc060   ; 004cbe35
        ;   XREF to: 004cc060 (UNCONDITIONAL_CALL)  ; SReflector * core_manpuz.cpp_FUN_004cc060(SReflector * objs, uint flags)
    ADD ESP,0x8                         ; 004cbe3a
    PUSH 0x0                            ; 004cbe3d
    SUB EAX,0x8a0                       ; 004cbe3f
    PUSH EAX                            ; 004cbe44
    CALL core_manpuz.cpp_FUN_004cc040   ; 004cbe45
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; SGem * core_manpuz.cpp_FUN_004cc040(SGem * objs, uint flags)
    ADD ESP,0x8                         ; 004cbe4a
    PUSH 0x0                            ; 004cbe4d
    SUB EAX,0x4b0                       ; 004cbe4f
    PUSH EAX                            ; 004cbe54
    CALL core_manpuz.cpp_FUN_004cc020   ; 004cbe55
        ;   XREF to: 004cc020 (UNCONDITIONAL_CALL)  ; SPanel * core_manpuz.cpp_FUN_004cc020(SPanel * objs, uint flags)
    ADD ESP,0x8                         ; 004cbe5a
    PUSH 0x1                            ; 004cbe5d
    LEA EBX,[EAX + 0xfffffa18]          ; 004cbe5f
    PUSH EBX                            ; 004cbe65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004cbe66
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cbe6b
    MOV DL,byte ptr [ESP + 0xc]         ; 004cbe6e
    MOV EBX,EAX                         ; 004cbe72
    TEST DL,0x2                         ; 004cbe74
    JNZ 0x004cbe98                      ; 004cbe77
        ;   XREF to: 004cbe98 (CONDITIONAL_JUMP)  ; LAB_004cbe98
    MOV EAX,EBX                         ; 004cbe79
    POP EBX                             ; 004cbe7b
    RET                                 ; 004cbe7c
    PUSH 0x5a0290                       ; 004cbe7d | g_CMansionPuzzleCircleTypeInfo_005a0290
        ;   Label: LAB_004cbe7d
    PUSH EBX                            ; 004cbe82
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004cbe83
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cbe88
    PUSH EAX                            ; 004cbe8b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004cbe8c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004cbe91
    MOV EAX,EBX                         ; 004cbe94
    POP EBX                             ; 004cbe96
    RET                                 ; 004cbe97
    PUSH EAX                            ; 004cbe98
        ;   Label: LAB_004cbe98
    CALL crt_unknown.c_FUN_00564494     ; 004cbe99
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004cbe9e
    MOV EAX,EBX                         ; 004cbea1
    POP EBX                             ; 004cbea3
    RET                                 ; 004cbea4

