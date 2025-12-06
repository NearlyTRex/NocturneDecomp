; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * crt_string.c_strerror_FUN_00601470(int errnum)
;
; Parameters:
; int              Stack[0x4]:4   errnum
;
; XREF[3]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 005070b3
;   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 at 004b20b4
;   engine_fileio.cpp_formatSystemError_FUN_004b1fe0 at 004b1fed
;
; Referenced Globals:
;   TerminatedCString s_unknown_error_00658f68
;   int g_MaxErrnoValue = 0x28
;   char*[41] g_ErrorMessageTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00601470
        ;   Label: crt_string.c_strerror_FUN_00601470
    TEST EAX,EAX                        ; 00601474
    JL 0x00601480                       ; 00601476 | LAB_00601480
        ;   XREF to: 00601480 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00684bdc]      ; 00601478 | int g_MaxErrnoValue
    JLE 0x00601486                      ; 0060147e | LAB_00601486
        ;   XREF to: 00601486 (CONDITIONAL_JUMP)
    MOV EAX,0x658f68                    ; 00601480 | = "unknown error" | s_unknown_error_00658f68 = unknown error
        ;   Label: LAB_00601480
    RET                                 ; 00601485
    MOV EAX,dword ptr [EAX*0x4 + 0x684be0] ; 00601486 | char *[41] g_ErrorMessageTable
        ;   Label: LAB_00601486
    RET                                 ; 0060148d

