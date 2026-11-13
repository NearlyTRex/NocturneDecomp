; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_004f3af0(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_drawLine_FUN_004f3700 at 004f370a
;   engine_mini3d.cpp_fillRect_FUN_004f37e0 at 004f389f
;
; Referenced Globals:
;   undefined4 DAT_005c8349
;   undefined4 DAT_01d76cbc
;   undefined4 DAT_01d7a6b4
;
; *****************************************************************************

section .text

    FLD float ptr [0x01d7a6b4]          ; 004f3af0 | DAT_01d7a6b4
        ;   Label: engine_mini3d.cpp_nextDepth2D_FUN_004f3af0
    FADD float ptr [0x005c8349]         ; 004f3af6 | DAT_005c8349
    FST float ptr [0x01d7a6b4]          ; 004f3afc | DAT_01d7a6b4
    FCOMP float ptr [0x01d76cbc]        ; 004f3b02 | DAT_01d76cbc
    FNSTSW AX                           ; 004f3b08
    SAHF                                ; 004f3b0a
    JC 0x004f3b13                       ; 004f3b0b
        ;   XREF to: 004f3b13 (CONDITIONAL_JUMP)  ; LAB_004f3b13
    MOV EAX,[0x01d7a6b4]                ; 004f3b0d | DAT_01d7a6b4
    RET                                 ; 004f3b12
    MOV EAX,[0x01d76cbc]                ; 004f3b13 | DAT_01d76cbc
        ;   Label: LAB_004f3b13
    MOV [0x01d7a6b4],EAX                ; 004f3b18 | DAT_01d7a6b4
    MOV EAX,[0x01d7a6b4]                ; 004f3b1d | DAT_01d7a6b4
    RET                                 ; 004f3b22

