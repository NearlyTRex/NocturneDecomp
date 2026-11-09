; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_staticInit_FUN_0047b010(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5a134
;   undefined4 DAT_01c5a138
;   undefined4 DAT_01c5a13c
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 0047b010
        ;   Label: core_dynamite.cpp_staticInit_FUN_0047b010
    PUSH 0x1                            ; 0047b015
    PUSH 0x5fb118                       ; 0047b017
    PUSH 0x47b050                       ; 0047b01c
    PUSH 0x5bccf1                       ; 0047b021
    PUSH 0x1c5a0f8                      ; 0047b026
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0047b02b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    MOV ECX,0xc2000000                  ; 0047b030
    XOR EDX,EDX                         ; 0047b035
    ADD ESP,0x18                        ; 0047b037
    MOV dword ptr [0x01c5a134],EDX      ; 0047b03a | DAT_01c5a134
    MOV dword ptr [0x01c5a138],ECX      ; 0047b040 | DAT_01c5a138
    MOV dword ptr [0x01c5a13c],EDX      ; 0047b046 | DAT_01c5a13c
    RET                                 ; 0047b04c

