; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0046f000(void)
;
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01bcd070],0x0      ; 0046f000 | DAT_01bcd070
        ;   Label: shape_edittool.cpp_FUN_0046f000
    JZ 0x0046f02b                       ; 0046f007
        ;   XREF to: 0046f02b (CONDITIONAL_JUMP)  ; LAB_0046f02b
    MOV EAX,[0x01bcd070]                ; 0046f009 | DAT_01bcd070
        ;   Label: LAB_0046f009
    PUSH 0x6a                           ; 0046f00e
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0046f010
    PUSH EAX                            ; 0046f016
    MOV dword ptr [0x01bcd9b8],EDX      ; 0046f017 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0046f01d
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0046f022
    MOV [0x01bcd9bc],EAX                ; 0046f025 | DAT_01bcd9bc
    RET                                 ; 0046f02a
    PUSH EBX                            ; 0046f02b
        ;   Label: LAB_0046f02b
    MOV ECX,0x57e4fa                    ; 0046f02c | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 0046f031
    PUSH 0x57e510                       ; 0046f036 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0046f03b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0046f041 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046f047
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046f04c
    POP EBX                             ; 0046f04f
    JMP 0x0046f009                      ; 0046f050
        ;   XREF to: 0046f009 (UNCONDITIONAL_JUMP)  ; LAB_0046f009

