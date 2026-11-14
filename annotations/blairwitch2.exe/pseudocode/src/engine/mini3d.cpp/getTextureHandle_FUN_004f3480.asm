; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004f3480(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bcb4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcb4],0x0      ; 004f3480 | DAT_0264bcb4
        ;   Label: engine_mini3d.cpp_getTextureHandle_FUN_004f3480
    JZ 0x004f3492                       ; 004f3487
        ;   XREF to: 004f3492 (CONDITIONAL_JUMP)  ; LAB_004f3492
    CMP dword ptr [0x01c37788],0x0      ; 004f3489 | DAT_01c37788
    JNZ 0x004f3495                      ; 004f3490
        ;   XREF to: 004f3495 (CONDITIONAL_JUMP)  ; LAB_004f3495
    XOR EAX,EAX                         ; 004f3492
        ;   Label: LAB_004f3492
    RET                                 ; 004f3494
    CALL dword ptr [0x0264bcb4]         ; 004f3495 | DAT_0264bcb4
        ;   Label: LAB_004f3495
    RET                                 ; 004f349b

