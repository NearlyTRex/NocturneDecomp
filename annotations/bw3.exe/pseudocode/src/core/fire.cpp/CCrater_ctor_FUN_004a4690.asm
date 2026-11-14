; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004a4690(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4690
        ;   Label: core_fire.cpp_CCrater_ctor_FUN_004a4690
    PUSH 0x5db0f0                       ; 004a4694
    PUSH 0x3                            ; 004a4699
    ADD EAX,0x1c                        ; 004a469b
    PUSH EAX                            ; 004a469e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a469f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a46a4
    SUB EAX,0x1c                        ; 004a46a7
    RET                                 ; 004a46aa

