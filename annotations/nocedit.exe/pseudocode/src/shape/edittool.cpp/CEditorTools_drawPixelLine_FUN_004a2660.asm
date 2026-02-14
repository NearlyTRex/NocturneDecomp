; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660(CEditorTools *this_ptr,int start_x,int start_y,int length)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   start_y
; int              Stack[0x10]:4   length
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 at 004a2906
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2660
        ;   Label: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
    PUSH ESI                            ; 004a2661
    PUSH EDI                            ; 004a2662
    PUSH EBP                            ; 004a2663
    SUB ESP,0x4                         ; 004a2664
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a2667
    TEST EBX,EBX                        ; 004a266b
    JL 0x004a2683                       ; 004a266d
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a266f
    TEST EDX,EDX                        ; 004a2673
    JL 0x004a2683                       ; 004a2675
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    CMP EBX,dword ptr [0x00679394]      ; 004a2677 | g_WindowWidth
    JL 0x004a270d                       ; 004a267d
        ;   XREF to: 004a270d (CONDITIONAL_JUMP)  ; LAB_004a270d
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a2683
        ;   Label: LAB_004a2683
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a2687
    NEG ESI                             ; 004a268b
    ADD EDI,ESI                         ; 004a268d
    LEA EBP,[ESI + EBX*0x1]             ; 004a268f
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a2692
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a2696
    ADD ESI,EBX                         ; 004a269a
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a269c
    MOV dword ptr [ESP],EAX             ; 004a26a0
    ADD EBX,EAX                         ; 004a26a3
    CMP EBX,dword ptr [ESP]             ; 004a26a5
        ;   Label: LAB_004a26a5
    JLE 0x004a109c                      ; 004a26a8
        ;   XREF to: 004a109c (CONDITIONAL_JUMP)  ; LAB_004a109c
    TEST EBP,EBP                        ; 004a26ae
    JL 0x004a26c2                       ; 004a26b0
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    TEST EDI,EDI                        ; 004a26b2
    JL 0x004a26c2                       ; 004a26b4
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EBP,dword ptr [0x00679394]      ; 004a26b6 | g_WindowWidth
    JL 0x004a275c                       ; 004a26bc
        ;   XREF to: 004a275c (CONDITIONAL_JUMP)  ; LAB_004a275c
    TEST ESI,ESI                        ; 004a26c2
        ;   Label: LAB_004a26c2
    JL 0x004a26d6                       ; 004a26c4
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    TEST EDI,EDI                        ; 004a26c6
    JL 0x004a26d6                       ; 004a26c8
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP ESI,dword ptr [0x00679394]      ; 004a26ca | g_WindowWidth
    JL 0x004a27a7                       ; 004a26d0
        ;   XREF to: 004a27a7 (CONDITIONAL_JUMP)  ; LAB_004a27a7
    TEST EBP,EBP                        ; 004a26d6
        ;   Label: LAB_004a26d6
    JL 0x004a26ea                       ; 004a26d8
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    TEST EBX,EBX                        ; 004a26da
    JL 0x004a26ea                       ; 004a26dc
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBP,dword ptr [0x00679394]      ; 004a26de | g_WindowWidth
    JL 0x004a27f2                       ; 004a26e4
        ;   XREF to: 004a27f2 (CONDITIONAL_JUMP)  ; LAB_004a27f2
    TEST ESI,ESI                        ; 004a26ea
        ;   Label: LAB_004a26ea
    JL 0x004a26fe                       ; 004a26ec
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    TEST EBX,EBX                        ; 004a26ee
    JL 0x004a26fe                       ; 004a26f0
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    CMP ESI,dword ptr [0x00679394]      ; 004a26f2 | g_WindowWidth
    JL 0x004a283d                       ; 004a26f8
        ;   XREF to: 004a283d (CONDITIONAL_JUMP)  ; LAB_004a283d
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a26fe
        ;   Label: LAB_004a26fe
    INC EBP                             ; 004a2702
    DEC ESI                             ; 004a2703
    DEC EBX                             ; 004a2704
    DEC ECX                             ; 004a2705
    INC EDI                             ; 004a2706
    MOV dword ptr [ESP + 0x24],ECX      ; 004a2707
    JMP 0x004a26a5                      ; 004a270b
        ;   XREF to: 004a26a5 (UNCONDITIONAL_JUMP)  ; LAB_004a26a5
    CMP EDX,dword ptr [0x00679398]      ; 004a270d | g_WindowHeight
        ;   Label: LAB_004a270d
    JGE 0x004a2683                      ; 004a2713
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    CMP EBX,dword ptr [0x02d02558]      ; 004a2719 | g_ClipLeft
    JL 0x004a2683                       ; 004a271f
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    CMP EBX,dword ptr [0x02d02560]      ; 004a2725 | g_ClipRight
    JGE 0x004a2683                      ; 004a272b
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    MOV EAX,EDX                         ; 004a2731
    CMP EAX,dword ptr [0x02d0255c]      ; 004a2733 | g_ClipTop
    JL 0x004a2683                       ; 004a2739
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    CMP EAX,dword ptr [0x02d02564]      ; 004a273f | g_ClipBottom
    JGE 0x004a2683                      ; 004a2745
        ;   XREF to: 004a2683 (CONDITIONAL_JUMP)  ; LAB_004a2683
    MOV ESI,EAX                         ; 004a274b
    PUSH ESI                            ; 004a274d
    PUSH EBX                            ; 004a274e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a274f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a2754
    JMP 0x004a2683                      ; 004a2757
        ;   XREF to: 004a2683 (UNCONDITIONAL_JUMP)  ; LAB_004a2683
    CMP EDI,dword ptr [0x00679398]      ; 004a275c | g_WindowHeight
        ;   Label: LAB_004a275c
    JGE 0x004a26c2                      ; 004a2762
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EBP,dword ptr [0x02d02558]      ; 004a2768 | g_ClipLeft
    JL 0x004a26c2                       ; 004a276e
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EBP,dword ptr [0x02d02560]      ; 004a2774 | g_ClipRight
    JGE 0x004a26c2                      ; 004a277a
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EDI,dword ptr [0x02d0255c]      ; 004a2780 | g_ClipTop
    JL 0x004a26c2                       ; 004a2786
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EDI,dword ptr [0x02d02564]      ; 004a278c | g_ClipBottom
    JGE 0x004a26c2                      ; 004a2792
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    PUSH EDI                            ; 004a2798
    PUSH EBP                            ; 004a2799
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a279a
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a279f
    JMP 0x004a26c2                      ; 004a27a2
        ;   XREF to: 004a26c2 (UNCONDITIONAL_JUMP)  ; LAB_004a26c2
    CMP EDI,dword ptr [0x00679398]      ; 004a27a7 | g_WindowHeight
        ;   Label: LAB_004a27a7
    JGE 0x004a26d6                      ; 004a27ad
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP ESI,dword ptr [0x02d02558]      ; 004a27b3 | g_ClipLeft
    JL 0x004a26d6                       ; 004a27b9
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP ESI,dword ptr [0x02d02560]      ; 004a27bf | g_ClipRight
    JGE 0x004a26d6                      ; 004a27c5
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP EDI,dword ptr [0x02d0255c]      ; 004a27cb | g_ClipTop
    JL 0x004a26d6                       ; 004a27d1
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP EDI,dword ptr [0x02d02564]      ; 004a27d7 | g_ClipBottom
    JGE 0x004a26d6                      ; 004a27dd
        ;   XREF to: 004a26d6 (CONDITIONAL_JUMP)  ; LAB_004a26d6
    PUSH EDI                            ; 004a27e3
    PUSH ESI                            ; 004a27e4
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a27e5
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a27ea
    JMP 0x004a26d6                      ; 004a27ed
        ;   XREF to: 004a26d6 (UNCONDITIONAL_JUMP)  ; LAB_004a26d6
    CMP EBX,dword ptr [0x00679398]      ; 004a27f2 | g_WindowHeight
        ;   Label: LAB_004a27f2
    JGE 0x004a26ea                      ; 004a27f8
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBP,dword ptr [0x02d02558]      ; 004a27fe | g_ClipLeft
    JL 0x004a26ea                       ; 004a2804
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBP,dword ptr [0x02d02560]      ; 004a280a | g_ClipRight
    JGE 0x004a26ea                      ; 004a2810
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBX,dword ptr [0x02d0255c]      ; 004a2816 | g_ClipTop
    JL 0x004a26ea                       ; 004a281c
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBX,dword ptr [0x02d02564]      ; 004a2822 | g_ClipBottom
    JGE 0x004a26ea                      ; 004a2828
        ;   XREF to: 004a26ea (CONDITIONAL_JUMP)  ; LAB_004a26ea
    PUSH EBX                            ; 004a282e
    PUSH EBP                            ; 004a282f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a2830
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a2835
    JMP 0x004a26ea                      ; 004a2838
        ;   XREF to: 004a26ea (UNCONDITIONAL_JUMP)  ; LAB_004a26ea
    CMP EBX,dword ptr [0x00679398]      ; 004a283d | g_WindowHeight
        ;   Label: LAB_004a283d
    JGE 0x004a26fe                      ; 004a2843
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    CMP ESI,dword ptr [0x02d02558]      ; 004a2849 | g_ClipLeft
    JL 0x004a26fe                       ; 004a284f
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    CMP ESI,dword ptr [0x02d02560]      ; 004a2855 | g_ClipRight
    JGE 0x004a26fe                      ; 004a285b
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    CMP EBX,dword ptr [0x02d0255c]      ; 004a2861 | g_ClipTop
    JL 0x004a26fe                       ; 004a2867
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    CMP EBX,dword ptr [0x02d02564]      ; 004a286d | g_ClipBottom
    JGE 0x004a26fe                      ; 004a2873
        ;   XREF to: 004a26fe (CONDITIONAL_JUMP)  ; LAB_004a26fe
    PUSH EBX                            ; 004a2879
    PUSH ESI                            ; 004a287a
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 004a287b
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 004a2880
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a2883
    INC EBP                             ; 004a2887
    DEC ESI                             ; 004a2888
    DEC EBX                             ; 004a2889
    DEC ECX                             ; 004a288a
    INC EDI                             ; 004a288b
    MOV dword ptr [ESP + 0x24],ECX      ; 004a288c
    JMP 0x004a26a5                      ; 004a2890
        ;   XREF to: 004a26a5 (UNCONDITIONAL_JUMP)  ; LAB_004a26a5

