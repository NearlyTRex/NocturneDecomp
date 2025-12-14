; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_turnModelInsideOut_FUN_004671e0(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6a5
;
; Referenced Globals:
;   TerminatedCString s_Model_turned_inside_out__0061c93c
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_swapDWords_FUN_00462130
;   shape_design.c_swapFloats_FUN_00462160
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004671e0
        ;   Label: shape_design.c_turnModelInsideOut_FUN_004671e0
    PUSH ESI                            ; 004671e1
    PUSH EDI                            ; 004671e2
    PUSH EBP                            ; 004671e3
    MOV EBP,ESP                         ; 004671e4
    SUB ESP,0xc                         ; 004671e6
    MOV dword ptr [EBP + -0xc],0x0      ; 004671ec
    JMP 0x004671fb                      ; 004671f3
        ;   XREF to: 004671fb (UNCONDITIONAL_JUMP)  ; LAB_004671fb
    MOV EAX,dword ptr [EBP + -0xc]      ; 004671f5
        ;   Label: LAB_004671f5
    INC dword ptr [EBP + -0xc]          ; 004671f8
    MOV EAX,dword ptr [EBP + -0xc]      ; 004671fb
        ;   Label: LAB_004671fb
    CMP EAX,dword ptr [0x016e990c]      ; 004671fe | g_PolygonCount
    JGE 0x00467327                      ; 00467204
        ;   XREF to: 00467327 (CONDITIONAL_JUMP)  ; LAB_00467327
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0046720a
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00467211 | DAT_016e99b4
    MOV dword ptr [EBP + -0x4],EAX      ; 00467217
    MOV dword ptr [EBP + -0x8],0x0      ; 0046721a
    JMP 0x00467229                      ; 00467221
        ;   XREF to: 00467229 (UNCONDITIONAL_JUMP)  ; LAB_00467229
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467223
        ;   Label: LAB_00467223
    INC dword ptr [EBP + -0x8]          ; 00467226
    MOV EAX,dword ptr [EBP + -0x4]      ; 00467229
        ;   Label: LAB_00467229
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046722c
    SAR EDX,0x1f                        ; 0046722f
    SUB EAX,EDX                         ; 00467232
    SAR EAX,0x1                         ; 00467234
    CMP EAX,dword ptr [EBP + -0x8]      ; 00467236
    JLE 0x00467322                      ; 00467239
        ;   XREF to: 00467322 (CONDITIONAL_JUMP)  ; LAB_00467322
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046723f
    SUB EAX,dword ptr [EBP + -0x8]      ; 00467242
    LEA ECX,[EAX*0x4 + 0x0]             ; 00467245
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0046724c
    MOV EAX,0x16e9910                   ; 00467253 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00467258
    LEA EDX,[ECX + -0x4]                ; 0046725a
    ADD EAX,0xb8                        ; 0046725d
    ADD EAX,EDX                         ; 00467262
    PUSH EAX                            ; 00467264
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 00467265
    MOV EAX,0x16e9910                   ; 0046726c | g_ModelPolygonData
    ADD EAX,EDX                         ; 00467271
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467273
    SHL EDX,0x2                         ; 00467276
    ADD EAX,0xb8                        ; 00467279
    ADD EAX,EDX                         ; 0046727e
    PUSH EAX                            ; 00467280
    CALL shape_design.c_swapDWords_FUN_00462130 ; 00467281
        ;   XREF to: 00462130 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapDWords_FUN_00462130(uint * value1_ptr, uint * value2_ptr)
    ADD ESP,0x8                         ; 00467286
    MOV EAX,dword ptr [EBP + -0x4]      ; 00467289
    SUB EAX,dword ptr [EBP + -0x8]      ; 0046728c
    LEA ECX,[EAX*0x4 + 0x0]             ; 0046728f
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467296
    MOV EDX,0x16e9910                   ; 0046729d | g_ModelPolygonData
    ADD EAX,EDX                         ; 004672a2
    SUB ECX,0x4                         ; 004672a4
    ADD EAX,0xf8                        ; 004672a7
    ADD EAX,ECX                         ; 004672ac
    PUSH EAX                            ; 004672ae
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004672af
    MOV EDX,0x16e9910                   ; 004672b6 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004672bb
    MOV EDX,dword ptr [EBP + -0x8]      ; 004672bd
    SHL EDX,0x2                         ; 004672c0
    ADD EAX,0xf8                        ; 004672c3
    ADD EAX,EDX                         ; 004672c8
    PUSH EAX                            ; 004672ca
    CALL shape_design.c_swapFloats_FUN_00462160 ; 004672cb
        ;   XREF to: 00462160 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
    ADD ESP,0x8                         ; 004672d0
    MOV EAX,dword ptr [EBP + -0x4]      ; 004672d3
    SUB EAX,dword ptr [EBP + -0x8]      ; 004672d6
    LEA ECX,[EAX*0x4 + 0x0]             ; 004672d9
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004672e0
    MOV EDX,0x16e9910                   ; 004672e7 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004672ec
    LEA EDX,[ECX + -0x4]                ; 004672ee
    ADD EAX,0x138                       ; 004672f1
    ADD EAX,EDX                         ; 004672f6
    PUSH EAX                            ; 004672f8
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004672f9
    MOV EDX,0x16e9910                   ; 00467300 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00467305
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467307
    SHL EDX,0x2                         ; 0046730a
    ADD EAX,0x138                       ; 0046730d
    ADD EAX,EDX                         ; 00467312
    PUSH EAX                            ; 00467314
    CALL shape_design.c_swapFloats_FUN_00462160 ; 00467315
        ;   XREF to: 00462160 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
    ADD ESP,0x8                         ; 0046731a
    JMP 0x00467223                      ; 0046731d
        ;   XREF to: 00467223 (UNCONDITIONAL_JUMP)  ; LAB_00467223
    JMP 0x004671f5                      ; 00467322
        ;   XREF to: 004671f5 (UNCONDITIONAL_JUMP)  ; LAB_004671f5
        ;   Label: LAB_00467322
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00467327
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00467327
    PUSH 0x0                            ; 0046732c
    PUSH 0x0                            ; 0046732e
    MOV EAX,0x61c93c                    ; 00467330 | = "Model turned inside out.  Hit a key..."
    PUSH EAX                            ; 00467335 | = "Model turned inside out.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467336
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0046733b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046733e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00467343
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 00467348
    POP EBP                             ; 0046734a
    POP EDI                             ; 0046734b
    POP ESI                             ; 0046734c
    POP EBX                             ; 0046734d
    RET                                 ; 0046734e

