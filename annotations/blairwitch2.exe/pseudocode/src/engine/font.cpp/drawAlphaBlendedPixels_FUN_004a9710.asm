; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004a9710(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_buffer
; uchar *          Stack[0x8]:4   src_indices
; uint *           Stack[0xc]:4   color_table
; int              Stack[0x10]:4   pixel_count
; uint             Stack[0x14]:4   blend_color
;
; XREF[1]:
;   engine_font.cpp_FUN_004a9870 at 004aaab5
;
; Referenced Globals:
;   undefined4 DAT_006093c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9710
        ;   Label: engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710
    PUSH ESI                            ; 004a9711
    PUSH EDI                            ; 004a9712
    PUSH EBP                            ; 004a9713
    MOV EBP,ESP                         ; 004a9714
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a9716
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a971c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004a9722
    MOV ECX,dword ptr [EBP + 0x20]      ; 004a9728
    PXOR MM7,MM7                        ; 004a972e
    MOVD MM4,dword ptr [0x006093c0]     ; 004a9731 | DAT_006093c0
    PUNPCKLBW MM4,MM7                   ; 004a9738
    MOV EAX,0xffffffff                  ; 004a973b
    MOVD MM6,EAX                        ; 004a9740
    PUNPCKLBW MM6,MM7                   ; 004a9743
    MOVZX EAX,byte ptr [ESI]            ; 004a9746
        ;   Label: LAB_004a9746
    CMP EAX,0x0                         ; 004a9749
    JZ 0x004a978d                       ; 004a974c
        ;   XREF to: 004a978d (CONDITIONAL_JUMP)  ; LAB_004a978d
    SHL EAX,0x2                         ; 004a974e
    MOV EAX,dword ptr [EAX + EDX*0x1]   ; 004a9751
    MOVD MM2,EAX                        ; 004a9754
    MOVD MM0,dword ptr [EBP + 0x24]     ; 004a9757
    MOVD MM1,dword ptr [EDI]            ; 004a975e
    PUNPCKLBW MM0,MM7                   ; 004a9761
    PUNPCKLBW MM1,MM7                   ; 004a9764
    PUNPCKLBW MM2,MM7                   ; 004a9767
    PUNPCKLBW MM3,MM7                   ; 004a976a
    PMULLW MM2,MM4                      ; 004a976d
    PSRLW MM2,0x8                       ; 004a9770
    MOVQ MM3,MM2                        ; 004a9774
    PXOR MM3,MM6                        ; 004a9777
    PMULLW MM0,MM2                      ; 004a977a
    PMULLW MM1,MM3                      ; 004a977d
    PADDW MM0,MM1                       ; 004a9780
    PSRLW MM0,0x8                       ; 004a9783
    PACKUSWB MM0,MM7                    ; 004a9787
    MOVD dword ptr [EDI],MM0            ; 004a978a
    INC ESI                             ; 004a978d
        ;   Label: LAB_004a978d
    ADD EDI,0x4                         ; 004a978e
    DEC ECX                             ; 004a9791
    JG 0x004a9746                       ; 004a9792
        ;   XREF to: 004a9746 (CONDITIONAL_JUMP)  ; LAB_004a9746
    EMMS                                ; 004a9794
    MOV ESP,EBP                         ; 004a9796
    POP EBP                             ; 004a9798
    POP EDI                             ; 004a9799
    POP ESI                             ; 004a979a
    POP EBX                             ; 004a979b
    RET                                 ; 004a979c

