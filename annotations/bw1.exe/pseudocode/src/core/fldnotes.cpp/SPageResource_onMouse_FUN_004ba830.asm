; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_fldnotes_cpp_SPageResource_onMouse_FUN_004ba830(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ba830
        ;   Label: core_fldnotes.cpp_SPageResource_onMouse_FUN_004ba830
    CMP dword ptr [EAX + 0x10],0x0      ; 004ba834
    SETNZ AL                            ; 004ba838
    AND EAX,0xff                        ; 004ba83b
    RET                                 ; 004ba840

