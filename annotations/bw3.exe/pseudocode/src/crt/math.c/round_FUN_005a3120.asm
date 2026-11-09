; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_round_FUN_005a3120(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[223]:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 at 004376ec
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 at 00437a1f
;   cockpit_drawsurf.cpp_FUN_00468620 at 00468658
;   cockpit_drawsurf.cpp_FUN_004691e0 at 0046920b
;   core_actor.cpp_FUN_00409f60 at 0040a3ac
;   core_actor.cpp_getRandomInt_FUN_0040cea0 at 0040cefd
;   core_ammo.cpp_FUN_0040df20 at 0040df80
;   core_asgaya.cpp_FUN_005a17e0 at 005a182e
;   core_baal.cpp_FUN_00597970 at 005979d6
;   core_bat.cpp_FUN_0040f290 at 0040f2a6
;   ... and 213 more
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

