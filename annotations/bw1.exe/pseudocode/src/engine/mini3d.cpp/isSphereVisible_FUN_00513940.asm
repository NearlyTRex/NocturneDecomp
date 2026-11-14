; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_00513940(CVector3f *center,float radius)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   center
; float            Stack[0x8]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005e8e83
;   undefined4 DAT_01d22528
;   undefined4 DAT_01d22574
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 00513940
        ;   Label: engine_mini3d.cpp_isSphereVisible_FUN_00513940
    MOV EAX,dword ptr [ESP + 0x20]      ; 00513943
    FLD float ptr [ESP + 0x24]          ; 00513947
    FMUL float ptr [0x005e8e83]         ; 0051394b | DAT_005e8e83
    FLD float ptr [EAX]                 ; 00513951
    MOV EDX,dword ptr [0x01d2257c]      ; 00513953 | DAT_01d2257c
    FLD float ptr [EAX + 0x4]           ; 00513959
    FXCH                                ; 0051395c
    FSUB float ptr [EDX + 0x24]         ; 0051395e
    FXCH                                ; 00513961
    FSUB float ptr [EDX + 0x28]         ; 00513963
    FXCH                                ; 00513966
    FST float ptr [ESP + 0x10]          ; 00513968
    FMUL float ptr [EDX + 0x8]          ; 0051396c
    FXCH                                ; 0051396f
    FST float ptr [ESP + 0x14]          ; 00513971
    FMUL float ptr [EDX + 0x14]         ; 00513975
    FLD float ptr [EAX + 0x8]           ; 00513978
    FSUB float ptr [EDX + 0x2c]         ; 0051397b
    FXCH                                ; 0051397e
    FADDP ST2,ST0                       ; 00513980
    FST float ptr [ESP + 0xc]           ; 00513982
    FMUL float ptr [EDX + 0x20]         ; 00513986
    FXCH ST2                            ; 00513989
    FMUL float ptr [0x01d22528]         ; 0051398b | DAT_01d22528
    FXCH ST2                            ; 00513991
    FADDP                               ; 00513993
    FXCH                                ; 00513995
    FSTP float ptr [ESP + 0x24]         ; 00513997
    FST float ptr [ESP + 0x18]          ; 0051399b
    FADD float ptr [ESP + 0x24]         ; 0051399f
    FLDZ                                ; 005139a3
    FCOMPP                              ; 005139a5
    FNSTSW AX                           ; 005139a7
    SAHF                                ; 005139a9
    JA 0x00513a43                       ; 005139aa
        ;   XREF to: 00513a43 (CONDITIONAL_JUMP)  ; LAB_00513a43
    FLD float ptr [ESP + 0x18]          ; 005139b0
    FSUB float ptr [ESP + 0x24]         ; 005139b4
    FCOMP float ptr [0x01d22574]        ; 005139b8 | DAT_01d22574
    FNSTSW AX                           ; 005139be
    SAHF                                ; 005139c0
    JA 0x00513a43                       ; 005139c1
        ;   XREF to: 00513a43 (CONDITIONAL_JUMP)  ; LAB_00513a43
    FLD float ptr [ESP + 0x14]          ; 005139c7
    FMUL float ptr [EDX + 0xc]          ; 005139cb
    FLD float ptr [ESP + 0x10]          ; 005139ce
    FMUL float ptr [EDX]                ; 005139d2
    FADDP                               ; 005139d4
    FLD float ptr [ESP + 0xc]           ; 005139d6
    FMUL float ptr [EDX + 0x18]         ; 005139da
    FADDP                               ; 005139dd
    FST float ptr [ESP + 0x8]           ; 005139df
    FSUB float ptr [ESP + 0x24]         ; 005139e3
    FCOMP float ptr [ESP + 0x18]        ; 005139e7
    FNSTSW AX                           ; 005139eb
    SAHF                                ; 005139ed
    JA 0x00513a43                       ; 005139ee
        ;   XREF to: 00513a43 (CONDITIONAL_JUMP)  ; LAB_00513a43
    FLD float ptr [ESP + 0x8]           ; 005139f0
    FADD float ptr [ESP + 0x24]         ; 005139f4
    FLD float ptr [ESP + 0x18]          ; 005139f8
    FCHS                                ; 005139fc
    FSTP float ptr [ESP]                ; 005139fe
    FCOMP float ptr [ESP]               ; 00513a01
    FNSTSW AX                           ; 00513a04
    SAHF                                ; 00513a06
    JC 0x00513a43                       ; 00513a07
        ;   XREF to: 00513a43 (CONDITIONAL_JUMP)  ; LAB_00513a43
    FLD float ptr [ESP + 0x10]          ; 00513a09
    FMUL float ptr [EDX + 0x4]          ; 00513a0d
    FLD float ptr [ESP + 0x14]          ; 00513a10
    FMUL float ptr [EDX + 0x10]         ; 00513a14
    FADDP                               ; 00513a17
    FLD float ptr [ESP + 0xc]           ; 00513a19
    FMUL float ptr [EDX + 0x1c]         ; 00513a1d
    FADDP                               ; 00513a20
    FST float ptr [ESP + 0x4]           ; 00513a22
    FSUB float ptr [ESP + 0x24]         ; 00513a26
    FCOMP float ptr [ESP + 0x18]        ; 00513a2a
    FNSTSW AX                           ; 00513a2e
    SAHF                                ; 00513a30
    JA 0x00513a43                       ; 00513a31
        ;   XREF to: 00513a43 (CONDITIONAL_JUMP)  ; LAB_00513a43
    FLD float ptr [ESP + 0x4]           ; 00513a33
    FADD float ptr [ESP + 0x24]         ; 00513a37
    FCOMP float ptr [ESP]               ; 00513a3b
    FNSTSW AX                           ; 00513a3e
    SAHF                                ; 00513a40
    JNC 0x00513a49                      ; 00513a41
        ;   XREF to: 00513a49 (CONDITIONAL_JUMP)  ; LAB_00513a49
    XOR EAX,EAX                         ; 00513a43
        ;   Label: LAB_00513a43
    ADD ESP,0x1c                        ; 00513a45
    RET                                 ; 00513a48
    MOV EAX,0x1                         ; 00513a49
        ;   Label: LAB_00513a49
    ADD ESP,0x1c                        ; 00513a4e
    RET                                 ; 00513a51

