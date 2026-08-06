; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_FUN_004fe770(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
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
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d06c
;
; Referenced Globals:
;   float FLOAT_0058e24a = 0.3500000
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CBitFont* g_CBitFont_PTR_014b98f8
;   CBitFont* g_CBitFont_PTR_014b98fc
;   CBitFont* g_CBitFont_PTR_014b9904
;   CBitFont* g_CBitFont_PTR_014b990c
;   undefined4 DAT_01c00c5c
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.subtitle_mode
;   undefined4 g_CGame_01c775ec.letterbox_mode
;   undefined4 DAT_01d16810
;   undefined4 DAT_01e53410
;   undefined4 DAT_01e56c20
;
; Called Functions:
;   core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0
;   core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_font.cpp_CBitFont_wrapText_FUN_00492f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe770
        ;   Label: core_script.cpp_CScript_FUN_004fe770
    PUSH ESI                            ; 004fe771
    PUSH EDI                            ; 004fe772
    PUSH EBP                            ; 004fe773
    SUB ESP,0x20                        ; 004fe774
    MOV EDI,dword ptr [ESP + 0x34]      ; 004fe777
    MOV EAX,[0x005b9354]                ; 004fe77b | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x228]     ; 004fe780 | g_CGame_01c775ec.letterbox_mode
    TEST EDX,EDX                        ; 004fe786
    JNZ 0x004fe991                      ; 004fe788
        ;   XREF to: 004fe991 (CONDITIONAL_JUMP)  ; LAB_004fe991
    PUSH EAX                            ; 004fe78e | g_CGame_01c775ec
    CALL core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0 ; 004fe78f
        ;   XREF to: 0042b5c0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0(CGame * game_ptr)
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe794
    FLD float ptr [ESP + 0x20]          ; 004fe798
    FDIV float ptr [0x0058e24a]         ; 004fe79c | FLOAT_0058e24a
    FSUBR float ptr [0x01e56c20]        ; 004fe7a2 | DAT_01e56c20
    ADD ESP,0x4                         ; 004fe7a8
        ;   Label: LAB_004fe7a8
    FSTP float ptr [0x01e56c20]         ; 004fe7ab | DAT_01e56c20
    FLD float ptr [0x01e56c20]          ; 004fe7b1 | DAT_01e56c20
    FLDZ                                ; 004fe7b7
    FCOMPP                              ; 004fe7b9
    FNSTSW AX                           ; 004fe7bb
    SAHF                                ; 004fe7bd
    JBE 0x004fe7c8                      ; 004fe7be
        ;   XREF to: 004fe7c8 (CONDITIONAL_JUMP)  ; LAB_004fe7c8
    XOR ECX,ECX                         ; 004fe7c0
    MOV dword ptr [0x01e56c20],ECX      ; 004fe7c2 | DAT_01e56c20
    FLD float ptr [0x01e56c20]          ; 004fe7c8 | DAT_01e56c20
        ;   Label: LAB_004fe7c8
    FLD1                                ; 004fe7ce
    FCOMPP                              ; 004fe7d0
    FNSTSW AX                           ; 004fe7d2
    SAHF                                ; 004fe7d4
    JNC 0x004fe7e1                      ; 004fe7d5
        ;   XREF to: 004fe7e1 (CONDITIONAL_JUMP)  ; LAB_004fe7e1
    MOV dword ptr [0x01e56c20],0x3f800000 ; 004fe7d7 | DAT_01e56c20
    MOV EAX,[0x005b761c]                ; 004fe7e1 | g_WindowWidth
        ;   Label: LAB_004fe7e1
    MOV EBX,dword ptr [0x005b7620]      ; 004fe7e6 | g_WindowHeight
    PUSH EDI                            ; 004fe7ec
    XOR ESI,ESI                         ; 004fe7ed
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe7ef
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710 ; 004fe7f3
        ;   XREF to: 004fe710 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript * this_ptr)
    MOV dword ptr [ESP + 0xc],ESI       ; 004fe7f8
    ADD ESP,0x4                         ; 004fe7fc
    MOV ESI,EAX                         ; 004fe7ff
    TEST EAX,EAX                        ; 004fe801
    JLE 0x004fe842                      ; 004fe803
        ;   XREF to: 004fe842 (CONDITIONAL_JUMP)  ; LAB_004fe842
    CMP dword ptr [0x01e53410],0x2      ; 004fe805 | DAT_01e53410
    JZ 0x004fe824                       ; 004fe80c
        ;   XREF to: 004fe824 (CONDITIONAL_JUMP)  ; LAB_004fe824
    PUSH 0x0                            ; 004fe80e
    DEC EAX                             ; 004fe810
    PUSH EAX                            ; 004fe811
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fe812
    DEC EAX                             ; 004fe816
    PUSH EAX                            ; 004fe817
    PUSH 0x0                            ; 004fe818
    PUSH 0x0                            ; 004fe81a
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004fe81c
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004fe821
    PUSH 0x0                            ; 004fe824
        ;   Label: LAB_004fe824
    LEA EAX,[EBX + -0x1]                ; 004fe826
    PUSH EAX                            ; 004fe829
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fe82a
    DEC EAX                             ; 004fe82e
    PUSH EAX                            ; 004fe82f
    MOV EAX,EBX                         ; 004fe830
    SUB EAX,ESI                         ; 004fe832
    PUSH EAX                            ; 004fe834
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fe835
    PUSH EAX                            ; 004fe839
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004fe83a
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004fe83f
    MOV EAX,[0x01c00c5c]                ; 004fe842 | DAT_01c00c5c
        ;   Label: LAB_004fe842
    MOV dword ptr [ESP + 0x4],EAX       ; 004fe847
    MOV EAX,EBX                         ; 004fe84b
    SUB EAX,ESI                         ; 004fe84d
    MOV dword ptr [ESP],EAX             ; 004fe84f
    CMP byte ptr [EDI + 0x4c],0x0       ; 004fe852
    JZ 0x004fe980                       ; 004fe856
        ;   XREF to: 004fe980 (CONDITIONAL_JUMP)  ; LAB_004fe980
    MOV EAX,[0x005b9354]                ; 004fe85c | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x10],0x0      ; 004fe861 | g_CGame_01c775ec.subtitle_mode
    JZ 0x004fe980                       ; 004fe865
        ;   XREF to: 004fe980 (CONDITIONAL_JUMP)  ; LAB_004fe980
    MOV ECX,dword ptr [0x005b7620]      ; 004fe86b | g_WindowHeight
    MOV EBP,dword ptr [0x014b98f8]      ; 004fe871 | g_CBitFont_PTR_014b98f8
    CMP ECX,0x1e0                       ; 004fe877
    JGE 0x004fe885                      ; 004fe87d
        ;   XREF to: 004fe885 (CONDITIONAL_JUMP)  ; LAB_004fe885
    MOV EBP,dword ptr [0x014b98fc]      ; 004fe87f | g_CBitFont_PTR_014b98fc
    CMP dword ptr [0x005b7620],0x180    ; 004fe885 | g_WindowHeight
        ;   Label: LAB_004fe885
    JGE 0x004fe8a4                      ; 004fe88f
        ;   XREF to: 004fe8a4 (CONDITIONAL_JUMP)  ; LAB_004fe8a4
    CMP dword ptr [0x01d16810],0x0      ; 004fe891 | DAT_01d16810
    JZ 0x004fe9b6                       ; 004fe898
        ;   XREF to: 004fe9b6 (CONDITIONAL_JUMP)  ; LAB_004fe9b6
    MOV EBP,dword ptr [0x014b9904]      ; 004fe89e | g_CBitFont_PTR_014b9904
    MOV EDX,dword ptr [0x005b761c]      ; 004fe8a4 | g_WindowWidth
        ;   Label: LAB_004fe8a4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fe8aa
    ADD EDX,EAX                         ; 004fe8b1
    MOV ESI,0xa                         ; 004fe8b3
    MOV EAX,EDX                         ; 004fe8b8
    SAR EDX,0x1f                        ; 004fe8ba
    IDIV ESI                            ; 004fe8bd
    PUSH EAX                            ; 004fe8bf
    PUSH 0x400                          ; 004fe8c0
    PUSH ESI                            ; 004fe8c5
    PUSH 0x1e53418                      ; 004fe8c6
    LEA EAX,[EDI + 0x4c]                ; 004fe8cb
    PUSH EAX                            ; 004fe8ce
    PUSH EBP                            ; 004fe8cf
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004fe8d0
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_00492f30(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004fe8d5
    PUSH 0x58                           ; 004fe8d8
    PUSH EBP                            ; 004fe8da
    MOV ESI,EAX                         ; 004fe8db
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe8dd
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004fe8e1
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    MOV EDI,EAX                         ; 004fe8e6
    IMUL EDI,ESI                        ; 004fe8e8
    ADD ESP,0x8                         ; 004fe8eb
    MOV EDX,dword ptr [ESP]             ; 004fe8ee
    ADD EDX,EBX                         ; 004fe8f1
    SUB EDX,EDI                         ; 004fe8f3
    MOV dword ptr [ESP + 0x14],EAX      ; 004fe8f5
    MOV EAX,EDX                         ; 004fe8f9
    SAR EDX,0x1f                        ; 004fe8fb
    SUB EAX,EDX                         ; 004fe8fe
    SAR EAX,0x1                         ; 004fe900
    SUB EBX,EDI                         ; 004fe902
    MOV ESI,EAX                         ; 004fe904
    CMP EAX,EBX                         ; 004fe906
    JLE 0x004fe90c                      ; 004fe908
        ;   XREF to: 004fe90c (CONDITIONAL_JUMP)  ; LAB_004fe90c
    MOV ESI,EBX                         ; 004fe90a
    PUSH 0xffff                         ; 004fe90c
        ;   Label: LAB_004fe90c
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004fe911
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 004fe916
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fe919
    XOR EDI,EDI                         ; 004fe91d
    TEST EAX,EAX                        ; 004fe91f
    JLE 0x004fe980                      ; 004fe921
        ;   XREF to: 004fe980 (CONDITIONAL_JUMP)  ; LAB_004fe980
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe923
    ADD EAX,dword ptr [ESP + 0xc]       ; 004fe927
    MOV EBX,0x1e53418                   ; 004fe92b
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe930
    PUSH EBX                            ; 004fe934
        ;   Label: LAB_004fe934
    PUSH EBP                            ; 004fe935
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004fe936
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fe93b
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fe93e
    SUB EDX,EAX                         ; 004fe942
    MOV EAX,EDX                         ; 004fe944
    SAR EDX,0x1f                        ; 004fe946
    SUB EAX,EDX                         ; 004fe949
    SAR EAX,0x1                         ; 004fe94b
    PUSH 0x0                            ; 004fe94d
    PUSH 0xf8                           ; 004fe94f
    PUSH ESI                            ; 004fe954
    PUSH EAX                            ; 004fe955
    PUSH EBX                            ; 004fe956
    PUSH EBP                            ; 004fe957
    INC EDI                             ; 004fe958
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004fe959
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004fe95e
    ADD EBX,0x400                       ; 004fe961
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fe967
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fe96b
    ADD ESI,EDX                         ; 004fe96f
    CMP EDI,ECX                         ; 004fe971
    JL 0x004fe934                       ; 004fe973
        ;   XREF to: 004fe934 (CONDITIONAL_JUMP)  ; LAB_004fe934
    LEA EAX,[EAX]                       ; 004fe975
    LEA EDX,[EDX]                       ; 004fe97b
    MOV EBX,EBX                         ; 004fe97e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe980
        ;   Label: LAB_004fe980
    MOV [0x01c00c5c],EAX                ; 004fe984 | DAT_01c00c5c
    ADD ESP,0x20                        ; 004fe989
    POP EBP                             ; 004fe98c
    POP EDI                             ; 004fe98d
    POP ESI                             ; 004fe98e
    POP EBX                             ; 004fe98f
    RET                                 ; 004fe990
    PUSH EAX                            ; 004fe991 | g_CGame_01c775ec
        ;   Label: LAB_004fe991
    MOV dword ptr [0x01e53410],EDX      ; 004fe992 | DAT_01e53410
    CALL core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0 ; 004fe998
        ;   XREF to: 0042b5c0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0(CGame * game_ptr)
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe99d
    FLD float ptr [ESP + 0x20]          ; 004fe9a1
    FDIV float ptr [0x0058e24a]         ; 004fe9a5 | FLOAT_0058e24a
    FADD float ptr [0x01e56c20]         ; 004fe9ab | DAT_01e56c20
    JMP 0x004fe7a8                      ; 004fe9b1
        ;   XREF to: 004fe7a8 (UNCONDITIONAL_JUMP)  ; LAB_004fe7a8
    MOV EBP,dword ptr [0x014b990c]      ; 004fe9b6 | g_CBitFont_PTR_014b990c
        ;   Label: LAB_004fe9b6
    JMP 0x004fe8a4                      ; 004fe9bc
        ;   XREF to: 004fe8a4 (UNCONDITIONAL_JUMP)  ; LAB_004fe8a4

