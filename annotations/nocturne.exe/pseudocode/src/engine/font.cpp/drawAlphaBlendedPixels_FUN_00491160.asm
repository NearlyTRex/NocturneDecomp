; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_buffer
; uchar *          Stack[0x8]:4   src_indices
; uint *           Stack[0xc]:4   color_table
; int              Stack[0x10]:4   pixel_count
; uint             Stack[0x14]:4   blend_color
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 at 00492953
;
; Referenced Globals:
;   int INT_005acab4 = 0xffffff
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491160
        ;   Label: engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160
    PUSH ESI                            ; 00491161
    PUSH EDI                            ; 00491162
    PUSH EBP                            ; 00491163
    MOV EBP,ESP                         ; 00491164
    MOV EDI,dword ptr [EBP + 0x14]      ; 00491166
    MOV ESI,dword ptr [EBP + 0x18]      ; 0049116c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00491172
    MOV ECX,dword ptr [EBP + 0x20]      ; 00491178
    PXOR MM7,MM7                        ; 0049117e
    MOVD MM4,dword ptr [0x005acab4]     ; 00491181 | INT_005acab4
    PUNPCKLBW MM4,MM7                   ; 00491188
    MOV EAX,0xffffffff                  ; 0049118b
    MOVD MM6,EAX                        ; 00491190
    PUNPCKLBW MM6,MM7                   ; 00491193
    MOVZX EAX,byte ptr [ESI]            ; 00491196
        ;   Label: LAB_00491196
    CMP EAX,0x0                         ; 00491199
    JZ 0x004911dd                       ; 0049119c
        ;   XREF to: 004911dd (CONDITIONAL_JUMP)  ; LAB_004911dd
    SHL EAX,0x2                         ; 0049119e
    MOV EAX,dword ptr [EAX + EDX*0x1]   ; 004911a1
    MOVD MM2,EAX                        ; 004911a4
    MOVD MM0,dword ptr [EBP + 0x24]     ; 004911a7
    MOVD MM1,dword ptr [EDI]            ; 004911ae
    PUNPCKLBW MM0,MM7                   ; 004911b1
    PUNPCKLBW MM1,MM7                   ; 004911b4
    PUNPCKLBW MM2,MM7                   ; 004911b7
    PUNPCKLBW MM3,MM7                   ; 004911ba
    PMULLW MM2,MM4                      ; 004911bd
    PSRLW MM2,0x8                       ; 004911c0
    MOVQ MM3,MM2                        ; 004911c4
    PXOR MM3,MM6                        ; 004911c7
    PMULLW MM0,MM2                      ; 004911ca
    PMULLW MM1,MM3                      ; 004911cd
    PADDW MM0,MM1                       ; 004911d0
    PSRLW MM0,0x8                       ; 004911d3
    PACKUSWB MM0,MM7                    ; 004911d7
    MOVD dword ptr [EDI],MM0            ; 004911da
    INC ESI                             ; 004911dd
        ;   Label: LAB_004911dd
    ADD EDI,0x4                         ; 004911de
    DEC ECX                             ; 004911e1
    JG 0x00491196                       ; 004911e2
        ;   XREF to: 00491196 (CONDITIONAL_JUMP)  ; LAB_00491196
    EMMS                                ; 004911e4
    MOV ESP,EBP                         ; 004911e6
    POP EBP                             ; 004911e8
    POP EDI                             ; 004911e9
    POP ESI                             ; 004911ea
    POP EBX                             ; 004911eb
    RET                                 ; 004911ec

