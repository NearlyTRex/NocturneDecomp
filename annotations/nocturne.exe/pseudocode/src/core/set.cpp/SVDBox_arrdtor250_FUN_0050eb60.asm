; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SVDBox * __cdecl core_set_cpp_SVDBox_arrdtor250_FUN_0050eb60(SVDBox *this_ptr,uint flags)
;
; Parameters:
; SVDBox *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00506e50 at 00506e67
;
; Referenced Globals:
;   WatcomTypeInfo g_SVDBoxTypeInfo_005a19d0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a19d0                       ; 0050eb60 | g_SVDBoxTypeInfo_005a19d0
        ;   Label: core_set.cpp_SVDBox_arrdtor250_FUN_0050eb60
    PUSH 0xfa                           ; 0050eb65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb6a
    PUSH EDX                            ; 0050eb6e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eb6f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050eb74
    RET                                 ; 0050eb77

