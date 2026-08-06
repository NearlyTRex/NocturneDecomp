; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005522d0(CWaterActor *this_ptr,uint flags)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWaterActorTypeInfo_005a3ff0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_wateract.cpp_SWaterVertex_arrdtor_FUN_00552360
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005522d0
        ;   Label: core_wateract.cpp_CWaterActor_dtor_FUN_005522d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005522d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005522d5
    JNZ 0x0055230d                      ; 005522da
        ;   XREF to: 0055230d (CONDITIONAL_JUMP)  ; LAB_0055230d
    PUSH 0x0                            ; 005522dc
    ADD EBX,0x294                       ; 005522de
    PUSH EBX                            ; 005522e4
    CALL core_wateract.cpp_SWaterVertex_arrdtor_FUN_00552360 ; 005522e5
        ;   XREF to: 00552360 (UNCONDITIONAL_CALL)  ; SWaterVertex * core_wateract.cpp_SWaterVertex_arrdtor_FUN_00552360(SWaterVertex * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005522ea
    PUSH 0x1                            ; 005522ed
    LEA EBX,[EAX + 0xfffffd6c]          ; 005522ef
    PUSH EBX                            ; 005522f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005522f6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005522fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005522fe
    MOV EBX,EAX                         ; 00552302
    TEST DL,0x2                         ; 00552304
    JNZ 0x00552328                      ; 00552307
        ;   XREF to: 00552328 (CONDITIONAL_JUMP)  ; LAB_00552328
    MOV EAX,EBX                         ; 00552309
    POP EBX                             ; 0055230b
    RET                                 ; 0055230c
    PUSH 0x5a3ff0                       ; 0055230d | g_CWaterActorTypeInfo_005a3ff0
        ;   Label: LAB_0055230d
    PUSH EBX                            ; 00552312
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00552313
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00552318
    PUSH EAX                            ; 0055231b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0055231c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00552321
    MOV EAX,EBX                         ; 00552324
    POP EBX                             ; 00552326
    RET                                 ; 00552327
    PUSH EAX                            ; 00552328
        ;   Label: LAB_00552328
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00552329
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0055232e
    MOV EAX,EBX                         ; 00552331
    POP EBX                             ; 00552333
    RET                                 ; 00552334

