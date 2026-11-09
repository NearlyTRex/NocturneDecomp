; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004962a0(CFilmReel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004962a0
        ;   Label: core_filmreel.cpp_CFilmReel_pickup_FUN_004962a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004962a4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 004962a8
    RET                                 ; 004962ae

