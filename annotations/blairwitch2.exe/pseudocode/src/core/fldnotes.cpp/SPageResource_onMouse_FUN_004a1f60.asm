; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_fldnotes_cpp_SPageResource_onMouse_FUN_004a1f60(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1f60
        ;   Label: core_fldnotes.cpp_SPageResource_onMouse_FUN_004a1f60
    CMP dword ptr [EAX + 0x10],0x0      ; 004a1f64
    SETNZ AL                            ; 004a1f68
    AND EAX,0xff                        ; 004a1f6b
    RET                                 ; 004a1f70

