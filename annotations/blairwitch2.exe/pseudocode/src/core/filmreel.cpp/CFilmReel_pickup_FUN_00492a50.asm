; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_00492a50(CFilmReel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00492a50
        ;   Label: core_filmreel.cpp_CFilmReel_pickup_FUN_00492a50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492a54
    MOV dword ptr [EDX + 0x430],EAX     ; 00492a58
    RET                                 ; 00492a5e

