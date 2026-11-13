; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_staticInit_FUN_00462af0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ba5718
;   undefined4 DAT_01ba571c
;   undefined4 DAT_01ba5720
;   undefined4 DAT_01ba5724
;   undefined4 DAT_01ba5728
;   undefined4 DAT_01ba572c
;   undefined4 DAT_01ba5730
;   undefined4 DAT_01ba5734
;   undefined4 DAT_01ba5738
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00462af0
        ;   Label: core_dracbrid.cpp_staticInit_FUN_00462af0
    MOV ECX,0x3f000000                  ; 00462af1
    PUSH 0x1c264a8                      ; 00462af6
    MOV ESI,0xbf19999a                  ; 00462afb
    XOR EDX,EDX                         ; 00462b00
    PUSH 0x9                            ; 00462b02
    MOV EAX,0x3f19999a                  ; 00462b04
    MOV dword ptr [0x01ba5718],EDX      ; 00462b09 | DAT_01ba5718
    PUSH 0x60b244                       ; 00462b0f
    MOV dword ptr [0x01ba571c],ECX      ; 00462b14 | DAT_01ba571c
    MOV dword ptr [0x01ba5720],EDX      ; 00462b1a | DAT_01ba5720
    PUSH 0x462b70                       ; 00462b20
    MOV dword ptr [0x01ba5724],ESI      ; 00462b25 | DAT_01ba5724
    MOV dword ptr [0x01ba5728],EDX      ; 00462b2b | DAT_01ba5728
    PUSH 0x5d0e14                       ; 00462b31
    MOV dword ptr [0x01ba572c],EDX      ; 00462b36 | DAT_01ba572c
    MOV [0x01ba5730],EAX                ; 00462b3c | DAT_01ba5730
    PUSH 0x1ba573c                      ; 00462b41
    MOV dword ptr [0x01ba5734],EDX      ; 00462b46 | DAT_01ba5734
    MOV dword ptr [0x01ba5738],EDX      ; 00462b4c | DAT_01ba5738
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00462b52
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00462b57
    PUSH 0x5f57d0                       ; 00462b5a
    PUSH 0x6                            ; 00462b5f
    PUSH 0x1ba5798                      ; 00462b61
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00462b66
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00462b6b
    POP ESI                             ; 00462b6e
    RET                                 ; 00462b6f

