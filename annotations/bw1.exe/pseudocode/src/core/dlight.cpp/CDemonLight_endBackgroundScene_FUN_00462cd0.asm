; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f9e8
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01b2d374
;   undefined4 DAT_01b2d378
;   undefined4 DAT_01b2d37c
;   undefined4 DAT_01b2d37d
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c43551
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b2d374]      ; 00462cd0 | DAT_01b2d374
        ;   Label: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00462cd0
    DEC EDX                             ; 00462cd6
    MOV dword ptr [0x01b2d374],EDX      ; 00462cd7 | DAT_01b2d374
    JZ 0x00462ce0                       ; 00462cdd
        ;   XREF to: 00462ce0 (CONDITIONAL_JUMP)  ; LAB_00462ce0
    RET                                 ; 00462cdf
    PUSH EDI                            ; 00462ce0
        ;   Label: LAB_00462ce0
    PUSH ESI                            ; 00462ce1
    PUSH EBX                            ; 00462ce2
    MOV ECX,dword ptr [ESP + 0x10]      ; 00462ce3
    MOV ESI,0x1b2d378                   ; 00462ce7
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 00462cec
    MOV EDI,0x1c4354c                   ; 00462cf2
    SHL ECX,0x2                         ; 00462cf7
    PUSH EDI                            ; 00462cfa | DAT_01c4354c
    MOV EAX,ECX                         ; 00462cfb
    SHR ECX,0x2                         ; 00462cfd
    MOVSD.REP ES:EDI,ESI                ; 00462d00 | DAT_01b2d378 | DAT_01c4354c | DAT_01b2d37c
    MOV CL,AL                           ; 00462d02
    AND CL,0x3                          ; 00462d04
    MOVSB.REP ES:EDI,ESI                ; 00462d07 | DAT_01b2d37c | DAT_01c43550 | DAT_01b2d37d
    POP EDI                             ; 00462d09
    PUSH EDX                            ; 00462d0a
    MOV EBX,dword ptr [0x00612560]      ; 00462d0b | DAT_00612560
    PUSH EBX                            ; 00462d11 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00462d12
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00462d17
    POP EBX                             ; 00462d1a
    POP ESI                             ; 00462d1b
    POP EDI                             ; 00462d1c
    RET                                 ; 00462d1d

