; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00480f00(CEditorTools *this_ptr,float scale_factor,int text_color)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   text_color
;
; XREF[3]:
;   core_cloth.cpp_FUN_0043f160 at 0043f35d
;   core_skeleton.cpp_FUN_005496c0 at 0054988c
;   shape_edittool.cpp_FUN_0048114e at 004811e0
;
; Referenced Globals:
;   undefined4 DAT_005bd335
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb3c
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_FUN_004b0a20
;   engine_matrix.c_transformToCache_FUN_004e5540
;   engine_mini3d.cpp_FUN_004edaf0
;   engine_mini3d.cpp_FUN_004f3520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480f00
        ;   Label: shape_edittool.cpp_FUN_00480f00
    PUSH ESI                            ; 00480f01
    PUSH EDI                            ; 00480f02
    PUSH EBP                            ; 00480f03
    SUB ESP,0x24                        ; 00480f04
    MOV ESI,dword ptr [ESP + 0x40]      ; 00480f07
    CMP dword ptr [0x01c5b0e0],0x0      ; 00480f0b | DAT_01c5b0e0
    JZ 0x004810b3                       ; 00480f12
        ;   XREF to: 004810b3 (CONDITIONAL_JUMP)  ; LAB_004810b3
    MOV EAX,[0x01c5b0e0]                ; 00480f18 | DAT_01c5b0e0
        ;   Label: LAB_00480f18
    PUSH 0x6a                           ; 00480f1d
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 00480f1f
    PUSH EAX                            ; 00480f25
    MOV dword ptr [0x01c5bae0],EBX      ; 00480f26 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 00480f2c
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00480f31
    FLD float ptr [ESP + 0x3c]          ; 00480f34
    FMUL double ptr [0x005bd335]        ; 00480f38 | DAT_005bd335
    MOV EDI,dword ptr [0x01c5baec]      ; 00480f3e | DAT_01c5baec
    MOV [0x01c5bae4],EAX                ; 00480f44 | DAT_01c5bae4
    CALL crt_math.c_round_FUN_005a3120  ; 00480f49
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x20]        ; 00480f4e
    TEST EDI,EDI                        ; 00480f52
    JZ 0x004810db                       ; 00480f54
        ;   XREF to: 004810db (CONDITIONAL_JUMP)  ; LAB_004810db
    MOV EBX,ESI                         ; 00480f5a
    AND EBX,0xff                        ; 00480f5c
    LEA EAX,[EBX*0x4 + 0x0]             ; 00480f62
    SUB EAX,EBX                         ; 00480f69
    XOR EBX,EBX                         ; 00480f6b
    MOV BL,byte ptr [EAX + 0x1c6af99]   ; 00480f6d
    MOV ESI,EBX                         ; 00480f73
    XOR EBX,EBX                         ; 00480f75
    MOV BL,byte ptr [EAX + 0x1c6af98]   ; 00480f77
    SHL ESI,0x8                         ; 00480f7d
    SHL EBX,0x10                        ; 00480f80
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00480f83
    OR EBX,ESI                          ; 00480f89
    AND EAX,0xff                        ; 00480f8b
    OR EBX,EAX                          ; 00480f90
    PUSH EBX                            ; 00480f92
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00480f93
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 00480f98
    LEA EAX,[ESP + 0x14]                ; 00480f9b
        ;   Label: LAB_00480f9b
    XOR EBP,EBP                         ; 00480f9f
    PUSH EAX                            ; 00480fa1
    MOV dword ptr [ESP + 0x18],EBP      ; 00480fa2
    PUSH EBP                            ; 00480fa6
    MOV dword ptr [ESP + 0x20],EBP      ; 00480fa7
    MOV dword ptr [ESP + 0x24],EBP      ; 00480fab
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00480faf
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00480fb4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00480fb7
    MOV dword ptr [ESP + 0x14],EAX      ; 00480fbb
    LEA EAX,[ESP + 0x14]                ; 00480fbf
    PUSH EAX                            ; 00480fc3
    PUSH 0x1                            ; 00480fc4
    MOV dword ptr [ESP + 0x20],EBP      ; 00480fc6
    MOV dword ptr [ESP + 0x24],EBP      ; 00480fca
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00480fce
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00480fd3
    MOV ESI,0x60b044                    ; 00480fd6
    SUB ESP,0x30                        ; 00480fdb
    MOV ECX,0xc                         ; 00480fde
    MOV EDI,ESP                         ; 00480fe3
    MOVSD.REP ES:EDI,ESI                ; 00480fe5
    SUB ESP,0x30                        ; 00480fe7
    MOV ECX,0xc                         ; 00480fea
    MOV ESI,0x60b014                    ; 00480fef
    MOV EDI,ESP                         ; 00480ff4
    MOVSD.REP ES:EDI,ESI                ; 00480ff6
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407b30 ; 00480ff8
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00480ffd
    MOV EAX,dword ptr [ESP + 0x20]      ; 00481000
    MOV dword ptr [ESP + 0x18],EAX      ; 00481004
    LEA EAX,[ESP + 0x14]                ; 00481008
    PUSH EAX                            ; 0048100c
    PUSH 0x2                            ; 0048100d
    MOV dword ptr [ESP + 0x1c],EBP      ; 0048100f
    MOV dword ptr [ESP + 0x24],EBP      ; 00481013
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00481017
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0048101c
    MOV ESI,0x60b074                    ; 0048101f
    SUB ESP,0x30                        ; 00481024
    MOV ECX,0xc                         ; 00481027
    MOV EDI,ESP                         ; 0048102c
    MOVSD.REP ES:EDI,ESI                ; 0048102e
    SUB ESP,0x30                        ; 00481030
    MOV ECX,0xc                         ; 00481033
    MOV ESI,0x60b014                    ; 00481038
    MOV EDI,ESP                         ; 0048103d
    MOVSD.REP ES:EDI,ESI                ; 0048103f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407b30 ; 00481041
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00481046
    MOV EAX,dword ptr [ESP + 0x20]      ; 00481049
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048104d
    LEA EAX,[ESP + 0x14]                ; 00481051
    PUSH EAX                            ; 00481055
    PUSH 0x3                            ; 00481056
    MOV dword ptr [ESP + 0x1c],EBP      ; 00481058
    MOV dword ptr [ESP + 0x20],EBP      ; 0048105c
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00481060
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00481065
    MOV ESI,0x60b0a4                    ; 00481068
    SUB ESP,0x30                        ; 0048106d
    MOV ECX,0xc                         ; 00481070
    MOV EDI,ESP                         ; 00481075
    MOV EBX,0x60b014                    ; 00481077
    MOVSD.REP ES:EDI,ESI                ; 0048107c
    SUB ESP,0x30                        ; 0048107e
    MOV ECX,0xc                         ; 00481081
    MOV ESI,0x60b014                    ; 00481086
    MOV EDI,ESP                         ; 0048108b
    ADD EBX,0x30                        ; 0048108d
    MOVSD.REP ES:EDI,ESI                ; 00481090
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407b30 ; 00481092
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00481097
    XOR ESI,ESI                         ; 0048109a
    TEST byte ptr [EBX + 0x13],0x80     ; 0048109c
        ;   Label: LAB_0048109c
    JZ 0x004810e6                       ; 004810a0
        ;   XREF to: 004810e6 (CONDITIONAL_JUMP)  ; LAB_004810e6
    INC ESI                             ; 004810a2
        ;   Label: LAB_004810a2
    ADD EBX,0x30                        ; 004810a3
    CMP ESI,0x3                         ; 004810a6
    JL 0x0048109c                       ; 004810a9
        ;   XREF to: 0048109c (CONDITIONAL_JUMP)  ; LAB_0048109c
    ADD ESP,0x24                        ; 004810ab
    POP EBP                             ; 004810ae
    POP EDI                             ; 004810af
    POP ESI                             ; 004810b0
    POP EBX                             ; 004810b1
    RET                                 ; 004810b2
    MOV ECX,0x5bcd25                    ; 004810b3
        ;   Label: LAB_004810b3
    MOV EBX,0xa7                        ; 004810b8
    PUSH 0x5bcd3b                       ; 004810bd
    MOV dword ptr [0x01d71de0],ECX      ; 004810c2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004810c8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004810ce
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004810d3
    JMP 0x00480f18                      ; 004810d6
        ;   XREF to: 00480f18 (UNCONDITIONAL_JUMP)  ; LAB_00480f18
    MOV dword ptr [0x01c6b5c0],ESI      ; 004810db | DAT_01c6b5c0
        ;   Label: LAB_004810db
    JMP 0x00480f9b                      ; 004810e1
        ;   XREF to: 00480f9b (UNCONDITIONAL_JUMP)  ; LAB_00480f9b
    XOR EAX,EAX                         ; 004810e6
        ;   Label: LAB_004810e6
    MOV AL,byte ptr [ESI + 0x5bd327]    ; 004810e8
    PUSH EAX                            ; 004810ee
    PUSH 0x5bd32b                       ; 004810ef
    LEA EAX,[ESP + 0x8]                 ; 004810f4
    PUSH EAX                            ; 004810f8
    MOV EDI,dword ptr [EBX + 0x10]      ; 004810f9
    MOV EBP,dword ptr [EBX + 0x14]      ; 004810fc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004810ff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00481104
    PUSH 0xffff                         ; 00481107
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0048110c
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 00481111
    PUSH 0x3f800000                     ; 00481114
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 00481119
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0048111e
    PUSH -0x1                           ; 00481121
    MOV EDX,dword ptr [0x01c5bb3c]      ; 00481123 | DAT_01c5bb3c
    PUSH EDX                            ; 00481129
    SAR EBP,0x10                        ; 0048112a
    PUSH EBP                            ; 0048112d
    SAR EDI,0x10                        ; 0048112e
    PUSH EDI                            ; 00481131
    LEA EAX,[ESP + 0x10]                ; 00481132
    PUSH EAX                            ; 00481136
    MOV ECX,dword ptr [0x01c5b0e0]      ; 00481137 | DAT_01c5b0e0
    PUSH ECX                            ; 0048113d
    CALL engine_font.cpp_FUN_004b0a20   ; 0048113e
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 00481143
    JMP 0x004810a2                      ; 00481146
        ;   XREF to: 004810a2 (UNCONDITIONAL_JUMP)  ; LAB_004810a2

