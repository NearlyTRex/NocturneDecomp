; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mobster.cpp_FUN_005250a0()
;
;
; Referenced Globals:
;   float FLOAT_00639696 = 0.5
;   double DOUBLE_0063969e = 0.400000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005250a0
        ;   Label: core_mobster.cpp_FUN_005250a0
    PUSH EBP                            ; 005250a1
    MOV EBP,ESP                         ; 005250a2
    SUB ESP,0x24                        ; 005250a4
    AND ESP,0xfffffff8                  ; 005250a7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005250aa
    MOV ECX,dword ptr [EBP + 0x10]      ; 005250ad
    MOV EAX,ESP                         ; 005250b0
    PUSH EAX                            ; 005250b2
    MOV EDX,dword ptr [ECX + 0x154]     ; 005250b3
    PUSH ECX                            ; 005250b9
    CALL dword ptr [EDX + 0x14]         ; 005250ba
    ADD ESP,0x8                         ; 005250bd
    FLD float ptr [ESP]                 ; 005250c0
    FADD float ptr [ESP + 0xc]          ; 005250c3
    FST float ptr [ESP + 0x18]          ; 005250c7
    FLD float ptr [0x00639696]          ; 005250cb | FLOAT_00639696
    FXCH                                ; 005250d1
    FMUL ST1                            ; 005250d3
    FLD float ptr [ESP + 0x8]           ; 005250d5
    FLD float ptr [ESP + 0x4]           ; 005250d9
    FADD float ptr [ESP + 0x10]         ; 005250dd
    FXCH                                ; 005250e1
    FADD float ptr [ESP + 0x14]         ; 005250e3
    FXCH                                ; 005250e7
    FSTP float ptr [ESP + 0x1c]         ; 005250e9
    FSTP float ptr [ESP + 0x20]         ; 005250ed
    FSTP float ptr [EBX]                ; 005250f1
    FMUL float ptr [ESP + 0x1c]         ; 005250f3
    FSTP float ptr [EBX + 0x4]          ; 005250f7
    FLD float ptr [ESP + 0x8]           ; 005250fa
    FADD double ptr [0x0063969e]        ; 005250fe | DOUBLE_0063969e
    MOV EAX,EBX                         ; 00525104
    FSTP float ptr [EBX + 0x8]          ; 00525106
    MOV ESP,EBP                         ; 00525109
    POP EBP                             ; 0052510b
    POP EBX                             ; 0052510c
    RET                                 ; 0052510d

