; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00557170(double param_1,double param_2,double param_3,float param_4)
;
;
; XREF[6]:
;   core_bat.cpp_CBat_process_FUN_0040f010 at 0040f1b0
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a1a9
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00418057
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 004435ea
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 00487f3e
;   core_tvbat.cpp_CTVBat_process_FUN_00575380 at 00575f79
;
; Referenced Globals:
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00556090
        ;   Label: LAB_00556090
    RET                                 ; 00556092
    FLD double ptr [ESP + 0x4]          ; 00557170
        ;   Label: sound_sndmain.cpp_FUN_00557170
    MOV EAX,[0x02cf28b8]                ; 00557174 | DAT_02cf28b8
    FLD double ptr [ESP + 0xc]          ; 00557179
    FXCH                                ; 0055717d
    FSUB double ptr [EAX*0x8 + 0x2cf2828] ; 0055717f | DAT_02cf2828
    FXCH                                ; 00557186
    FSUB double ptr [EAX*0x8 + 0x2cf2838] ; 00557188 | DAT_02cf2838
    FXCH                                ; 0055718f
    FST double ptr [ESP + 0x4]          ; 00557191
    FMUL double ptr [ESP + 0x4]         ; 00557195
    FXCH                                ; 00557199
    FST double ptr [ESP + 0xc]          ; 0055719b
    FMUL double ptr [ESP + 0xc]         ; 0055719f
    FLD double ptr [ESP + 0x14]         ; 005571a3
    FSUB double ptr [EAX*0x8 + 0x2cf2848] ; 005571a7 | DAT_02cf2848
    FXCH                                ; 005571ae
    FADDP ST2,ST0                       ; 005571b0
    FST double ptr [ESP + 0x14]         ; 005571b2
    FMUL double ptr [ESP + 0x14]        ; 005571b6
    FADDP                               ; 005571ba
    FLD float ptr [ESP + 0x1c]          ; 005571bc
    FMUL ST0                            ; 005571c0
    FCOMPP                              ; 005571c2
    FNSTSW AX                           ; 005571c4
    SAHF                                ; 005571c6
    JC 0x00556090                       ; 005571c7
        ;   XREF to: 00556090 (CONDITIONAL_JUMP)  ; LAB_00556090
    MOV EAX,0x1                         ; 005571cd
    RET                                 ; 005571d2

