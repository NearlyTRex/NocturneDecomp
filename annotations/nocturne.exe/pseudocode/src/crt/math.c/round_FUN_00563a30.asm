; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpureg_safe crt_math_c_round_FUN_00563a30(float10 param_1)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[195]:
;   cockpit_ckptutil.c_FUN_0042f8c0 at 0042fa9a
;   cockpit_ckptutil.c_FUN_0042fd60 at 0042fecf
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0 at 0045c218
;   cockpit_drawsurf.cpp_FUN_0045cc70 at 0045ccc5
;   cockpit_drawsurf.cpp_FUN_0045cde0 at 0045ce0f
;   core_actor.cpp_FUN_0040b300 at 0040b5be
;   core_actor.cpp_getRandomInt_FUN_0040de00 at 0040de5d
;   core_baron.cpp_FUN_004110f0 at 00411160
;   core_bat.cpp_FUN_00411ea0 at 00411eb7
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 004173a6
;   ... and 185 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00563a30
        ;   Label: crt_math.c_round_FUN_00563a30
    FSTCW word ptr [ESP]                ; 00563a31
    WAIT                                ; 00563a35
    PUSH dword ptr [ESP]                ; 00563a36
    MOV byte ptr [ESP + 0x1],0x1f       ; 00563a39
    FLDCW word ptr [ESP]                ; 00563a3e
    FRNDINT                             ; 00563a41
    FLDCW word ptr [ESP + 0x4]          ; 00563a43
    WAIT                                ; 00563a47
    LEA ESP,[ESP + 0x8]                 ; 00563a48
    RET                                 ; 00563a4c

