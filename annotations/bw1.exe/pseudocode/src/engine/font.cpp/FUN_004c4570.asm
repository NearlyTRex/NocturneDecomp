; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004c4570(CBitFont *this_ptr,int offset_value,int start_char,int end_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset_value
; int              Stack[0xc]:4   start_char
; int              Stack[0x10]:4   end_char
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045e000 at 0045e06b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4570
        ;   Label: engine_font.cpp_FUN_004c4570
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c4571
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c4575
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c4579
    CMP ECX,0xffffff7f                  ; 004c457d
    JNZ 0x004c4587                      ; 004c4583
        ;   XREF to: 004c4587 (CONDITIONAL_JUMP)  ; LAB_004c4587
    MOV ECX,EAX                         ; 004c4585
    TEST EAX,EAX                        ; 004c4587
        ;   Label: LAB_004c4587
    JL 0x004c45c2                       ; 004c4589
        ;   XREF to: 004c45c2 (CONDITIONAL_JUMP)  ; LAB_004c45c2
    CMP ECX,0x100                       ; 004c458b
        ;   Label: LAB_004c458b
    JL 0x004c4598                       ; 004c4591
        ;   XREF to: 004c4598 (CONDITIONAL_JUMP)  ; LAB_004c4598
    MOV ECX,0xff                        ; 004c4593
    MOV EDX,EAX                         ; 004c4598
        ;   Label: LAB_004c4598
    CMP EAX,ECX                         ; 004c459a
    JG 0x004c45c0                       ; 004c459c
        ;   XREF to: 004c45c0 (CONDITIONAL_JUMP)  ; LAB_004c45c0
    PUSH ESI                            ; 004c459e
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c459f
    SHL EAX,0x2                         ; 004c45a3
    ADD EAX,ESI                         ; 004c45a6
    POP ESI                             ; 004c45a8
    ADD EAX,0x4                         ; 004c45a9
        ;   Label: LAB_004c45a9
    INC EDX                             ; 004c45ac
    MOV dword ptr [EAX + 0x3de4],EBX    ; 004c45ad
    CMP EDX,ECX                         ; 004c45b3
    JLE 0x004c45a9                      ; 004c45b5
        ;   XREF to: 004c45a9 (CONDITIONAL_JUMP)  ; LAB_004c45a9
    LEA EAX,[EAX]                       ; 004c45b7
    LEA EDX,[EDX]                       ; 004c45bd
    POP EBX                             ; 004c45c0
        ;   Label: LAB_004c45c0
    RET                                 ; 004c45c1
    XOR EAX,EAX                         ; 004c45c2
        ;   Label: LAB_004c45c2
    JMP 0x004c458b                      ; 004c45c4
        ;   XREF to: 004c458b (UNCONDITIONAL_JUMP)  ; LAB_004c458b

