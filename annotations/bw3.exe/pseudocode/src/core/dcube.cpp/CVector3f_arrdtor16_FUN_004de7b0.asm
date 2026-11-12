; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcube_cpp_CVector3f_arrdtor16_FUN_004de7b0(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004de7b0
        ;   Label: core_dcube.cpp_CVector3f_arrdtor16_FUN_004de7b0
    PUSH 0x10                           ; 004de7b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004de7b7
    PUSH EDX                            ; 004de7bb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004de7bc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004de7c1
    RET                                 ; 004de7c4

