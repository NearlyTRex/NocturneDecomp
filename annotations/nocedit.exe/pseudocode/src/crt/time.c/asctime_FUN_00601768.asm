; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * __watcallStack crt_time_c_asctime_FUN_00601768(tm *timeptr)
;
; Parameters:
; tm *             Stack[0x4]:4   timeptr
;
; XREF[3]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 00507094
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b24f2
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005adc62
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;   crt_time.c_asctimeFormat_FUN_00601678
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 00601768 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_time.c_asctime_FUN_00601768
    ADD EAX,0x38                        ; 0060176e
    PUSH EAX                            ; 00601771
    MOV EDX,dword ptr [ESP + 0x8]       ; 00601772
    PUSH EDX                            ; 00601776
    CALL crt_time.c_asctimeFormat_FUN_00601678 ; 00601777
        ;   XREF to: 00601678 (UNCONDITIONAL_CALL)  ; char * crt_time.c_asctimeFormat_FUN_00601678(tm * timeptr, char * buffer)
    ADD ESP,0x8                         ; 0060177c
    RET                                 ; 0060177f

