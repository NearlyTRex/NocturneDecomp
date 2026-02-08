; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _tm * __cdecl crt_time_c__localtime_FUN_00600288(time_t *timer)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
;
; XREF[13]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 0050708b
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b24e9
;   crt_io.c_utime_FUN_00608160 at 006081e4
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4e76
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b7530
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbf4b
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b78d1
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6eb6
;   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 at 004b8086
;   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 at 0046bb04
;   ... and 3 more
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;   crt_time.c_localtime_r_FUN_00600230
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 00600288 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_time.c__localtime_FUN_00600288
    ADD EAX,0x14                        ; 0060028e
    PUSH EAX                            ; 00600291
    MOV EDX,dword ptr [ESP + 0x8]       ; 00600292
    PUSH EDX                            ; 00600296
    CALL crt_time.c_localtime_r_FUN_00600230 ; 00600297
        ;   XREF to: 00600230 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c_localtime_r_FUN_00600230(time_t * timer, _tm * result)
    ADD ESP,0x8                         ; 0060029c
    RET                                 ; 0060029f

