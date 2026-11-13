; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_arrdtor64_FUN_004a49b0(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb50                       ; 004a49b0
        ;   Label: core_fire.cpp_CRock_arrdtor64_FUN_004a49b0
    PUSH 0x40                           ; 004a49b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49b7
    PUSH EDX                            ; 004a49bb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a49bc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a49c1
    RET                                 ; 004a49c4

