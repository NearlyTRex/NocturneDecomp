; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, int bitmap_stride)
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
;   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 at 004cd968
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cda20
        ;   Label: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
    PUSH ESI                            ; 004cda21
    PUSH EDI                            ; 004cda22
    PUSH EBP                            ; 004cda23
    SUB ESP,0x4                         ; 004cda24
    MOV ESI,dword ptr [ESP + 0x18]      ; 004cda27
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004cda2b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cda2f
    MOV ECX,dword ptr [ESP + 0x24]      ; 004cda33
    XOR EDX,EDX                         ; 004cda37
    XOR EDI,EDI                         ; 004cda39
    MOV dword ptr [ESP],EDX             ; 004cda3b
    TEST ECX,ECX                        ; 004cda3e
    JLE 0x004cda6b                      ; 004cda40 | LAB_004cda6b
        ;   XREF to: 004cda6b (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 004cda42
        ;   Label: LAB_004cda42
    XOR EAX,EAX                         ; 004cda44
    TEST EBX,EBX                        ; 004cda46
    JLE 0x004cda5c                      ; 004cda48 | LAB_004cda5c
        ;   XREF to: 004cda5c (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004cda4a
        ;   Label: LAB_004cda4a
    MOV CL,byte ptr [EDX]               ; 004cda4c
    CMP ECX,dword ptr [ESI + 0x3188]    ; 004cda4e
    JNZ 0x004cda76                      ; 004cda54 | LAB_004cda76
        ;   XREF to: 004cda76 (CONDITIONAL_JUMP)
    INC EAX                             ; 004cda56
    INC EDX                             ; 004cda57
    CMP EAX,EBX                         ; 004cda58
    JL 0x004cda4a                       ; 004cda5a | LAB_004cda4a
        ;   XREF to: 004cda4a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x28]      ; 004cda5c
        ;   Label: LAB_004cda5c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cda60
    INC EDI                             ; 004cda64
    ADD EBP,EAX                         ; 004cda65
    CMP EDI,EDX                         ; 004cda67
    JL 0x004cda42                       ; 004cda69 | LAB_004cda42
        ;   XREF to: 004cda42 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 004cda6b
        ;   Label: LAB_004cda6b
    ADD ESP,0x4                         ; 004cda6e
    POP EBP                             ; 004cda71
    POP EDI                             ; 004cda72
    POP ESI                             ; 004cda73
    POP EBX                             ; 004cda74
    RET                                 ; 004cda75
    LEA EAX,[EDI + 0x1]                 ; 004cda76
        ;   Label: LAB_004cda76
    MOV dword ptr [ESP],EAX             ; 004cda79
    JMP 0x004cda5c                      ; 004cda7c | LAB_004cda5c
        ;   XREF to: 004cda5c (UNCONDITIONAL_JUMP)

