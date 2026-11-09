; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_0058cb30(CZombie *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 0058cb30
        ;   Label: core_zombie.cpp_CZombie_canBeGrabbed_FUN_0058cb30
    SETZ AL                             ; 0058cb35
    AND EAX,0xff                        ; 0058cb38
    RET                                 ; 0058cb3d

