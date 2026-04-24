; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_displayPalette_FUN_00461560(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
; Local Variables:
; char[80]         Stack[-0x7c]:80  local_7c
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0046079f
;
; Referenced Globals:
;   TerminatedCString s_s_3d_0061beed
;   TerminatedCString s_Hit_a_key_0061bef1
;   undefined4 s_it_a_key..._0061bef2
;   undefined4 s_t_a_key..._0061bef3
;   undefined4 s_Hit_a_key_0061bef1+3
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_fillRectColor_FUN_00403170
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461560
        ;   Label: shape_design.c_displayPalette_FUN_00461560
    PUSH ESI                            ; 00461561
    PUSH EDI                            ; 00461562
    PUSH EBP                            ; 00461563
    MOV EBP,ESP                         ; 00461564
    SUB ESP,0x6c                        ; 00461566
    MOV dword ptr [EBP + -0xc],0xa      ; 0046156c
    MOV dword ptr [EBP + -0x8],0x8      ; 00461573
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046157a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046157f
    MOV dword ptr [EBP + -0x4],0x0      ; 00461586
    JMP 0x00461595                      ; 0046158d
        ;   XREF to: 00461595 (UNCONDITIONAL_JUMP)  ; LAB_00461595
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046158f
        ;   Label: LAB_0046158f
    INC dword ptr [EBP + -0x1c]         ; 00461592
    CMP dword ptr [EBP + -0x1c],0x100   ; 00461595
        ;   Label: LAB_00461595
    JGE 0x00461649                      ; 0046159c
        ;   XREF to: 00461649 (CONDITIONAL_JUMP)  ; LAB_00461649
    MOV ECX,0x10                        ; 004615a2
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004615a7
    MOV EDX,dword ptr [EBP + -0x1c]     ; 004615aa
    SAR EDX,0x1f                        ; 004615ad
    IDIV ECX                            ; 004615b0
    MOV EAX,dword ptr [EBP + -0xc]      ; 004615b2
    ADD EAX,0x4                         ; 004615b5
    IMUL EAX,EDX                        ; 004615b8
    ADD EAX,0x16                        ; 004615bb
    MOV dword ptr [EBP + -0x14],EAX     ; 004615be
    MOV EAX,dword ptr [EBP + -0x8]      ; 004615c1
    ADD EAX,0x4                         ; 004615c4
    IMUL EAX,dword ptr [EBP + -0x4]     ; 004615c7
    ADD EAX,0x4                         ; 004615cb
    MOV dword ptr [EBP + -0x10],EAX     ; 004615ce
    MOV EAX,dword ptr [EBP + -0x4]      ; 004615d1
    SHL EAX,0x4                         ; 004615d4
    PUSH EAX                            ; 004615d7
    MOV EAX,0x61beed                    ; 004615d8 | = "%3d"
    PUSH EAX                            ; 004615dd | = "%3d"
    LEA EAX,[EBP + -0x6c]               ; 004615de
    PUSH EAX                            ; 004615e1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004615e2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004615e7
    MOV EAX,dword ptr [EBP + -0x8]      ; 004615ea
    ADD EAX,0x4                         ; 004615ed
    IMUL EAX,dword ptr [EBP + -0x4]     ; 004615f0
    ADD EAX,0x4                         ; 004615f4
    PUSH EAX                            ; 004615f7
    PUSH 0x0                            ; 004615f8
    LEA EAX,[EBP + -0x6c]               ; 004615fa
    PUSH EAX                            ; 004615fd
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004615fe
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461603
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461606
    PUSH EAX                            ; 00461609
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046160a
    ADD EAX,dword ptr [EBP + -0x8]      ; 0046160d
    DEC EAX                             ; 00461610
    PUSH EAX                            ; 00461611
    MOV EAX,dword ptr [EBP + -0x14]     ; 00461612
    ADD EAX,dword ptr [EBP + -0xc]      ; 00461615
    DEC EAX                             ; 00461618
    PUSH EAX                            ; 00461619
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046161a
    PUSH EAX                            ; 0046161d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046161e
    PUSH EAX                            ; 00461621
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00461622
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00461627
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0046162a
    INC EDX                             ; 0046162d
    MOV ECX,0x10                        ; 0046162e
    MOV EAX,EDX                         ; 00461633
    SAR EDX,0x1f                        ; 00461635
    IDIV ECX                            ; 00461638
    TEST EDX,EDX                        ; 0046163a
    JNZ 0x00461644                      ; 0046163c
        ;   XREF to: 00461644 (CONDITIONAL_JUMP)  ; LAB_00461644
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046163e
    INC dword ptr [EBP + -0x4]          ; 00461641
    JMP 0x0046158f                      ; 00461644
        ;   XREF to: 0046158f (UNCONDITIONAL_JUMP)  ; LAB_0046158f
        ;   Label: LAB_00461644
    MOV ESI,0x61bef1                    ; 00461649 | = "Hit a key..."
        ;   Label: LAB_00461649
    LEA EDI,[EBP + -0x6c]               ; 0046164e
    PUSH EDI                            ; 00461651
    MOV AL,byte ptr [ESI]               ; 00461652 | = "Hit a key..." | s_t_a_key..._0061bef3
        ;   Label: LAB_00461652
    MOV byte ptr [EDI],AL               ; 00461654
    CMP AL,0x0                          ; 00461656
    JZ 0x0046166a                       ; 00461658
        ;   XREF to: 0046166a (CONDITIONAL_JUMP)  ; LAB_0046166a
    MOV AL,byte ptr [ESI + 0x1]         ; 0046165a | s_it_a_key..._0061bef2 | s_Hit_a_key_0061bef1+3
    ADD ESI,0x2                         ; 0046165d
    MOV byte ptr [EDI + 0x1],AL         ; 00461660
    ADD EDI,0x2                         ; 00461663
    CMP AL,0x0                          ; 00461666
    JNZ 0x00461652                      ; 00461668
        ;   XREF to: 00461652 (CONDITIONAL_JUMP)  ; LAB_00461652
    POP EDI                             ; 0046166a
        ;   Label: LAB_0046166a
    MOV ESI,dword ptr [0x00679398]      ; 0046166b | g_WindowHeight
    SUB ESI,0xb                         ; 00461671
    PUSH ESI                            ; 00461674
    PUSH 0x0                            ; 00461675
    LEA ESI,[EBP + -0x6c]               ; 00461677
    PUSH ESI                            ; 0046167a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046167b
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461680
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00461683
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00461688
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046168d
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00461692
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESP,EBP                         ; 00461697
    POP EBP                             ; 00461699
    POP EDI                             ; 0046169a
    POP ESI                             ; 0046169b
    POP EBX                             ; 0046169c
    RET                                 ; 0046169d

