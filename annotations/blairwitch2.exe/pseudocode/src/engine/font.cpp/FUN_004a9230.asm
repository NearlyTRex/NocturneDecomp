; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a9230(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6 ,undefined4 param_7)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a91e0 at 004a920f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9230
        ;   Label: engine_font.cpp_FUN_004a9230
    PUSH ESI                            ; 004a9231
    PUSH EDI                            ; 004a9232
    PUSH EBP                            ; 004a9233
    SUB ESP,0x1000                      ; 004a9234
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a923a
    PUSH EDX                            ; 004a9241
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004a9242
    PUSH ECX                            ; 004a9249
    LEA EAX,[ESP + 0x8]                 ; 004a924a
    PUSH EAX                            ; 004a924e
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004a924f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004a9254
    MOV EAX,ESP                         ; 004a9257
    PUSH EAX                            ; 004a9259
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004a925a
    PUSH EBX                            ; 004a9261
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004a9262
    PUSH ESI                            ; 004a9269
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004a926a
    PUSH EDI                            ; 004a9271
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004a9272
    PUSH EBP                            ; 004a9279
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a927a
    PUSH EAX                            ; 004a9281
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0 ; 004a9282
        ;   XREF to: 004a91a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004a9287
    ADD ESP,0x1000                      ; 004a928a
    POP EBP                             ; 004a9290
    POP EDI                             ; 004a9291
    POP ESI                             ; 004a9292
    POP EBX                             ; 004a9293
    RET                                 ; 004a9294

