; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_clearZBufferNative_FUN_00560dd4(void)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 0044921a
;   core_set.cpp_FUN_005365c0 at 00536928
;   core_setdir.cpp_FUN_00540cf0 at 00540dc8
;   engine_mini3d.cpp_FUN_004ec96e at 004ec97e
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined8 DAT_00604d1c
;   undefined4 DAT_00604d24
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00560dd4
        ;   Label: engine_special.cpp_clearZBufferNative_FUN_00560dd4
    PUSH EDI                            ; 00560dd5
    PUSHAD                              ; 00560dd6
    CLD                                 ; 00560dd7
    PUSH DS                             ; 00560dd8
    POP ES                              ; 00560dd9
    MOV EDI,dword ptr [0x01c60dac]      ; 00560dda | DAT_01c60dac
    MOV EAX,[0x01c6b5ac]                ; 00560de0 | DAT_01c6b5ac
    MOV ECX,dword ptr [0x005fba18]      ; 00560de5 | DAT_005fba18
    MUL ECX                             ; 00560deb
    SHL EAX,0x2                         ; 00560ded
    ADD EDI,EAX                         ; 00560df0
    MOV EAX,[0x01c6b5b4]                ; 00560df2 | DAT_01c6b5b4
    SUB EAX,dword ptr [0x01c6b5ac]      ; 00560df7 | DAT_01c6b5ac
    INC EAX                             ; 00560dfd
    MOV ECX,dword ptr [0x005fba18]      ; 00560dfe | DAT_005fba18
    MUL ECX                             ; 00560e04
    MOV ECX,EAX                         ; 00560e06
    FLD double ptr [0x00604d1c]         ; 00560e08 | DAT_00604d1c
    FST double ptr [EDI]                ; 00560e0e
        ;   Label: LAB_00560e0e
    FST double ptr [EDI + 0x8]          ; 00560e10
    FST double ptr [EDI + 0x10]         ; 00560e13
    FST double ptr [EDI + 0x18]         ; 00560e16
    FST double ptr [EDI + 0x20]         ; 00560e19
    FST double ptr [EDI + 0x28]         ; 00560e1c
    FST double ptr [EDI + 0x30]         ; 00560e1f
    FST double ptr [EDI + 0x38]         ; 00560e22
    ADD EDI,0x40                        ; 00560e25
    SUB ECX,0x10                        ; 00560e28
    JG 0x00560e0e                       ; 00560e2b
        ;   XREF to: 00560e0e (CONDITIONAL_JUMP)  ; LAB_00560e0e
    FSTP double ptr [0x00604d24]        ; 00560e2d | DAT_00604d24
    POPAD                               ; 00560e33
    POP EDI                             ; 00560e34
    POP ESI                             ; 00560e35
    RET                                 ; 00560e36

