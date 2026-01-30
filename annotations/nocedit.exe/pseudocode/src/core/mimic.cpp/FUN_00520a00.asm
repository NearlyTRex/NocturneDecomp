; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_mimic_cpp_FUN_00520a00(void)
;
;
; Referenced Globals:
;   double DOUBLE_00638833 = 1.30000000000000
;   float FLOAT_0063883b = 0.5
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00520a00
        ;   Label: core_mimic.cpp_FUN_00520a00
    MOV EDX,dword ptr [ESP + 0xc]       ; 00520a03
    MOV EAX,dword ptr [ESP + 0x10]      ; 00520a07
    FLD float ptr [EDX + 0x23a0]        ; 00520a0b
    MOV ECX,dword ptr [EAX]             ; 00520a11
    FSTP float ptr [EAX + 0x18]         ; 00520a13
    MOV dword ptr [EAX + 0x1c],0x3f800000 ; 00520a16
    CMP ECX,0x1                         ; 00520a1d
    JZ 0x00520a46                       ; 00520a20
        ;   XREF to: 00520a46 (CONDITIONAL_JUMP)  ; LAB_00520a46
    MOV dword ptr [EAX + 0x14],0x40000000 ; 00520a22
    LEA EAX,[EDX + 0x158]               ; 00520a29
        ;   Label: LAB_00520a29
    PUSH EAX                            ; 00520a2f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00520a30
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00520a35
    ADD ESP,0x4                         ; 00520a38
    CMP EAX,0xc                         ; 00520a3b
    JNZ 0x00520a71                      ; 00520a3e
        ;   XREF to: 00520a71 (CONDITIONAL_JUMP)  ; LAB_00520a71
    XOR EAX,EAX                         ; 00520a40
    ADD ESP,0x8                         ; 00520a42
    RET                                 ; 00520a45
    FLD float ptr [EAX + 0x1c]          ; 00520a46
        ;   Label: LAB_00520a46
    FLD float ptr [EAX + 0x18]          ; 00520a49
    MOV dword ptr [EAX + 0x14],0xbdcccccd ; 00520a4c
    FLD ST1                             ; 00520a53
    FXCH                                ; 00520a55
    FADD float ptr [0x0063883b]         ; 00520a57 | FLOAT_0063883b
    FXCH                                ; 00520a5d
    FMUL double ptr [0x00638833]        ; 00520a5f | DOUBLE_00638833
    FXCH                                ; 00520a65
    FSTP float ptr [EAX + 0x18]         ; 00520a67
    FSTP ST1                            ; 00520a6a
    FSTP float ptr [EAX + 0x1c]         ; 00520a6c
    JMP 0x00520a29                      ; 00520a6f
        ;   XREF to: 00520a29 (UNCONDITIONAL_JUMP)  ; LAB_00520a29
    MOV EAX,0x2                         ; 00520a71
        ;   Label: LAB_00520a71
    ADD ESP,0x8                         ; 00520a76
    RET                                 ; 00520a79

