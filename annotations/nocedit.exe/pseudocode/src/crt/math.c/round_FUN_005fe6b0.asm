; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpureg_safe crt_math_c_round_FUN_005fe6b0(double value)
;
; Parameters:
; undefined1       Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[236]:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50 at 0043412c
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0 at 00434466
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 at 004887cf
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 at 00487bf8
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 at 00488685
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a4e1
;   core_actor.cpp_getRandomInt_FUN_0040cc70 at 0040cccd
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413b50
;   core_bat.cpp_CBat_getBoundingBox_FUN_00414c60 at 00414c77
;   core_bodypart.cpp_CBodyPart_FUN_0041a050 at 0041a50d
;   ... and 226 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005fe6b0
        ;   Label: crt_math.c_round_FUN_005fe6b0
    FSTCW word ptr [ESP]                ; 005fe6b1
    WAIT                                ; 005fe6b5
    PUSH dword ptr [ESP]                ; 005fe6b6
    MOV byte ptr [ESP + 0x1],0x1f       ; 005fe6b9
    FLDCW word ptr [ESP]                ; 005fe6be
    FRNDINT                             ; 005fe6c1
    FLDCW word ptr [ESP + 0x4]          ; 005fe6c3
    WAIT                                ; 005fe6c7
    LEA ESP,[ESP + 0x8]                 ; 005fe6c8
    RET                                 ; 005fe6cc

