; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_004f4990(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004f4990
        ;   Label: engine_mini3d.cpp_getBehindClipFlag_FUN_004f4990
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f4993
    MOV EAX,[0x01d09918]                ; 004f4997 | DAT_01d09918
    FLD float ptr [EDX]                 ; 004f499c
    FSUB float ptr [EAX + 0x24]         ; 004f499e
    FMUL float ptr [EAX + 0x8]          ; 004f49a1
    FLD float ptr [EDX + 0x4]           ; 004f49a4
    FSUB float ptr [EAX + 0x28]         ; 004f49a7
    FMUL float ptr [EAX + 0x14]         ; 004f49aa
    FLD float ptr [EDX + 0x8]           ; 004f49ad
    FXCH                                ; 004f49b0
    FADDP ST2,ST0                       ; 004f49b2
    FSUB float ptr [EAX + 0x2c]         ; 004f49b4
    FMUL float ptr [EAX + 0x20]         ; 004f49b7
    FADDP                               ; 004f49ba
    FLDZ                                ; 004f49bc
    FCOMPP                              ; 004f49be
    FNSTSW AX                           ; 004f49c0
    SAHF                                ; 004f49c2
    JC 0x004f49cb                       ; 004f49c3
        ;   XREF to: 004f49cb (CONDITIONAL_JUMP)  ; LAB_004f49cb
    MOV AL,0x10                         ; 004f49c5
    ADD ESP,0xc                         ; 004f49c7
    RET                                 ; 004f49ca
    XOR AL,AL                           ; 004f49cb
        ;   Label: LAB_004f49cb
    ADD ESP,0xc                         ; 004f49cd
    RET                                 ; 004f49d0

