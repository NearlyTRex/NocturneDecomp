; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo_00599940
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fdc0
        ;   Label: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fdc1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040fdc5
    JNZ 0x0040fde6                      ; 0040fdca
        ;   XREF to: 0040fde6 (CONDITIONAL_JUMP)  ; LAB_0040fde6
    PUSH 0x1                            ; 0040fdcc
    PUSH EBX                            ; 0040fdce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040fdcf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fdd4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040fdd7
    MOV EBX,EAX                         ; 0040fddb
    TEST DL,0x2                         ; 0040fddd
    JNZ 0x0040fe01                      ; 0040fde0
        ;   XREF to: 0040fe01 (CONDITIONAL_JUMP)  ; LAB_0040fe01
    MOV EAX,EBX                         ; 0040fde2
    POP EBX                             ; 0040fde4
    RET                                 ; 0040fde5
    PUSH 0x599940                       ; 0040fde6 | g_CFlameTypeInfo_00599940
        ;   Label: LAB_0040fde6
    PUSH EBX                            ; 0040fdeb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040fdec
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040fdf1
    PUSH EAX                            ; 0040fdf4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040fdf5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0040fdfa
    MOV EAX,EBX                         ; 0040fdfd
    POP EBX                             ; 0040fdff
    RET                                 ; 0040fe00
    PUSH EAX                            ; 0040fe01
        ;   Label: LAB_0040fe01
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0040fe02
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0040fe07
    MOV EAX,EBX                         ; 0040fe0a
    POP EBX                             ; 0040fe0c
    RET                                 ; 0040fe0d

