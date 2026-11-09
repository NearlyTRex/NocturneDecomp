; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_menu.cpp_FUN_004e7860 at 004e7927
;
; Referenced Globals:
;   undefined4 DAT_005c927d
;   undefined4 DAT_01d88644
;
; *****************************************************************************

section .text

    FLD float ptr [0x01d88644]          ; 004f99b0 | DAT_01d88644
        ;   Label: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0
    FCOMP double ptr [0x005c927d]       ; 004f99b6 | DAT_005c927d
    FNSTSW AX                           ; 004f99bc
    SAHF                                ; 004f99be
    JC 0x004f99c4                       ; 004f99bf
        ;   XREF to: 004f99c4 (CONDITIONAL_JUMP)  ; LAB_004f99c4
    XOR EAX,EAX                         ; 004f99c1
    RET                                 ; 004f99c3
    MOV EAX,0x1                         ; 004f99c4
        ;   Label: LAB_004f99c4
    RET                                 ; 004f99c9

