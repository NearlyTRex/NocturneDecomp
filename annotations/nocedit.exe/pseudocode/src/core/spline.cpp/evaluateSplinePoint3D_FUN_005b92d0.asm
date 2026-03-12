; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)
;
; Parameters:
; float *          Stack[0x4]:4   basis
; CVector3f *      Stack[0x8]:4   out
; CVector3f *      Stack[0xc]:4   p0
; CVector3f *      Stack[0x10]:4   p1
; CVector3f *      Stack[0x14]:4   p2
; CVector3f *      Stack[0x18]:4   p3
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_004869a0 at 00486be3
;   core_flies.cpp_CFlies_renderOpaque_FUN_004cc300 at 004cc536
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b92d0
        ;   Label: core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0
    PUSH ESI                            ; 005b92d1
    PUSH EDI                            ; 005b92d2
    PUSH EBP                            ; 005b92d3
    SUB ESP,0x48                        ; 005b92d4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b92d7
    MOV ECX,dword ptr [ESP + 0x60]      ; 005b92db
    MOV EDI,dword ptr [ESP + 0x64]      ; 005b92df
    MOV EBX,dword ptr [ESP + 0x68]      ; 005b92e3
    MOV ESI,dword ptr [ESP + 0x6c]      ; 005b92e7
    MOV EBP,dword ptr [ESP + 0x70]      ; 005b92eb
    LEA EDX,[EAX + 0xc]                 ; 005b92ef
    FLD float ptr [EBP]                 ; 005b92f2
    FMUL float ptr [EDX]                ; 005b92f5
    FSTP float ptr [ESP + 0x24]         ; 005b92f7
    FLD float ptr [EBP + 0x4]           ; 005b92fb
    FMUL float ptr [EDX]                ; 005b92fe
    FSTP float ptr [ESP + 0x28]         ; 005b9300
    FLD float ptr [EBP + 0x8]           ; 005b9304
    FMUL float ptr [EDX]                ; 005b9307
    FSTP float ptr [ESP + 0x2c]         ; 005b9309
    LEA EDX,[EAX + 0x8]                 ; 005b930d
    FLD float ptr [ESI]                 ; 005b9310
    FMUL float ptr [EDX]                ; 005b9312
    FSTP float ptr [ESP]                ; 005b9314
    FLD float ptr [ESI + 0x4]           ; 005b9317
    FMUL float ptr [EDX]                ; 005b931a
    FSTP float ptr [ESP + 0x4]          ; 005b931c
    FLD float ptr [ESI + 0x8]           ; 005b9320
    FMUL float ptr [EDX]                ; 005b9323
    FSTP float ptr [ESP + 0x8]          ; 005b9325
    LEA EDX,[EAX + 0x4]                 ; 005b9329
    FLD float ptr [EBX]                 ; 005b932c
    FMUL float ptr [EDX]                ; 005b932e
    FSTP float ptr [ESP + 0x18]         ; 005b9330
    FLD float ptr [EBX + 0x4]           ; 005b9334
    FMUL float ptr [EDX]                ; 005b9337
    FSTP float ptr [ESP + 0x1c]         ; 005b9339
    FLD float ptr [EBX + 0x8]           ; 005b933d
    FMUL float ptr [EDX]                ; 005b9340
    FSTP float ptr [ESP + 0x20]         ; 005b9342
    FLD float ptr [EDI]                 ; 005b9346
    FMUL float ptr [EAX]                ; 005b9348
    FSTP float ptr [ESP + 0x3c]         ; 005b934a
    FLD float ptr [EDI + 0x4]           ; 005b934e
    FMUL float ptr [EAX]                ; 005b9351
    FSTP float ptr [ESP + 0x40]         ; 005b9353
    FLD float ptr [EDI + 0x8]           ; 005b9357
    FMUL float ptr [EAX]                ; 005b935a
    FLD float ptr [ESP + 0x3c]          ; 005b935c
    FADD float ptr [ESP + 0x18]         ; 005b9360
    FLD float ptr [ESP + 0x40]          ; 005b9364
    FADD float ptr [ESP + 0x1c]         ; 005b9368
    FXCH ST2                            ; 005b936c
    FSTP float ptr [ESP + 0x44]         ; 005b936e
    FSTP float ptr [ESP + 0x30]         ; 005b9372
    FSTP float ptr [ESP + 0x34]         ; 005b9376
    FLD float ptr [ESP + 0x44]          ; 005b937a
    FLD float ptr [ESP + 0x30]          ; 005b937e
    FLD float ptr [ESP + 0x34]          ; 005b9382
    FXCH ST2                            ; 005b9386
    FADD float ptr [ESP + 0x20]         ; 005b9388
    FXCH                                ; 005b938c
    FADD float ptr [ESP]                ; 005b938e
    FXCH ST2                            ; 005b9391
    FADD float ptr [ESP + 0x4]          ; 005b9393
    FXCH                                ; 005b9397
    FSTP float ptr [ESP + 0x38]         ; 005b9399
    FXCH                                ; 005b939d
    FSTP float ptr [ESP + 0xc]          ; 005b939f
    FSTP float ptr [ESP + 0x10]         ; 005b93a3
    FLD float ptr [ESP + 0xc]           ; 005b93a7
    FLD float ptr [ESP + 0x38]          ; 005b93ab
    FADD float ptr [ESP + 0x8]          ; 005b93af
    FXCH                                ; 005b93b3
    FADD float ptr [ESP + 0x24]         ; 005b93b5
    FXCH                                ; 005b93b9
    FSTP float ptr [ESP + 0x14]         ; 005b93bb
    FSTP float ptr [ECX]                ; 005b93bf
    FLD float ptr [ESP + 0x10]          ; 005b93c1
    FADD float ptr [ESP + 0x28]         ; 005b93c5
    FSTP float ptr [ECX + 0x4]          ; 005b93c9
    FLD float ptr [ESP + 0x14]          ; 005b93cc
    FADD float ptr [ESP + 0x2c]         ; 005b93d0
    MOV EAX,ECX                         ; 005b93d4
    FSTP float ptr [ECX + 0x8]          ; 005b93d6
    ADD ESP,0x48                        ; 005b93d9
    POP EBP                             ; 005b93dc
    POP EDI                             ; 005b93dd
    POP ESI                             ; 005b93de
    POP EBX                             ; 005b93df
    RET                                 ; 005b93e0

