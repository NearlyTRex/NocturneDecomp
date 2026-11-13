; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004eedd0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d76cbc
;   undefined4 DAT_01d76cf4
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 004eedd0
        ;   Label: engine_mini3d.cpp_getClipFlags_FUN_004eedd0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004eedd3
    MOV EAX,[0x01d76cfc]                ; 004eedd7 | DAT_01d76cfc
    FLD float ptr [EDX + 0x4]           ; 004eeddc
    FSUB float ptr [EAX + 0x28]         ; 004eeddf
    FLD ST0                             ; 004eede2
    FMUL float ptr [EAX + 0xc]          ; 004eede4
    FLD float ptr [EDX]                 ; 004eede7
    FSUB float ptr [EAX + 0x24]         ; 004eede9
    FLD ST0                             ; 004eedec
    FMUL float ptr [EAX + 0x4]          ; 004eedee
    FLD ST1                             ; 004eedf1
    FMUL float ptr [EAX + 0x8]          ; 004eedf3
    FXCH ST2                            ; 004eedf6
    FMUL float ptr [EAX]                ; 004eedf8
    FLD ST4                             ; 004eedfa
    FMUL float ptr [EAX + 0x10]         ; 004eedfc
    FXCH ST5                            ; 004eedff
    FMUL float ptr [EAX + 0x14]         ; 004eee01
    FLD float ptr [EDX + 0x8]           ; 004eee04
    FXCH ST2                            ; 004eee07
    FADDP ST5,ST0                       ; 004eee09
    FXCH                                ; 004eee0b
    FSUB float ptr [EAX + 0x2c]         ; 004eee0d
    FLD ST0                             ; 004eee10
    FMUL float ptr [EAX + 0x18]         ; 004eee12
    FXCH ST6                            ; 004eee15
    FADDP ST3,ST0                       ; 004eee17
    FXCH                                ; 004eee19
    FADDP ST3,ST0                       ; 004eee1b
    FLD ST0                             ; 004eee1d
    FMUL float ptr [EAX + 0x1c]         ; 004eee1f
    FXCH                                ; 004eee22
    FMUL float ptr [EAX + 0x20]         ; 004eee24
    XOR DL,DL                           ; 004eee27
    FXCH ST5                            ; 004eee29
    FADDP ST4,ST0                       ; 004eee2b
    FADDP                               ; 004eee2d
    FXCH ST3                            ; 004eee2f
    FADDP                               ; 004eee31
    FXCH                                ; 004eee33
    FSTP float ptr [ESP + 0x10]         ; 004eee35
    FXCH                                ; 004eee39
    FSTP float ptr [ESP + 0xc]          ; 004eee3b
    FSTP float ptr [ESP + 0x14]         ; 004eee3f
    FLD float ptr [ESP + 0x10]          ; 004eee43
    FCOMP float ptr [ESP + 0x14]        ; 004eee47
    FNSTSW AX                           ; 004eee4b
    SAHF                                ; 004eee4d
    JBE 0x004eee52                      ; 004eee4e
        ;   XREF to: 004eee52 (CONDITIONAL_JUMP)  ; LAB_004eee52
    MOV DL,0x1                          ; 004eee50
    FLD float ptr [ESP + 0x14]          ; 004eee52
        ;   Label: LAB_004eee52
    FCHS                                ; 004eee56
    FCOMP float ptr [ESP + 0x10]        ; 004eee58
    FNSTSW AX                           ; 004eee5c
    SAHF                                ; 004eee5e
    JBE 0x004eee64                      ; 004eee5f
        ;   XREF to: 004eee64 (CONDITIONAL_JUMP)  ; LAB_004eee64
    OR DL,0x2                           ; 004eee61
    FLD float ptr [ESP + 0xc]           ; 004eee64
        ;   Label: LAB_004eee64
    FCOMP float ptr [ESP + 0x14]        ; 004eee68
    FNSTSW AX                           ; 004eee6c
    SAHF                                ; 004eee6e
    JBE 0x004eee74                      ; 004eee6f
        ;   XREF to: 004eee74 (CONDITIONAL_JUMP)  ; LAB_004eee74
    OR DL,0x4                           ; 004eee71
    FLD float ptr [ESP + 0x14]          ; 004eee74
        ;   Label: LAB_004eee74
    FCHS                                ; 004eee78
    FCOMP float ptr [ESP + 0xc]         ; 004eee7a
    FNSTSW AX                           ; 004eee7e
    SAHF                                ; 004eee80
    JBE 0x004eee86                      ; 004eee81
        ;   XREF to: 004eee86 (CONDITIONAL_JUMP)  ; LAB_004eee86
    OR DL,0x8                           ; 004eee83
    FLD float ptr [ESP + 0x14]          ; 004eee86
        ;   Label: LAB_004eee86
    FCOMP float ptr [0x01d76cbc]        ; 004eee8a | DAT_01d76cbc
    FNSTSW AX                           ; 004eee90
    SAHF                                ; 004eee92
    JA 0x004eee98                       ; 004eee93
        ;   XREF to: 004eee98 (CONDITIONAL_JUMP)  ; LAB_004eee98
    OR DL,0x10                          ; 004eee95
    FLD float ptr [ESP + 0x14]          ; 004eee98
        ;   Label: LAB_004eee98
    FCOMP float ptr [0x01d76cf4]        ; 004eee9c | DAT_01d76cf4
    FNSTSW AX                           ; 004eeea2
    SAHF                                ; 004eeea4
    JC 0x004eeeaa                       ; 004eeea5
        ;   XREF to: 004eeeaa (CONDITIONAL_JUMP)  ; LAB_004eeeaa
    OR DL,0x20                          ; 004eeea7
    MOV AL,DL                           ; 004eeeaa
        ;   Label: LAB_004eeeaa
    ADD ESP,0x18                        ; 004eeeac
    RET                                 ; 004eeeaf

