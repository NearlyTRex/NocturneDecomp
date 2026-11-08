; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00574010(double param_1,double param_2,double param_3,float param_4)
;
;
; XREF[7]:
;   FUN_00410d80 at 00410f20
;   FUN_0041bb40 at 0041c19e
;   FUN_00445cb0 at 0044677a
;   FUN_00485d70 at 00485ebc
;   FUN_0049f310 at 0049f39e
;   FUN_004e9f20 at 004e9fc7
;   FUN_005a4260 at 005a4e59
;
; Referenced Globals:
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00572b80
        ;   Label: LAB_00572b80
    RET                                 ; 00572b82
    FLD double ptr [ESP + 0x4]          ; 00574010
        ;   Label: FUN_00574010
    MOV EAX,[0x02c7fc88]                ; 00574014 | DAT_02c7fc88
    FLD double ptr [ESP + 0xc]          ; 00574019
    FXCH                                ; 0057401d
    FSUB double ptr [EAX*0x8 + 0x2c7fbf8] ; 0057401f | DAT_02c7fbf8
    FXCH                                ; 00574026
    FSUB double ptr [EAX*0x8 + 0x2c7fc08] ; 00574028 | DAT_02c7fc08
    FXCH                                ; 0057402f
    FST double ptr [ESP + 0x4]          ; 00574031
    FMUL double ptr [ESP + 0x4]         ; 00574035
    FXCH                                ; 00574039
    FST double ptr [ESP + 0xc]          ; 0057403b
    FMUL double ptr [ESP + 0xc]         ; 0057403f
    FLD double ptr [ESP + 0x14]         ; 00574043
    FSUB double ptr [EAX*0x8 + 0x2c7fc18] ; 00574047 | DAT_02c7fc18
    FXCH                                ; 0057404e
    FADDP ST2,ST0                       ; 00574050
    FST double ptr [ESP + 0x14]         ; 00574052
    FMUL double ptr [ESP + 0x14]        ; 00574056
    FADDP                               ; 0057405a
    FLD float ptr [ESP + 0x1c]          ; 0057405c
    FMUL ST0                            ; 00574060
    FCOMPP                              ; 00574062
    FNSTSW AX                           ; 00574064
    SAHF                                ; 00574066
    JC 0x00572b80                       ; 00574067
        ;   XREF to: 00572b80 (CONDITIONAL_JUMP)  ; LAB_00572b80
    MOV EAX,0x1                         ; 0057406d
    RET                                 ; 00574072

