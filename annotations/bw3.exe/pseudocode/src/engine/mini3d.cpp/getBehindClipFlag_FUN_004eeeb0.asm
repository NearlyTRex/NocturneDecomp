; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_004eeeb0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004eeeb0
        ;   Label: engine_mini3d.cpp_getBehindClipFlag_FUN_004eeeb0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004eeeb3
    MOV EAX,[0x01d76cfc]                ; 004eeeb7 | DAT_01d76cfc
    FLD float ptr [EDX]                 ; 004eeebc
    FSUB float ptr [EAX + 0x24]         ; 004eeebe
    FMUL float ptr [EAX + 0x8]          ; 004eeec1
    FLD float ptr [EDX + 0x4]           ; 004eeec4
    FSUB float ptr [EAX + 0x28]         ; 004eeec7
    FMUL float ptr [EAX + 0x14]         ; 004eeeca
    FLD float ptr [EDX + 0x8]           ; 004eeecd
    FXCH                                ; 004eeed0
    FADDP ST2,ST0                       ; 004eeed2
    FSUB float ptr [EAX + 0x2c]         ; 004eeed4
    FMUL float ptr [EAX + 0x20]         ; 004eeed7
    FADDP                               ; 004eeeda
    FLDZ                                ; 004eeedc
    FCOMPP                              ; 004eeede
    FNSTSW AX                           ; 004eeee0
    SAHF                                ; 004eeee2
    JC 0x004eeeeb                       ; 004eeee3
        ;   XREF to: 004eeeeb (CONDITIONAL_JUMP)  ; LAB_004eeeeb
    MOV AL,0x10                         ; 004eeee5
    ADD ESP,0xc                         ; 004eeee7
    RET                                 ; 004eeeea
    XOR AL,AL                           ; 004eeeeb
        ;   Label: LAB_004eeeeb
    ADD ESP,0xc                         ; 004eeeed
    RET                                 ; 004eeef0

