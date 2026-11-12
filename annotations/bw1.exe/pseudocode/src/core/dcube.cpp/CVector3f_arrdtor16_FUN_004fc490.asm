; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcube_cpp_CVector3f_arrdtor16_FUN_004fc490(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004fc490
        ;   Label: core_dcube.cpp_CVector3f_arrdtor16_FUN_004fc490
    PUSH 0x10                           ; 004fc495
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc497
    PUSH EDX                            ; 004fc49b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004fc49c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004fc4a1
    RET                                 ; 004fc4a4

