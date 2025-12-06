; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEdCheck_render_FUN_004a6c00(CEdCheck * this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539917
;
; Referenced Globals:
;   CBitFont* g_EditorFont
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_clipLineGlobal_FUN_00402c50
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
;   shape_edittool.cpp_draw3DBorder_FUN_004a58f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6c00
        ;   Label: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
    PUSH ESI                            ; 004a6c01
    PUSH EDI                            ; 004a6c02
    PUSH EBP                            ; 004a6c03
    SUB ESP,0x8                         ; 004a6c04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a6c07
    PUSH EBX                            ; 004a6c0b
    MOV ESI,dword ptr [EBX + 0x14]      ; 004a6c0c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004a6c0f
    MOV EBP,dword ptr [EBX + 0x10]      ; 004a6c12
    ADD ESI,ECX                         ; 004a6c15
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0 ; 004a6c17 | int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck * this_ptr)
        ;   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
    MOV EDX,ESI                         ; 004a6c1c
    SUB EDX,EAX                         ; 004a6c1e
    MOV EAX,EDX                         ; 004a6c20
    SAR EDX,0x1f                        ; 004a6c22
    SUB EAX,EDX                         ; 004a6c25
    SAR EAX,0x1                         ; 004a6c27
    ADD ESP,0x4                         ; 004a6c29
    PUSH EBX                            ; 004a6c2c
    MOV ESI,EAX                         ; 004a6c2d
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70 ; 004a6c2f | int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck * this_ptr)
        ;   XREF to: 004a6b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a6c34
    PUSH EBX                            ; 004a6c37
    LEA EDI,[EAX + EBP*0x1]             ; 004a6c38
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0 ; 004a6c3b | int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck * this_ptr)
        ;   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
    MOV EDX,ESI                         ; 004a6c40
    ADD ESP,0x4                         ; 004a6c42
    ADD EDX,EAX                         ; 004a6c45
    LEA EAX,[EBX + 0x24]                ; 004a6c47
    PUSH EAX                            ; 004a6c4a
    MOV dword ptr [ESP + 0x8],EDX       ; 004a6c4b
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a6c4f | CBitFont * g_EditorFont
    PUSH EDX                            ; 004a6c55
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6c56
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 004a6c5a | int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a6c5f
    PUSH -0x1                           ; 004a6c62
    MOV ECX,dword ptr [EBX + 0xc]       ; 004a6c64
    MOV EDX,dword ptr [EBX + 0x14]      ; 004a6c67
    PUSH ECX                            ; 004a6c6a
    ADD EDX,dword ptr [EBX + 0x1c]      ; 004a6c6b
    SUB EDX,EAX                         ; 004a6c6e
    MOV EAX,EDX                         ; 004a6c70
    SAR EDX,0x1f                        ; 004a6c72
    SUB EAX,EDX                         ; 004a6c75
    SAR EAX,0x1                         ; 004a6c77
    PUSH EAX                            ; 004a6c79
    PUSH EBX                            ; 004a6c7a
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0 ; 004a6c7b | int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck * this_ptr)
        ;   XREF to: 004a6be0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a6c80
    ADD EAX,EDI                         ; 004a6c83
    PUSH EAX                            ; 004a6c85
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a6c86
    PUSH EAX                            ; 004a6c8a
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a6c8b | CBitFont * g_EditorFont
    PUSH EDX                            ; 004a6c91
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004a6c92 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004a6c97
    MOV ECX,dword ptr [EBX + 0x20]      ; 004a6c9a
    PUSH ECX                            ; 004a6c9d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6c9e
    PUSH EAX                            ; 004a6ca2
    PUSH EDI                            ; 004a6ca3
    PUSH ESI                            ; 004a6ca4
    PUSH EBP                            ; 004a6ca5
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a6ca6 | void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x20]      ; 004a6cab
    ADD ESP,0x14                        ; 004a6cae
    TEST EDX,EDX                        ; 004a6cb1
    JZ 0x004a6cc7                       ; 004a6cb3 | LAB_004a6cc7
        ;   XREF to: 004a6cc7 (CONDITIONAL_JUMP)
    INC ESI                             ; 004a6cb5
    INC EBP                             ; 004a6cb6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a6cb7
    CMP EAX,0x1                         ; 004a6cba
    JZ 0x004a6ce1                       ; 004a6cbd | LAB_004a6ce1
        ;   XREF to: 004a6ce1 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 004a6cbf
    POP EBP                             ; 004a6cc2
    POP EDI                             ; 004a6cc3
    POP ESI                             ; 004a6cc4
    POP EBX                             ; 004a6cc5
    RET                                 ; 004a6cc6
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a6cc7
        ;   Label: LAB_004a6cc7
    DEC ECX                             ; 004a6ccb
    DEC EDI                             ; 004a6ccc
    MOV dword ptr [ESP + 0x4],ECX       ; 004a6ccd
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a6cd1
    CMP EAX,0x1                         ; 004a6cd4
    JZ 0x004a6ce1                       ; 004a6cd7 | LAB_004a6ce1
        ;   XREF to: 004a6ce1 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 004a6cd9
    POP EBP                             ; 004a6cdc
    POP EDI                             ; 004a6cdd
    POP ESI                             ; 004a6cde
    POP EBX                             ; 004a6cdf
    RET                                 ; 004a6ce0
    MOV EBX,dword ptr [ESP + 0x4]       ; 004a6ce1
        ;   Label: LAB_004a6ce1
    SUB EBX,0x2                         ; 004a6ce5
    PUSH EBX                            ; 004a6ce8
    SUB EDI,0x2                         ; 004a6ce9
    PUSH EDI                            ; 004a6cec
    ADD ESI,EAX                         ; 004a6ced
    PUSH ESI                            ; 004a6cef
    ADD EBP,EAX                         ; 004a6cf0
    XOR EDX,EDX                         ; 004a6cf2
    PUSH EBP                            ; 004a6cf4
    MOV dword ptr [0x02d02570],EDX      ; 004a6cf5 | int g_ActiveRenderColor
    CALL engine_2d.c_clipLineGlobal_FUN_00402c50 ; 004a6cfb | void engine_2d.c_clipLineGlobal_FUN_00402c50(int * x1, int * y1, int * x2, int * y2)
        ;   XREF to: 00402c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004a6d00
    PUSH EBX                            ; 004a6d03
    PUSH EBP                            ; 004a6d04
    PUSH ESI                            ; 004a6d05
    PUSH EDI                            ; 004a6d06
    CALL engine_2d.c_clipLineGlobal_FUN_00402c50 ; 004a6d07 | void engine_2d.c_clipLineGlobal_FUN_00402c50(int * x1, int * y1, int * x2, int * y2)
        ;   XREF to: 00402c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004a6d0c
    ADD ESP,0x8                         ; 004a6d0f
    POP EBP                             ; 004a6d12
    POP EDI                             ; 004a6d13
    POP ESI                             ; 004a6d14
    POP EBX                             ; 004a6d15
    RET                                 ; 004a6d16

