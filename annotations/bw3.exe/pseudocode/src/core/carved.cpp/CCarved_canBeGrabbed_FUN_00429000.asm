; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_canBeGrabbed_FUN_00429000(CCarved *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 00429000
        ;   Label: core_carved.cpp_CCarved_canBeGrabbed_FUN_00429000
    SETZ AL                             ; 00429005
    AND EAX,0xff                        ; 00429008
    RET                                 ; 0042900d

