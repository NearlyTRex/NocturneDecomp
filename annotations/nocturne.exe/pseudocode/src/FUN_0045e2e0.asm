; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045e2e0(void)
;
; Local Variables:
; undefined1       Stack[-0x4]:1  local_4
; undefined1       Stack[-0x3]:1  local_3
;
; Referenced Globals:
;   undefined4 DAT_01b4d718
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_00401ed0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0045e2e0
        ;   Label: FUN_0045e2e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045e2e3
    MOV EDX,dword ptr [0x01b4d718]      ; 0045e2e7 | DAT_01b4d718
    TEST EDX,EDX                        ; 0045e2ed
    JZ 0x0045e2ff                       ; 0045e2ef
        ;   XREF to: 0045e2ff (CONDITIONAL_JUMP)  ; LAB_0045e2ff
    PUSH EAX                            ; 0045e2f1
    PUSH EDX                            ; 0045e2f2
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0 ; 0045e2f3
        ;   XREF to: 004930b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0()
    ADD ESP,0x8                         ; 0045e2f8
    ADD ESP,0x4                         ; 0045e2fb
    RET                                 ; 0045e2fe
    MOV byte ptr [ESP],AL               ; 0045e2ff
        ;   Label: LAB_0045e2ff
    XOR AH,AH                           ; 0045e302
    MOV byte ptr [ESP + 0x1],AH         ; 0045e304
    MOV EAX,ESP                         ; 0045e308
    PUSH EAX                            ; 0045e30a
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 0045e30b
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_getStringWidth_FUN_00401ed0()
    ADD ESP,0x4                         ; 0045e310
    DEC EAX                             ; 0045e313
    ADD ESP,0x4                         ; 0045e314
    RET                                 ; 0045e317

