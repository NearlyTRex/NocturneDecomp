; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_00518320(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_drawLine_FUN_00517f30 at 00517f3a
;   engine_mini3d.cpp_fillRect_FUN_00518010 at 005180cf
;
; Referenced Globals:
;   undefined4 DAT_005e9047
;   undefined4 DAT_01d2253c
;   undefined4 DAT_01d25f34
;
; *****************************************************************************

section .text

    FLD float ptr [0x01d25f34]          ; 00518320 | DAT_01d25f34
        ;   Label: engine_mini3d.cpp_nextDepth2D_FUN_00518320
    FADD float ptr [0x005e9047]         ; 00518326 | DAT_005e9047
    FST float ptr [0x01d25f34]          ; 0051832c | DAT_01d25f34
    FCOMP float ptr [0x01d2253c]        ; 00518332 | DAT_01d2253c
    FNSTSW AX                           ; 00518338
    SAHF                                ; 0051833a
    JC 0x00518343                       ; 0051833b
        ;   XREF to: 00518343 (CONDITIONAL_JUMP)  ; LAB_00518343
    MOV EAX,[0x01d25f34]                ; 0051833d | DAT_01d25f34
    RET                                 ; 00518342
    MOV EAX,[0x01d2253c]                ; 00518343 | DAT_01d2253c
        ;   Label: LAB_00518343
    MOV [0x01d25f34],EAX                ; 00518348 | DAT_01d25f34
    MOV EAX,[0x01d25f34]                ; 0051834d | DAT_01d25f34
    RET                                 ; 00518352

