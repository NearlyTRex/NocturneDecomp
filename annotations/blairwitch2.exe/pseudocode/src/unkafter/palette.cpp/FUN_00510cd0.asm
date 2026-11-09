; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_palette_cpp_FUN_00510cd0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a8df0 at 004a8e36
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510cd0
        ;   Label: unkafter_palette.cpp_FUN_00510cd0
    MOV ECX,dword ptr [EDX]             ; 00510cd4
    CMP ECX,0x64                        ; 00510cd6
    JL 0x00510cde                       ; 00510cd9
        ;   XREF to: 00510cde (CONDITIONAL_JUMP)  ; LAB_00510cde
    XOR EAX,EAX                         ; 00510cdb
    RET                                 ; 00510cdd
    PUSH EDI                            ; 00510cde
        ;   Label: LAB_00510cde
    PUSH ESI                            ; 00510cdf
    MOV EAX,ECX                         ; 00510ce0
    LEA EDI,[EDX + 0x324]               ; 00510ce2
    SHL EAX,0x8                         ; 00510ce8
    MOV ESI,dword ptr [ESP + 0x10]      ; 00510ceb
    ADD EDI,EAX                         ; 00510cef
    PUSH EDI                            ; 00510cf1
    MOV AL,byte ptr [ESI]               ; 00510cf2
        ;   Label: LAB_00510cf2
    MOV byte ptr [EDI],AL               ; 00510cf4
    CMP AL,0x0                          ; 00510cf6
    JZ 0x00510d0a                       ; 00510cf8
        ;   XREF to: 00510d0a (CONDITIONAL_JUMP)  ; LAB_00510d0a
    MOV AL,byte ptr [ESI + 0x1]         ; 00510cfa
    ADD ESI,0x2                         ; 00510cfd
    MOV byte ptr [EDI + 0x1],AL         ; 00510d00
    ADD EDI,0x2                         ; 00510d03
    CMP AL,0x0                          ; 00510d06
    JNZ 0x00510cf2                      ; 00510d08
        ;   XREF to: 00510cf2 (CONDITIONAL_JUMP)  ; LAB_00510cf2
    POP EDI                             ; 00510d0a
        ;   Label: LAB_00510d0a
    MOV EDI,dword ptr [EDX]             ; 00510d0b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00510d0d
    MOV dword ptr [EDX + EDI*0x4 + 0x4],EAX ; 00510d11
    MOV EDI,dword ptr [EDX]             ; 00510d15
    MOV EAX,dword ptr [ESP + 0x18]      ; 00510d17
    MOV dword ptr [EDX + EDI*0x4 + 0x194],EAX ; 00510d1b
    MOV EDI,dword ptr [EDX]             ; 00510d22
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00510d24
    MOV dword ptr [EDX + EDI*0x4 + 0x6724],EAX ; 00510d28
    MOV EAX,dword ptr [EDX]             ; 00510d2f
    MOV EDI,dword ptr [ESP + 0x20]      ; 00510d31
    MOV dword ptr [EDX + EAX*0x4 + 0x68b4],EDI ; 00510d35
    INC dword ptr [EDX]                 ; 00510d3c
    POP ESI                             ; 00510d3e
    POP EDI                             ; 00510d3f
    XOR EAX,EAX                         ; 00510d40
    RET                                 ; 00510d42

