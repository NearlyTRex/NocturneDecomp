; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005fc960(CZombie *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 005fc960
        ;   Label: core_zombie.cpp_CZombie_canBeGrabbed_FUN_005fc960
    SETZ AL                             ; 005fc965
    AND EAX,0xff                        ; 005fc968
    RET                                 ; 005fc96d

