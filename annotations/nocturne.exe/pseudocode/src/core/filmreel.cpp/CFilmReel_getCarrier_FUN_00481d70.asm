; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_filmreel_cpp_CFilmReel_getCarrier_FUN_00481d70(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481d70
        ;   Label: core_filmreel.cpp_CFilmReel_getCarrier_FUN_00481d70
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 00481d74
    LEA EAX,[EAX]                       ; 00481d7a

