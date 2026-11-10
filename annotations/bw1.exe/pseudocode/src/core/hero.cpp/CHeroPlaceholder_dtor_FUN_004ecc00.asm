; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00(CHeroPlaceholder *this_ptr,uint flags)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroPlaceholderVTable
;   WatcomTypeInfo g_CHeroPlaceholderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecc00
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004ecc00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ecc01
    TEST byte ptr [ESP + 0xc],0x4       ; 004ecc05
    JNZ 0x004ecc30                      ; 004ecc0a
        ;   XREF to: 004ecc30 (CONDITIONAL_JUMP)  ; LAB_004ecc30
    PUSH 0x1                            ; 004ecc0c
    PUSH EBX                            ; 004ecc0e
    MOV dword ptr [EBX + 0x154],0x601ea4 ; 004ecc0f | g_CHeroPlaceholderVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ecc19
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ecc1e
    MOV DL,byte ptr [ESP + 0xc]         ; 004ecc21
    MOV EBX,EAX                         ; 004ecc25
    TEST DL,0x2                         ; 004ecc27
    JNZ 0x004ecc4b                      ; 004ecc2a
        ;   XREF to: 004ecc4b (CONDITIONAL_JUMP)  ; LAB_004ecc4b
    MOV EAX,EBX                         ; 004ecc2c
    POP EBX                             ; 004ecc2e
    RET                                 ; 004ecc2f
    PUSH 0x601f80                       ; 004ecc30 | g_CHeroPlaceholderTypeInfo
        ;   Label: LAB_004ecc30
    PUSH EBX                            ; 004ecc35
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ecc36
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ecc3b
    PUSH EAX                            ; 004ecc3e
    CALL crt_unknown.c_FUN_005c0336     ; 004ecc3f
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ecc44
    MOV EAX,EBX                         ; 004ecc47
    POP EBX                             ; 004ecc49
    RET                                 ; 004ecc4a
    PUSH EAX                            ; 004ecc4b
        ;   Label: LAB_004ecc4b
    CALL crt_unknown.c_FUN_005c0344     ; 004ecc4c
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ecc51
    MOV EAX,EBX                         ; 004ecc54
    POP EBX                             ; 004ecc56
    RET                                 ; 004ecc57

