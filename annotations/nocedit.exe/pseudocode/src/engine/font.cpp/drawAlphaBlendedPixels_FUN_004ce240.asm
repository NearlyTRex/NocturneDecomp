; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, uint blend_color)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_buffer
; uchar *          Stack[0x8]:4   src_indices
; uint *           Stack[0xc]:4   color_table
; int              Stack[0x10]:4   pixel_count
; uint             Stack[0x14]:4   blend_color
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 at 004cfda0
;
; Referenced Globals:
;   int g_CurrentRenderColor = 0xffffff
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce240
        ;   Label: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
    PUSH ESI                            ; 004ce241
    PUSH EDI                            ; 004ce242
    PUSH EBP                            ; 004ce243
    MOV EBP,ESP                         ; 004ce244
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ce246
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ce24c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004ce252
    MOV ECX,dword ptr [EBP + 0x20]      ; 004ce258
    PXOR MM7,MM7                        ; 004ce25e
    MOVD MM4,dword ptr [0x0066df84]     ; 004ce261 | int g_CurrentRenderColor
    PUNPCKLBW MM4,MM7                   ; 004ce268
    MOV EAX,0xffffffff                  ; 004ce26b
    MOVD MM6,EAX                        ; 004ce270
    PUNPCKLBW MM6,MM7                   ; 004ce273
    MOVZX EAX,byte ptr [ESI]            ; 004ce276
        ;   Label: LAB_004ce276
    CMP EAX,0x0                         ; 004ce279
    JZ 0x004ce2bd                       ; 004ce27c | LAB_004ce2bd
        ;   XREF to: 004ce2bd (CONDITIONAL_JUMP)
    SHL EAX,0x2                         ; 004ce27e
    MOV EAX,dword ptr [EAX + EDX*0x1]   ; 004ce281
    MOVD MM2,EAX                        ; 004ce284
    MOVD MM0,dword ptr [EBP + 0x24]     ; 004ce287
    MOVD MM1,dword ptr [EDI]            ; 004ce28e
    PUNPCKLBW MM0,MM7                   ; 004ce291
    PUNPCKLBW MM1,MM7                   ; 004ce294
    PUNPCKLBW MM2,MM7                   ; 004ce297
    PUNPCKLBW MM3,MM7                   ; 004ce29a
    PMULLW MM2,MM4                      ; 004ce29d
    PSRLW MM2,0x8                       ; 004ce2a0
    MOVQ MM3,MM2                        ; 004ce2a4
    PXOR MM3,MM6                        ; 004ce2a7
    PMULLW MM0,MM2                      ; 004ce2aa
    PMULLW MM1,MM3                      ; 004ce2ad
    PADDW MM0,MM1                       ; 004ce2b0
    PSRLW MM0,0x8                       ; 004ce2b3
    PACKUSWB MM0,MM7                    ; 004ce2b7
    MOVD dword ptr [EDI],MM0            ; 004ce2ba
    INC ESI                             ; 004ce2bd
        ;   Label: LAB_004ce2bd
    ADD EDI,0x4                         ; 004ce2be
    DEC ECX                             ; 004ce2c1
    JG 0x004ce276                       ; 004ce2c2 | LAB_004ce276
        ;   XREF to: 004ce276 (CONDITIONAL_JUMP)
    EMMS                                ; 004ce2c4
    MOV ESP,EBP                         ; 004ce2c6
    POP EBP                             ; 004ce2c8
    POP EDI                             ; 004ce2c9
    POP ESI                             ; 004ce2ca
    POP EBX                             ; 004ce2cb
    RET                                 ; 004ce2cc

