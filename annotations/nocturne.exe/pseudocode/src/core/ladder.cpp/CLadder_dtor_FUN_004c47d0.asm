; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004c47d0(CLadder *this_ptr,uint flags)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLadderTypeInfo_0059fa30
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c47d0
        ;   Label: core_ladder.cpp_CLadder_dtor_FUN_004c47d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c47d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004c47d5
    JNZ 0x004c47f6                      ; 004c47da
        ;   XREF to: 004c47f6 (CONDITIONAL_JUMP)  ; LAB_004c47f6
    PUSH 0x1                            ; 004c47dc
    PUSH EBX                            ; 004c47de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004c47df
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c47e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004c47e7
    MOV EBX,EAX                         ; 004c47eb
    TEST DL,0x2                         ; 004c47ed
    JNZ 0x004c4811                      ; 004c47f0
        ;   XREF to: 004c4811 (CONDITIONAL_JUMP)  ; LAB_004c4811
    MOV EAX,EBX                         ; 004c47f2
    POP EBX                             ; 004c47f4
    RET                                 ; 004c47f5
    PUSH 0x59fa30                       ; 004c47f6 | g_CLadderTypeInfo_0059fa30
        ;   Label: LAB_004c47f6
    PUSH EBX                            ; 004c47fb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004c47fc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004c4801
    PUSH EAX                            ; 004c4804
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004c4805
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004c480a
    MOV EAX,EBX                         ; 004c480d
    POP EBX                             ; 004c480f
    RET                                 ; 004c4810
    PUSH EAX                            ; 004c4811
        ;   Label: LAB_004c4811
    CALL crt_unknown.c_FUN_00564494     ; 004c4812
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004c4817
    MOV EAX,EBX                         ; 004c481a
    POP EBX                             ; 004c481c
    RET                                 ; 004c481d

