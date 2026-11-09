; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005becd0(CZombie *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 005becd0
        ;   Label: core_zombie.cpp_CZombie_canBeGrabbed_FUN_005becd0
    SETZ AL                             ; 005becd5
    AND EAX,0xff                        ; 005becd8
    RET                                 ; 005becdd

