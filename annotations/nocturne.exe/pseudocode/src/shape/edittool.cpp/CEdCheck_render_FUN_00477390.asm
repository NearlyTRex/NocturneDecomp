; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_CEdCheck_render_FUN_00477390(CEdCheck *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_clipLineGlobal_FUN_00403940
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370
;   shape_edittool.cpp_draw3DBorder_FUN_00476260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477390
        ;   Label: shape_edittool.cpp_CEdCheck_render_FUN_00477390
    PUSH ESI                            ; 00477391
    PUSH EDI                            ; 00477392
    PUSH EBP                            ; 00477393
    SUB ESP,0x8                         ; 00477394
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00477397
    PUSH EBX                            ; 0047739b
    MOV ESI,dword ptr [EBX + 0x14]      ; 0047739c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0047739f
    MOV EBP,dword ptr [EBX + 0x10]      ; 004773a2
    ADD ESI,ECX                         ; 004773a5
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340 ; 004773a7
        ;   XREF to: 00477340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340()
    MOV EDX,ESI                         ; 004773ac
    SUB EDX,EAX                         ; 004773ae
    MOV EAX,EDX                         ; 004773b0
    SAR EDX,0x1f                        ; 004773b2
    SUB EAX,EDX                         ; 004773b5
    SAR EAX,0x1                         ; 004773b7
    ADD ESP,0x4                         ; 004773b9
    PUSH EBX                            ; 004773bc
    MOV ESI,EAX                         ; 004773bd
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300 ; 004773bf
        ;   XREF to: 00477300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004773c4
    PUSH EBX                            ; 004773c7
    LEA EDI,[EAX + EBP*0x1]             ; 004773c8
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340 ; 004773cb
        ;   XREF to: 00477340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340()
    MOV EDX,ESI                         ; 004773d0
    ADD ESP,0x4                         ; 004773d2
    ADD EDX,EAX                         ; 004773d5
    LEA EAX,[EBX + 0x24]                ; 004773d7
    PUSH EAX                            ; 004773da
    MOV dword ptr [ESP + 0x8],EDX       ; 004773db
    MOV EDX,dword ptr [0x01bcd070]      ; 004773df | DAT_01bcd070
    PUSH EDX                            ; 004773e5
    MOV dword ptr [ESP + 0x8],EAX       ; 004773e6
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 004773ea
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004773ef
    PUSH -0x1                           ; 004773f2
    MOV ECX,dword ptr [EBX + 0xc]       ; 004773f4
    MOV EDX,dword ptr [EBX + 0x14]      ; 004773f7
    PUSH ECX                            ; 004773fa
    ADD EDX,dword ptr [EBX + 0x1c]      ; 004773fb
    SUB EDX,EAX                         ; 004773fe
    MOV EAX,EDX                         ; 00477400
    SAR EDX,0x1f                        ; 00477402
    SUB EAX,EDX                         ; 00477405
    SAR EAX,0x1                         ; 00477407
    PUSH EAX                            ; 00477409
    PUSH EBX                            ; 0047740a
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370 ; 0047740b
        ;   XREF to: 00477370 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 00477410
    ADD EAX,EDI                         ; 00477413
    PUSH EAX                            ; 00477415
    MOV EAX,dword ptr [ESP + 0x10]      ; 00477416
    PUSH EAX                            ; 0047741a
    MOV EDX,dword ptr [0x01bcd070]      ; 0047741b | DAT_01bcd070
    PUSH EDX                            ; 00477421
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00477422
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00477427
    MOV ECX,dword ptr [EBX + 0x20]      ; 0047742a
    PUSH ECX                            ; 0047742d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047742e
    PUSH EAX                            ; 00477432
    PUSH EDI                            ; 00477433
    PUSH ESI                            ; 00477434
    PUSH EBP                            ; 00477435
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 00477436
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_00476260(int left, int top, int width, int height, ...)
    MOV EDX,dword ptr [EBX + 0x20]      ; 0047743b
    ADD ESP,0x14                        ; 0047743e
    TEST EDX,EDX                        ; 00477441
    JZ 0x00477457                       ; 00477443
        ;   XREF to: 00477457 (CONDITIONAL_JUMP)  ; LAB_00477457
    INC ESI                             ; 00477445
    INC EBP                             ; 00477446
    MOV EAX,dword ptr [EBX + 0x4]       ; 00477447
    CMP EAX,0x1                         ; 0047744a
    JZ 0x00477471                       ; 0047744d
        ;   XREF to: 00477471 (CONDITIONAL_JUMP)  ; LAB_00477471
    ADD ESP,0x8                         ; 0047744f
    POP EBP                             ; 00477452
    POP EDI                             ; 00477453
    POP ESI                             ; 00477454
    POP EBX                             ; 00477455
    RET                                 ; 00477456
    MOV ECX,dword ptr [ESP + 0x4]       ; 00477457
        ;   Label: LAB_00477457
    DEC ECX                             ; 0047745b
    DEC EDI                             ; 0047745c
    MOV dword ptr [ESP + 0x4],ECX       ; 0047745d
    MOV EAX,dword ptr [EBX + 0x4]       ; 00477461
    CMP EAX,0x1                         ; 00477464
    JZ 0x00477471                       ; 00477467
        ;   XREF to: 00477471 (CONDITIONAL_JUMP)  ; LAB_00477471
    ADD ESP,0x8                         ; 00477469
    POP EBP                             ; 0047746c
    POP EDI                             ; 0047746d
    POP ESI                             ; 0047746e
    POP EBX                             ; 0047746f
    RET                                 ; 00477470
    MOV EBX,dword ptr [ESP + 0x4]       ; 00477471
        ;   Label: LAB_00477471
    SUB EBX,0x2                         ; 00477475
    PUSH EBX                            ; 00477478
    SUB EDI,0x2                         ; 00477479
    PUSH EDI                            ; 0047747c
    ADD ESI,EAX                         ; 0047747d
    PUSH ESI                            ; 0047747f
    ADD EBP,EAX                         ; 00477480
    XOR EDX,EDX                         ; 00477482
    PUSH EBP                            ; 00477484
    MOV dword ptr [0x01c00c70],EDX      ; 00477485 | DAT_01c00c70
    CALL engine_2d.c_clipLineGlobal_FUN_00403940 ; 0047748b
        ;   XREF to: 00403940 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00403940(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00477490
    PUSH EBX                            ; 00477493
    PUSH EBP                            ; 00477494
    PUSH ESI                            ; 00477495
    PUSH EDI                            ; 00477496
    CALL engine_2d.c_clipLineGlobal_FUN_00403940 ; 00477497
        ;   XREF to: 00403940 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00403940(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0047749c
    ADD ESP,0x8                         ; 0047749f
    POP EBP                             ; 004774a2
    POP EDI                             ; 004774a3
    POP ESI                             ; 004774a4
    POP EBX                             ; 004774a5
    RET                                 ; 004774a6

