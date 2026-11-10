; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049dc70(CEdCheck *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_clipLineGlobal_FUN_00402ca0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
;   engine_font.cpp_FUN_004c1dd0
;   engine_mini3d.cpp_FUN_00517d50
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50
;   shape_edittool.cpp_FUN_0049c500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dc70
        ;   Label: shape_edittool.cpp_FUN_0049dc70
    PUSH ESI                            ; 0049dc71
    PUSH EDI                            ; 0049dc72
    PUSH EBP                            ; 0049dc73
    SUB ESP,0x8                         ; 0049dc74
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0049dc77
    PUSH EBX                            ; 0049dc7b
    MOV ESI,dword ptr [EBX + 0x14]      ; 0049dc7c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0049dc7f
    MOV EDI,dword ptr [EBX + 0x10]      ; 0049dc82
    ADD ESI,ECX                         ; 0049dc85
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20 ; 0049dc87
        ;   XREF to: 0049dc20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(CEdCheck * this_ptr)
    MOV EDX,ESI                         ; 0049dc8c
    SUB EDX,EAX                         ; 0049dc8e
    MOV EAX,EDX                         ; 0049dc90
    SAR EDX,0x1f                        ; 0049dc92
    SUB EAX,EDX                         ; 0049dc95
    SAR EAX,0x1                         ; 0049dc97
    ADD ESP,0x4                         ; 0049dc99
    PUSH EBX                            ; 0049dc9c
    MOV ESI,EAX                         ; 0049dc9d
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0 ; 0049dc9f
        ;   XREF to: 0049dbe0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0049dca4
    PUSH EBX                            ; 0049dca7
    LEA EBP,[EDI + EAX*0x1]             ; 0049dca8
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20 ; 0049dcab
        ;   XREF to: 0049dc20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(CEdCheck * this_ptr)
    MOV EDX,ESI                         ; 0049dcb0
    ADD ESP,0x4                         ; 0049dcb2
    ADD EDX,EAX                         ; 0049dcb5
    LEA EAX,[EBX + 0x24]                ; 0049dcb7
    PUSH EAX                            ; 0049dcba
    MOV dword ptr [ESP + 0x8],EDX       ; 0049dcbb
    MOV EDX,dword ptr [0x01c3eb50]      ; 0049dcbf | DAT_01c3eb50
    PUSH EDX                            ; 0049dcc5
    MOV dword ptr [ESP + 0x8],EAX       ; 0049dcc6
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 0049dcca
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0049dccf
    PUSH -0x1                           ; 0049dcd2
    MOV ECX,dword ptr [EBX + 0xc]       ; 0049dcd4
    MOV EDX,dword ptr [EBX + 0x14]      ; 0049dcd7
    PUSH ECX                            ; 0049dcda
    ADD EDX,dword ptr [EBX + 0x1c]      ; 0049dcdb
    SUB EDX,EAX                         ; 0049dcde
    MOV EAX,EDX                         ; 0049dce0
    SAR EDX,0x1f                        ; 0049dce2
    SUB EAX,EDX                         ; 0049dce5
    SAR EAX,0x1                         ; 0049dce7
    PUSH EAX                            ; 0049dce9
    PUSH EBX                            ; 0049dcea
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50 ; 0049dceb
        ;   XREF to: 0049dc50 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0049dcf0
    ADD EAX,EBP                         ; 0049dcf3
    PUSH EAX                            ; 0049dcf5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049dcf6
    PUSH EAX                            ; 0049dcfa
    MOV EDX,dword ptr [0x01c3eb50]      ; 0049dcfb | DAT_01c3eb50
    PUSH EDX                            ; 0049dd01
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049dd02
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0049dd07
    MOV ECX,dword ptr [EBX + 0x20]      ; 0049dd0a
    PUSH ECX                            ; 0049dd0d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049dd0e
    PUSH EAX                            ; 0049dd12
    PUSH EBP                            ; 0049dd13
    PUSH ESI                            ; 0049dd14
    PUSH EDI                            ; 0049dd15
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049dd16
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    MOV EDX,dword ptr [EBX + 0x20]      ; 0049dd1b
    ADD ESP,0x14                        ; 0049dd1e
    TEST EDX,EDX                        ; 0049dd21
    JZ 0x0049dd69                       ; 0049dd23
        ;   XREF to: 0049dd69 (CONDITIONAL_JUMP)  ; LAB_0049dd69
    INC ESI                             ; 0049dd25
    INC EDI                             ; 0049dd26
    CMP dword ptr [EBX + 0x4],0x1       ; 0049dd27
        ;   Label: LAB_0049dd27
    JNZ 0x0049dd61                      ; 0049dd2b
        ;   XREF to: 0049dd61 (CONDITIONAL_JUMP)  ; LAB_0049dd61
    MOV EDX,dword ptr [0x01c3f544]      ; 0049dd2d | DAT_01c3f544
    TEST EDX,EDX                        ; 0049dd33
    JNZ 0x0049dd75                      ; 0049dd35
        ;   XREF to: 0049dd75 (CONDITIONAL_JUMP)  ; LAB_0049dd75
    MOV dword ptr [0x01c4f020],EDX      ; 0049dd37 | DAT_01c4f020
    MOV EBX,dword ptr [ESP + 0x4]       ; 0049dd3d
        ;   Label: LAB_0049dd3d
    SUB EBX,0x2                         ; 0049dd41
    PUSH EBX                            ; 0049dd44
    SUB EBP,0x2                         ; 0049dd45
    PUSH EBP                            ; 0049dd48
    INC ESI                             ; 0049dd49
    PUSH ESI                            ; 0049dd4a
    INC EDI                             ; 0049dd4b
    PUSH EDI                            ; 0049dd4c
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 0049dd4d
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00402ca0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049dd52
    PUSH EBX                            ; 0049dd55
    PUSH EDI                            ; 0049dd56
    PUSH ESI                            ; 0049dd57
    PUSH EBP                            ; 0049dd58
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 0049dd59
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00402ca0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049dd5e
    ADD ESP,0x8                         ; 0049dd61
        ;   Label: LAB_0049dd61
    POP EBP                             ; 0049dd64
    POP EDI                             ; 0049dd65
    POP ESI                             ; 0049dd66
    POP EBX                             ; 0049dd67
    RET                                 ; 0049dd68
    MOV ECX,dword ptr [ESP + 0x4]       ; 0049dd69
        ;   Label: LAB_0049dd69
    DEC ECX                             ; 0049dd6d
    DEC EBP                             ; 0049dd6e
    MOV dword ptr [ESP + 0x4],ECX       ; 0049dd6f
    JMP 0x0049dd27                      ; 0049dd73
        ;   XREF to: 0049dd27 (UNCONDITIONAL_JUMP)  ; LAB_0049dd27
    XOR EDX,EDX                         ; 0049dd75
        ;   Label: LAB_0049dd75
    XOR EAX,EAX                         ; 0049dd77
    MOV DL,byte ptr [0x01c4e9f9]        ; 0049dd79 | DAT_01c4e9f9
    MOV AL,[0x01c4e9f8]                 ; 0049dd7f | DAT_01c4e9f8
    SHL EDX,0x8                         ; 0049dd84
    SHL EAX,0x10                        ; 0049dd87
    OR EDX,EAX                          ; 0049dd8a
    XOR EAX,EAX                         ; 0049dd8c
    MOV AL,[0x01c4e9fa]                 ; 0049dd8e | DAT_01c4e9fa
    OR EAX,EDX                          ; 0049dd93
    PUSH EAX                            ; 0049dd95
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049dd96
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049dd9b
    JMP 0x0049dd3d                      ; 0049dd9e
        ;   XREF to: 0049dd3d (UNCONDITIONAL_JUMP)  ; LAB_0049dd3d

