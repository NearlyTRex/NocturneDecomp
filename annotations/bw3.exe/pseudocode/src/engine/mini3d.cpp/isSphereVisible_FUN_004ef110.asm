; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004ef110(CVector3f *center,float radius)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   center
; float            Stack[0x8]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005c8185
;   undefined4 DAT_01d76ca8
;   undefined4 DAT_01d76cf4
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 004ef110
        ;   Label: engine_mini3d.cpp_isSphereVisible_FUN_004ef110
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ef113
    FLD float ptr [ESP + 0x24]          ; 004ef117
    FMUL float ptr [0x005c8185]         ; 004ef11b | DAT_005c8185
    FLD float ptr [EAX]                 ; 004ef121
    MOV EDX,dword ptr [0x01d76cfc]      ; 004ef123 | DAT_01d76cfc
    FLD float ptr [EAX + 0x4]           ; 004ef129
    FXCH                                ; 004ef12c
    FSUB float ptr [EDX + 0x24]         ; 004ef12e
    FXCH                                ; 004ef131
    FSUB float ptr [EDX + 0x28]         ; 004ef133
    FXCH                                ; 004ef136
    FST float ptr [ESP + 0x10]          ; 004ef138
    FMUL float ptr [EDX + 0x8]          ; 004ef13c
    FXCH                                ; 004ef13f
    FST float ptr [ESP + 0x14]          ; 004ef141
    FMUL float ptr [EDX + 0x14]         ; 004ef145
    FLD float ptr [EAX + 0x8]           ; 004ef148
    FSUB float ptr [EDX + 0x2c]         ; 004ef14b
    FXCH                                ; 004ef14e
    FADDP ST2,ST0                       ; 004ef150
    FST float ptr [ESP + 0xc]           ; 004ef152
    FMUL float ptr [EDX + 0x20]         ; 004ef156
    FXCH ST2                            ; 004ef159
    FMUL float ptr [0x01d76ca8]         ; 004ef15b | DAT_01d76ca8
    FXCH ST2                            ; 004ef161
    FADDP                               ; 004ef163
    FXCH                                ; 004ef165
    FSTP float ptr [ESP + 0x24]         ; 004ef167
    FST float ptr [ESP + 0x18]          ; 004ef16b
    FADD float ptr [ESP + 0x24]         ; 004ef16f
    FLDZ                                ; 004ef173
    FCOMPP                              ; 004ef175
    FNSTSW AX                           ; 004ef177
    SAHF                                ; 004ef179
    JA 0x004ef213                       ; 004ef17a
        ;   XREF to: 004ef213 (CONDITIONAL_JUMP)  ; LAB_004ef213
    FLD float ptr [ESP + 0x18]          ; 004ef180
    FSUB float ptr [ESP + 0x24]         ; 004ef184
    FCOMP float ptr [0x01d76cf4]        ; 004ef188 | DAT_01d76cf4
    FNSTSW AX                           ; 004ef18e
    SAHF                                ; 004ef190
    JA 0x004ef213                       ; 004ef191
        ;   XREF to: 004ef213 (CONDITIONAL_JUMP)  ; LAB_004ef213
    FLD float ptr [ESP + 0x14]          ; 004ef197
    FMUL float ptr [EDX + 0xc]          ; 004ef19b
    FLD float ptr [ESP + 0x10]          ; 004ef19e
    FMUL float ptr [EDX]                ; 004ef1a2
    FADDP                               ; 004ef1a4
    FLD float ptr [ESP + 0xc]           ; 004ef1a6
    FMUL float ptr [EDX + 0x18]         ; 004ef1aa
    FADDP                               ; 004ef1ad
    FST float ptr [ESP + 0x8]           ; 004ef1af
    FSUB float ptr [ESP + 0x24]         ; 004ef1b3
    FCOMP float ptr [ESP + 0x18]        ; 004ef1b7
    FNSTSW AX                           ; 004ef1bb
    SAHF                                ; 004ef1bd
    JA 0x004ef213                       ; 004ef1be
        ;   XREF to: 004ef213 (CONDITIONAL_JUMP)  ; LAB_004ef213
    FLD float ptr [ESP + 0x8]           ; 004ef1c0
    FADD float ptr [ESP + 0x24]         ; 004ef1c4
    FLD float ptr [ESP + 0x18]          ; 004ef1c8
    FCHS                                ; 004ef1cc
    FSTP float ptr [ESP]                ; 004ef1ce
    FCOMP float ptr [ESP]               ; 004ef1d1
    FNSTSW AX                           ; 004ef1d4
    SAHF                                ; 004ef1d6
    JC 0x004ef213                       ; 004ef1d7
        ;   XREF to: 004ef213 (CONDITIONAL_JUMP)  ; LAB_004ef213
    FLD float ptr [ESP + 0x10]          ; 004ef1d9
    FMUL float ptr [EDX + 0x4]          ; 004ef1dd
    FLD float ptr [ESP + 0x14]          ; 004ef1e0
    FMUL float ptr [EDX + 0x10]         ; 004ef1e4
    FADDP                               ; 004ef1e7
    FLD float ptr [ESP + 0xc]           ; 004ef1e9
    FMUL float ptr [EDX + 0x1c]         ; 004ef1ed
    FADDP                               ; 004ef1f0
    FST float ptr [ESP + 0x4]           ; 004ef1f2
    FSUB float ptr [ESP + 0x24]         ; 004ef1f6
    FCOMP float ptr [ESP + 0x18]        ; 004ef1fa
    FNSTSW AX                           ; 004ef1fe
    SAHF                                ; 004ef200
    JA 0x004ef213                       ; 004ef201
        ;   XREF to: 004ef213 (CONDITIONAL_JUMP)  ; LAB_004ef213
    FLD float ptr [ESP + 0x4]           ; 004ef203
    FADD float ptr [ESP + 0x24]         ; 004ef207
    FCOMP float ptr [ESP]               ; 004ef20b
    FNSTSW AX                           ; 004ef20e
    SAHF                                ; 004ef210
    JNC 0x004ef219                      ; 004ef211
        ;   XREF to: 004ef219 (CONDITIONAL_JUMP)  ; LAB_004ef219
    XOR EAX,EAX                         ; 004ef213
        ;   Label: LAB_004ef213
    ADD ESP,0x1c                        ; 004ef215
    RET                                 ; 004ef218
    MOV EAX,0x1                         ; 004ef219
        ;   Label: LAB_004ef219
    ADD ESP,0x1c                        ; 004ef21e
    RET                                 ; 004ef221

