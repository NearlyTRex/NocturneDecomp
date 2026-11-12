; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__atexit_FUN_005b8d8c(undefined4 param_1)
;
;
; XREF[35]:
;   core_boxactor.cpp_staticInit_FUN_0041bc90 at 0041bccc
;   core_bwgrndma.cpp_FUN_005a7eb0 at 005a7ec7
;   core_dcamera.cpp_staticInit_FUN_0043aee0 at 0043af10
;   core_dfilter.cpp_staticInit_FUN_00447560 at 00447579
;   core_dmodel.cpp_staticInit_FUN_0044dbb0 at 0044dbcc
;   core_fire.cpp_staticInit_FUN_004930e0 at 004931a0
;   core_flashlit.cpp_FUN_004a1200 at 004a1219
;   core_game.cpp_staticInit_FUN_004b28b0 at 004b28cc
;   core_goggles.cpp_FUN_0059c270 at 0059c282
;   core_gore.cpp_staticInit_FUN_004c7360 at 004c7372
;   ... and 25 more
;
; Called Functions:
;   crt_unknown.c_FUN_005bef45
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8d8c
        ;   Label: crt_stdlib.c__atexit_FUN_005b8d8c
    PUSH EDX                            ; 005b8d90
    CALL crt_unknown.c_FUN_005bef45     ; 005b8d91
        ;   XREF to: 005bef45 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bef45()
    ADD ESP,0x4                         ; 005b8d96
    RET                                 ; 005b8d99

