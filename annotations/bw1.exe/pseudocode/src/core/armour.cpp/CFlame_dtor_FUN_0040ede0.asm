; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040ede0(CFlame *this_ptr,uint flags)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ede0
        ;   Label: core_armour.cpp_CFlame_dtor_FUN_0040ede0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ede1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ede5
    JNZ 0x0040ee06                      ; 0040edea
        ;   XREF to: 0040ee06 (CONDITIONAL_JUMP)  ; LAB_0040ee06
    PUSH 0x1                            ; 0040edec
    PUSH EBX                            ; 0040edee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040edef
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040edf4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040edf7
    MOV EBX,EAX                         ; 0040edfb
    TEST DL,0x2                         ; 0040edfd
    JNZ 0x0040ee21                      ; 0040ee00
        ;   XREF to: 0040ee21 (CONDITIONAL_JUMP)  ; LAB_0040ee21
    MOV EAX,EBX                         ; 0040ee02
    POP EBX                             ; 0040ee04
    RET                                 ; 0040ee05
    PUSH 0x5fb960                       ; 0040ee06 | g_CFlameTypeInfo
        ;   Label: LAB_0040ee06
    PUSH EBX                            ; 0040ee0b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040ee0c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040ee11
    PUSH EAX                            ; 0040ee14
    CALL crt_unknown.c_FUN_005c0336     ; 0040ee15
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040ee1a
    MOV EAX,EBX                         ; 0040ee1d
    POP EBX                             ; 0040ee1f
    RET                                 ; 0040ee20
    PUSH EAX                            ; 0040ee21
        ;   Label: LAB_0040ee21
    CALL crt_unknown.c_FUN_005c0344     ; 0040ee22
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040ee27
    MOV EAX,EBX                         ; 0040ee2a
    POP EBX                             ; 0040ee2c
    RET                                 ; 0040ee2d

