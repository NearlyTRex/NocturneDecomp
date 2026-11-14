; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00445320(CColonel *this_ptr,uint flags)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CColonelTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445320
        ;   Label: core_colonel.cpp_CColonel_dtor_FUN_00445320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00445321
    TEST byte ptr [ESP + 0xc],0x4       ; 00445325
    JNZ 0x00445346                      ; 0044532a
        ;   XREF to: 00445346 (CONDITIONAL_JUMP)  ; LAB_00445346
    PUSH 0x1                            ; 0044532c
    PUSH EBX                            ; 0044532e
    CALL core_hero.cpp_FUN_004ea980     ; 0044532f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 00445334
    MOV DL,byte ptr [ESP + 0xc]         ; 00445337
    MOV EBX,EAX                         ; 0044533b
    TEST DL,0x2                         ; 0044533d
    JNZ 0x00445361                      ; 00445340
        ;   XREF to: 00445361 (CONDITIONAL_JUMP)  ; LAB_00445361
    MOV EAX,EBX                         ; 00445342
    POP EBX                             ; 00445344
    RET                                 ; 00445345
    PUSH 0x5fdd50                       ; 00445346 | g_CColonelTypeInfo
        ;   Label: LAB_00445346
    PUSH EBX                            ; 0044534b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0044534c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00445351
    PUSH EAX                            ; 00445354
    CALL crt_unknown.c_FUN_005c0336     ; 00445355
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0044535a
    MOV EAX,EBX                         ; 0044535d
    POP EBX                             ; 0044535f
    RET                                 ; 00445360
    PUSH EAX                            ; 00445361
        ;   Label: LAB_00445361
    CALL crt_unknown.c_FUN_005c0344     ; 00445362
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00445367
    MOV EAX,EBX                         ; 0044536a
    POP EBX                             ; 0044536c
    RET                                 ; 0044536d

