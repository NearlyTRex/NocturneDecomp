; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a8220(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe390
;   undefined4 DAT_005fe394
;   undefined4 CAlphaBitmap_01d19cc4.width
;   undefined4 CAlphaBitmap_01d19cc4.height
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8220
        ;   Label: core_flashlit.cpp_FUN_004a8220
    PUSH ESI                            ; 004a8221
    PUSH EDI                            ; 004a8222
    PUSH EBP                            ; 004a8223
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a8224
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a8228
    MOV EBX,dword ptr [0x005fe390]      ; 004a822c | DAT_005fe390
    CMP EDX,EBX                         ; 004a8232
    JL 0x004a825a                       ; 004a8234
        ;   XREF to: 004a825a (CONDITIONAL_JUMP)  ; LAB_004a825a
    MOV ESI,dword ptr [0x005fe394]      ; 004a8236 | DAT_005fe394
    CMP ECX,ESI                         ; 004a823c
    JL 0x004a825a                       ; 004a823e
        ;   XREF to: 004a825a (CONDITIONAL_JUMP)  ; LAB_004a825a
    MOV EDI,dword ptr [0x01d19cd0]      ; 004a8240 | CAlphaBitmap_01d19cc4.width
    LEA EAX,[EBX + EDI*0x1]             ; 004a8246
    CMP EDX,EAX                         ; 004a8249
    JGE 0x004a825a                      ; 004a824b
        ;   XREF to: 004a825a (CONDITIONAL_JUMP)  ; LAB_004a825a
    MOV EBP,dword ptr [0x01d19cd4]      ; 004a824d | CAlphaBitmap_01d19cc4.height
    LEA EAX,[ESI + EBP*0x1]             ; 004a8253
    CMP ECX,EAX                         ; 004a8256
    JL 0x004a8261                       ; 004a8258
        ;   XREF to: 004a8261 (CONDITIONAL_JUMP)  ; LAB_004a8261
    XOR EAX,EAX                         ; 004a825a
        ;   Label: LAB_004a825a
    POP EBP                             ; 004a825c
    POP EDI                             ; 004a825d
    POP ESI                             ; 004a825e
    POP EBX                             ; 004a825f
    RET                                 ; 004a8260
    MOV EAX,0x1                         ; 004a8261
        ;   Label: LAB_004a8261
    POP EBP                             ; 004a8266
    POP EDI                             ; 004a8267
    POP ESI                             ; 004a8268
    POP EBX                             ; 004a8269
    RET                                 ; 004a826a

