; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004b3150(CBitFont *this_ptr,int offset_value,int start_char,int end_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset_value
; int              Stack[0xc]:4   start_char
; int              Stack[0x10]:4   end_char
;
; XREF[1]:
;   core_dfont.cpp_FUN_00459f50 at 00459fbb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3150
        ;   Label: engine_font.cpp_FUN_004b3150
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b3151
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b3155
    MOV ECX,dword ptr [ESP + 0x14]      ; 004b3159
    CMP ECX,0xffffff7f                  ; 004b315d
    JNZ 0x004b3167                      ; 004b3163
        ;   XREF to: 004b3167 (CONDITIONAL_JUMP)  ; LAB_004b3167
    MOV ECX,EAX                         ; 004b3165
    TEST EAX,EAX                        ; 004b3167
        ;   Label: LAB_004b3167
    JL 0x004b31a2                       ; 004b3169
        ;   XREF to: 004b31a2 (CONDITIONAL_JUMP)  ; LAB_004b31a2
    CMP ECX,0x100                       ; 004b316b
        ;   Label: LAB_004b316b
    JL 0x004b3178                       ; 004b3171
        ;   XREF to: 004b3178 (CONDITIONAL_JUMP)  ; LAB_004b3178
    MOV ECX,0xff                        ; 004b3173
    MOV EDX,EAX                         ; 004b3178
        ;   Label: LAB_004b3178
    CMP EAX,ECX                         ; 004b317a
    JG 0x004b31a0                       ; 004b317c
        ;   XREF to: 004b31a0 (CONDITIONAL_JUMP)  ; LAB_004b31a0
    PUSH ESI                            ; 004b317e
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b317f
    SHL EAX,0x2                         ; 004b3183
    ADD EAX,ESI                         ; 004b3186
    POP ESI                             ; 004b3188
    ADD EAX,0x4                         ; 004b3189
        ;   Label: LAB_004b3189
    INC EDX                             ; 004b318c
    MOV dword ptr [EAX + 0x3de4],EBX    ; 004b318d
    CMP EDX,ECX                         ; 004b3193
    JLE 0x004b3189                      ; 004b3195
        ;   XREF to: 004b3189 (CONDITIONAL_JUMP)  ; LAB_004b3189
    LEA EAX,[EAX]                       ; 004b3197
    LEA EDX,[EDX]                       ; 004b319d
    POP EBX                             ; 004b31a0
        ;   Label: LAB_004b31a0
    RET                                 ; 004b31a1
    XOR EAX,EAX                         ; 004b31a2
        ;   Label: LAB_004b31a2
    JMP 0x004b316b                      ; 004b31a4
        ;   XREF to: 004b316b (UNCONDITIONAL_JUMP)  ; LAB_004b316b

