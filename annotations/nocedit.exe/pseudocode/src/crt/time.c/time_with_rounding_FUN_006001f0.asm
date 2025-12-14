; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
;
; Parameters:
; time_t *         Stack[0x4]:4   optional_output
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[9]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 0050704f
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b24c6
;   crt_io.c_utime_FUN_00608160 at 006081cc
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4e5f
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbf34
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5be9
;   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 at 0046baf8
;   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 at 00534347
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005adc38
;
; Called Functions:
;   crt_time.c_get_local_time_FUN_00607150
;   crt_time.c_mktime_FUN_00600f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006001f0
        ;   Label: crt_time.c_time_with_rounding_FUN_006001f0
    SUB ESP,0x24                        ; 006001f1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 006001f4
    MOV EAX,ESP                         ; 006001f8
    PUSH EAX                            ; 006001fa
    CALL crt_time.c_get_local_time_FUN_00607150 ; 006001fb
        ;   XREF to: 00607150 (UNCONDITIONAL_CALL)  ; void crt_time.c_get_local_time_FUN_00607150(tm * tm_output)
    ADD ESP,0x4                         ; 00600200
    CMP EAX,0x1f4                       ; 00600203
    JL 0x0060020d                       ; 00600208
        ;   XREF to: 0060020d (CONDITIONAL_JUMP)  ; LAB_0060020d
    INC dword ptr [ESP]                 ; 0060020a
    MOV EAX,ESP                         ; 0060020d
        ;   Label: LAB_0060020d
    PUSH EAX                            ; 0060020f
    CALL crt_time.c_mktime_FUN_00600f80 ; 00600210
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_mktime_FUN_00600f80(tm * timeptr)
    ADD ESP,0x4                         ; 00600215
    MOV EDX,EAX                         ; 00600218
    TEST EBX,EBX                        ; 0060021a
    JZ 0x00600220                       ; 0060021c
        ;   XREF to: 00600220 (CONDITIONAL_JUMP)  ; LAB_00600220
    MOV dword ptr [EBX],EAX             ; 0060021e
    MOV EAX,EDX                         ; 00600220
        ;   Label: LAB_00600220
    ADD ESP,0x24                        ; 00600222
    POP EBX                             ; 00600225
    RET                                 ; 00600226

