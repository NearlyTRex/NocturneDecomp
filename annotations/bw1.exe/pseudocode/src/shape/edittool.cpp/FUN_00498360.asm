; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00498360(CEditorTools *this_ptr,float scale_factor,int text_color)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   text_color
;
; XREF[3]:
;   core_cloth.cpp_FUN_00441500 at 004416fd
;   core_skeleton.cpp_FUN_00564b20 at 00564cf6
;   shape_edittool.cpp_FUN_004985ae at 00498640
;
; Referenced Globals:
;   undefined4 DAT_005dc278
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f594
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_FUN_004c1dd0
;   engine_matrix.c_transformToCache_FUN_00507b00
;   engine_mini3d.cpp_FUN_00512320
;   engine_mini3d.cpp_FUN_00517d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498360
        ;   Label: shape_edittool.cpp_FUN_00498360
    PUSH ESI                            ; 00498361
    PUSH EDI                            ; 00498362
    PUSH EBP                            ; 00498363
    SUB ESP,0x24                        ; 00498364
    MOV ESI,dword ptr [ESP + 0x40]      ; 00498367
    CMP dword ptr [0x01c3eb50],0x0      ; 0049836b | DAT_01c3eb50
    JZ 0x00498513                       ; 00498372
        ;   XREF to: 00498513 (CONDITIONAL_JUMP)  ; LAB_00498513
    MOV EAX,[0x01c3eb50]                ; 00498378 | DAT_01c3eb50
        ;   Label: LAB_00498378
    PUSH 0x6a                           ; 0049837d
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0049837f
    PUSH EAX                            ; 00498385
    MOV dword ptr [0x01c3f538],EBX      ; 00498386 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049838c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00498391
    FLD float ptr [ESP + 0x3c]          ; 00498394
    FMUL double ptr [0x005dc278]        ; 00498398 | DAT_005dc278
    MOV EDI,dword ptr [0x01c3f544]      ; 0049839e | DAT_01c3f544
    MOV [0x01c3f53c],EAX                ; 004983a4 | DAT_01c3f53c
    CALL crt_math.c_round_FUN_005c03a0  ; 004983a9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x20]        ; 004983ae
    TEST EDI,EDI                        ; 004983b2
    JZ 0x0049853b                       ; 004983b4
        ;   XREF to: 0049853b (CONDITIONAL_JUMP)  ; LAB_0049853b
    MOV EBX,ESI                         ; 004983ba
    AND EBX,0xff                        ; 004983bc
    LEA EAX,[EBX*0x4 + 0x0]             ; 004983c2
    SUB EAX,EBX                         ; 004983c9
    XOR EBX,EBX                         ; 004983cb
    MOV BL,byte ptr [EAX + 0x1c4e9f9]   ; 004983cd
    MOV ESI,EBX                         ; 004983d3
    XOR EBX,EBX                         ; 004983d5
    MOV BL,byte ptr [EAX + 0x1c4e9f8]   ; 004983d7
    SHL ESI,0x8                         ; 004983dd
    SHL EBX,0x10                        ; 004983e0
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004983e3
    OR EBX,ESI                          ; 004983e9
    AND EAX,0xff                        ; 004983eb
    OR EBX,EAX                          ; 004983f0
    PUSH EBX                            ; 004983f2
    CALL engine_mini3d.cpp_FUN_00517d50 ; 004983f3
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 004983f8
    LEA EAX,[ESP + 0x14]                ; 004983fb
        ;   Label: LAB_004983fb
    XOR EBP,EBP                         ; 004983ff
    PUSH EAX                            ; 00498401
    MOV dword ptr [ESP + 0x18],EBP      ; 00498402
    PUSH EBP                            ; 00498406
    MOV dword ptr [ESP + 0x20],EBP      ; 00498407
    MOV dword ptr [ESP + 0x24],EBP      ; 0049840b
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 0049840f
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00498414
    MOV EAX,dword ptr [ESP + 0x20]      ; 00498417
    MOV dword ptr [ESP + 0x14],EAX      ; 0049841b
    LEA EAX,[ESP + 0x14]                ; 0049841f
    PUSH EAX                            ; 00498423
    PUSH 0x1                            ; 00498424
    MOV dword ptr [ESP + 0x20],EBP      ; 00498426
    MOV dword ptr [ESP + 0x24],EBP      ; 0049842a
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 0049842e
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00498433
    MOV ESI,0x629044                    ; 00498436
    SUB ESP,0x30                        ; 0049843b
    MOV ECX,0xc                         ; 0049843e
    MOV EDI,ESP                         ; 00498443
    MOVSD.REP ES:EDI,ESI                ; 00498445
    SUB ESP,0x30                        ; 00498447
    MOV ECX,0xc                         ; 0049844a
    MOV ESI,0x629014                    ; 0049844f
    MOV EDI,ESP                         ; 00498454
    MOVSD.REP ES:EDI,ESI                ; 00498456
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00498458
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0049845d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00498460
    MOV dword ptr [ESP + 0x18],EAX      ; 00498464
    LEA EAX,[ESP + 0x14]                ; 00498468
    PUSH EAX                            ; 0049846c
    PUSH 0x2                            ; 0049846d
    MOV dword ptr [ESP + 0x1c],EBP      ; 0049846f
    MOV dword ptr [ESP + 0x24],EBP      ; 00498473
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498477
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0049847c
    MOV ESI,0x629074                    ; 0049847f
    SUB ESP,0x30                        ; 00498484
    MOV ECX,0xc                         ; 00498487
    MOV EDI,ESP                         ; 0049848c
    MOVSD.REP ES:EDI,ESI                ; 0049848e
    SUB ESP,0x30                        ; 00498490
    MOV ECX,0xc                         ; 00498493
    MOV ESI,0x629014                    ; 00498498
    MOV EDI,ESP                         ; 0049849d
    MOVSD.REP ES:EDI,ESI                ; 0049849f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 004984a1
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004984a6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004984a9
    MOV dword ptr [ESP + 0x1c],EAX      ; 004984ad
    LEA EAX,[ESP + 0x14]                ; 004984b1
    PUSH EAX                            ; 004984b5
    PUSH 0x3                            ; 004984b6
    MOV dword ptr [ESP + 0x1c],EBP      ; 004984b8
    MOV dword ptr [ESP + 0x20],EBP      ; 004984bc
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 004984c0
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004984c5
    MOV ESI,0x6290a4                    ; 004984c8
    SUB ESP,0x30                        ; 004984cd
    MOV ECX,0xc                         ; 004984d0
    MOV EDI,ESP                         ; 004984d5
    MOV EBX,0x629014                    ; 004984d7
    MOVSD.REP ES:EDI,ESI                ; 004984dc
    SUB ESP,0x30                        ; 004984de
    MOV ECX,0xc                         ; 004984e1
    MOV ESI,0x629014                    ; 004984e6
    MOV EDI,ESP                         ; 004984eb
    ADD EBX,0x30                        ; 004984ed
    MOVSD.REP ES:EDI,ESI                ; 004984f0
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 004984f2
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004984f7
    XOR ESI,ESI                         ; 004984fa
    TEST byte ptr [EBX + 0x13],0x80     ; 004984fc
        ;   Label: LAB_004984fc
    JZ 0x00498546                       ; 00498500
        ;   XREF to: 00498546 (CONDITIONAL_JUMP)  ; LAB_00498546
    INC ESI                             ; 00498502
        ;   Label: LAB_00498502
    ADD EBX,0x30                        ; 00498503
    CMP ESI,0x3                         ; 00498506
    JL 0x004984fc                       ; 00498509
        ;   XREF to: 004984fc (CONDITIONAL_JUMP)  ; LAB_004984fc
    ADD ESP,0x24                        ; 0049850b
    POP EBP                             ; 0049850e
    POP EDI                             ; 0049850f
    POP ESI                             ; 00498510
    POP EBX                             ; 00498511
    RET                                 ; 00498512
    MOV ECX,0x5dbc68                    ; 00498513
        ;   Label: LAB_00498513
    MOV EBX,0xa4                        ; 00498518
    PUSH 0x5dbc7e                       ; 0049851d
    MOV dword ptr [0x01d1d400],ECX      ; 00498522 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00498528 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049852e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00498533
    JMP 0x00498378                      ; 00498536
        ;   XREF to: 00498378 (UNCONDITIONAL_JUMP)  ; LAB_00498378
    MOV dword ptr [0x01c4f020],ESI      ; 0049853b | DAT_01c4f020
        ;   Label: LAB_0049853b
    JMP 0x004983fb                      ; 00498541
        ;   XREF to: 004983fb (UNCONDITIONAL_JUMP)  ; LAB_004983fb
    XOR EAX,EAX                         ; 00498546
        ;   Label: LAB_00498546
    MOV AL,byte ptr [ESI + 0x5dc26a]    ; 00498548
    PUSH EAX                            ; 0049854e
    PUSH 0x5dc26e                       ; 0049854f
    LEA EAX,[ESP + 0x8]                 ; 00498554
    PUSH EAX                            ; 00498558
    MOV EDI,dword ptr [EBX + 0x10]      ; 00498559
    MOV EBP,dword ptr [EBX + 0x14]      ; 0049855c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0049855f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00498564
    PUSH 0xffff                         ; 00498567
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 0049856c
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00498571
    PUSH 0x3f800000                     ; 00498574
    CALL engine_mini3d.cpp_FUN_00512320 ; 00498579
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 0049857e
    PUSH -0x1                           ; 00498581
    MOV EDX,dword ptr [0x01c3f594]      ; 00498583 | DAT_01c3f594
    PUSH EDX                            ; 00498589
    SAR EBP,0x10                        ; 0049858a
    PUSH EBP                            ; 0049858d
    SAR EDI,0x10                        ; 0049858e
    PUSH EDI                            ; 00498591
    LEA EAX,[ESP + 0x10]                ; 00498592
    PUSH EAX                            ; 00498596
    MOV ECX,dword ptr [0x01c3eb50]      ; 00498597 | DAT_01c3eb50
    PUSH ECX                            ; 0049859d
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049859e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004985a3
    JMP 0x00498502                      ; 004985a6
        ;   XREF to: 00498502 (UNCONDITIONAL_JUMP)  ; LAB_00498502

