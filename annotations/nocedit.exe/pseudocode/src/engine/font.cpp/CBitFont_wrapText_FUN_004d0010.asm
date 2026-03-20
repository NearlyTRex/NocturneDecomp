; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004d0010(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   source_text
; char *           Stack[0xc]:4   dest_buffer
; int              Stack[0x10]:4   max_lines
; int              Stack[0x14]:4   line_width
; int              Stack[0x18]:4   max_pixel_width
; Local Variables:
; char *           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; uint             Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3aef
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3f6d
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d8495
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500f47
;   core_script.cpp_CScript_renderSubtitles_FUN_00559b20 at 00559c80
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 at 004a0ab5
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   char[1024] g_TempTextBuffer
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0010
        ;   Label: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
    PUSH ESI                            ; 004d0011
    PUSH EBP                            ; 004d0012
    SUB ESP,0x1c                        ; 004d0013
    MOV EBP,dword ptr [ESP + 0x30]      ; 004d0016
    MOV ESI,dword ptr [ESP + 0x34]      ; 004d001a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004d001e
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d0022
    IMUL EAX,EBX                        ; 004d0026
    PUSH EAX                            ; 004d0029
    PUSH 0x0                            ; 004d002a
    PUSH ESI                            ; 004d002c
    CALL crt_memory.c_memset_FUN_005fde40 ; 004d002d
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d0032
    TEST EBP,EBP                        ; 004d0035
    JZ 0x004d007c                       ; 004d0037
        ;   XREF to: 004d007c (CONDITIONAL_JUMP)  ; LAB_004d007c
    PUSH EDI                            ; 004d0039
    XOR EDX,EDX                         ; 004d003a
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004d003c
    MOV dword ptr [ESP + 0xc],EDX       ; 004d0040
    TEST ECX,ECX                        ; 004d0044
    JLE 0x004d0120                      ; 004d0046
        ;   XREF to: 004d0120 (CONDITIONAL_JUMP)  ; LAB_004d0120
    LEA EAX,[EBX + -0x1]                ; 004d004c
    MOV dword ptr [ESP + 0x10],EBX      ; 004d004f
    MOV dword ptr [ESP + 0x14],EAX      ; 004d0053
    IMUL EAX,EBX,0x0                    ; 004d0057
    ADD EAX,ESI                         ; 004d005a
    MOV dword ptr [ESP + 0x8],EAX       ; 004d005c
    MOV AL,byte ptr [EBP]               ; 004d0060
        ;   Label: LAB_004d0060
    INC AL                              ; 004d0063
    AND EAX,0xff                        ; 004d0065
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004d006a | g_CharacterClassificationTable
    JZ 0x004d0085                       ; 004d0071
        ;   XREF to: 004d0085 (CONDITIONAL_JUMP)  ; LAB_004d0085
    CMP byte ptr [EBP],0xa              ; 004d0073
    JZ 0x004d0085                       ; 004d0077
        ;   XREF to: 004d0085 (CONDITIONAL_JUMP)  ; LAB_004d0085
    INC EBP                             ; 004d0079
    JMP 0x004d0060                      ; 004d007a
        ;   XREF to: 004d0060 (UNCONDITIONAL_JUMP)  ; LAB_004d0060
    XOR EAX,EAX                         ; 004d007c
        ;   Label: LAB_004d007c
    ADD ESP,0x1c                        ; 004d007e
    POP EBP                             ; 004d0081
    POP ESI                             ; 004d0082
    POP EBX                             ; 004d0083
    RET                                 ; 004d0084
    CMP byte ptr [EBP],0x0              ; 004d0085
        ;   Label: LAB_004d0085
    JZ 0x004d0120                       ; 004d0089
        ;   XREF to: 004d0120 (CONDITIONAL_JUMP)  ; LAB_004d0120
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d008f
    MOV ESI,0xffffffff                  ; 004d0093
    MOV EDI,dword ptr [ESP + 0x8]       ; 004d0098
    XOR EBX,EBX                         ; 004d009c
    MOV dword ptr [ESP + 0x4],EAX       ; 004d009e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d00a2
    MOV dword ptr [ESP + 0x18],ESI      ; 004d00a6
    ADD EDI,EAX                         ; 004d00aa
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d00ac
    MOV ESI,EBP                         ; 004d00b0
    INC EAX                             ; 004d00b2
    MOV dword ptr [ESP + 0x8],EDI       ; 004d00b3
    MOV dword ptr [ESP + 0xc],EAX       ; 004d00b7
    XOR EAX,EAX                         ; 004d00bb
        ;   Label: LAB_004d00bb
    MOV AL,byte ptr [ESI]               ; 004d00bd
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d00bf
    CMP EAX,0xa                         ; 004d00c3
    JNZ 0x004d012c                      ; 004d00c6
        ;   XREF to: 004d012c (CONDITIONAL_JUMP)  ; LAB_004d012c
    MOV EDX,EBX                         ; 004d00c8
        ;   Label: LAB_004d00c8
    TEST EBX,EBX                        ; 004d00ca
    JLE 0x004d00ea                      ; 004d00cc
        ;   XREF to: 004d00ea (CONDITIONAL_JUMP)  ; LAB_004d00ea
    LEA ESI,[EBX + EBP*0x1]             ; 004d00ce
    MOV AL,byte ptr [ESI + -0x1]        ; 004d00d1
        ;   Label: LAB_004d00d1
    INC AL                              ; 004d00d4
    AND EAX,0xff                        ; 004d00d6
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004d00db | g_CharacterClassificationTable
    JZ 0x004d00ea                       ; 004d00e2
        ;   XREF to: 004d00ea (CONDITIONAL_JUMP)  ; LAB_004d00ea
    DEC EDX                             ; 004d00e4
    DEC ESI                             ; 004d00e5
    TEST EDX,EDX                        ; 004d00e6
    JG 0x004d00d1                       ; 004d00e8
        ;   XREF to: 004d00d1 (CONDITIONAL_JUMP)  ; LAB_004d00d1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004d00ea
        ;   Label: LAB_004d00ea
    MOV ECX,EDX                         ; 004d00ee
    MOV ESI,EBP                         ; 004d00f0
    ADD EDX,EDI                         ; 004d00f2
    PUSH EDI                            ; 004d00f4
    MOV EAX,ECX                         ; 004d00f5
    SHR ECX,0x2                         ; 004d00f7
    MOVSD.REP ES:EDI,ESI                ; 004d00fa
    MOV CL,AL                           ; 004d00fc
    AND CL,0x3                          ; 004d00fe
    MOVSB.REP ES:EDI,ESI                ; 004d0101
    POP EDI                             ; 004d0103
    LEA EAX,[EBX + EBP*0x1]             ; 004d0104
    MOV byte ptr [EDX],0x0              ; 004d0107
    CMP byte ptr [EAX],0xa              ; 004d010a
    JNZ 0x004d0110                      ; 004d010d
        ;   XREF to: 004d0110 (CONDITIONAL_JUMP)  ; LAB_004d0110
    INC EBX                             ; 004d010f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d0110
        ;   Label: LAB_004d0110
    ADD EBP,EBX                         ; 004d0114
    CMP EAX,dword ptr [ESP + 0x3c]      ; 004d0116
    JL 0x004d0060                       ; 004d011a
        ;   XREF to: 004d0060 (CONDITIONAL_JUMP)  ; LAB_004d0060
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d0120
        ;   Label: LAB_004d0120
    POP EDI                             ; 004d0124
    ADD ESP,0x1c                        ; 004d0125
    POP EBP                             ; 004d0128
    POP ESI                             ; 004d0129
    POP EBX                             ; 004d012a
    RET                                 ; 004d012b
    TEST EAX,EAX                        ; 004d012c
        ;   Label: LAB_004d012c
    JZ 0x004d00c8                       ; 004d012e
        ;   XREF to: 004d00c8 (CONDITIONAL_JUMP)  ; LAB_004d00c8
    MOV AL,byte ptr [ESP + 0x1c]        ; 004d0130
    INC AL                              ; 004d0134
    AND EAX,0xff                        ; 004d0136
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004d013b | g_CharacterClassificationTable
    JZ 0x004d0148                       ; 004d0142
        ;   XREF to: 004d0148 (CONDITIONAL_JUMP)  ; LAB_004d0148
    MOV dword ptr [ESP + 0x18],EBX      ; 004d0144
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d0148
        ;   Label: LAB_004d0148
    XOR EDI,EDI                         ; 004d014c
    CMP EBX,EAX                         ; 004d014e
    JGE 0x004d0177                      ; 004d0150
        ;   XREF to: 004d0177 (CONDITIONAL_JUMP)  ; LAB_004d0177
    PUSH 0x2d7b010                      ; 004d0152 | g_TempTextBuffer
    MOV EDX,dword ptr [ESP + 0x34]      ; 004d0157
    XOR CH,CH                           ; 004d015b
    PUSH EDX                            ; 004d015d
    MOV byte ptr [EBX + 0x2d7b010],CH   ; 004d015e | g_TempTextBuffer
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004d0164
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004d0169
    CMP EAX,dword ptr [ESP + 0x44]      ; 004d016c
    JG 0x004d0177                       ; 004d0170
        ;   XREF to: 004d0177 (CONDITIONAL_JUMP)  ; LAB_004d0177
    MOV EDI,0x1                         ; 004d0172
    MOV AL,byte ptr [ESP + 0x1c]        ; 004d0177
        ;   Label: LAB_004d0177
    MOV byte ptr [EBX + 0x2d7b010],AL   ; 004d017b | g_TempTextBuffer
    TEST EDI,EDI                        ; 004d0181
    JZ 0x004d018c                       ; 004d0183
        ;   XREF to: 004d018c (CONDITIONAL_JUMP)  ; LAB_004d018c
    INC EBX                             ; 004d0185
    INC ESI                             ; 004d0186
    JMP 0x004d00bb                      ; 004d0187
        ;   XREF to: 004d00bb (UNCONDITIONAL_JUMP)  ; LAB_004d00bb
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d018c
        ;   Label: LAB_004d018c
    TEST ESI,ESI                        ; 004d0190
    JL 0x004d00c8                       ; 004d0192
        ;   XREF to: 004d00c8 (CONDITIONAL_JUMP)  ; LAB_004d00c8
    MOV EBX,ESI                         ; 004d0198
    JMP 0x004d00c8                      ; 004d019a
        ;   XREF to: 004d00c8 (UNCONDITIONAL_JUMP)  ; LAB_004d00c8

