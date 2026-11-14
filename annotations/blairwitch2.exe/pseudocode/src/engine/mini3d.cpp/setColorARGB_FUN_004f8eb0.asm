; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f8eb0(uint argb)
;
; Parameters:
; uint             Stack[0x4]:4   argb
;
; Referenced Globals:
;   undefined4 DAT_005ddff4
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098e8
;   undefined4 DAT_01d098ec
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;   undefined4 DAT_01d0d2e4
;   undefined4 DAT_0264bc78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8eb0
        ;   Label: engine_mini3d.cpp_setColorARGB_FUN_004f8eb0
    SUB ESP,0x8                         ; 004f8eb1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f8eb4
    MOV EAX,EBX                         ; 004f8eb8
    SHR EAX,0x10                        ; 004f8eba
    AND EAX,0xff                        ; 004f8ebd
    MOV dword ptr [ESP + 0x4],EAX       ; 004f8ec2
    MOV EAX,EBX                         ; 004f8ec6
    FILD dword ptr [ESP + 0x4]          ; 004f8ec8
    SHR EAX,0x8                         ; 004f8ecc
    FLD float ptr [0x005ddff4]          ; 004f8ecf | DAT_005ddff4
    FXCH                                ; 004f8ed5
    FMUL ST1                            ; 004f8ed7
    AND EAX,0xff                        ; 004f8ed9
    MOV dword ptr [ESP + 0x4],EAX       ; 004f8ede
    MOV EAX,EBX                         ; 004f8ee2
    FILD dword ptr [ESP + 0x4]          ; 004f8ee4
    AND EAX,0xff                        ; 004f8ee8
    FMUL ST2                            ; 004f8eed
    MOV dword ptr [ESP + 0x4],EAX       ; 004f8eef
    MOV EAX,EBX                         ; 004f8ef3
    FILD dword ptr [ESP + 0x4]          ; 004f8ef5
    SHR EAX,0x18                        ; 004f8ef9
    FMUL ST3                            ; 004f8efc
    AND EAX,0xff                        ; 004f8efe
    MOV dword ptr [ESP + 0x4],EAX       ; 004f8f03
    FILD dword ptr [ESP + 0x4]          ; 004f8f07
    FMULP ST4                           ; 004f8f0b
    FLD float ptr [0x01d09860]          ; 004f8f0d | DAT_01d09860
    FXCH ST3                            ; 004f8f13
    FSTP float ptr [0x01d0d2d8]         ; 004f8f15 | DAT_01d0d2d8
    FXCH                                ; 004f8f1b
    FSTP float ptr [0x01d0d2dc]         ; 004f8f1d | DAT_01d0d2dc
    FSTP float ptr [0x01d0d2e0]         ; 004f8f23 | DAT_01d0d2e0
    FXCH                                ; 004f8f29
    FSTP float ptr [ESP]                ; 004f8f2b
    FCOMP float ptr [ESP]               ; 004f8f2e
    FNSTSW AX                           ; 004f8f31
    SAHF                                ; 004f8f33
    JZ 0x004f8f51                       ; 004f8f34
        ;   XREF to: 004f8f51 (CONDITIONAL_JUMP)  ; LAB_004f8f51
    MOV EAX,dword ptr [ESP]             ; 004f8f36
    MOV EDX,dword ptr [0x0264bc78]      ; 004f8f39 | DAT_0264bc78
    MOV [0x01d09860],EAX                ; 004f8f3f | DAT_01d09860
    TEST EDX,EDX                        ; 004f8f44
    JZ 0x004f8f51                       ; 004f8f46
        ;   XREF to: 004f8f51 (CONDITIONAL_JUMP)  ; LAB_004f8f51
    CMP dword ptr [0x01c37788],0x0      ; 004f8f48 | DAT_01c37788
    JNZ 0x004f8f5c                      ; 004f8f4f
        ;   XREF to: 004f8f5c (CONDITIONAL_JUMP)  ; LAB_004f8f5c
    MOV dword ptr [0x01d0d2e4],EBX      ; 004f8f51 | DAT_01d0d2e4
        ;   Label: LAB_004f8f51
    ADD ESP,0x8                         ; 004f8f57
    POP EBX                             ; 004f8f5a
    RET                                 ; 004f8f5b
    PUSH EAX                            ; 004f8f5c
        ;   Label: LAB_004f8f5c
    PUSH dword ptr [0x01d098ec]         ; 004f8f5d | DAT_01d098ec
    PUSH dword ptr [0x01d098e8]         ; 004f8f63 | DAT_01d098e8
    PUSH dword ptr [0x01d098e4]         ; 004f8f69 | DAT_01d098e4
    CALL dword ptr [0x0264bc78]         ; 004f8f6f | DAT_0264bc78
    ADD ESP,0x10                        ; 004f8f75
    MOV dword ptr [0x01d0d2e4],EBX      ; 004f8f78 | DAT_01d0d2e4
    ADD ESP,0x8                         ; 004f8f7e
    POP EBX                             ; 004f8f81
    RET                                 ; 004f8f82

