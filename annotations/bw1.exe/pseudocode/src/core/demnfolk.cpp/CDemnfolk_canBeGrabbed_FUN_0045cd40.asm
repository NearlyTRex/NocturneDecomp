; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_canBeGrabbed_FUN_0045cd40(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 0045cd40
        ;   Label: core_demnfolk.cpp_CDemnfolk_canBeGrabbed_FUN_0045cd40
    SETZ AL                             ; 0045cd45
    AND EAX,0xff                        ; 0045cd48
    RET                                 ; 0045cd4d

