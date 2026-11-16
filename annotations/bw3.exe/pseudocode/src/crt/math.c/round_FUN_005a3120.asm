; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpureg_safe crt_math_c_round_FUN_005a3120(double value)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[227]:
;   FUN_0044bc50 at 0044bdbc
;   FUN_004e6d80 at 004e6de4
;   FUN_004fcfa0 at 004fd008
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 at 004376ec
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 at 00437a1f
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0 at 0046920b
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00468620 at 00468658
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a3ac
;   core_actor.cpp_getRandomInt_FUN_0040cea0 at 0040cefd
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20 at 0040df80
;   ... and 217 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a3120
        ;   Label: crt_math.c_round_FUN_005a3120
    FSTCW word ptr [ESP]                ; 005a3121
    WAIT                                ; 005a3125
    PUSH dword ptr [ESP]                ; 005a3126
    MOV byte ptr [ESP + 0x1],0x1f       ; 005a3129
    FLDCW word ptr [ESP]                ; 005a312e
    FRNDINT                             ; 005a3131
    FLDCW word ptr [ESP + 0x4]          ; 005a3133
    WAIT                                ; 005a3137
    LEA ESP,[ESP + 0x8]                 ; 005a3138
    RET                                 ; 005a313c

