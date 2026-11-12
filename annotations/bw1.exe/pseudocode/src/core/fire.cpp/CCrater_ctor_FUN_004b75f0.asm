; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004b75f0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b75f0
        ;   Label: core_fire.cpp_CCrater_ctor_FUN_004b75f0
    PUSH 0x5fb430                       ; 004b75f4
    PUSH 0x3                            ; 004b75f9
    ADD EAX,0x1c                        ; 004b75fb
    PUSH EAX                            ; 004b75fe
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004b75ff
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7604
    SUB EAX,0x1c                        ; 004b7607
    RET                                 ; 004b760a

