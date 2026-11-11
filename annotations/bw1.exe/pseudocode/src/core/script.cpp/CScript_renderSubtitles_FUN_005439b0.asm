; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005439b0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004cea06
;
; Referenced Globals:
;   undefined4 DAT_005ee1b7
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0152d23c
;   undefined4 DAT_0152d240
;   undefined4 DAT_0152d248
;   undefined4 DAT_0152d250
;   undefined4 DAT_01c4f00c
;   undefined4 g_CGameInstance.subtitle_mode
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01d7f1b8
;   undefined4 DAT_01e7e0a0
;   undefined4 DAT_01e818b0
;
; Called Functions:
;   core_charactr.cpp_FUN_004355d0
;   core_script.cpp_CScript_getLetterboxHeight_FUN_00543950
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005439b0
        ;   Label: core_script.cpp_CScript_renderSubtitles_FUN_005439b0
    PUSH ESI                            ; 005439b1
    PUSH EDI                            ; 005439b2
    PUSH EBP                            ; 005439b3
    SUB ESP,0x1c                        ; 005439b4
    MOV EDI,dword ptr [ESP + 0x30]      ; 005439b7
    MOV EAX,[0x0061d95c]                ; 005439bb | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x244]     ; 005439c0 | g_CGameInstance.letterbox_mode
    TEST EDX,EDX                        ; 005439c6
    JNZ 0x00543bd0                      ; 005439c8
        ;   XREF to: 00543bd0 (CONDITIONAL_JUMP)  ; LAB_00543bd0
    PUSH EAX                            ; 005439ce
    CALL core_charactr.cpp_FUN_004355d0 ; 005439cf
        ;   XREF to: 004355d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004355d0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 005439d4
    FLD float ptr [ESP + 0x1c]          ; 005439d8
    FDIV float ptr [0x005ee1b7]         ; 005439dc | DAT_005ee1b7
    FSUBR float ptr [0x01e818b0]        ; 005439e2 | DAT_01e818b0
    ADD ESP,0x4                         ; 005439e8
        ;   Label: LAB_005439e8
    FSTP float ptr [0x01e818b0]         ; 005439eb | DAT_01e818b0
    FLD float ptr [0x01e818b0]          ; 005439f1 | DAT_01e818b0
    FLDZ                                ; 005439f7
    FCOMPP                              ; 005439f9
    FNSTSW AX                           ; 005439fb
    SAHF                                ; 005439fd
    JBE 0x00543a08                      ; 005439fe
        ;   XREF to: 00543a08 (CONDITIONAL_JUMP)  ; LAB_00543a08
    XOR ECX,ECX                         ; 00543a00
    MOV dword ptr [0x01e818b0],ECX      ; 00543a02 | DAT_01e818b0
    FLD float ptr [0x01e818b0]          ; 00543a08 | DAT_01e818b0
        ;   Label: LAB_00543a08
    FLD1                                ; 00543a0e
    FCOMPP                              ; 00543a10
    FNSTSW AX                           ; 00543a12
    SAHF                                ; 00543a14
    JNC 0x00543a21                      ; 00543a15
        ;   XREF to: 00543a21 (CONDITIONAL_JUMP)  ; LAB_00543a21
    MOV dword ptr [0x01e818b0],0x3f800000 ; 00543a17 | DAT_01e818b0
    MOV EAX,[0x0061b498]                ; 00543a21 | DAT_0061b498
        ;   Label: LAB_00543a21
    MOV EBX,dword ptr [0x0061b49c]      ; 00543a26 | DAT_0061b49c
    PUSH EDI                            ; 00543a2c
    XOR ESI,ESI                         ; 00543a2d
    MOV dword ptr [ESP + 0xc],EAX       ; 00543a2f
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00543950 ; 00543a33
        ;   XREF to: 00543950 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00543950(CScript * this_ptr)
    MOV dword ptr [ESP + 0x8],ESI       ; 00543a38
    ADD ESP,0x4                         ; 00543a3c
    MOV ESI,EAX                         ; 00543a3f
    TEST EAX,EAX                        ; 00543a41
    JLE 0x00543a82                      ; 00543a43
        ;   XREF to: 00543a82 (CONDITIONAL_JUMP)  ; LAB_00543a82
    CMP dword ptr [0x01e7e0a0],0x2      ; 00543a45 | DAT_01e7e0a0
    JZ 0x00543a64                       ; 00543a4c
        ;   XREF to: 00543a64 (CONDITIONAL_JUMP)  ; LAB_00543a64
    PUSH 0x0                            ; 00543a4e
    DEC EAX                             ; 00543a50
    PUSH EAX                            ; 00543a51
    MOV EAX,dword ptr [ESP + 0x10]      ; 00543a52
    DEC EAX                             ; 00543a56
    PUSH EAX                            ; 00543a57
    PUSH 0x0                            ; 00543a58
    PUSH 0x0                            ; 00543a5a
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00543a5c
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00543a61
    PUSH 0x0                            ; 00543a64
        ;   Label: LAB_00543a64
    LEA EAX,[EBX + -0x1]                ; 00543a66
    PUSH EAX                            ; 00543a69
    MOV EAX,dword ptr [ESP + 0x10]      ; 00543a6a
    DEC EAX                             ; 00543a6e
    PUSH EAX                            ; 00543a6f
    MOV EAX,EBX                         ; 00543a70
    SUB EAX,ESI                         ; 00543a72
    PUSH EAX                            ; 00543a74
    MOV EAX,dword ptr [ESP + 0x14]      ; 00543a75
    PUSH EAX                            ; 00543a79
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00543a7a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00543a7f
    MOV EAX,[0x01c4f00c]                ; 00543a82 | DAT_01c4f00c
        ;   Label: LAB_00543a82
    MOV dword ptr [ESP],EAX             ; 00543a87
    MOV EAX,EBX                         ; 00543a8a
    SUB EAX,ESI                         ; 00543a8c
    MOV ESI,EAX                         ; 00543a8e
    CMP byte ptr [EDI + 0x50],0x0       ; 00543a90
    JZ 0x00543bc0                       ; 00543a94
        ;   XREF to: 00543bc0 (CONDITIONAL_JUMP)  ; LAB_00543bc0
    MOV EAX,[0x0061d95c]                ; 00543a9a | g_CGamePtr
    CMP dword ptr [EAX + 0x10],0x0      ; 00543a9f | g_CGameInstance.subtitle_mode
    JZ 0x00543bc0                       ; 00543aa3
        ;   XREF to: 00543bc0 (CONDITIONAL_JUMP)  ; LAB_00543bc0
    MOV ECX,dword ptr [0x0061b49c]      ; 00543aa9 | DAT_0061b49c
    MOV EBP,dword ptr [0x0152d23c]      ; 00543aaf | DAT_0152d23c
    CMP ECX,0x1e0                       ; 00543ab5
    JGE 0x00543ac3                      ; 00543abb
        ;   XREF to: 00543ac3 (CONDITIONAL_JUMP)  ; LAB_00543ac3
    MOV EBP,dword ptr [0x0152d240]      ; 00543abd | DAT_0152d240
    CMP dword ptr [0x0061b49c],0x180    ; 00543ac3 | DAT_0061b49c
        ;   Label: LAB_00543ac3
    JGE 0x00543ae2                      ; 00543acd
        ;   XREF to: 00543ae2 (CONDITIONAL_JUMP)  ; LAB_00543ae2
    CMP dword ptr [0x01d7f1b8],0x0      ; 00543acf | DAT_01d7f1b8
    JZ 0x00543bf5                       ; 00543ad6
        ;   XREF to: 00543bf5 (CONDITIONAL_JUMP)  ; LAB_00543bf5
    MOV EBP,dword ptr [0x0152d248]      ; 00543adc | DAT_0152d248
    MOV EDX,dword ptr [0x0061b498]      ; 00543ae2 | DAT_0061b498
        ;   Label: LAB_00543ae2
    LEA EAX,[EDX*0x8 + 0x0]             ; 00543ae8
    ADD EDX,EAX                         ; 00543aef
    MOV ECX,0xa                         ; 00543af1
    MOV EAX,EDX                         ; 00543af6
    SAR EDX,0x1f                        ; 00543af8
    IDIV ECX                            ; 00543afb
    PUSH EAX                            ; 00543afd
    PUSH 0x400                          ; 00543afe
    PUSH ECX                            ; 00543b03
    PUSH 0x1e7e0a8                      ; 00543b04
    ADD EDI,0x50                        ; 00543b09
    PUSH EDI                            ; 00543b0c
    PUSH EBP                            ; 00543b0d
    CALL engine_font.cpp_FUN_004c4260   ; 00543b0e
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 00543b13
    PUSH 0x58                           ; 00543b16
    PUSH EBP                            ; 00543b18
    MOV EDI,EAX                         ; 00543b19
    MOV dword ptr [ESP + 0x1c],EAX      ; 00543b1b
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 00543b1f
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 00543b24
    IMUL EDX,EDI                        ; 00543b26
    ADD ESI,EBX                         ; 00543b29
    MOV ECX,EAX                         ; 00543b2b
    ADD ESP,0x8                         ; 00543b2d
    SUB ESI,EDX                         ; 00543b30
    MOV dword ptr [ESP + 0xc],EAX       ; 00543b32
    MOV EDX,ESI                         ; 00543b36
    MOV EAX,ESI                         ; 00543b38
    SAR EDX,0x1f                        ; 00543b3a
    SUB EAX,EDX                         ; 00543b3d
    SAR EAX,0x1                         ; 00543b3f
    MOV ESI,EAX                         ; 00543b41
    CMP EDI,0x4                         ; 00543b43
    JGE 0x00543b4c                      ; 00543b46
        ;   XREF to: 00543b4c (CONDITIONAL_JUMP)  ; LAB_00543b4c
    INC EDI                             ; 00543b48
    IMUL ECX,EDI                        ; 00543b49
    SUB EBX,ECX                         ; 00543b4c
        ;   Label: LAB_00543b4c
    CMP ESI,EBX                         ; 00543b4e
    JLE 0x00543b54                      ; 00543b50
        ;   XREF to: 00543b54 (CONDITIONAL_JUMP)  ; LAB_00543b54
    MOV ESI,EBX                         ; 00543b52
    PUSH 0xffff                         ; 00543b54
        ;   Label: LAB_00543b54
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00543b59
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00543b5e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00543b61
    XOR EDI,EDI                         ; 00543b65
    TEST ECX,ECX                        ; 00543b67
    JLE 0x00543bc0                      ; 00543b69
        ;   XREF to: 00543bc0 (CONDITIONAL_JUMP)  ; LAB_00543bc0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b6b
    ADD EAX,dword ptr [ESP + 0x8]       ; 00543b6f
    MOV EBX,0x1e7e0a8                   ; 00543b73
    MOV dword ptr [ESP + 0x10],EAX      ; 00543b78
    PUSH EBX                            ; 00543b7c
        ;   Label: LAB_00543b7c
    PUSH EBP                            ; 00543b7d
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00543b7e
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00543b83
    MOV EDX,dword ptr [ESP + 0x10]      ; 00543b86
    SUB EDX,EAX                         ; 00543b8a
    MOV EAX,EDX                         ; 00543b8c
    SAR EDX,0x1f                        ; 00543b8e
    SUB EAX,EDX                         ; 00543b91
    SAR EAX,0x1                         ; 00543b93
    PUSH 0x0                            ; 00543b95
    PUSH 0xf8                           ; 00543b97
    PUSH ESI                            ; 00543b9c
    PUSH EAX                            ; 00543b9d
    PUSH EBX                            ; 00543b9e
    PUSH EBP                            ; 00543b9f
    INC EDI                             ; 00543ba0
    CALL engine_font.cpp_FUN_004c1dd0   ; 00543ba1
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00543ba6
    ADD EBX,0x400                       ; 00543ba9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00543baf
    MOV EDX,dword ptr [ESP + 0x14]      ; 00543bb3
    ADD ESI,EAX                         ; 00543bb7
    CMP EDI,EDX                         ; 00543bb9
    JL 0x00543b7c                       ; 00543bbb
        ;   XREF to: 00543b7c (CONDITIONAL_JUMP)  ; LAB_00543b7c
    LEA EAX,[EAX]                       ; 00543bbd
    MOV EAX,dword ptr [ESP]             ; 00543bc0
        ;   Label: LAB_00543bc0
    MOV [0x01c4f00c],EAX                ; 00543bc3 | DAT_01c4f00c
    ADD ESP,0x1c                        ; 00543bc8
    POP EBP                             ; 00543bcb
    POP EDI                             ; 00543bcc
    POP ESI                             ; 00543bcd
    POP EBX                             ; 00543bce
    RET                                 ; 00543bcf
    PUSH EAX                            ; 00543bd0
        ;   Label: LAB_00543bd0
    MOV dword ptr [0x01e7e0a0],EDX      ; 00543bd1 | DAT_01e7e0a0
    CALL core_charactr.cpp_FUN_004355d0 ; 00543bd7
        ;   XREF to: 004355d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004355d0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00543bdc
    FLD float ptr [ESP + 0x1c]          ; 00543be0
    FDIV float ptr [0x005ee1b7]         ; 00543be4 | DAT_005ee1b7
    FADD float ptr [0x01e818b0]         ; 00543bea | DAT_01e818b0
    JMP 0x005439e8                      ; 00543bf0
        ;   XREF to: 005439e8 (UNCONDITIONAL_JUMP)  ; LAB_005439e8
    MOV EBP,dword ptr [0x0152d250]      ; 00543bf5 | DAT_0152d250
        ;   Label: LAB_00543bf5
    JMP 0x00543ae2                      ; 00543bfb
        ;   XREF to: 00543ae2 (UNCONDITIONAL_JUMP)  ; LAB_00543ae2

