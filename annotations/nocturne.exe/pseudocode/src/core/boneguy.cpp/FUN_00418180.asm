; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_boneguy_cpp_FUN_00418180(float *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0057912e
;   undefined4 DAT_00579136
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418180
        ;   Label: core_boneguy.cpp_FUN_00418180
    PUSH EBP                            ; 00418181
    MOV EBP,ESP                         ; 00418182
    SUB ESP,0x24                        ; 00418184
    AND ESP,0xfffffff8                  ; 00418187
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041818a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0041818d
    MOV EAX,ESP                         ; 00418190
    PUSH EAX                            ; 00418192
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00418193
    PUSH ECX                            ; 00418199
    CALL dword ptr [EDX + 0x14]         ; 0041819a
    ADD ESP,0x8                         ; 0041819d
    FLD float ptr [ESP]                 ; 004181a0
    FADD float ptr [ESP + 0xc]          ; 004181a3
    FST float ptr [ESP + 0x18]          ; 004181a7
    FLD float ptr [0x0057912e]          ; 004181ab | DAT_0057912e
    FXCH                                ; 004181b1
    FMUL ST1                            ; 004181b3
    FLD float ptr [ESP + 0x8]           ; 004181b5
    FLD float ptr [ESP + 0x4]           ; 004181b9
    FADD float ptr [ESP + 0x10]         ; 004181bd
    FXCH                                ; 004181c1
    FADD float ptr [ESP + 0x14]         ; 004181c3
    FXCH                                ; 004181c7
    FSTP float ptr [ESP + 0x1c]         ; 004181c9
    FSTP float ptr [ESP + 0x20]         ; 004181cd
    FSTP float ptr [EBX]                ; 004181d1
    FMUL float ptr [ESP + 0x1c]         ; 004181d3
    FSTP float ptr [EBX + 0x4]          ; 004181d7
    FLD float ptr [ESP + 0x8]           ; 004181da
    FADD double ptr [0x00579136]        ; 004181de | DAT_00579136
    MOV EAX,EBX                         ; 004181e4
    FSTP float ptr [EBX + 0x8]          ; 004181e6
    MOV ESP,EBP                         ; 004181e9
    POP EBP                             ; 004181eb
    POP EBX                             ; 004181ec
    RET                                 ; 004181ed

