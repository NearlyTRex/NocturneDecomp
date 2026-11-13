; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_arrdtor50_FUN_004b78b0(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600320                       ; 004b78b0
        ;   Label: core_fire.cpp_CShell_arrdtor50_FUN_004b78b0
    PUSH 0x32                           ; 004b78b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78b7
    PUSH EDX                            ; 004b78bb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b78bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b78c1
    RET                                 ; 004b78c4

