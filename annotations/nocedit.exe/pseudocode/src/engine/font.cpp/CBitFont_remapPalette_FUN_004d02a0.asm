; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dfont.cpp_remapFonts_FUN_00471300 at 00471307
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 at 004cd243
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a721
;   TerminatedCString s_CBitFont_remapPalette_In_0062a734
;   int g_BitsPerPixel = 0x8
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d02a0
        ;   Label: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
    PUSH ESI                            ; 004d02a1
    PUSH EDI                            ; 004d02a2
    PUSH EBP                            ; 004d02a3
    SUB ESP,0x28                        ; 004d02a4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d02a7
    XOR EDX,EDX                         ; 004d02ab
    MOV ECX,dword ptr [EAX]             ; 004d02ad
    MOV dword ptr [ESP + 0x1c],EDX      ; 004d02af
    TEST ECX,ECX                        ; 004d02b3
    JLE 0x004d0377                      ; 004d02b5
        ;   XREF to: 004d0377 (CONDITIONAL_JUMP)  ; LAB_004d0377
    ADD EAX,0x400                       ; 004d02bb
    MOV dword ptr [ESP + 0x14],EAX      ; 004d02c0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d02c4
    MOV dword ptr [ESP + 0x18],EAX      ; 004d02c8
    MOV dword ptr [ESP + 0xc],EAX       ; 004d02cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d02d0
        ;   Label: LAB_004d02d0
    MOV dword ptr [ESP + 0x20],EAX      ; 004d02d4
    MOV dword ptr [ESP + 0x24],EAX      ; 004d02d8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d02dc
    MOV EBP,dword ptr [ESP + 0x18]      ; 004d02e0
    MOV dword ptr [ESP + 0x10],EAX      ; 004d02e4
    MOV EAX,[0x0067939c]                ; 004d02e8 | g_BitsPerPixel
        ;   Label: LAB_004d02e8
    MOVZX EDI,byte ptr [EBP + 0x165]    ; 004d02ed
    XOR EBX,EBX                         ; 004d02f4
    MOVZX ESI,byte ptr [EBP + 0x164]    ; 004d02f6
    MOV BL,byte ptr [EBP + 0x166]       ; 004d02fd
    CMP EAX,0x10                        ; 004d0303
    JNC 0x004d0440                      ; 004d0306
        ;   XREF to: 004d0440 (CONDITIONAL_JUMP)  ; LAB_004d0440
    CMP EAX,0x8                         ; 004d030c
    JNZ 0x004d044b                      ; 004d030f
        ;   XREF to: 004d044b (CONDITIONAL_JUMP)  ; LAB_004d044b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d0315
        ;   Label: LAB_004d0315
    MOV EBX,dword ptr [ESP + 0x24]      ; 004d0319
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d031d
    ADD EBP,0x3                         ; 004d0321
    ADD ECX,0x4                         ; 004d0324
    ADD EBX,0x4                         ; 004d0327
    MOV dword ptr [ESP + 0x20],ECX      ; 004d032a
    MOV dword ptr [ESP + 0x24],EBX      ; 004d032e
    CMP EBX,ESI                         ; 004d0332
    JNZ 0x004d02e8                      ; 004d0334
        ;   XREF to: 004d02e8 (CONDITIONAL_JUMP)  ; LAB_004d02e8
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d0336
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d033a
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d033e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d0342
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004d0346
    ADD EBX,0x400                       ; 004d034a
    ADD ESI,0x300                       ; 004d0350
    ADD EDI,0x400                       ; 004d0356
    INC EBP                             ; 004d035c
    MOV EDX,dword ptr [ECX]             ; 004d035d
    MOV dword ptr [ESP + 0x14],EBX      ; 004d035f
    MOV dword ptr [ESP + 0x18],ESI      ; 004d0363
    MOV dword ptr [ESP + 0xc],EDI       ; 004d0367
    MOV dword ptr [ESP + 0x1c],EBP      ; 004d036b
    CMP EBP,EDX                         ; 004d036f
    JL 0x004d02d0                       ; 004d0371
        ;   XREF to: 004d02d0 (CONDITIONAL_JUMP)  ; LAB_004d02d0
    ADD ESP,0x28                        ; 004d0377
        ;   Label: LAB_004d0377
    POP EBP                             ; 004d037a
    POP EDI                             ; 004d037b
    POP ESI                             ; 004d037c
    POP EBX                             ; 004d037d
    RET                                 ; 004d037e
    MOV ECX,dword ptr [0x02d01f28]      ; 004d037f | g_RedScaleFactor
        ;   Label: LAB_004d037f
    MOV EAX,ESI                         ; 004d0385
    XOR EDX,EDX                         ; 004d0387
    DIV ECX                             ; 004d0389
    MOV dword ptr [ESP],ESI             ; 004d038b
    MOV ESI,dword ptr [0x02d01f34]      ; 004d038e | g_GreenScaleFactor
    MOV dword ptr [ESP],EAX             ; 004d0394
    XOR EDX,EDX                         ; 004d0397
    MOV EAX,EDI                         ; 004d0399
    DIV ESI                             ; 004d039b
    MOV dword ptr [ESP + 0x4],EDI       ; 004d039d
    MOV EDI,dword ptr [0x02d01f40]      ; 004d03a1 | g_BlueScaleFactor
    MOV dword ptr [ESP + 0x4],EAX       ; 004d03a7
    XOR EDX,EDX                         ; 004d03ab
    MOV EAX,EBX                         ; 004d03ad
    DIV EDI                             ; 004d03af
    MOV dword ptr [ESP + 0x8],EBX       ; 004d03b1
    MOV CL,byte ptr [0x02d01f24]        ; 004d03b5 | g_RedBitPosition
    MOV dword ptr [ESP + 0x8],EAX       ; 004d03bb
    MOV EAX,dword ptr [ESP]             ; 004d03bf
    MOV EBX,dword ptr [ESP + 0x4]       ; 004d03c2
    SHL EAX,CL                          ; 004d03c6
    MOV CL,byte ptr [0x02d01f30]        ; 004d03c8 | g_GreenBitPosition
    SHL EBX,CL                          ; 004d03ce
    MOV CL,byte ptr [0x02d01f3c]        ; 004d03d0 | g_BlueBitPosition
    OR EBX,EAX                          ; 004d03d6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d03d8
    SHL EAX,CL                          ; 004d03dc
    OR EAX,EBX                          ; 004d03de
    MOV ECX,dword ptr [ESP + 0x24]      ; 004d03e0
    AND EAX,0xffff                      ; 004d03e4
    MOV dword ptr [ECX + 0xd64],EAX     ; 004d03e9
    JMP 0x004d0315                      ; 004d03ef
        ;   XREF to: 004d0315 (UNCONDITIONAL_JUMP)  ; LAB_004d0315
    CMP EAX,EAX                         ; 004d03f4
        ;   Label: LAB_004d03f4
    JNZ 0x004d0425                      ; 004d03f6
        ;   XREF to: 004d0425 (CONDITIONAL_JUMP)  ; LAB_004d0425
    MOV CL,byte ptr [0x02d01f24]        ; 004d03f8 | g_RedBitPosition
    SHL ESI,CL                          ; 004d03fe
    MOV CL,byte ptr [0x02d01f30]        ; 004d0400 | g_GreenBitPosition
    SHL EDI,CL                          ; 004d0406
    MOV CL,byte ptr [0x02d01f3c]        ; 004d0408 | g_BlueBitPosition
    SHL EBX,CL                          ; 004d040e
    OR ESI,EDI                          ; 004d0410
    MOV ECX,EBX                         ; 004d0412
    OR ECX,ESI                          ; 004d0414
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d0416
    MOV dword ptr [EAX + 0xd64],ECX     ; 004d041a
    JMP 0x004d0315                      ; 004d0420
        ;   XREF to: 004d0315 (UNCONDITIONAL_JUMP)  ; LAB_004d0315
    MOV ECX,EDI                         ; 004d0425
        ;   Label: LAB_004d0425
    SHL ESI,0x10                        ; 004d0427
    SHL ECX,0x8                         ; 004d042a
    OR ECX,ESI                          ; 004d042d
    OR ECX,EBX                          ; 004d042f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d0431
    MOV dword ptr [EAX + 0xd64],ECX     ; 004d0435
    JMP 0x004d0315                      ; 004d043b
        ;   XREF to: 004d0315 (UNCONDITIONAL_JUMP)  ; LAB_004d0315
    JBE 0x004d037f                      ; 004d0440
        ;   XREF to: 004d037f (CONDITIONAL_JUMP)  ; LAB_004d037f
        ;   Label: LAB_004d0440
    CMP EAX,0x20                        ; 004d0446
    JZ 0x004d03f4                       ; 004d0449
        ;   XREF to: 004d03f4 (CONDITIONAL_JUMP)  ; LAB_004d03f4
    MOV EAX,0x62a721                    ; 004d044b | = "..\\engine\\font.cpp"
        ;   Label: LAB_004d044b
    MOV EDX,0x686                       ; 004d0450
    PUSH 0x62a734                       ; 004d0455 | = "CBitFont::remapPalette - Invalid bits..."
    MOV [0x02f0ca48],EAX                ; 004d045a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004d045f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d0465
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004d046a
    JMP 0x004d0315                      ; 004d046d
        ;   XREF to: 004d0315 (UNCONDITIONAL_JUMP)  ; LAB_004d0315

