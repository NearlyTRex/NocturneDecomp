; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_arrdtor256_FUN_004a4a50(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfa70                       ; 004a4a50
        ;   Label: core_fire.cpp_CStake_arrdtor256_FUN_004a4a50
    PUSH 0x100                          ; 004a4a55
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a5a
    PUSH EDX                            ; 004a4a5e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a4a5f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4a64
    RET                                 ; 004a4a67

