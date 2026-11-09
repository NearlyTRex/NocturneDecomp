; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_filmreel_cpp_CFilmReel_getCarrier_FUN_004962c0(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004962c0
        ;   Label: core_filmreel.cpp_CFilmReel_getCarrier_FUN_004962c0
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 004962c4
    LEA EAX,[EAX]                       ; 004962ca

