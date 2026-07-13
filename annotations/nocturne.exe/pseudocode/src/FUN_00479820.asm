; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00479820(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0057f333
;   undefined4 DAT_0057f337
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479820
        ;   Label: FUN_00479820
    PUSH EBP                            ; 00479821
    MOV EBP,ESP                         ; 00479822
    SUB ESP,0x38                        ; 00479824
    AND ESP,0xfffffff8                  ; 00479827
    MOV ECX,dword ptr [EBP + 0xc]       ; 0047982a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0047982d
    MOV EAX,ESP                         ; 00479830
    PUSH EAX                            ; 00479832
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00479833
    PUSH ECX                            ; 00479839
    CALL dword ptr [EDX + 0x14]         ; 0047983a
    ADD ESP,0x8                         ; 0047983d
    FLD float ptr [ESP]                 ; 00479840
    FLD float ptr [ESP + 0x10]          ; 00479843
    FSUB float ptr [ESP + 0x4]          ; 00479847
    FXCH                                ; 0047984b
    FADD float ptr [ESP + 0xc]          ; 0047984d
    FXCH                                ; 00479851
    FMUL double ptr [0x0057f337]        ; 00479853 | DAT_0057f337
    FXCH                                ; 00479859
    FST float ptr [ESP + 0x24]          ; 0047985b
    FLD float ptr [0x0057f333]          ; 0047985f | DAT_0057f333
    FXCH                                ; 00479865
    FMUL ST1                            ; 00479867
    FLD float ptr [ESP + 0x8]           ; 00479869
    FLD float ptr [ESP + 0x4]           ; 0047986d
    FADD float ptr [ESP + 0x10]         ; 00479871
    FXCH                                ; 00479875
    FADD float ptr [ESP + 0x14]         ; 00479877
    FXCH                                ; 0047987b
    FST float ptr [ESP + 0x28]          ; 0047987d
    FMUL ST3                            ; 00479881
    FXCH                                ; 00479883
    FST float ptr [ESP + 0x2c]          ; 00479885
    FMULP ST3                           ; 00479889
    LEA EAX,[ESP + 0x18]                ; 0047988b
    FXCH                                ; 0047988f
    FSTP float ptr [ESP + 0x18]         ; 00479891
    FXCH ST2                            ; 00479895
    FADD ST0,ST2                        ; 00479897
    FXCH                                ; 00479899
    FSTP float ptr [ESP + 0x20]         ; 0047989b
    FSTP ST1                            ; 0047989f
    FSTP float ptr [ESP + 0x1c]         ; 004798a1
    CMP EBX,EAX                         ; 004798a5
    JNZ 0x004798b3                      ; 004798a7
        ;   XREF to: 004798b3 (CONDITIONAL_JUMP)  ; LAB_004798b3
    MOV EAX,0x1                         ; 004798a9
    MOV ESP,EBP                         ; 004798ae
    POP EBP                             ; 004798b0
    POP EBX                             ; 004798b1
    RET                                 ; 004798b2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004798b3
        ;   Label: LAB_004798b3
    MOV dword ptr [EBX],EAX             ; 004798b7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004798b9
    MOV dword ptr [EBX + 0x4],EAX       ; 004798bd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004798c0
    MOV dword ptr [EBX + 0x8],EAX       ; 004798c4
    MOV EAX,0x1                         ; 004798c7
    MOV ESP,EBP                         ; 004798cc
    POP EBP                             ; 004798ce
    POP EBX                             ; 004798cf
    RET                                 ; 004798d0

