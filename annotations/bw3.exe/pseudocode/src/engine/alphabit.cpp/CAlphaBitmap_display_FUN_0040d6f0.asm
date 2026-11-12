; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap *this_ptr,int x,int y,int alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   alpha
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[18]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_004123c0 at 004123e4
;   core_bmppuzzl.cpp_CChemPuzzle_render_FUN_00413d50 at 00413d71
;   core_fldnotes.cpp_FUN_004abe00 at 004abec7
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490 at 004aa4bb
;   core_fldnotes.cpp_SPageResourceBitmap_draw_FUN_004a8780 at 004a8794
;   core_fldnotes.cpp_SPageResourceText_draw_FUN_004a8570 at 004a85e3
;   core_fldnotes.cpp_SPageResourceTwanaEntry_draw_FUN_004a8a00 at 004a8a25
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfb9f
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004bff69
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f5b
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50
;   engine_special.cpp_renderAlphaRow16_FUN_0056313e
;   engine_special.cpp_renderAlphaRow32_FUN_005630a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d6f0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
    PUSH ESI                            ; 0040d6f1
    PUSH EDI                            ; 0040d6f2
    PUSH EBP                            ; 0040d6f3
    SUB ESP,0x1c                        ; 0040d6f4
    MOV ESI,dword ptr [ESP + 0x30]      ; 0040d6f7
    MOV EDI,dword ptr [ESP + 0x34]      ; 0040d6fb
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d6ff
    ADD EAX,EDI                         ; 0040d702
    TEST EAX,EAX                        ; 0040d704
    JL 0x0040d727                       ; 0040d706
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    CMP EDI,dword ptr [0x005fba18]      ; 0040d708 | DAT_005fba18
    JGE 0x0040d727                      ; 0040d70e
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d710
    ADD EAX,dword ptr [ESI + 0x10]      ; 0040d714
    TEST EAX,EAX                        ; 0040d717
    JL 0x0040d727                       ; 0040d719
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d71b
    CMP EAX,dword ptr [0x005fba1c]      ; 0040d71f | DAT_005fba1c
    JL 0x0040d72f                       ; 0040d725
        ;   XREF to: 0040d72f (CONDITIONAL_JUMP)  ; LAB_0040d72f
    ADD ESP,0x1c                        ; 0040d727
        ;   Label: LAB_0040d727
    POP EBP                             ; 0040d72a
    POP EDI                             ; 0040d72b
    POP ESI                             ; 0040d72c
    POP EBX                             ; 0040d72d
    RET                                 ; 0040d72e
    PUSH ESI                            ; 0040d72f
        ;   Label: LAB_0040d72f
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50 ; 0040d730
        ;   XREF to: 0040db50 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d735
    MOV EAX,dword ptr [ESI]             ; 0040d738
    MOV dword ptr [ESP + 0x18],EAX      ; 0040d73a
    MOV EAX,[0x005fba20]                ; 0040d73e | DAT_005fba20
    MOV EBP,dword ptr [ESI + 0x4]       ; 0040d743
    CMP EAX,0x20                        ; 0040d746
    JNZ 0x0040d7f5                      ; 0040d749
        ;   XREF to: 0040d7f5 (CONDITIONAL_JUMP)  ; LAB_0040d7f5
    XOR EBX,EBX                         ; 0040d74f
    MOV EAX,dword ptr [ESI + 0x10]      ; 0040d751
    MOV dword ptr [ESP + 0x8],EBX       ; 0040d754
    TEST EAX,EAX                        ; 0040d758
    JLE 0x0040d727                      ; 0040d75a
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    LEA EAX,[EDI*0x4 + 0x0]             ; 0040d75c
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d763
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d767
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d76b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040d76f
        ;   Label: LAB_0040d76f
    TEST ECX,ECX                        ; 0040d773
    JL 0x0040d7bf                       ; 0040d775
        ;   XREF to: 0040d7bf (CONDITIONAL_JUMP)  ; LAB_0040d7bf
    CMP ECX,dword ptr [0x005fba1c]      ; 0040d777 | DAT_005fba1c
    JGE 0x0040d7bf                      ; 0040d77d
        ;   XREF to: 0040d7bf (CONDITIONAL_JUMP)  ; LAB_0040d7bf
    MOV ECX,dword ptr [ECX*0x4 + 0x1c5faec] ; 0040d77f | DAT_01c5faec
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d786
    XOR EDX,EDX                         ; 0040d789
    TEST EDI,EDI                        ; 0040d78b
    JL 0x0040d7ed                       ; 0040d78d
        ;   XREF to: 0040d7ed (CONDITIONAL_JUMP)  ; LAB_0040d7ed
    ADD ECX,dword ptr [ESP + 0x4]       ; 0040d78f
    LEA EBX,[EDI + EAX*0x1]             ; 0040d793
        ;   Label: LAB_0040d793
    CMP EBX,dword ptr [0x005fba18]      ; 0040d796 | DAT_005fba18
    JLE 0x0040d7a5                      ; 0040d79c
        ;   XREF to: 0040d7a5 (CONDITIONAL_JUMP)  ; LAB_0040d7a5
    MOV EAX,[0x005fba18]                ; 0040d79e | DAT_005fba18
    SUB EAX,EDI                         ; 0040d7a3
    PUSH EAX                            ; 0040d7a5
        ;   Label: LAB_0040d7a5
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040d7a6
    PUSH EAX                            ; 0040d7aa
    LEA EAX,[EDX + EBP*0x1]             ; 0040d7ab
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040d7ae
    PUSH EAX                            ; 0040d7b2
    ADD EDX,EBX                         ; 0040d7b3
    PUSH EDX                            ; 0040d7b5
    PUSH ECX                            ; 0040d7b6
    CALL engine_special.cpp_renderAlphaRow32_FUN_005630a3 ; 0040d7b7
        ;   XREF to: 005630a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_005630a3(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d7bc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d7bf
        ;   Label: LAB_0040d7bf
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d7c3
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d7c7
    INC EBX                             ; 0040d7ca
    ADD EDX,EAX                         ; 0040d7cb
    ADD EBP,EAX                         ; 0040d7cd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d7cf
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d7d3
    MOV dword ptr [ESP + 0x14],EBX      ; 0040d7d7
    INC EAX                             ; 0040d7db
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040d7dc
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d7df
    CMP EAX,EDX                         ; 0040d7e3
    JGE 0x0040d727                      ; 0040d7e5
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    JMP 0x0040d76f                      ; 0040d7eb
        ;   XREF to: 0040d76f (UNCONDITIONAL_JUMP)  ; LAB_0040d76f
    MOV EDX,EDI                         ; 0040d7ed
        ;   Label: LAB_0040d7ed
    NEG EDX                             ; 0040d7ef
    SUB EAX,EDX                         ; 0040d7f1
    JMP 0x0040d793                      ; 0040d7f3
        ;   XREF to: 0040d793 (UNCONDITIONAL_JUMP)  ; LAB_0040d793
    XOR EDX,EDX                         ; 0040d7f5
        ;   Label: LAB_0040d7f5
    MOV ECX,dword ptr [ESI + 0x10]      ; 0040d7f7
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d7fa
    TEST ECX,ECX                        ; 0040d7fe
    JLE 0x0040d727                      ; 0040d800
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    LEA EAX,[EDI + EDI*0x1]             ; 0040d806
    MOV dword ptr [ESP],EAX             ; 0040d809
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d80c
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d810
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040d814
        ;   Label: LAB_0040d814
    TEST ECX,ECX                        ; 0040d818
    JL 0x0040d863                       ; 0040d81a
        ;   XREF to: 0040d863 (CONDITIONAL_JUMP)  ; LAB_0040d863
    CMP ECX,dword ptr [0x005fba1c]      ; 0040d81c | DAT_005fba1c
    JGE 0x0040d863                      ; 0040d822
        ;   XREF to: 0040d863 (CONDITIONAL_JUMP)  ; LAB_0040d863
    MOV ECX,dword ptr [ECX*0x4 + 0x1c5faec] ; 0040d824 | DAT_01c5faec
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d82b
    XOR EDX,EDX                         ; 0040d82e
    TEST EDI,EDI                        ; 0040d830
    JL 0x0040d891                       ; 0040d832
        ;   XREF to: 0040d891 (CONDITIONAL_JUMP)  ; LAB_0040d891
    ADD ECX,dword ptr [ESP]             ; 0040d834
    LEA EBX,[EDI + EAX*0x1]             ; 0040d837
        ;   Label: LAB_0040d837
    CMP EBX,dword ptr [0x005fba18]      ; 0040d83a | DAT_005fba18
    JLE 0x0040d849                      ; 0040d840
        ;   XREF to: 0040d849 (CONDITIONAL_JUMP)  ; LAB_0040d849
    MOV EAX,[0x005fba18]                ; 0040d842 | DAT_005fba18
    SUB EAX,EDI                         ; 0040d847
    PUSH EAX                            ; 0040d849
        ;   Label: LAB_0040d849
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040d84a
    PUSH EAX                            ; 0040d84e
    LEA EAX,[EDX + EBP*0x1]             ; 0040d84f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040d852
    PUSH EAX                            ; 0040d856
    ADD EDX,EBX                         ; 0040d857
    PUSH EDX                            ; 0040d859
    PUSH ECX                            ; 0040d85a
    CALL engine_special.cpp_renderAlphaRow16_FUN_0056313e ; 0040d85b
        ;   XREF to: 0056313e (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_0056313e(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d860
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d863
        ;   Label: LAB_0040d863
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d867
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040d86b
    INC EBX                             ; 0040d86e
    ADD EDX,EAX                         ; 0040d86f
    ADD EBP,EAX                         ; 0040d871
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040d873
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d877
    MOV dword ptr [ESP + 0x10],EBX      ; 0040d87b
    INC EAX                             ; 0040d87f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040d880
    MOV dword ptr [ESP + 0xc],EAX       ; 0040d883
    CMP EAX,EDX                         ; 0040d887
    JGE 0x0040d727                      ; 0040d889
        ;   XREF to: 0040d727 (CONDITIONAL_JUMP)  ; LAB_0040d727
    JMP 0x0040d814                      ; 0040d88f
        ;   XREF to: 0040d814 (UNCONDITIONAL_JUMP)  ; LAB_0040d814
    MOV EDX,EDI                         ; 0040d891
        ;   Label: LAB_0040d891
    NEG EDX                             ; 0040d893
    SUB EAX,EDX                         ; 0040d895
    JMP 0x0040d837                      ; 0040d897
        ;   XREF to: 0040d837 (UNCONDITIONAL_JUMP)  ; LAB_0040d837

