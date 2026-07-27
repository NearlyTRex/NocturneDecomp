; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_FUN_004117a0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_00578740 = 0.5
;   double DOUBLE_00578748 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004117a0
        ;   Label: core_barrier.cpp_FUN_004117a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004117a4
    FLD float ptr [EDX + 0x150]         ; 004117a8
    FCHS                                ; 004117ae
    FLD double ptr [0x00578740]         ; 004117b0 | DOUBLE_00578740
    FXCH                                ; 004117b6
    FMUL ST1                            ; 004117b8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004117ba
    FSTP float ptr [EAX]                ; 004117c1
    FLD float ptr [EDX + 0x158]         ; 004117c3
    FCHS                                ; 004117c9
    FMUL ST1                            ; 004117cb
    FSTP float ptr [EAX + 0x8]          ; 004117cd
    FLD float ptr [EDX + 0x150]         ; 004117d0
    FMUL ST1                            ; 004117d6
    FSTP float ptr [EAX + 0xc]          ; 004117d8
    FLD float ptr [EDX + 0x154]         ; 004117db
    FADD double ptr [0x00578748]        ; 004117e1 | DOUBLE_00578748
    FSTP float ptr [EAX + 0x10]         ; 004117e7
    FMUL float ptr [EDX + 0x158]        ; 004117ea
    FSTP float ptr [EAX + 0x14]         ; 004117f0
    RET                                 ; 004117f3

