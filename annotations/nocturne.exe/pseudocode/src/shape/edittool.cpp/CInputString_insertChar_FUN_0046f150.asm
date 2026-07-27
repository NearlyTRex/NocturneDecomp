; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(int param_1,undefined1 param_2,int param_3)
;
;
; XREF[3]:
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330 at 0046f373
;   shape_edittool.cpp_FUN_0046f7e0 at 0046f9c9
;   shape_edittool.cpp_FUN_00470eb0 at 004712e4
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f150
        ;   Label: shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
    PUSH EDI                            ; 0046f151
    PUSH EBP                            ; 0046f152
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046f153
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0046f157
    MOV EDX,dword ptr [EBX + 0x134]     ; 0046f15d
    DEC EAX                             ; 0046f163
    CMP EAX,EDX                         ; 0046f164
    JLE 0x0046f1b3                      ; 0046f166
        ;   XREF to: 0046f1b3 (CONDITIONAL_JUMP)  ; LAB_0046f1b3
    MOV ECX,dword ptr [EBX + 0x130]     ; 0046f168
    CMP EAX,ECX                         ; 0046f16e
    JLE 0x0046f17d                      ; 0046f170
        ;   XREF to: 0046f17d (CONDITIONAL_JUMP)  ; LAB_0046f17d
    PUSH ESI                            ; 0046f172
    LEA ESI,[ECX + 0x1]                 ; 0046f173
    MOV dword ptr [EBX + 0x130],ESI     ; 0046f176
    POP ESI                             ; 0046f17c
    MOV EAX,dword ptr [EBX + 0x130]     ; 0046f17d
        ;   Label: LAB_0046f17d
    MOV EDI,dword ptr [EBX + 0x134]     ; 0046f183
    SUB EAX,EDI                         ; 0046f189
    PUSH EAX                            ; 0046f18b
    LEA EAX,[EDI + EBX*0x1]             ; 0046f18c
    PUSH EAX                            ; 0046f18f
    LEA EAX,[EDI + 0x1]                 ; 0046f190
    ADD EAX,EBX                         ; 0046f193
    PUSH EAX                            ; 0046f195
    CALL crt_string.c_memmove_FUN_00566170 ; 0046f196
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0046f19b
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f19e
    MOV DL,byte ptr [ESP + 0x14]        ; 0046f1a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0046f1a8
    MOV byte ptr [EBX + EAX*0x1],DL     ; 0046f1ac
    TEST EBP,EBP                        ; 0046f1af
    JNZ 0x0046f1c0                      ; 0046f1b1
        ;   XREF to: 0046f1c0 (CONDITIONAL_JUMP)  ; LAB_0046f1c0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0046f1b3
        ;   Label: LAB_0046f1b3
    MOV byte ptr [EBX],0x0              ; 0046f1b9
    POP EBP                             ; 0046f1bc
    POP EDI                             ; 0046f1bd
    POP EBX                             ; 0046f1be
    RET                                 ; 0046f1bf
    INC dword ptr [EBX + 0x134]         ; 0046f1c0
        ;   Label: LAB_0046f1c0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0046f1c6
    MOV byte ptr [EBX],0x0              ; 0046f1cc
    POP EBP                             ; 0046f1cf
    POP EDI                             ; 0046f1d0
    POP EBX                             ; 0046f1d1
    RET                                 ; 0046f1d2

