; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_ptr
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004412c0
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0
    PUSH ESI                            ; 004412c1
    PUSH EDI                            ; 004412c2
    PUSH EBP                            ; 004412c3
    MOV EBP,ESP                         ; 004412c4
    SUB ESP,0x14                        ; 004412c6
    AND ESP,0xfffffff8                  ; 004412c9
    MOV EDX,0x10000                     ; 004412cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004412d1
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004412d4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004412d7
    MOV dword ptr [ESP + 0xc],EDX       ; 004412da
    SHL EAX,0x10                        ; 004412de
    MOV ECX,dword ptr [ESI + 0x1c8]     ; 004412e1
    MOV EBX,dword ptr [EBX + 0x1c0]     ; 004412e7
    SUB EAX,ECX                         ; 004412ed
    IMUL EDX                            ; 004412ef
    IDIV EBX                            ; 004412f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004412f3
    MOV dword ptr [ESP + 0x4],EAX       ; 004412f7
    MOV EAX,dword ptr [EBP + 0x20]      ; 004412fb
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 004412fe
    SHL EAX,0x10                        ; 00441304
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 00441307
    SUB EAX,EDI                         ; 0044130d
    LEA EDI,[ESI + 0x19c]               ; 0044130f
    IMUL EDX                            ; 00441315
    IDIV EBX                            ; 00441317
    LEA ESI,[ESP + 0x4]                 ; 00441319
    MOV dword ptr [ESP + 0x8],EAX       ; 0044131d
    MOV EAX,dword ptr [ESI]             ; 00441321
    IMUL dword ptr [EDI]                ; 00441323
    MOV EBX,EAX                         ; 00441325
    MOV ECX,EDX                         ; 00441327
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441329
    IMUL dword ptr [EDI + 0xc]          ; 0044132c
    ADD EBX,EAX                         ; 0044132f
    ADC ECX,EDX                         ; 00441331
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441333
    IMUL dword ptr [EDI + 0x18]         ; 00441336
    ADD EAX,EBX                         ; 00441339
    ADC EDX,ECX                         ; 0044133b
    SHRD EAX,EDX,0x10                   ; 0044133d
    MOV EDI,dword ptr [EBP + 0x14]      ; 00441341
    LEA ESI,[ESP + 0x4]                 ; 00441344
    MOV dword ptr [ESP + 0x10],EAX      ; 00441348
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044134c
    FILD dword ptr [ESP + 0x10]         ; 0044134f
    ADD EDI,0x1a0                       ; 00441353
    FSTP float ptr [EAX]                ; 00441359
    MOV EAX,dword ptr [ESI]             ; 0044135b
    IMUL dword ptr [EDI]                ; 0044135d
    MOV EBX,EAX                         ; 0044135f
    MOV ECX,EDX                         ; 00441361
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441363
    IMUL dword ptr [EDI + 0xc]          ; 00441366
    ADD EBX,EAX                         ; 00441369
    ADC ECX,EDX                         ; 0044136b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044136d
    IMUL dword ptr [EDI + 0x18]         ; 00441370
    ADD EAX,EBX                         ; 00441373
    ADC EDX,ECX                         ; 00441375
    SHRD EAX,EDX,0x10                   ; 00441377
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044137b
    LEA ESI,[ESP + 0x4]                 ; 0044137e
    MOV dword ptr [ESP + 0x10],EAX      ; 00441382
    MOV EAX,dword ptr [EBP + 0x18]      ; 00441386
    FILD dword ptr [ESP + 0x10]         ; 00441389
    ADD EDI,0x1a4                       ; 0044138d
    FSTP float ptr [EAX + 0x4]          ; 00441393
    MOV EAX,dword ptr [ESI]             ; 00441396
    IMUL dword ptr [EDI]                ; 00441398
    MOV EBX,EAX                         ; 0044139a
    MOV ECX,EDX                         ; 0044139c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044139e
    IMUL dword ptr [EDI + 0xc]          ; 004413a1
    ADD EBX,EAX                         ; 004413a4
    ADC ECX,EDX                         ; 004413a6
    MOV EAX,dword ptr [ESI + 0x8]       ; 004413a8
    IMUL dword ptr [EDI + 0x18]         ; 004413ab
    ADD EAX,EBX                         ; 004413ae
    ADC EDX,ECX                         ; 004413b0
    SHRD EAX,EDX,0x10                   ; 004413b2
    MOV dword ptr [ESP + 0x10],EAX      ; 004413b6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004413ba
    FLD float ptr [EAX + 0x4]           ; 004413bd
    FMUL ST0                            ; 004413c0
    FLD float ptr [EAX]                 ; 004413c2
    FMUL ST0                            ; 004413c4
    FILD dword ptr [ESP + 0x10]         ; 004413c6
    FXCH                                ; 004413ca
    FADDP ST2,ST0                       ; 004413cc
    FST float ptr [EAX + 0x8]           ; 004413ce
    FMUL float ptr [EAX + 0x8]          ; 004413d1
    FADDP                               ; 004413d4
    FSQRT                               ; 004413d6
    FST float ptr [ESP]                 ; 004413d8
    FLDZ                                ; 004413db
    FCOMPP                              ; 004413dd
    FNSTSW AX                           ; 004413df
    SAHF                                ; 004413e1
    JNC 0x00441412                      ; 004413e2
        ;   XREF to: 00441412 (CONDITIONAL_JUMP)  ; LAB_00441412
    MOV EAX,dword ptr [EBP + 0x18]      ; 004413e4
    FLD1                                ; 004413e7
    FLD float ptr [EAX]                 ; 004413e9
    FXCH                                ; 004413eb
    FDIV float ptr [ESP]                ; 004413ed
    FXCH                                ; 004413f0
    FMUL ST1                            ; 004413f2
    FLD float ptr [EAX + 0x4]           ; 004413f4
    FMUL ST2                            ; 004413f7
    FLD float ptr [EAX + 0x8]           ; 004413f9
    FMULP ST3                           ; 004413fc
    FXCH                                ; 004413fe
    FSTP float ptr [EAX]                ; 00441400
    FSTP float ptr [EAX + 0x4]          ; 00441402
    FSTP float ptr [EAX + 0x8]          ; 00441405
    MOV EAX,dword ptr [EBP + 0x18]      ; 00441408
    MOV ESP,EBP                         ; 0044140b
    POP EBP                             ; 0044140d
    POP EDI                             ; 0044140e
    POP ESI                             ; 0044140f
    POP EBX                             ; 00441410
    RET                                 ; 00441411
    MOV EAX,dword ptr [EBP + 0x18]      ; 00441412
        ;   Label: LAB_00441412
    MOV dword ptr [EAX + 0x8],0x0       ; 00441415
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044141c
    MOV dword ptr [EAX + 0x4],EDX       ; 0044141f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00441422
    MOV dword ptr [EAX],EDX             ; 00441425
    MOV EAX,dword ptr [EBP + 0x18]      ; 00441427
    MOV ESP,EBP                         ; 0044142a
    POP EBP                             ; 0044142c
    POP EDI                             ; 0044142d
    POP ESI                             ; 0044142e
    POP EBX                             ; 0044142f
    RET                                 ; 00441430

