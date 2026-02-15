; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9580
        ;   Label: core_fire.cpp_CCrater_ctor_FUN_004c9580
    PUSH 0x6598c0                       ; 004c9584 | g_CVectorTypeInfo
    PUSH 0x3                            ; 004c9589
    ADD EAX,0x1c                        ; 004c958b
    PUSH EAX                            ; 004c958e
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004c958f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9594
    SUB EAX,0x1c                        ; 004c9597
    RET                                 ; 004c959a

