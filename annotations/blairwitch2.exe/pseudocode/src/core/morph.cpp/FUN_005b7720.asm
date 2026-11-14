; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_FUN_005b7720(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80 at 005b6e94
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x6013c0                       ; 005b7720 | g_CMorphModelTypeInfo
        ;   Label: core_morph.cpp_FUN_005b7720
    PUSH 0x2                            ; 005b7725
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b7727
    PUSH EDX                            ; 005b772b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 005b772c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b7731
    RET                                 ; 005b7734

