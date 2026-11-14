; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056a690(int param_1,int param_2)
;
;
; XREF[2]:
;   engine_texture.cpp_FUN_0056ac80 at 0056ac9a
;   engine_texture.cpp_updateTextureWithPalette_FUN_0056ac50 at 0056ac6a
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6010
;   undefined4 DAT_02cf6018
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a690
        ;   Label: engine_texture.cpp_FUN_0056a690
    PUSH EDI                            ; 0056a691
    PUSH EBP                            ; 0056a692
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056a693
    CMP dword ptr [0x01c6cee8],0x0      ; 0056a697 | DAT_01c6cee8
    JZ 0x0056a6da                       ; 0056a69e
        ;   XREF to: 0056a6da (CONDITIONAL_JUMP)  ; LAB_0056a6da
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056a6a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056a6a3
    SUB EAX,EDX                         ; 0056a6aa
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056a6ac
    SHL EAX,0x5                         ; 0056a6b0
    ADD EDX,0x4                         ; 0056a6b3
    ADD EAX,EDX                         ; 0056a6b6
    MOV EBX,dword ptr [EAX + 0x50]      ; 0056a6b8
    TEST EBX,EBX                        ; 0056a6bb
    JNZ 0x0056a6de                      ; 0056a6bd
        ;   XREF to: 0056a6de (CONDITIONAL_JUMP)  ; LAB_0056a6de
    PUSH ESI                            ; 0056a6bf
    MOV EBP,dword ptr [EAX + 0x48]      ; 0056a6c0
    PUSH EBP                            ; 0056a6c3
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0056a6c4
    PUSH EDX                            ; 0056a6c7
    MOV EBX,dword ptr [EAX + 0x44]      ; 0056a6c8
    PUSH EBX                            ; 0056a6cb
    MOV ESI,dword ptr [EAX]             ; 0056a6cc
    PUSH ESI                            ; 0056a6ce
    PUSH ECX                            ; 0056a6cf
    CALL dword ptr [0x02cf6010]         ; 0056a6d0 | DAT_02cf6010
    ADD ESP,0x14                        ; 0056a6d6
    POP ESI                             ; 0056a6d9
    POP EBP                             ; 0056a6da
        ;   Label: LAB_0056a6da
    POP EDI                             ; 0056a6db
    POP EBX                             ; 0056a6dc
    RET                                 ; 0056a6dd
    PUSH EBX                            ; 0056a6de
        ;   Label: LAB_0056a6de
    MOV EDI,dword ptr [EAX]             ; 0056a6df
    PUSH EDI                            ; 0056a6e1
    PUSH ECX                            ; 0056a6e2
    CALL dword ptr [0x02cf6018]         ; 0056a6e3 | DAT_02cf6018
    ADD ESP,0xc                         ; 0056a6e9
    POP EBP                             ; 0056a6ec
    POP EDI                             ; 0056a6ed
    POP EBX                             ; 0056a6ee
    RET                                 ; 0056a6ef

