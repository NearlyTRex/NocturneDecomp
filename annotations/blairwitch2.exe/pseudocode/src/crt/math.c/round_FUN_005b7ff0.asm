; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_round_FUN_005b7ff0(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[214]:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0 at 0042edcc
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90 at 0042f0ff
;   cockpit_drawsurf.cpp_FUN_00466a50 at 00466a88
;   cockpit_drawsurf.cpp_FUN_00467610 at 0046763b
;   core_actor.cpp_FUN_0040a050 at 0040a4ae
;   core_actor.cpp_FUN_0040cfc0 at 0040d01d
;   core_baron.cpp_FUN_00410670 at 004106e0
;   core_bat.cpp_FUN_00411480 at 00411496
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416c3d
;   core_bodypart.cpp_FUN_00416d70 at 00416def
;   ... and 204 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005b7ff0
        ;   Label: crt_math.c_round_FUN_005b7ff0
    FSTCW word ptr [ESP]                ; 005b7ff1
    WAIT                                ; 005b7ff5
    PUSH dword ptr [ESP]                ; 005b7ff6
    MOV byte ptr [ESP + 0x1],0x1f       ; 005b7ff9
    FLDCW word ptr [ESP]                ; 005b7ffe
    FRNDINT                             ; 005b8001
    FLDCW word ptr [ESP + 0x4]          ; 005b8003
    WAIT                                ; 005b8007
    LEA ESP,[ESP + 0x8]                 ; 005b8008
    RET                                 ; 005b800c

