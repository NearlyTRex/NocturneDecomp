; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_boneguy_cpp_FUN_0041b700(void)
;
;
; Referenced Globals:
;   float FLOAT_00615f0d = 0.5
;   double DOUBLE_00615f15 = 0.400000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b700
        ;   Label: core_boneguy.cpp_FUN_0041b700
    PUSH EBP                            ; 0041b701
    MOV EBP,ESP                         ; 0041b702
    SUB ESP,0x24                        ; 0041b704
    AND ESP,0xfffffff8                  ; 0041b707
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041b70a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0041b70d
    MOV EAX,ESP                         ; 0041b710
    PUSH EAX                            ; 0041b712
    MOV EDX,dword ptr [ECX + 0x154]     ; 0041b713
    PUSH ECX                            ; 0041b719
    CALL dword ptr [EDX + 0x14]         ; 0041b71a
    ADD ESP,0x8                         ; 0041b71d
    FLD float ptr [ESP]                 ; 0041b720
    FADD float ptr [ESP + 0xc]          ; 0041b723
    FST float ptr [ESP + 0x18]          ; 0041b727
    FLD float ptr [0x00615f0d]          ; 0041b72b | FLOAT_00615f0d
    FXCH                                ; 0041b731
    FMUL ST1                            ; 0041b733
    FLD float ptr [ESP + 0x8]           ; 0041b735
    FLD float ptr [ESP + 0x4]           ; 0041b739
    FADD float ptr [ESP + 0x10]         ; 0041b73d
    FXCH                                ; 0041b741
    FADD float ptr [ESP + 0x14]         ; 0041b743
    FXCH                                ; 0041b747
    FSTP float ptr [ESP + 0x1c]         ; 0041b749
    FSTP float ptr [ESP + 0x20]         ; 0041b74d
    FSTP float ptr [EBX]                ; 0041b751
    FMUL float ptr [ESP + 0x1c]         ; 0041b753
    FSTP float ptr [EBX + 0x4]          ; 0041b757
    FLD float ptr [ESP + 0x8]           ; 0041b75a
    FADD double ptr [0x00615f15]        ; 0041b75e | DOUBLE_00615f15
    MOV EAX,EBX                         ; 0041b764
    FSTP float ptr [EBX + 0x8]          ; 0041b766
    MOV ESP,EBP                         ; 0041b769
    POP EBP                             ; 0041b76b
    POP EBX                             ; 0041b76c
    RET                                 ; 0041b76d

