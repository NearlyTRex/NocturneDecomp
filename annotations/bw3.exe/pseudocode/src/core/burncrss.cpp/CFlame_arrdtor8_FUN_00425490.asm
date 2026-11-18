; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_burncrss_cpp_CFlame_arrdtor8_FUN_00425490(CFlame *this_ptr,uint flags)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_burncrss.cpp_CBurncross_dtor_FUN_00425420 at 00425435
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbca0                       ; 00425490 | g_CFlameTypeInfo
        ;   Label: core_burncrss.cpp_CFlame_arrdtor8_FUN_00425490
    PUSH 0x8                            ; 00425495
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425497
    PUSH EDX                            ; 0042549b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0042549c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004254a1
    RET                                 ; 004254a4

