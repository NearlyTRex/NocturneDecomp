; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0(FILE * output_file)
;
; Parameters:
; FILE *           Stack[0xc]:4   output_file
;
; Referenced Globals:
;   TerminatedCString s_s_2d_5dx_5d_Page_d_5d_5d_00619753
;   TerminatedCString s_ux_u_square_found_using__00619790
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   undefined4 DAT_0083c1e0
;   undefined4 DAT_0083c208
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c220
;   undefined4 DAT_0083c228
;   undefined4 DAT_0083c22c
;   undefined4 DAT_0083c254
;   undefined4 DAT_0083c258
;   undefined4 DAT_0083c25c
;   ... and 6 more
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x40                           ; 004481d0
        ;   Label: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 004481d5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 004481da
    PUSH ESI                            ; 004481db
    PUSH EDI                            ; 004481dc
    PUSH EBP                            ; 004481dd
    MOV EDI,dword ptr [ESP + 0x14]      ; 004481de
    MOV EDX,dword ptr [0x0084a854]      ; 004481e2 | uint g_CramTextureCount
    XOR ESI,ESI                         ; 004481e8
    TEST EDX,EDX                        ; 004481ea
    JLE 0x00448230                      ; 004481ec | LAB_00448230
        ;   XREF to: 00448230 (CONDITIONAL_JUMP)
    MOV EBX,0x83c1dc                    ; 004481ee | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV ECX,dword ptr [EBX + 0x44]      ; 004481f3 | DAT_0083c220 | DAT_0083c26c
        ;   Label: LAB_004481f3
    PUSH ECX                            ; 004481f6
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004481f7 | DAT_0083c218 | DAT_0083c264
    PUSH EBP                            ; 004481fa
    MOV EAX,dword ptr [EBX + 0x38]      ; 004481fb | DAT_0083c214 | DAT_0083c260
    PUSH EAX                            ; 004481fe
    MOV EDX,dword ptr [EBX + 0x34]      ; 004481ff | DAT_0083c210 | DAT_0083c25c
    PUSH EDX                            ; 00448202
    MOV ECX,dword ptr [EBX + 0x30]      ; 00448203 | DAT_0083c20c | DAT_0083c258
    PUSH ECX                            ; 00448206
    MOV EBP,dword ptr [EBX + 0x2c]      ; 00448207 | DAT_0083c208 | DAT_0083c254
    PUSH EBP                            ; 0044820a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044820b | DAT_0083c1e0 | DAT_0083c22c
    PUSH EAX                            ; 0044820e
    MOV EDX,dword ptr [EBX]             ; 0044820f | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
    PUSH EDX                            ; 00448211
    PUSH ESI                            ; 00448212
    PUSH 0x619753                       ; 00448213 | = "%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5..." | s_s_2d_5dx_5d_Page_d_5d_5d_00619753 = %2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d

    PUSH EDI                            ; 00448218
    ADD EBX,0x4c                        ; 00448219
    INC ESI                             ; 0044821c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044821d | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0084a854]      ; 00448222 | uint g_CramTextureCount
    ADD ESP,0x2c                        ; 00448228
    CMP ESI,ECX                         ; 0044822b
    JL 0x004481f3                       ; 0044822d | LAB_004481f3
        ;   XREF to: 004481f3 (CONDITIONAL_JUMP)
    NOP                                 ; 0044822f
    MOV EBX,dword ptr [0x0084a880]      ; 00448230 | int g_CramPaddingCalculation
        ;   Label: LAB_00448230
    PUSH EBX                            ; 00448236
    MOV ESI,dword ptr [0x0084a884]      ; 00448237 | int g_CramCurrentAcceptableSize
    PUSH ESI                            ; 0044823d
    PUSH ESI                            ; 0044823e
    PUSH 0x619790                       ; 0044823f | = "%ux%u square found using %u padding.\n" | s_ux_u_square_found_using__00619790 = %ux%u square found using %u padding.

    PUSH EDI                            ; 00448244
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00448245 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0044824a
    POP EBP                             ; 0044824d
    POP EDI                             ; 0044824e
    POP ESI                             ; 0044824f
    POP EBX                             ; 00448250
    RET                                 ; 00448251

