; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00412000(CBat *this_ptr,uint flags)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatTypeInfo_00599f70
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_course.cpp_CCourse_dtor_FUN_0043b5f0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412000
        ;   Label: core_bat.cpp_CBat_dtor_FUN_00412000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412001
    TEST byte ptr [ESP + 0xc],0x4       ; 00412005
    JNZ 0x0041203d                      ; 0041200a
        ;   XREF to: 0041203d (CONDITIONAL_JUMP)  ; LAB_0041203d
    PUSH 0x0                            ; 0041200c
    ADD EBX,0x170                       ; 0041200e
    PUSH EBX                            ; 00412014
    CALL core_course.cpp_CCourse_dtor_FUN_0043b5f0 ; 00412015
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_0043b5f0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041201a
    PUSH 0x1                            ; 0041201d
    LEA EBX,[EAX + 0xfffffe90]          ; 0041201f
    PUSH EBX                            ; 00412025
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00412026
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041202b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041202e
    MOV EBX,EAX                         ; 00412032
    TEST DL,0x2                         ; 00412034
    JNZ 0x00412058                      ; 00412037
        ;   XREF to: 00412058 (CONDITIONAL_JUMP)  ; LAB_00412058
    MOV EAX,EBX                         ; 00412039
    POP EBX                             ; 0041203b
    RET                                 ; 0041203c
    PUSH 0x599f70                       ; 0041203d | g_CBatTypeInfo_00599f70
        ;   Label: LAB_0041203d
    PUSH EBX                            ; 00412042
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00412043
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00412048
    PUSH EAX                            ; 0041204b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0041204c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00412051
    MOV EAX,EBX                         ; 00412054
    POP EBX                             ; 00412056
    RET                                 ; 00412057
    PUSH EAX                            ; 00412058
        ;   Label: LAB_00412058
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00412059
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0041205e
    MOV EAX,EBX                         ; 00412061
    POP EBX                             ; 00412063
    RET                                 ; 00412064

