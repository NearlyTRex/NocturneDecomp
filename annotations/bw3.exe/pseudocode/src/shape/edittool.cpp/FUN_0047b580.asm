; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b580(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c5b0e0],0x0      ; 0047b580 | DAT_01c5b0e0
        ;   Label: shape_edittool.cpp_FUN_0047b580
    JZ 0x0047b5ab                       ; 0047b587
        ;   XREF to: 0047b5ab (CONDITIONAL_JUMP)  ; LAB_0047b5ab
    MOV EAX,[0x01c5b0e0]                ; 0047b589 | DAT_01c5b0e0
        ;   Label: LAB_0047b589
    PUSH 0x6a                           ; 0047b58e
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047b590
    PUSH EAX                            ; 0047b596
    MOV dword ptr [0x01c5bae0],EDX      ; 0047b597 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047b59d
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047b5a2
    MOV [0x01c5bae4],EAX                ; 0047b5a5 | DAT_01c5bae4
    RET                                 ; 0047b5aa
    PUSH EBX                            ; 0047b5ab
        ;   Label: LAB_0047b5ab
    MOV ECX,0x5bcd25                    ; 0047b5ac
    MOV EBX,0xa7                        ; 0047b5b1
    PUSH 0x5bcd3b                       ; 0047b5b6
    MOV dword ptr [0x01d71de0],ECX      ; 0047b5bb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047b5c1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047b5c7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047b5cc
    POP EBX                             ; 0047b5cf
    JMP 0x0047b589                      ; 0047b5d0
        ;   XREF to: 0047b589 (UNCONDITIONAL_JUMP)  ; LAB_0047b589

