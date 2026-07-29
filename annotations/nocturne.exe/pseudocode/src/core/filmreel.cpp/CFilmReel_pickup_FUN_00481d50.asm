; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_00481d50(CFilmReel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481d50
        ;   Label: core_filmreel.cpp_CFilmReel_pickup_FUN_00481d50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481d54
    MOV dword ptr [EDX + 0x2cc],EAX     ; 00481d58
    RET                                 ; 00481d5e

