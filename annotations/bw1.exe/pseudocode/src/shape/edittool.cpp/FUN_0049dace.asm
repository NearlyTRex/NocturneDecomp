; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049dace(CEdCheck *param_1,undefined4 param_2,undefined4 param_3,CEdCheck *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0049dace
        ;   Label: shape_edittool.cpp_FUN_0049dace
    PUSH EBX                            ; 0049dad0
    PUSH ESI                            ; 0049dad1
    PUSH EDI                            ; 0049dad2
    PUSH EBP                            ; 0049dad3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049dad4
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049dad8
    TEST ESI,ESI                        ; 0049dadc
    JNZ 0x0049dae5                      ; 0049dade
        ;   XREF to: 0049dae5 (CONDITIONAL_JUMP)  ; LAB_0049dae5
    MOV ESI,0x5dc89e                    ; 0049dae0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dae5
        ;   Label: LAB_0049dae5
    MOV dword ptr [EBX + 0x10],EAX      ; 0049dae9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049daec
    LEA EDI,[EBX + 0x24]                ; 0049daf0
    MOV dword ptr [EBX + 0x14],EAX      ; 0049daf3
    PUSH EDI                            ; 0049daf6
    MOV AL,byte ptr [ESI]               ; 0049daf7
        ;   Label: LAB_0049daf7
    MOV byte ptr [EDI],AL               ; 0049daf9
    CMP AL,0x0                          ; 0049dafb
    JZ 0x0049db0f                       ; 0049dafd
        ;   XREF to: 0049db0f (CONDITIONAL_JUMP)  ; LAB_0049db0f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049daff
    ADD ESI,0x2                         ; 0049db02
    MOV byte ptr [EDI + 0x1],AL         ; 0049db05
    ADD EDI,0x2                         ; 0049db08
    CMP AL,0x0                          ; 0049db0b
    JNZ 0x0049daf7                      ; 0049db0d
        ;   XREF to: 0049daf7 (CONDITIONAL_JUMP)  ; LAB_0049daf7
    POP EDI                             ; 0049db0f
        ;   Label: LAB_0049db0f
    CMP dword ptr [0x01c3eb50],0x0      ; 0049db10 | DAT_01c3eb50
    JZ 0x0049db8a                       ; 0049db17
        ;   XREF to: 0049db8a (CONDITIONAL_JUMP)  ; LAB_0049db8a
    MOV EAX,[0x01c3eb50]                ; 0049db19 | DAT_01c3eb50
        ;   Label: LAB_0049db19
    PUSH 0x6a                           ; 0049db1e
    MOV ESI,dword ptr [EAX + 0x41e8]    ; 0049db20
    PUSH EAX                            ; 0049db26
    MOV dword ptr [0x01c3f538],ESI      ; 0049db27 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049db2d
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049db32
    LEA ESI,[EBX + 0x24]                ; 0049db35
    PUSH ESI                            ; 0049db38
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049db39 | DAT_01c3eb50
    PUSH EDI                            ; 0049db3f
    MOV [0x01c3f53c],EAX                ; 0049db40 | DAT_01c3f53c
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 0049db45
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    MOV EDI,EAX                         ; 0049db4a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0049db4c
    ADD ESP,0x8                         ; 0049db4f
    ADD EAX,EDI                         ; 0049db52
    PUSH EBX                            ; 0049db54
    MOV dword ptr [EBX + 0x1c],EAX      ; 0049db55
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0 ; 0049db58
        ;   XREF to: 0049dbe0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0049db5d
    MOV EDI,dword ptr [EBX + 0x10]      ; 0049db60
    PUSH EBX                            ; 0049db63
    ADD EDI,EAX                         ; 0049db64
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50 ; 0049db66
        ;   XREF to: 0049dc50 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0049db6b
    PUSH ESI                            ; 0049db6e
    MOV EBP,dword ptr [0x01c3eb50]      ; 0049db6f | DAT_01c3eb50
    PUSH EBP                            ; 0049db75
    ADD EDI,EAX                         ; 0049db76
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 0049db78
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD EDI,EAX                         ; 0049db7d
    ADD ESP,0x8                         ; 0049db7f
    MOV dword ptr [EBX + 0x18],EDI      ; 0049db82
    POP EBP                             ; 0049db85
    POP EDI                             ; 0049db86
    POP ESI                             ; 0049db87
    POP EBX                             ; 0049db88
    RET                                 ; 0049db89
    MOV ECX,0x5dbc68                    ; 0049db8a
        ;   Label: LAB_0049db8a
    MOV ESI,0xa4                        ; 0049db8f
    PUSH 0x5dbc7e                       ; 0049db94
    MOV dword ptr [0x01d1d400],ECX      ; 0049db99 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0049db9f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049dba5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049dbaa
    JMP 0x0049db19                      ; 0049dbad
        ;   XREF to: 0049db19 (UNCONDITIONAL_JUMP)  ; LAB_0049db19

