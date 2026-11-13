; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_arrdtor50_FUN_0049f000(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6890                       ; 0049f000
        ;   Label: core_fire.cpp_CShell_arrdtor50_FUN_0049f000
    PUSH 0x32                           ; 0049f005
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f007
    PUSH EDX                            ; 0049f00b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f00c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f011
    RET                                 ; 0049f014

