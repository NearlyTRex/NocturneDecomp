; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_round_FUN_005c03a0(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[212]:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 at 00439adc
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 at 00439e0f
;   cockpit_drawsurf.cpp_FUN_0047ef60 at 0047ef98
;   cockpit_drawsurf.cpp_FUN_0047fb20 at 0047fb4b
;   core_actor.cpp_FUN_00409f20 at 0040a24f
;   core_actor.cpp_FUN_0040cc60 at 0040ccbd
;   core_baron.cpp_FUN_004101f0 at 00410260
;   core_bat.cpp_FUN_00411000 at 00411016
;   core_bodypart.cpp_FUN_00419b90 at 0041a0cd
;   core_bodypart.cpp_FUN_0041a200 at 0041a27f
;   ... and 202 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c03a0
        ;   Label: crt_math.c_round_FUN_005c03a0
    FSTCW word ptr [ESP]                ; 005c03a1
    WAIT                                ; 005c03a5
    PUSH dword ptr [ESP]                ; 005c03a6
    MOV byte ptr [ESP + 0x1],0x1f       ; 005c03a9
    FLDCW word ptr [ESP]                ; 005c03ae
    FRNDINT                             ; 005c03b1
    FLDCW word ptr [ESP + 0x4]          ; 005c03b3
    WAIT                                ; 005c03b7
    LEA ESP,[ESP + 0x8]                 ; 005c03b8
    RET                                 ; 005c03bc

