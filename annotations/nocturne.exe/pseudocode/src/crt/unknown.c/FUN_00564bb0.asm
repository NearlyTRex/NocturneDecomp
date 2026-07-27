; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564bb0(undefined4 param_1)
;
;
; XREF[29]:
;   core_boxactor.cpp_staticInit_FUN_0041e260 at 0041e29c
;   core_console.cpp_staticInit_FUN_0043abb0 at 0043abca
;   core_dcamera.cpp_staticInit_FUN_0043f9c0 at 0043f9f0
;   core_dfilter.cpp_staticInit_FUN_0044bc20 at 0044bc39
;   core_dmodel.cpp_staticInit_FUN_00452530 at 0045254c
;   core_dracbrid.cpp_staticInit_FUN_00458580 at 00458603
;   core_fire.cpp_staticInit_FUN_004823b0 at 0048245c
;   core_game.cpp_staticInit_FUN_0049a1e0 at 0049a1fc
;   core_gore.cpp_staticInit_FUN_004adf90 at 004adfa2
;   core_ground.cpp_staticInit_FUN_004b1060 at 004b107c
;   ... and 19 more
;
; Called Functions:
;   FUN_0056b215
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564bb0
        ;   Label: crt_unknown.c_FUN_00564bb0
    PUSH EDX                            ; 00564bb4
    CALL FUN_0056b215                   ; 00564bb5
        ;   XREF to: 0056b215 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b215()
    ADD ESP,0x4                         ; 00564bba
    RET                                 ; 00564bbd

