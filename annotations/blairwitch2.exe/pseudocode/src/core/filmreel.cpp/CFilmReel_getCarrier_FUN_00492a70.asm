; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_filmreel_cpp_CFilmReel_getCarrier_FUN_00492a70(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492a70
        ;   Label: core_filmreel.cpp_CFilmReel_getCarrier_FUN_00492a70
    MOV EAX,dword ptr [EAX + 0x430]     ; 00492a74
    LEA EAX,[EAX]                       ; 00492a7a

