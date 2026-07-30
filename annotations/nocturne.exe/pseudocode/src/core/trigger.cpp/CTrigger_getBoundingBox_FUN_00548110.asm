; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_CTrigger_getBoundingBox_FUN_00548110(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_005969b7 = 0.5
;   double DOUBLE_005969bf = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548110
        ;   Label: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00548110
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548114
    FLD float ptr [EDX + 0x158]         ; 00548118
    FCHS                                ; 0054811e
    FLD double ptr [0x005969b7]         ; 00548120 | DOUBLE_005969b7
    FXCH                                ; 00548126
    FMUL ST1                            ; 00548128
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0054812a
    FSTP float ptr [EAX]                ; 00548131
    FLD float ptr [EDX + 0x160]         ; 00548133
    FCHS                                ; 00548139
    FMUL ST1                            ; 0054813b
    FSTP float ptr [EAX + 0x8]          ; 0054813d
    FLD float ptr [EDX + 0x158]         ; 00548140
    FMUL ST1                            ; 00548146
    FSTP float ptr [EAX + 0xc]          ; 00548148
    FLD float ptr [EDX + 0x15c]         ; 0054814b
    FADD double ptr [0x005969bf]        ; 00548151 | DOUBLE_005969bf
    FSTP float ptr [EAX + 0x10]         ; 00548157
    FMUL float ptr [EDX + 0x160]        ; 0054815a
    FSTP float ptr [EAX + 0x14]         ; 00548160
    RET                                 ; 00548163

