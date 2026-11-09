; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004d2220(CHealthItem *this_ptr,uint flags)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealthItemTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2220
        ;   Label: core_health.cpp_CHealthItem_dtor_FUN_004d2220
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d2221
    TEST byte ptr [ESP + 0xc],0x4       ; 004d2225
    JNZ 0x004d2246                      ; 004d222a
        ;   XREF to: 004d2246 (CONDITIONAL_JUMP)  ; LAB_004d2246
    PUSH 0x1                            ; 004d222c
    PUSH EBX                            ; 004d222e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d222f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d2234
    MOV DL,byte ptr [ESP + 0xc]         ; 004d2237
    MOV EBX,EAX                         ; 004d223b
    TEST DL,0x2                         ; 004d223d
    JNZ 0x004d2261                      ; 004d2240
        ;   XREF to: 004d2261 (CONDITIONAL_JUMP)  ; LAB_004d2261
    MOV EAX,EBX                         ; 004d2242
    POP EBX                             ; 004d2244
    RET                                 ; 004d2245
    PUSH 0x5e14f0                       ; 004d2246 | g_CHealthItemTypeInfo
        ;   Label: LAB_004d2246
    PUSH EBX                            ; 004d224b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d224c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d2251
    PUSH EAX                            ; 004d2254
    CALL crt_unknown.c_FUN_005a30b6     ; 004d2255
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d225a
    MOV EAX,EBX                         ; 004d225d
    POP EBX                             ; 004d225f
    RET                                 ; 004d2260
    PUSH EAX                            ; 004d2261
        ;   Label: LAB_004d2261
    CALL crt_unknown.c_FUN_005a30c4     ; 004d2262
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d2267
    MOV EAX,EBX                         ; 004d226a
    POP EBX                             ; 004d226c
    RET                                 ; 004d226d

