; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spline_cpp_FUN_00567860(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
;
; XREF[1]:
;   core_flies.cpp_FUN_004addd0 at 004ae024
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567860
        ;   Label: core_spline.cpp_FUN_00567860
    PUSH EDI                            ; 00567861
    PUSH EBP                            ; 00567862
    SUB ESP,0x9c                        ; 00567863
    MOV EDX,dword ptr [ESP + 0xac]      ; 00567869
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00567870
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00567877
    MOV EAX,ESI                         ; 0056787e
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00567880
    LEA ECX,[EDX + 0xc]                 ; 00567887
    FLD float ptr [ESI]                 ; 0056788a
    FMUL float ptr [ECX]                ; 0056788c
    FLD float ptr [ESI + 0x4]           ; 0056788e
    FMUL float ptr [ECX]                ; 00567891
    FLD float ptr [ESI + 0x8]           ; 00567893
    FMUL float ptr [ECX]                ; 00567896
    LEA EDI,[ESP + 0x6c]                ; 00567898
    LEA ESI,[ESP + 0x48]                ; 0056789c
    FXCH ST2                            ; 005678a0
    FSTP float ptr [ESP + 0x48]         ; 005678a2
    FSTP float ptr [ESP + 0x4c]         ; 005678a6
    FSTP float ptr [ESP + 0x50]         ; 005678aa
    MOVSD ES:EDI,ESI                    ; 005678ae
    MOVSD ES:EDI,ESI                    ; 005678af
    MOVSD ES:EDI,ESI                    ; 005678b0
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005678b1
    LEA ECX,[EDX + 0x8]                 ; 005678b8
    FLD float ptr [ESI]                 ; 005678bb
    FMUL float ptr [ECX]                ; 005678bd
    FLD float ptr [ESI + 0x4]           ; 005678bf
    FMUL float ptr [ECX]                ; 005678c2
    FLD float ptr [ESI + 0x8]           ; 005678c4
    FMUL float ptr [ECX]                ; 005678c7
    LEA EDI,[ESP + 0x18]                ; 005678c9
    LEA ESI,[ESP + 0x84]                ; 005678cd
    FXCH ST2                            ; 005678d4
    FSTP float ptr [ESP + 0x84]         ; 005678d6
    FSTP float ptr [ESP + 0x88]         ; 005678dd
    FSTP float ptr [ESP + 0x8c]         ; 005678e4
    MOVSD ES:EDI,ESI                    ; 005678eb
    MOVSD ES:EDI,ESI                    ; 005678ec
    MOVSD ES:EDI,ESI                    ; 005678ed
    LEA ECX,[EDX + 0x4]                 ; 005678ee
    FLD float ptr [EBP]                 ; 005678f1
    FMUL float ptr [ECX]                ; 005678f4
    FLD float ptr [EBP + 0x4]           ; 005678f6
    FMUL float ptr [ECX]                ; 005678f9
    FLD float ptr [EBP + 0x8]           ; 005678fb
    FMUL float ptr [ECX]                ; 005678fe
    MOV EDI,ESP                         ; 00567900
    LEA ESI,[ESP + 0x30]                ; 00567902
    FXCH ST2                            ; 00567906
    FSTP float ptr [ESP + 0x30]         ; 00567908
    FSTP float ptr [ESP + 0x34]         ; 0056790c
    FSTP float ptr [ESP + 0x38]         ; 00567910
    MOVSD ES:EDI,ESI                    ; 00567914
    MOVSD ES:EDI,ESI                    ; 00567915
    MOVSD ES:EDI,ESI                    ; 00567916
    FLD float ptr [EBX]                 ; 00567917
    FMUL float ptr [EDX]                ; 00567919
    FLD float ptr [EBX + 0x4]           ; 0056791b
    FMUL float ptr [EDX]                ; 0056791e
    FLD float ptr [EBX + 0x8]           ; 00567920
    FMUL float ptr [EDX]                ; 00567923
    LEA EDI,[ESP + 0x54]                ; 00567925
    LEA ESI,[ESP + 0x60]                ; 00567929
    FXCH ST2                            ; 0056792d
    FSTP float ptr [ESP + 0x60]         ; 0056792f
    FSTP float ptr [ESP + 0x64]         ; 00567933
    FSTP float ptr [ESP + 0x68]         ; 00567937
    MOVSD ES:EDI,ESI                    ; 0056793b
    MOVSD ES:EDI,ESI                    ; 0056793c
    MOVSD ES:EDI,ESI                    ; 0056793d
    FLD float ptr [ESP + 0x54]          ; 0056793e
    FLD float ptr [ESP + 0x58]          ; 00567942
    FLD float ptr [ESP + 0x5c]          ; 00567946
    LEA EDI,[ESP + 0xc]                 ; 0056794a
    LEA ESI,[ESP + 0x3c]                ; 0056794e
    FXCH ST2                            ; 00567952
    FADD float ptr [ESP]                ; 00567954
    FXCH                                ; 00567957
    FADD float ptr [ESP + 0x4]          ; 00567959
    FXCH ST2                            ; 0056795d
    FADD float ptr [ESP + 0x8]          ; 0056795f
    FXCH                                ; 00567963
    FSTP float ptr [ESP + 0x3c]         ; 00567965
    FXCH                                ; 00567969
    FSTP float ptr [ESP + 0x40]         ; 0056796b
    FSTP float ptr [ESP + 0x44]         ; 0056796f
    MOVSD ES:EDI,ESI                    ; 00567973
    MOVSD ES:EDI,ESI                    ; 00567974
    MOVSD ES:EDI,ESI                    ; 00567975
    FLD float ptr [ESP + 0xc]           ; 00567976
    FLD float ptr [ESP + 0x10]          ; 0056797a
    FLD float ptr [ESP + 0x14]          ; 0056797e
    LEA EDI,[ESP + 0x24]                ; 00567982
    LEA ESI,[ESP + 0x90]                ; 00567986
    FXCH ST2                            ; 0056798d
    FADD float ptr [ESP + 0x18]         ; 0056798f
    FXCH                                ; 00567993
    FADD float ptr [ESP + 0x1c]         ; 00567995
    FXCH ST2                            ; 00567999
    FADD float ptr [ESP + 0x20]         ; 0056799b
    FXCH                                ; 0056799f
    FSTP float ptr [ESP + 0x90]         ; 005679a1
    FXCH                                ; 005679a8
    FSTP float ptr [ESP + 0x94]         ; 005679aa
    FSTP float ptr [ESP + 0x98]         ; 005679b1
    MOVSD ES:EDI,ESI                    ; 005679b8
    MOVSD ES:EDI,ESI                    ; 005679b9
    MOVSD ES:EDI,ESI                    ; 005679ba
    FLD float ptr [ESP + 0x24]          ; 005679bb
    FLD float ptr [ESP + 0x28]          ; 005679bf
    FLD float ptr [ESP + 0x2c]          ; 005679c3
    LEA ESI,[ESP + 0x78]                ; 005679c7
    MOV EDI,EAX                         ; 005679cb
    FXCH ST2                            ; 005679cd
    FADD float ptr [ESP + 0x6c]         ; 005679cf
    FXCH                                ; 005679d3
    FADD float ptr [ESP + 0x70]         ; 005679d5
    FXCH ST2                            ; 005679d9
    FADD float ptr [ESP + 0x74]         ; 005679db
    FXCH                                ; 005679df
    FSTP float ptr [ESP + 0x78]         ; 005679e1
    FXCH                                ; 005679e5
    FSTP float ptr [ESP + 0x7c]         ; 005679e7
    FSTP float ptr [ESP + 0x80]         ; 005679eb
    MOVSD ES:EDI,ESI                    ; 005679f2
    MOVSD ES:EDI,ESI                    ; 005679f3
    MOVSD ES:EDI,ESI                    ; 005679f4
    ADD ESP,0x9c                        ; 005679f5
    POP EBP                             ; 005679fb
    POP EDI                             ; 005679fc
    POP EBX                             ; 005679fd
    RET                                 ; 005679fe

