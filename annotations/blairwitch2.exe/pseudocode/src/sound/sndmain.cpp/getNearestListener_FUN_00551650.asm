; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00551650(double pos_x,double pos_y,double pos_z)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 at 0054e99a
;
; Referenced Globals:
;   undefined4 DAT_02648428
;   undefined4 DAT_02648430
;   undefined4 DAT_02648438
;   undefined4 DAT_02648440
;   undefined4 DAT_02648448
;   undefined4 DAT_02648450
;   undefined4 DAT_026484bc
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 00551650
        ;   Label: sound_sndmain.cpp_getNearestListener_FUN_00551650
    CMP dword ptr [0x026484bc],0x0      ; 00551653 | DAT_026484bc
    JZ 0x005516b9                       ; 0055165a
        ;   XREF to: 005516b9 (CONDITIONAL_JUMP)  ; LAB_005516b9
    FLD double ptr [ESP + 0x34]         ; 0055165c
    FLD ST0                             ; 00551660
    FSUB double ptr [0x02648428]        ; 00551662 | DAT_02648428
    FMUL ST0                            ; 00551668
    FLD double ptr [ESP + 0x3c]         ; 0055166a
    FLD ST0                             ; 0055166e
    FSUB double ptr [0x02648438]        ; 00551670 | DAT_02648438
    FMUL ST0                            ; 00551676
    FLD double ptr [ESP + 0x44]         ; 00551678
    FLD ST0                             ; 0055167c
    FXCH ST2                            ; 0055167e
    FADDP ST4,ST0                       ; 00551680
    FXCH                                ; 00551682
    FSUB double ptr [0x02648448]        ; 00551684 | DAT_02648448
    FMUL ST0                            ; 0055168a
    FADDP ST3,ST0                       ; 0055168c
    FXCH ST3                            ; 0055168e
    FSUB double ptr [0x02648430]        ; 00551690 | DAT_02648430
    FMUL ST0                            ; 00551696
    FXCH                                ; 00551698
    FSUB double ptr [0x02648440]        ; 0055169a | DAT_02648440
    FMUL ST0                            ; 005516a0
    FADDP                               ; 005516a2
    FXCH ST2                            ; 005516a4
    FSUB double ptr [0x02648450]        ; 005516a6 | DAT_02648450
    FMUL ST0                            ; 005516ac
    FADDP ST2,ST0                       ; 005516ae
    FXCH                                ; 005516b0
    FCOMPP                              ; 005516b2
    FNSTSW AX                           ; 005516b4
    SAHF                                ; 005516b6
    JBE 0x005516bf                      ; 005516b7
        ;   XREF to: 005516bf (CONDITIONAL_JUMP)  ; LAB_005516bf
    XOR EAX,EAX                         ; 005516b9
        ;   Label: LAB_005516b9
    ADD ESP,0x30                        ; 005516bb
    RET                                 ; 005516be
    MOV EAX,0x1                         ; 005516bf
        ;   Label: LAB_005516bf
    ADD ESP,0x30                        ; 005516c4
    RET                                 ; 005516c7

