; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_filmreel_cpp_CFilmProjector_getActorType_FUN_004bea30(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFilmProjectorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d12d74                   ; 004bea30 | g_CFilmProjectorClassInfo
        ;   Label: core_filmreel.cpp_CFilmProjector_getActorType_FUN_004bea30
    RET                                 ; 004bea35

