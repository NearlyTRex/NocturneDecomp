; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CCurtain *this_ptr,uint flags)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCurtainTypeInfo_0059bdb0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_curtain.cpp_SCurtainVertex_arrdtor1000_FUN_0043f980
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f8e0
        ;   Label: core_curtain.cpp_CCurtain_dtor_FUN_0043f8e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f8e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0043f8e5
    JNZ 0x0043f91d                      ; 0043f8ea
        ;   XREF to: 0043f91d (CONDITIONAL_JUMP)  ; LAB_0043f91d
    PUSH 0x0                            ; 0043f8ec
    ADD EBX,0x200                       ; 0043f8ee
    PUSH EBX                            ; 0043f8f4
    CALL core_curtain.cpp_SCurtainVertex_arrdtor1000_FUN_0043f980 ; 0043f8f5
        ;   XREF to: 0043f980 (UNCONDITIONAL_CALL)  ; SCurtainVertex * core_curtain.cpp_SCurtainVertex_arrdtor1000_FUN_0043f980(SCurtainVertex * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043f8fa
    PUSH 0x1                            ; 0043f8fd
    LEA EBX,[EAX + 0xfffffe00]          ; 0043f8ff
    PUSH EBX                            ; 0043f905
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0043f906
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043f90b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043f90e
    MOV EBX,EAX                         ; 0043f912
    TEST DL,0x2                         ; 0043f914
    JNZ 0x0043f938                      ; 0043f917
        ;   XREF to: 0043f938 (CONDITIONAL_JUMP)  ; LAB_0043f938
    MOV EAX,EBX                         ; 0043f919
    POP EBX                             ; 0043f91b
    RET                                 ; 0043f91c
    PUSH 0x59bdb0                       ; 0043f91d | g_CCurtainTypeInfo_0059bdb0
        ;   Label: LAB_0043f91d
    PUSH EBX                            ; 0043f922
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043f923
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043f928
    PUSH EAX                            ; 0043f92b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043f92c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0043f931
    MOV EAX,EBX                         ; 0043f934
    POP EBX                             ; 0043f936
    RET                                 ; 0043f937
    PUSH EAX                            ; 0043f938
        ;   Label: LAB_0043f938
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0043f939
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043f93e
    MOV EAX,EBX                         ; 0043f941
    POP EBX                             ; 0043f943
    RET                                 ; 0043f944

