; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   char_bitmap
; int              Stack[0xc]:4   char_width
; int              Stack[0x10]:4   char_height
; int              Stack[0x14]:4   bitmap_stride
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_004b0510 at 004b089d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b09c0
        ;   Label: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0
    PUSH ESI                            ; 004b09c1
    PUSH EDI                            ; 004b09c2
    PUSH EBP                            ; 004b09c3
    SUB ESP,0x4                         ; 004b09c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b09c7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b09cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b09cf
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b09d3
    XOR EDX,EDX                         ; 004b09d7
    XOR EDI,EDI                         ; 004b09d9
    MOV dword ptr [ESP],EDX             ; 004b09db
    TEST ECX,ECX                        ; 004b09de
    JLE 0x004b0a0b                      ; 004b09e0
        ;   XREF to: 004b0a0b (CONDITIONAL_JUMP)  ; LAB_004b0a0b
    MOV EDX,EBP                         ; 004b09e2
        ;   Label: LAB_004b09e2
    XOR EAX,EAX                         ; 004b09e4
    TEST EBX,EBX                        ; 004b09e6
    JLE 0x004b09fc                      ; 004b09e8
        ;   XREF to: 004b09fc (CONDITIONAL_JUMP)  ; LAB_004b09fc
    XOR ECX,ECX                         ; 004b09ea
        ;   Label: LAB_004b09ea
    MOV CL,byte ptr [EDX]               ; 004b09ec
    CMP ECX,dword ptr [ESI + 0x4208]    ; 004b09ee
    JNZ 0x004b0a16                      ; 004b09f4
        ;   XREF to: 004b0a16 (CONDITIONAL_JUMP)  ; LAB_004b0a16
    INC EAX                             ; 004b09f6
    INC EDX                             ; 004b09f7
    CMP EAX,EBX                         ; 004b09f8
    JL 0x004b09ea                       ; 004b09fa
        ;   XREF to: 004b09ea (CONDITIONAL_JUMP)  ; LAB_004b09ea
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b09fc
        ;   Label: LAB_004b09fc
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b0a00
    INC EDI                             ; 004b0a04
    ADD EBP,EAX                         ; 004b0a05
    CMP EDI,EDX                         ; 004b0a07
    JL 0x004b09e2                       ; 004b0a09
        ;   XREF to: 004b09e2 (CONDITIONAL_JUMP)  ; LAB_004b09e2
    MOV EAX,dword ptr [ESP]             ; 004b0a0b
        ;   Label: LAB_004b0a0b
    ADD ESP,0x4                         ; 004b0a0e
    POP EBP                             ; 004b0a11
    POP EDI                             ; 004b0a12
    POP ESI                             ; 004b0a13
    POP EBX                             ; 004b0a14
    RET                                 ; 004b0a15
    LEA EAX,[EDI + 0x1]                 ; 004b0a16
        ;   Label: LAB_004b0a16
    MOV dword ptr [ESP],EAX             ; 004b0a19
    JMP 0x004b09fc                      ; 004b0a1c
        ;   XREF to: 004b09fc (UNCONDITIONAL_JUMP)  ; LAB_004b09fc

