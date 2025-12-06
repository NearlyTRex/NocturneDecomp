; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
; double           Stack[0x1c]:8   radius
;
; XREF[6]:
;   core_bat.cpp_CBat_process_FUN_00414a00 at 00414b98
;   core_boneguy.cpp_FUN_0041bf90 at 0041c567
;   core_drone.cpp_FUN_0048ec70 at 0048edc9
;   core_emitter.cpp_FUN_004a8070 at 004a80f4
;   core_haystack.cpp_FUN_004f1970 at 004f1a19
;   core_tvbat.cpp_CTVBat_process_FUN_005e4210 at 005e4d10
;
; Referenced Globals:
;   CVector3d g_Cached3DListenerPos
;   undefined4 g_Cached3DListenerPos.y
;   undefined4 g_Cached3DListenerPos.z
;
; *****************************************************************************

section .text

    FLD double ptr [ESP + 0xc]          ; 005aa290
        ;   Label: sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
    FLD double ptr [ESP + 0x4]          ; 005aa294
    FSUB double ptr [0x03f68830]        ; 005aa298 | CVector3d g_Cached3DListenerPos
    FXCH                                ; 005aa29e
    FSUB double ptr [0x03f68838]        ; 005aa2a0 | g_Cached3DListenerPos.y
    FXCH                                ; 005aa2a6
    FST double ptr [ESP + 0x4]          ; 005aa2a8
    FMUL double ptr [ESP + 0x4]         ; 005aa2ac
    FXCH                                ; 005aa2b0
    FST double ptr [ESP + 0xc]          ; 005aa2b2
    FMUL double ptr [ESP + 0xc]         ; 005aa2b6
    FLD double ptr [ESP + 0x14]         ; 005aa2ba
    FSUB double ptr [0x03f68840]        ; 005aa2be | g_Cached3DListenerPos.z
    FXCH                                ; 005aa2c4
    FADDP ST2,ST0                       ; 005aa2c6
    FST double ptr [ESP + 0x14]         ; 005aa2c8
    FMUL double ptr [ESP + 0x14]        ; 005aa2cc
    FADDP                               ; 005aa2d0
    FLD double ptr [ESP + 0x1c]         ; 005aa2d2
    FMUL ST0                            ; 005aa2d6
    FCOMPP                              ; 005aa2d8
    FNSTSW AX                           ; 005aa2da
    SAHF                                ; 005aa2dc
    JC 0x005a8cf0                       ; 005aa2dd
        ;   XREF to: 005a8cf0 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005aa2e3
    RET                                 ; 005aa2e8

