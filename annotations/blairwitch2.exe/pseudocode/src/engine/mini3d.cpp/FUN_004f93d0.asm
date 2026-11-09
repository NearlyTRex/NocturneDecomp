; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_mini3d_cpp_FUN_004f93d0(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_004f8ffe at 004f900a
;   engine_mini3d.cpp_FUN_004f90d0 at 004f918f
;
; Referenced Globals:
;   undefined4 DAT_005de000
;   undefined4 DAT_01d098dc
;   undefined4 DAT_01d0d2d4
;
; *****************************************************************************

section .text

    FLD float ptr [0x01d0d2d4]          ; 004f93d0 | DAT_01d0d2d4
        ;   Label: engine_mini3d.cpp_FUN_004f93d0
    FADD float ptr [0x005de000]         ; 004f93d6 | DAT_005de000
    FST float ptr [0x01d0d2d4]          ; 004f93dc | DAT_01d0d2d4
    FCOMP float ptr [0x01d098dc]        ; 004f93e2 | DAT_01d098dc
    FNSTSW AX                           ; 004f93e8
    SAHF                                ; 004f93ea
    JC 0x004f93f3                       ; 004f93eb
        ;   XREF to: 004f93f3 (CONDITIONAL_JUMP)  ; LAB_004f93f3
    MOV EAX,[0x01d0d2d4]                ; 004f93ed | DAT_01d0d2d4
    RET                                 ; 004f93f2
    MOV EAX,[0x01d098dc]                ; 004f93f3 | DAT_01d098dc
        ;   Label: LAB_004f93f3
    MOV [0x01d0d2d4],EAX                ; 004f93f8 | DAT_01d0d2d4
    MOV EAX,[0x01d0d2d4]                ; 004f93fd | DAT_01d0d2d4
    RET                                 ; 004f9402

