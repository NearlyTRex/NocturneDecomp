; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004df170(void)
;
;
; XREF[1]:
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 at 004cf4ca
;
; Referenced Globals:
;   undefined4 DAT_0058a966
;   undefined4 DAT_01ccdec4
;
; *****************************************************************************

section .text

    FLD float ptr [0x01ccdec4]          ; 004df170 | DAT_01ccdec4
        ;   Label: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004df170
    FCOMP double ptr [0x0058a966]       ; 004df176 | DAT_0058a966
    FNSTSW AX                           ; 004df17c
    SAHF                                ; 004df17e
    JC 0x004df184                       ; 004df17f
        ;   XREF to: 004df184 (CONDITIONAL_JUMP)  ; LAB_004df184
    XOR EAX,EAX                         ; 004df181
    RET                                 ; 004df183
    MOV EAX,0x1                         ; 004df184
        ;   Label: LAB_004df184
    RET                                 ; 004df189

