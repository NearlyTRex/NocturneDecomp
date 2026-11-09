; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004ab400(CFilmReel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab400
        ;   Label: core_filmreel.cpp_CFilmReel_pickup_FUN_004ab400
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab404
    MOV dword ptr [EDX + 0x2d4],EAX     ; 004ab408
    RET                                 ; 004ab40e

