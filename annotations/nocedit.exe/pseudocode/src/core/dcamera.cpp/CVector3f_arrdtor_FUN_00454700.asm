; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcamera_cpp_CVector3f_arrdtor_FUN_00454700(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00454700 | g_CVectorTypeInfo
        ;   Label: core_dcamera.cpp_CVector3f_arrdtor_FUN_00454700
    PUSH 0x12d40                        ; 00454705
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045470a
    PUSH EDX                            ; 0045470e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0045470f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00454714
    RET                                 ; 00454717

