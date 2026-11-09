; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00480480(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   height
; ETextAlignment   Stack[0x1c]:4   alignment_mode
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90 at 00480aac
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20 at 00480d44
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40 at 00480c60
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60 at 00480b80
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0 at 0048090c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0 at 004809dc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820 at 0048083c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750 at 0048076c
;
; Referenced Globals:
;   void* switchdataD_00480434 = 0048053d
;   void* switchdataD_00480454 = 00480696
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11e8
;   undefined4 DAT_01bc11ec
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402440
;   engine_2d.c_FUN_00402540
;   engine_2d.c_FUN_00402600
;   engine_2d.c_FUN_004026d0
;   engine_2d.c_FUN_00402800
;   engine_2d.c_FUN_00402810
;   engine_2d.c_FUN_00402830
;   engine_2d.c_FUN_00402840
;   engine_2d.c_FUN_00402850
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150
;   engine_font.cpp_FUN_004c2060
;   engine_font.cpp_FUN_004c2690
;   engine_font.cpp_FUN_004c26b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480480
        ;   Label: cockpit_drawsurf.cpp_FUN_00480480
    PUSH ESI                            ; 00480481
    PUSH EDI                            ; 00480482
    PUSH EBP                            ; 00480483
    SUB ESP,0x20                        ; 00480484
    MOV EAX,dword ptr [ESP + 0x34]      ; 00480487
    MOV EDI,dword ptr [ESP + 0x38]      ; 0048048b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0048048f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00480493
    MOV EBP,dword ptr [ESP + 0x48]      ; 00480497
    MOV ECX,dword ptr [ESP + 0x40]      ; 0048049b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048049f
    ADD ECX,EDX                         ; 004804a2
    ADD ESI,EDX                         ; 004804a4
    MOV EDX,dword ptr [EAX + 0xc]       ; 004804a6
    ADD EBX,EDX                         ; 004804a9
    ADD EBP,EDX                         ; 004804ab
    MOV EDX,dword ptr [0x01c4f008]      ; 004804ad | DAT_01c4f008
    MOV dword ptr [ESP + 0x4],EDX       ; 004804b3
    MOV EDX,dword ptr [0x01c4f010]      ; 004804b7 | DAT_01c4f010
    MOV dword ptr [ESP + 0x14],EDX      ; 004804bd
    MOV EDX,dword ptr [0x01c4f00c]      ; 004804c1 | DAT_01c4f00c
    MOV dword ptr [ESP + 0x8],EDX       ; 004804c7
    MOV EDX,dword ptr [0x01c4f014]      ; 004804cb | DAT_01c4f014
    MOV dword ptr [ESP + 0x10],EDX      ; 004804d1
    MOV EDX,dword ptr [EAX + 0x10]      ; 004804d5
    MOV dword ptr [0x01c4f008],EDX      ; 004804d8 | DAT_01c4f008
    MOV EDX,dword ptr [EAX + 0x18]      ; 004804de
    MOV dword ptr [0x01c4f010],EDX      ; 004804e1 | DAT_01c4f010
    MOV EDX,dword ptr [EAX + 0x14]      ; 004804e7
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004804ea
    MOV [0x01c4f014],EAX                ; 004804ed | DAT_01c4f014
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004804f2
    SHL EAX,0x2                         ; 004804f6
    MOV dword ptr [ESP + 0x40],ECX      ; 004804f9
    MOV dword ptr [ESP + 0x1c],EAX      ; 004804fd
    MOV EAX,[0x01bc11ec]                ; 00480501 | DAT_01bc11ec
    MOV dword ptr [0x01c4f00c],EDX      ; 00480506 | DAT_01c4f00c
    TEST EAX,EAX                        ; 0048050c
    JZ 0x0048070b                       ; 0048050e
        ;   XREF to: 0048070b (CONDITIONAL_JUMP)  ; LAB_0048070b
    CALL engine_font.cpp_FUN_004c2690   ; 00480514
        ;   XREF to: 004c2690 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2690()
    MOV ECX,dword ptr [0x01bc11e4]      ; 00480519 | DAT_01bc11e4
    PUSH ECX                            ; 0048051f
    MOV dword ptr [ESP + 0x4],EAX       ; 00480520
    CALL engine_font.cpp_FUN_004c26b0   ; 00480524
        ;   XREF to: 004c26b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004c26b0(int text_color)
    ADD ESP,0x4                         ; 00480529
    CMP dword ptr [ESP + 0x4c],0x7      ; 0048052c
    JA 0x00480553                       ; 00480531
        ;   XREF to: 00480553 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00480533
    JMP dword ptr [EAX + 0x480434]      ; 00480537 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 0048053d
        ;   Label: caseD_0
    PUSH -0x1                           ; 0048053e
    PUSH -0x3                           ; 00480540
    PUSH EBX                            ; 00480542
    PUSH ESI                            ; 00480543
    MOV EBP,dword ptr [0x01bc11ec]      ; 00480544 | DAT_01bc11ec
    PUSH EBP                            ; 0048054a
        ;   Label: LAB_0048054a
    CALL engine_font.cpp_FUN_004c2060   ; 0048054b
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2060(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00480550
        ;   Label: LAB_00480550
    MOV EAX,dword ptr [ESP]             ; 00480553
        ;   Label: default
    PUSH EAX                            ; 00480556
    CALL engine_font.cpp_FUN_004c26b0   ; 00480557
        ;   XREF to: 004c26b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004c26b0(int text_color)
    ADD ESP,0x4                         ; 0048055c
        ;   Label: LAB_0048055c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048055f
    MOV [0x01c4f008],EAX                ; 00480563 | DAT_01c4f008
    MOV EAX,dword ptr [ESP + 0x14]      ; 00480568
    MOV [0x01c4f010],EAX                ; 0048056c | DAT_01c4f010
    MOV EAX,dword ptr [ESP + 0x8]       ; 00480571
    MOV [0x01c4f00c],EAX                ; 00480575 | DAT_01c4f00c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048057a
    MOV [0x01c4f014],EAX                ; 0048057e | DAT_01c4f014
    ADD ESP,0x20                        ; 00480583
    POP EBP                             ; 00480586
    POP EDI                             ; 00480587
    POP ESI                             ; 00480588
    POP EBX                             ; 00480589
    RET                                 ; 0048058a
    PUSH EDI                            ; 0048058b
        ;   Label: caseD_1
    PUSH -0x1                           ; 0048058c
    PUSH -0x3                           ; 0048058e
    PUSH EBX                            ; 00480590
    PUSH ESI                            ; 00480591
    MOV EDI,dword ptr [0x01bc11ec]      ; 00480592 | DAT_01bc11ec
    PUSH EDI                            ; 00480598
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150 ; 00480599
        ;   XREF to: 004c2150 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00480550                      ; 0048059e
        ;   XREF to: 00480550 (UNCONDITIONAL_JUMP)  ; LAB_00480550
    PUSH EDI                            ; 004805a0
        ;   Label: caseD_2
    PUSH -0x1                           ; 004805a1
    PUSH -0x3                           ; 004805a3
    PUSH EBX                            ; 004805a5
    PUSH ESI                            ; 004805a6
    MOV ESI,dword ptr [0x01bc11ec]      ; 004805a7 | DAT_01bc11ec
    PUSH ESI                            ; 004805ad
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250 ; 004805ae
        ;   XREF to: 004c2250 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00480550                      ; 004805b3
        ;   XREF to: 00480550 (UNCONDITIONAL_JUMP)  ; LAB_00480550
    MOV EBP,dword ptr [0x01bc11ec]      ; 004805b5 | DAT_01bc11ec
        ;   Label: caseD_3
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 004805bb
    MOV EAX,EDX                         ; 004805c1
    SAR EDX,0x1f                        ; 004805c3
    SUB EAX,EDX                         ; 004805c6
    SAR EAX,0x1                         ; 004805c8
    PUSH EDI                            ; 004805ca
    PUSH -0x1                           ; 004805cb
    PUSH -0x3                           ; 004805cd
    SUB EBX,EAX                         ; 004805cf
    PUSH EBX                            ; 004805d1
    PUSH ESI                            ; 004805d2
    JMP 0x0048054a                      ; 004805d3
        ;   XREF to: 0048054a (UNCONDITIONAL_JUMP)  ; LAB_0048054a
    MOV EBP,dword ptr [0x01bc11ec]      ; 004805d8 | DAT_01bc11ec
        ;   Label: caseD_4
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 004805de
    MOV EAX,EDX                         ; 004805e4
    SAR EDX,0x1f                        ; 004805e6
    SUB EAX,EDX                         ; 004805e9
    SAR EAX,0x1                         ; 004805eb
    PUSH EDI                            ; 004805ed
    PUSH -0x1                           ; 004805ee
    PUSH -0x3                           ; 004805f0
    SUB EBX,EAX                         ; 004805f2
    PUSH EBX                            ; 004805f4
    PUSH ESI                            ; 004805f5
    PUSH EBP                            ; 004805f6
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250 ; 004805f7
        ;   XREF to: 004c2250 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00480550                      ; 004805fc
        ;   XREF to: 00480550 (UNCONDITIONAL_JUMP)  ; LAB_00480550
    PUSH EDI                            ; 00480601
        ;   Label: caseD_5
    PUSH -0x1                           ; 00480602
    PUSH -0x3                           ; 00480604
    PUSH EBX                            ; 00480606
    MOV ECX,dword ptr [ESP + 0x50]      ; 00480607
    PUSH ECX                            ; 0048060b
    PUSH ESI                            ; 0048060c
    MOV EBX,dword ptr [0x01bc11ec]      ; 0048060d | DAT_01bc11ec
    PUSH EBX                            ; 00480613
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 00480614
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 00480619
    JMP 0x00480553                      ; 0048061c
        ;   XREF to: 00480553 (UNCONDITIONAL_JUMP)  ; default
    ADD EBX,EBP                         ; 00480621
        ;   Label: caseD_6
    MOV EBP,dword ptr [0x01bc11ec]      ; 00480623 | DAT_01bc11ec
    LEA EDX,[EBX + 0x1]                 ; 00480629
    MOV EAX,dword ptr [EBP + 0x41f0]    ; 0048062c
    SUB EDX,EAX                         ; 00480632
    MOV EAX,EDX                         ; 00480634
    SAR EDX,0x1f                        ; 00480636
    SUB EAX,EDX                         ; 00480639
    SAR EAX,0x1                         ; 0048063b
    PUSH EDI                            ; 0048063d
    PUSH -0x1                           ; 0048063e
    PUSH -0x3                           ; 00480640
    PUSH EAX                            ; 00480642
    PUSH ESI                            ; 00480643
    JMP 0x0048054a                      ; 00480644
        ;   XREF to: 0048054a (UNCONDITIONAL_JUMP)  ; LAB_0048054a
    ADD EBX,EBP                         ; 00480649
        ;   Label: caseD_7
    MOV EBP,dword ptr [0x01bc11ec]      ; 0048064b | DAT_01bc11ec
    INC EBX                             ; 00480651
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 00480652
    SUB EBX,EDX                         ; 00480658
    MOV EDX,EBX                         ; 0048065a
    MOV EAX,EBX                         ; 0048065c
    SAR EDX,0x1f                        ; 0048065e
    SUB EAX,EDX                         ; 00480661
    SAR EAX,0x1                         ; 00480663
    PUSH EDI                            ; 00480665
    PUSH -0x1                           ; 00480666
    PUSH -0x3                           ; 00480668
    PUSH EAX                            ; 0048066a
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048066b
    PUSH EDX                            ; 0048066f
    PUSH ESI                            ; 00480670
    PUSH EBP                            ; 00480671
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 00480672
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 00480677
    JMP 0x00480553                      ; 0048067a
        ;   XREF to: 00480553 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 0048067f
        ;   Label: caseD_1
    PUSH ESI                            ; 00480680
    PUSH EDI                            ; 00480681
    CALL engine_2d.c_FUN_00402540       ; 00480682
        ;   XREF to: 00402540 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402540(char * text, int x, int y)
    JMP 0x0048069e                      ; 00480687
        ;   XREF to: 0048069e (UNCONDITIONAL_JUMP)  ; LAB_0048069e
    PUSH EBX                            ; 00480689
        ;   Label: caseD_2
    PUSH ESI                            ; 0048068a
    PUSH EDI                            ; 0048068b
    CALL engine_2d.c_FUN_00402600       ; 0048068c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402600(char * text, int x, int y)
    JMP 0x0048069e                      ; 00480691
        ;   XREF to: 0048069e (UNCONDITIONAL_JUMP)  ; LAB_0048069e
    SUB EBX,0x5                         ; 00480693
        ;   Label: caseD_3
    PUSH EBX                            ; 00480696
        ;   Label: caseD_0
    PUSH ESI                            ; 00480697
        ;   Label: LAB_00480697
    PUSH EDI                            ; 00480698
    CALL engine_2d.c_drawTextColor_FUN_00402440 ; 00480699
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402440(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048069e
        ;   Label: LAB_0048069e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004806a1
        ;   Label: default
    PUSH EAX                            ; 004806a5
    CALL engine_2d.c_FUN_00402850       ; 004806a6
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402850(int color)
    ADD ESP,0x4                         ; 004806ab
    MOV EDX,dword ptr [ESP + 0xc]       ; 004806ae
    PUSH EDX                            ; 004806b2
    CALL engine_2d.c_FUN_00402810       ; 004806b3
        ;   XREF to: 00402810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402810(int enabled)
    JMP 0x0048055c                      ; 004806b8
        ;   XREF to: 0048055c (UNCONDITIONAL_JUMP)  ; LAB_0048055c
    SUB EBX,0x5                         ; 004806bd
        ;   Label: caseD_4
    PUSH EBX                            ; 004806c0
    PUSH ESI                            ; 004806c1
    PUSH EDI                            ; 004806c2
    CALL engine_2d.c_FUN_00402600       ; 004806c3
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402600(char * text, int x, int y)
    JMP 0x0048069e                      ; 004806c8
        ;   XREF to: 0048069e (UNCONDITIONAL_JUMP)  ; LAB_0048069e
    PUSH EBX                            ; 004806ca
        ;   Label: caseD_5
    MOV EBP,dword ptr [ESP + 0x44]      ; 004806cb
    PUSH EBP                            ; 004806cf
    PUSH ESI                            ; 004806d0
    PUSH EDI                            ; 004806d1
    CALL engine_2d.c_FUN_004026d0       ; 004806d2
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_004026d0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 004806d7
    JMP 0x004806a1                      ; 004806da
        ;   XREF to: 004806a1 (UNCONDITIONAL_JUMP)  ; default
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 004806dc
        ;   Label: caseD_6
    MOV EAX,EDX                         ; 004806e0
    SAR EDX,0x1f                        ; 004806e2
    SUB EAX,EDX                         ; 004806e5
    SAR EAX,0x1                         ; 004806e7
    PUSH EAX                            ; 004806e9
    JMP 0x00480697                      ; 004806ea
        ;   XREF to: 00480697 (UNCONDITIONAL_JUMP)  ; LAB_00480697
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 004806ec
        ;   Label: caseD_7
    MOV EAX,EDX                         ; 004806f0
    SAR EDX,0x1f                        ; 004806f2
    SUB EAX,EDX                         ; 004806f5
    SAR EAX,0x1                         ; 004806f7
    PUSH EAX                            ; 004806f9
    MOV EBX,dword ptr [ESP + 0x44]      ; 004806fa
    PUSH EBX                            ; 004806fe
    PUSH ESI                            ; 004806ff
    PUSH EDI                            ; 00480700
    CALL engine_2d.c_FUN_004026d0       ; 00480701
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_004026d0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 00480706
    JMP 0x004806a1                      ; 00480709
        ;   XREF to: 004806a1 (UNCONDITIONAL_JUMP)  ; default
    CALL engine_2d.c_FUN_00402800       ; 0048070b
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; int engine_2d.c_FUN_00402800()
        ;   Label: LAB_0048070b
    MOV dword ptr [ESP + 0xc],EAX       ; 00480710
    CALL engine_2d.c_FUN_00402840       ; 00480714
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; int engine_2d.c_FUN_00402840()
    MOV dword ptr [ESP + 0x18],EAX      ; 00480719
    CALL engine_2d.c_FUN_00402830       ; 0048071d
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402830()
    MOV EDX,dword ptr [0x01bc11e8]      ; 00480722 | DAT_01bc11e8
    PUSH EDX                            ; 00480728
    CALL engine_2d.c_FUN_00402850       ; 00480729
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402850(int color)
    ADD ESP,0x4                         ; 0048072e
    CMP dword ptr [ESP + 0x4c],0x7      ; 00480731
    JA 0x004806a1                       ; 00480736
        ;   XREF to: 004806a1 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048073c
    JMP dword ptr [EAX + 0x480454]      ; 00480740 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

