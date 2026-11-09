; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005b2610(int x_coord,int y_coord)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b2610
        ;   Label: wincore_winrun.cpp_plotClippedPixel_FUN_005b2610
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b2614
    CMP EDX,dword ptr [0x01c4f008]      ; 005b2618 | DAT_01c4f008
    JLE 0x005b2638                      ; 005b261e
        ;   XREF to: 005b2638 (CONDITIONAL_JUMP)  ; LAB_005b2638
    CMP EAX,dword ptr [0x01c4f00c]      ; 005b2620 | DAT_01c4f00c
    JLE 0x005b2638                      ; 005b2626
        ;   XREF to: 005b2638 (CONDITIONAL_JUMP)  ; LAB_005b2638
    CMP EDX,dword ptr [0x01c4f010]      ; 005b2628 | DAT_01c4f010
    JGE 0x005b2638                      ; 005b262e
        ;   XREF to: 005b2638 (CONDITIONAL_JUMP)  ; LAB_005b2638
    CMP EAX,dword ptr [0x01c4f014]      ; 005b2630 | DAT_01c4f014
    JL 0x005b2639                       ; 005b2636
        ;   XREF to: 005b2639 (CONDITIONAL_JUMP)  ; LAB_005b2639
    RET                                 ; 005b2638
        ;   Label: LAB_005b2638
    PUSH EAX                            ; 005b2639
        ;   Label: LAB_005b2639
    PUSH EDX                            ; 005b263a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 005b263b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 005b2640
    RET                                 ; 005b2643

