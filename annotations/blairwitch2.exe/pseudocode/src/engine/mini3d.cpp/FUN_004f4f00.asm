; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f4f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098e8
;   undefined4 DAT_01d098ec
;   undefined4 DAT_0264bc78
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4f00
        ;   Label: engine_mini3d.cpp_FUN_004f4f00
    MOV [0x01d098e4],EAX                ; 004f4f04 | DAT_01d098e4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f4f09
    MOV [0x01d098e8],EAX                ; 004f4f0d | DAT_01d098e8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f4f12
    MOV EDX,dword ptr [0x0264bc78]      ; 004f4f16 | DAT_0264bc78
    MOV [0x01d098ec],EAX                ; 004f4f1c | DAT_01d098ec
    TEST EDX,EDX                        ; 004f4f21
    JZ 0x004f4f2e                       ; 004f4f23
        ;   XREF to: 004f4f2e (CONDITIONAL_JUMP)  ; LAB_004f4f2e
    CMP dword ptr [0x01c37788],0x0      ; 004f4f25 | DAT_01c37788
    JNZ 0x004f4f2f                      ; 004f4f2c
        ;   XREF to: 004f4f2f (CONDITIONAL_JUMP)  ; LAB_004f4f2f
    RET                                 ; 004f4f2e
        ;   Label: LAB_004f4f2e
    PUSH dword ptr [0x01d09860]         ; 004f4f2f | DAT_01d09860
        ;   Label: LAB_004f4f2f
    PUSH EAX                            ; 004f4f35
    PUSH dword ptr [ESP + 0x10]         ; 004f4f36
    PUSH dword ptr [ESP + 0x10]         ; 004f4f3a
    CALL dword ptr [0x0264bc78]         ; 004f4f3e | DAT_0264bc78
    ADD ESP,0x10                        ; 004f4f44
    RET                                 ; 004f4f47

