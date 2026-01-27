; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_filmreel.cpp_CFilmReel_getActorType_FUN_004be6a0(CFilmReel * this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFilmReelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d12d38                   ; 004be6a0 | g_CFilmReelClassInfo
        ;   Label: core_filmreel.cpp_CFilmReel_getActorType_FUN_004be6a0
    RET                                 ; 004be6a5

