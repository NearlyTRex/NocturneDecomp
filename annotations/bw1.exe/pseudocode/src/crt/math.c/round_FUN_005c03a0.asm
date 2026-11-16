; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpureg_safe crt_math_c_round_FUN_005c03a0(double value)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[215]:
;   FUN_0044fb10 at 0044fc7c
;   FUN_00509340 at 005093a4
;   FUN_00525690 at 005256f8
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 at 00439adc
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 at 00439e0f
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0047fb20 at 0047fb4b
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0047ef60 at 0047ef98
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a24f
;   core_actor.cpp_getRandomInt_FUN_0040cc60 at 0040ccbd
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 00410260
;   ... and 205 more
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

