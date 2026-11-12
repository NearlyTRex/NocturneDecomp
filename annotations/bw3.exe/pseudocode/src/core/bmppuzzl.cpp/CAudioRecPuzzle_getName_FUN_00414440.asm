; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getName_FUN_00414440(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_audioRec_005b65be
;
; *****************************************************************************

section .text

    MOV EAX,0x5b65be                    ; 00414440 | = "audioRec"
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getName_FUN_00414440
    RET                                 ; 00414445

