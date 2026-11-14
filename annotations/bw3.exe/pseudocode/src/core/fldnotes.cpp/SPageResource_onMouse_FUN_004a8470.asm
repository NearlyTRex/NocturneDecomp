; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_fldnotes_cpp_SPageResource_onMouse_FUN_004a8470(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8470
        ;   Label: core_fldnotes.cpp_SPageResource_onMouse_FUN_004a8470
    CMP dword ptr [EAX + 0x10],0x0      ; 004a8474
    SETNZ AL                            ; 004a8478
    AND EAX,0xff                        ; 004a847b
    RET                                 ; 004a8480

