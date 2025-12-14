; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(CBitFont * this_ptr, int advance_value, int start_char, int end_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   advance_value
; int              Stack[0xc]:4   start_char
; int              Stack[0x10]:4   end_char
;
; XREF[1]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0230
        ;   Label: engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d0231
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d0235
    MOV ECX,dword ptr [ESP + 0x14]      ; 004d0239
    CMP ECX,0xffffff7f                  ; 004d023d
    JNZ 0x004d0247                      ; 004d0243
        ;   XREF to: 004d0247 (CONDITIONAL_JUMP)  ; LAB_004d0247
    MOV ECX,EAX                         ; 004d0245
    TEST EAX,EAX                        ; 004d0247
        ;   Label: LAB_004d0247
    JL 0x004d0282                       ; 004d0249
        ;   XREF to: 004d0282 (CONDITIONAL_JUMP)  ; LAB_004d0282
    CMP ECX,0x100                       ; 004d024b
        ;   Label: LAB_004d024b
    JL 0x004d0258                       ; 004d0251
        ;   XREF to: 004d0258 (CONDITIONAL_JUMP)  ; LAB_004d0258
    MOV ECX,0xff                        ; 004d0253
    MOV EDX,EAX                         ; 004d0258
        ;   Label: LAB_004d0258
    CMP EAX,ECX                         ; 004d025a
    JG 0x004d0280                       ; 004d025c
        ;   XREF to: 004d0280 (CONDITIONAL_JUMP)  ; LAB_004d0280
    PUSH ESI                            ; 004d025e
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d025f
    SHL EAX,0x2                         ; 004d0263
    ADD EAX,ESI                         ; 004d0266
    POP ESI                             ; 004d0268
    ADD EAX,0x4                         ; 004d0269
        ;   Label: LAB_004d0269
    INC EDX                             ; 004d026c
    MOV dword ptr [EAX + 0x2d64],EBX    ; 004d026d
    CMP EDX,ECX                         ; 004d0273
    JLE 0x004d0269                      ; 004d0275
        ;   XREF to: 004d0269 (CONDITIONAL_JUMP)  ; LAB_004d0269
    LEA EAX,[EAX]                       ; 004d0277
    LEA EDX,[EDX]                       ; 004d027d
    POP EBX                             ; 004d0280
        ;   Label: LAB_004d0280
    RET                                 ; 004d0281
    XOR EAX,EAX                         ; 004d0282
        ;   Label: LAB_004d0282
    JMP 0x004d024b                      ; 004d0284
        ;   XREF to: 004d024b (UNCONDITIONAL_JUMP)  ; LAB_004d024b

