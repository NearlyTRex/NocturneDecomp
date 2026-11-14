; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(CBitFont *this_ptr,int offset_value,int start_char,int end_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset_value
; int              Stack[0xc]:4   start_char
; int              Stack[0x10]:4   end_char
;
; XREF[1]:
;   core_dfont.cpp_FUN_00447ea0 at 00447f0b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab5c0
        ;   Label: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ab5c1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ab5c5
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ab5c9
    CMP ECX,0xffffff7f                  ; 004ab5cd
    JNZ 0x004ab5d7                      ; 004ab5d3
        ;   XREF to: 004ab5d7 (CONDITIONAL_JUMP)  ; LAB_004ab5d7
    MOV ECX,EAX                         ; 004ab5d5
    TEST EAX,EAX                        ; 004ab5d7
        ;   Label: LAB_004ab5d7
    JL 0x004ab612                       ; 004ab5d9
        ;   XREF to: 004ab612 (CONDITIONAL_JUMP)  ; LAB_004ab612
    CMP ECX,0x100                       ; 004ab5db
        ;   Label: LAB_004ab5db
    JL 0x004ab5e8                       ; 004ab5e1
        ;   XREF to: 004ab5e8 (CONDITIONAL_JUMP)  ; LAB_004ab5e8
    MOV ECX,0xff                        ; 004ab5e3
    MOV EDX,EAX                         ; 004ab5e8
        ;   Label: LAB_004ab5e8
    CMP EAX,ECX                         ; 004ab5ea
    JG 0x004ab610                       ; 004ab5ec
        ;   XREF to: 004ab610 (CONDITIONAL_JUMP)  ; LAB_004ab610
    PUSH ESI                            ; 004ab5ee
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ab5ef
    SHL EAX,0x2                         ; 004ab5f3
    ADD EAX,ESI                         ; 004ab5f6
    POP ESI                             ; 004ab5f8
    ADD EAX,0x4                         ; 004ab5f9
        ;   Label: LAB_004ab5f9
    INC EDX                             ; 004ab5fc
    MOV dword ptr [EAX + 0x3de4],EBX    ; 004ab5fd
    CMP EDX,ECX                         ; 004ab603
    JLE 0x004ab5f9                      ; 004ab605
        ;   XREF to: 004ab5f9 (CONDITIONAL_JUMP)  ; LAB_004ab5f9
    LEA EAX,[EAX]                       ; 004ab607
    LEA EDX,[EDX]                       ; 004ab60d
    POP EBX                             ; 004ab610
        ;   Label: LAB_004ab610
    RET                                 ; 004ab611
    XOR EAX,EAX                         ; 004ab612
        ;   Label: LAB_004ab612
    JMP 0x004ab5db                      ; 004ab614
        ;   XREF to: 004ab5db (UNCONDITIONAL_JUMP)  ; LAB_004ab5db

