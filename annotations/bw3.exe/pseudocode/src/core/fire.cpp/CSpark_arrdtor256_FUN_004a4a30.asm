; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * core_fire_cpp_CSpark_arrdtor256_FUN_004a4a30(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfa90                       ; 004a4a30
        ;   Label: core_fire.cpp_CSpark_arrdtor256_FUN_004a4a30
    PUSH 0x100                          ; 004a4a35
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a3a
    PUSH EDX                            ; 004a4a3e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a4a3f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4a44
    RET                                 ; 004a4a47

