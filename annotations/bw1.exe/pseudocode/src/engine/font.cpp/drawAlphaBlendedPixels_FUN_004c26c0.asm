; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004c26c0(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_buffer
; uchar *          Stack[0x8]:4   src_indices
; uint *           Stack[0xc]:4   color_table
; int              Stack[0x10]:4   pixel_count
; uint             Stack[0x14]:4   blend_color
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2810 at 004c3a55
;
; Referenced Globals:
;   undefined4 DAT_006104f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c26c0
        ;   Label: engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0
    PUSH ESI                            ; 004c26c1
    PUSH EDI                            ; 004c26c2
    PUSH EBP                            ; 004c26c3
    MOV EBP,ESP                         ; 004c26c4
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c26c6
    MOV ESI,dword ptr [EBP + 0x18]      ; 004c26cc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004c26d2
    MOV ECX,dword ptr [EBP + 0x20]      ; 004c26d8
    PXOR MM7,MM7                        ; 004c26de
    MOVD MM4,dword ptr [0x006104f0]     ; 004c26e1 | DAT_006104f0
    PUNPCKLBW MM4,MM7                   ; 004c26e8
    MOV EAX,0xffffffff                  ; 004c26eb
    MOVD MM6,EAX                        ; 004c26f0
    PUNPCKLBW MM6,MM7                   ; 004c26f3
    MOVZX EAX,byte ptr [ESI]            ; 004c26f6
        ;   Label: LAB_004c26f6
    CMP EAX,0x0                         ; 004c26f9
    JZ 0x004c273d                       ; 004c26fc
        ;   XREF to: 004c273d (CONDITIONAL_JUMP)  ; LAB_004c273d
    SHL EAX,0x2                         ; 004c26fe
    MOV EAX,dword ptr [EAX + EDX*0x1]   ; 004c2701
    MOVD MM2,EAX                        ; 004c2704
    MOVD MM0,dword ptr [EBP + 0x24]     ; 004c2707
    MOVD MM1,dword ptr [EDI]            ; 004c270e
    PUNPCKLBW MM0,MM7                   ; 004c2711
    PUNPCKLBW MM1,MM7                   ; 004c2714
    PUNPCKLBW MM2,MM7                   ; 004c2717
    PUNPCKLBW MM3,MM7                   ; 004c271a
    PMULLW MM2,MM4                      ; 004c271d
    PSRLW MM2,0x8                       ; 004c2720
    MOVQ MM3,MM2                        ; 004c2724
    PXOR MM3,MM6                        ; 004c2727
    PMULLW MM0,MM2                      ; 004c272a
    PMULLW MM1,MM3                      ; 004c272d
    PADDW MM0,MM1                       ; 004c2730
    PSRLW MM0,0x8                       ; 004c2733
    PACKUSWB MM0,MM7                    ; 004c2737
    MOVD dword ptr [EDI],MM0            ; 004c273a
    INC ESI                             ; 004c273d
        ;   Label: LAB_004c273d
    ADD EDI,0x4                         ; 004c273e
    DEC ECX                             ; 004c2741
    JG 0x004c26f6                       ; 004c2742
        ;   XREF to: 004c26f6 (CONDITIONAL_JUMP)  ; LAB_004c26f6
    EMMS                                ; 004c2744
    MOV ESP,EBP                         ; 004c2746
    POP EBP                             ; 004c2748
    POP EDI                             ; 004c2749
    POP ESI                             ; 004c274a
    POP EBX                             ; 004c274b
    RET                                 ; 004c274c

