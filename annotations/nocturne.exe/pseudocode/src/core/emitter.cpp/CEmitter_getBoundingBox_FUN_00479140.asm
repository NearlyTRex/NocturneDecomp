; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_CEmitter_getBoundingBox_FUN_00479140(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_0057f1f4 = 0.5
;   double DOUBLE_0057f1fc = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00479140
        ;   Label: core_emitter.cpp_CEmitter_getBoundingBox_FUN_00479140
    MOV EAX,dword ptr [ESP + 0x8]       ; 00479144
    FLD float ptr [EDX + 0x154]         ; 00479148
    FCHS                                ; 0047914e
    FLD double ptr [0x0057f1f4]         ; 00479150 | DOUBLE_0057f1f4
    FXCH                                ; 00479156
    FMUL ST1                            ; 00479158
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0047915a
    FSTP float ptr [EAX]                ; 00479161
    FLD float ptr [EDX + 0x15c]         ; 00479163
    FCHS                                ; 00479169
    FMUL ST1                            ; 0047916b
    FSTP float ptr [EAX + 0x8]          ; 0047916d
    FLD float ptr [EDX + 0x154]         ; 00479170
    FMUL ST1                            ; 00479176
    FSTP float ptr [EAX + 0xc]          ; 00479178
    FLD float ptr [EDX + 0x158]         ; 0047917b
    FADD double ptr [0x0057f1fc]        ; 00479181 | DOUBLE_0057f1fc
    FSTP float ptr [EAX + 0x10]         ; 00479187
    FMUL float ptr [EDX + 0x15c]        ; 0047918a
    FSTP float ptr [EAX + 0x14]         ; 00479190
    RET                                 ; 00479193

