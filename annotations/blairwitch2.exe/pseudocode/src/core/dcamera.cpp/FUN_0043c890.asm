; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dcamera_cpp_FUN_0043c890(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c890
        ;   Label: core_dcamera.cpp_FUN_0043c890
    PUSH EDI                            ; 0043c891
    PUSH EBP                            ; 0043c892
    MOV EBP,ESP                         ; 0043c893
    SUB ESP,0x28                        ; 0043c895
    AND ESP,0xfffffff8                  ; 0043c898
    MOV dword ptr [ESP + 0x20],ESI      ; 0043c89b
    MOV EDX,0x10000                     ; 0043c89f
    MOV EBX,dword ptr [EBP + 0x10]      ; 0043c8a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043c8a7
    MOV ESI,dword ptr [EBP + 0x10]      ; 0043c8aa
    MOV dword ptr [ESP + 0x8],EDX       ; 0043c8ad
    SHL EAX,0x10                        ; 0043c8b1
    MOV ECX,dword ptr [ESI + 0x1c8]     ; 0043c8b4
    MOV EBX,dword ptr [EBX + 0x1c0]     ; 0043c8ba
    SUB EAX,ECX                         ; 0043c8c0
    IMUL EDX                            ; 0043c8c2
    IDIV EBX                            ; 0043c8c4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043c8c6
    MOV dword ptr [ESP],EAX             ; 0043c8ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043c8cd
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0043c8d0
    SHL EAX,0x10                        ; 0043c8d6
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 0043c8d9
    SUB EAX,EDI                         ; 0043c8df
    LEA EDI,[ESI + 0x19c]               ; 0043c8e1
    IMUL EDX                            ; 0043c8e7
    IDIV EBX                            ; 0043c8e9
    MOV ESI,ESP                         ; 0043c8eb
    MOV dword ptr [ESP + 0x4],EAX       ; 0043c8ed
    MOV EAX,dword ptr [ESI]             ; 0043c8f1
    IMUL dword ptr [EDI]                ; 0043c8f3
    MOV EBX,EAX                         ; 0043c8f5
    MOV ECX,EDX                         ; 0043c8f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c8f9
    IMUL dword ptr [EDI + 0xc]          ; 0043c8fc
    ADD EBX,EAX                         ; 0043c8ff
    ADC ECX,EDX                         ; 0043c901
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c903
    IMUL dword ptr [EDI + 0x18]         ; 0043c906
    ADD EAX,EBX                         ; 0043c909
    ADC EDX,ECX                         ; 0043c90b
    SHRD EAX,EDX,0x10                   ; 0043c90d
    MOV EDI,dword ptr [EBP + 0x10]      ; 0043c911
    MOV dword ptr [ESP + 0x24],EAX      ; 0043c914
    MOV ESI,ESP                         ; 0043c918
    FILD dword ptr [ESP + 0x24]         ; 0043c91a
    ADD EDI,0x1a0                       ; 0043c91e
    FSTP float ptr [ESP + 0xc]          ; 0043c924
    MOV EAX,dword ptr [ESI]             ; 0043c928
    IMUL dword ptr [EDI]                ; 0043c92a
    MOV EBX,EAX                         ; 0043c92c
    MOV ECX,EDX                         ; 0043c92e
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c930
    IMUL dword ptr [EDI + 0xc]          ; 0043c933
    ADD EBX,EAX                         ; 0043c936
    ADC ECX,EDX                         ; 0043c938
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c93a
    IMUL dword ptr [EDI + 0x18]         ; 0043c93d
    ADD EAX,EBX                         ; 0043c940
    ADC EDX,ECX                         ; 0043c942
    SHRD EAX,EDX,0x10                   ; 0043c944
    MOV EDI,dword ptr [EBP + 0x10]      ; 0043c948
    MOV dword ptr [ESP + 0x24],EAX      ; 0043c94b
    MOV ESI,ESP                         ; 0043c94f
    FILD dword ptr [ESP + 0x24]         ; 0043c951
    ADD EDI,0x1a4                       ; 0043c955
    FSTP float ptr [ESP + 0x10]         ; 0043c95b
    MOV EAX,dword ptr [ESI]             ; 0043c95f
    IMUL dword ptr [EDI]                ; 0043c961
    MOV EBX,EAX                         ; 0043c963
    MOV ECX,EDX                         ; 0043c965
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043c967
    IMUL dword ptr [EDI + 0xc]          ; 0043c96a
    ADD EBX,EAX                         ; 0043c96d
    ADC ECX,EDX                         ; 0043c96f
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043c971
    IMUL dword ptr [EDI + 0x18]         ; 0043c974
    ADD EAX,EBX                         ; 0043c977
    ADC EDX,ECX                         ; 0043c979
    SHRD EAX,EDX,0x10                   ; 0043c97b
    FLD float ptr [ESP + 0x10]          ; 0043c97f
    FMUL ST0                            ; 0043c983
    MOV dword ptr [ESP + 0x24],EAX      ; 0043c985
    FLD float ptr [ESP + 0xc]           ; 0043c989
    FMUL ST0                            ; 0043c98d
    FILD dword ptr [ESP + 0x24]         ; 0043c98f
    FXCH                                ; 0043c993
    FADDP ST2,ST0                       ; 0043c995
    FST float ptr [ESP + 0x14]          ; 0043c997
    FMUL float ptr [ESP + 0x14]         ; 0043c99b
    FADDP                               ; 0043c99f
    FSQRT                               ; 0043c9a1
    FLDZ                                ; 0043c9a3
    FXCH                                ; 0043c9a5
    FSTP float ptr [ESP + 0x1c]         ; 0043c9a7
    FCOMP float ptr [ESP + 0x1c]        ; 0043c9ab
    FNSTSW AX                           ; 0043c9af
    SAHF                                ; 0043c9b1
    JNC 0x0043c9f3                      ; 0043c9b2
        ;   XREF to: 0043c9f3 (CONDITIONAL_JUMP)  ; LAB_0043c9f3
    FLD1                                ; 0043c9b4
    FLD float ptr [ESP + 0xc]           ; 0043c9b6
    FXCH                                ; 0043c9ba
    FDIV float ptr [ESP + 0x1c]         ; 0043c9bc
    FXCH                                ; 0043c9c0
    FMUL ST1                            ; 0043c9c2
    FLD float ptr [ESP + 0x10]          ; 0043c9c4
    FMUL ST2                            ; 0043c9c8
    FLD float ptr [ESP + 0x14]          ; 0043c9ca
    FMULP ST3                           ; 0043c9ce
    FXCH                                ; 0043c9d0
    FSTP float ptr [ESP + 0xc]          ; 0043c9d2
    FSTP float ptr [ESP + 0x10]         ; 0043c9d6
    FSTP float ptr [ESP + 0x14]         ; 0043c9da
    MOV EDI,dword ptr [ESP + 0x20]      ; 0043c9de
        ;   Label: LAB_0043c9de
    LEA ESI,[ESP + 0xc]                 ; 0043c9e2
    MOVSD ES:EDI,ESI                    ; 0043c9e6
    MOVSD ES:EDI,ESI                    ; 0043c9e7
    MOVSD ES:EDI,ESI                    ; 0043c9e8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043c9e9
    MOV ESP,EBP                         ; 0043c9ed
    POP EBP                             ; 0043c9ef
    POP EDI                             ; 0043c9f0
    POP EBX                             ; 0043c9f1
    RET                                 ; 0043c9f2
    XOR EAX,EAX                         ; 0043c9f3
        ;   Label: LAB_0043c9f3
    MOV dword ptr [ESP + 0x10],EAX      ; 0043c9f5
    MOV dword ptr [ESP + 0xc],EAX       ; 0043c9f9
    MOV dword ptr [ESP + 0x14],EAX      ; 0043c9fd
    JMP 0x0043c9de                      ; 0043ca01
        ;   XREF to: 0043c9de (UNCONDITIONAL_JUMP)  ; LAB_0043c9de

