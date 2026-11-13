; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_005136e0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005136e0
        ;   Label: engine_mini3d.cpp_getBehindClipFlag_FUN_005136e0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005136e3
    MOV EAX,[0x01d2257c]                ; 005136e7 | DAT_01d2257c
    FLD float ptr [EDX]                 ; 005136ec
    FSUB float ptr [EAX + 0x24]         ; 005136ee
    FMUL float ptr [EAX + 0x8]          ; 005136f1
    FLD float ptr [EDX + 0x4]           ; 005136f4
    FSUB float ptr [EAX + 0x28]         ; 005136f7
    FMUL float ptr [EAX + 0x14]         ; 005136fa
    FLD float ptr [EDX + 0x8]           ; 005136fd
    FXCH                                ; 00513700
    FADDP ST2,ST0                       ; 00513702
    FSUB float ptr [EAX + 0x2c]         ; 00513704
    FMUL float ptr [EAX + 0x20]         ; 00513707
    FADDP                               ; 0051370a
    FLDZ                                ; 0051370c
    FCOMPP                              ; 0051370e
    FNSTSW AX                           ; 00513710
    SAHF                                ; 00513712
    JC 0x0051371b                       ; 00513713
        ;   XREF to: 0051371b (CONDITIONAL_JUMP)  ; LAB_0051371b
    MOV AL,0x10                         ; 00513715
    ADD ESP,0xc                         ; 00513717
    RET                                 ; 0051371a
    XOR AL,AL                           ; 0051371b
        ;   Label: LAB_0051371b
    ADD ESP,0xc                         ; 0051371d
    RET                                 ; 00513720

