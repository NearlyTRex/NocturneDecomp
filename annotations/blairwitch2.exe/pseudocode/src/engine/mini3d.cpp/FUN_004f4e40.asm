; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f4e40(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d098f0
;   undefined4 DAT_0264bc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4e40
        ;   Label: engine_mini3d.cpp_FUN_004f4e40
    MOV EDX,dword ptr [0x0264bc80]      ; 004f4e44 | DAT_0264bc80
    MOV [0x01d098f0],EAX                ; 004f4e4a | DAT_01d098f0
    TEST EDX,EDX                        ; 004f4e4f
    JZ 0x004f4e5c                       ; 004f4e51
        ;   XREF to: 004f4e5c (CONDITIONAL_JUMP)  ; LAB_004f4e5c
    CMP dword ptr [0x01c37788],0x0      ; 004f4e53 | DAT_01c37788
    JNZ 0x004f4e5d                      ; 004f4e5a
        ;   XREF to: 004f4e5d (CONDITIONAL_JUMP)  ; LAB_004f4e5d
    RET                                 ; 004f4e5c
        ;   Label: LAB_004f4e5c
    PUSH EAX                            ; 004f4e5d
        ;   Label: LAB_004f4e5d
    CALL dword ptr [0x0264bc80]         ; 004f4e5e | DAT_0264bc80
    ADD ESP,0x4                         ; 004f4e64
    RET                                 ; 004f4e67

