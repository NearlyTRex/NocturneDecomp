; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_canBeGrabbed_FUN_00458f00(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 00458f00
        ;   Label: core_demnfolk.cpp_CDemnfolk_canBeGrabbed_FUN_00458f00
    SETZ AL                             ; 00458f05
    AND EAX,0xff                        ; 00458f08
    RET                                 ; 00458f0d

