; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a1c60(int param_1,int param_2)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a5700 at 004a58ee
;   core_fldnotes.cpp_FUN_004a5f60 at 004a60d7
;
; Referenced Globals:
;   undefined4 DAT_00616018
;   undefined4 DAT_0061601c
;   undefined4 DAT_00616020
;   undefined4 DAT_00616024
;   undefined4 DAT_01caf110
;   undefined4 CAlphaBitmap_01caf1f0.width
;   undefined4 CAlphaBitmap_01caf1f0.height
;   undefined4 CAlphaBitmap_01caf204.width
;   undefined4 CAlphaBitmap_01caf204.height
;   undefined4 g_STextViewInstance.page_count
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1c60
        ;   Label: core_flashlit.cpp_FUN_004a1c60
    PUSH ESI                            ; 004a1c61
    PUSH EDI                            ; 004a1c62
    PUSH EBP                            ; 004a1c63
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a1c64
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a1c68
    CMP dword ptr [0x01caf110],0x0      ; 004a1c6c | DAT_01caf110
    JLE 0x004a1ca3                      ; 004a1c73
        ;   XREF to: 004a1ca3 (CONDITIONAL_JUMP)  ; LAB_004a1ca3
    MOV ESI,dword ptr [0x00616018]      ; 004a1c75 | DAT_00616018
    CMP ECX,ESI                         ; 004a1c7b
    JL 0x004a1ca3                       ; 004a1c7d
        ;   XREF to: 004a1ca3 (CONDITIONAL_JUMP)  ; LAB_004a1ca3
    MOV EDI,dword ptr [0x0061601c]      ; 004a1c7f | DAT_0061601c
    CMP EDX,EDI                         ; 004a1c85
    JL 0x004a1ca3                       ; 004a1c87
        ;   XREF to: 004a1ca3 (CONDITIONAL_JUMP)  ; LAB_004a1ca3
    MOV EBP,dword ptr [0x01caf1fc]      ; 004a1c89 | CAlphaBitmap_01caf1f0.width
    LEA EAX,[ESI + EBP*0x1]             ; 004a1c8f
    CMP ECX,EAX                         ; 004a1c92
    JGE 0x004a1ca3                      ; 004a1c94
        ;   XREF to: 004a1ca3 (CONDITIONAL_JUMP)  ; LAB_004a1ca3
    MOV EBX,dword ptr [0x01caf200]      ; 004a1c96 | CAlphaBitmap_01caf1f0.height
    LEA EAX,[EDI + EBX*0x1]             ; 004a1c9c
    CMP EDX,EAX                         ; 004a1c9f
    JL 0x004a1ced                       ; 004a1ca1
        ;   XREF to: 004a1ced (CONDITIONAL_JUMP)  ; LAB_004a1ced
    MOV EAX,[0x01caf278]                ; 004a1ca3 | g_STextViewInstance.page_count
        ;   Label: LAB_004a1ca3
    MOV ESI,dword ptr [0x01caf110]      ; 004a1ca8 | DAT_01caf110
    SUB EAX,0x2                         ; 004a1cae
    CMP EAX,ESI                         ; 004a1cb1
    JLE 0x004a1cf7                      ; 004a1cb3
        ;   XREF to: 004a1cf7 (CONDITIONAL_JUMP)  ; LAB_004a1cf7
    MOV EDI,dword ptr [0x00616020]      ; 004a1cb5 | DAT_00616020
    CMP ECX,EDI                         ; 004a1cbb
    JL 0x004a1cf7                       ; 004a1cbd
        ;   XREF to: 004a1cf7 (CONDITIONAL_JUMP)  ; LAB_004a1cf7
    MOV EBP,dword ptr [0x00616024]      ; 004a1cbf | DAT_00616024
    CMP EDX,EBP                         ; 004a1cc5
    JL 0x004a1cf7                       ; 004a1cc7
        ;   XREF to: 004a1cf7 (CONDITIONAL_JUMP)  ; LAB_004a1cf7
    MOV EBX,dword ptr [0x01caf210]      ; 004a1cc9 | CAlphaBitmap_01caf204.width
    LEA EAX,[EDI + EBX*0x1]             ; 004a1ccf
    CMP ECX,EAX                         ; 004a1cd2
    JGE 0x004a1cf7                      ; 004a1cd4
        ;   XREF to: 004a1cf7 (CONDITIONAL_JUMP)  ; LAB_004a1cf7
    MOV ESI,dword ptr [0x01caf214]      ; 004a1cd6 | CAlphaBitmap_01caf204.height
    LEA EAX,[ESI + EBP*0x1]             ; 004a1cdc
    CMP EDX,EAX                         ; 004a1cdf
    JGE 0x004a1cf7                      ; 004a1ce1
        ;   XREF to: 004a1cf7 (CONDITIONAL_JUMP)  ; LAB_004a1cf7
    MOV EAX,0x1                         ; 004a1ce3
    POP EBP                             ; 004a1ce8
    POP EDI                             ; 004a1ce9
    POP ESI                             ; 004a1cea
    POP EBX                             ; 004a1ceb
    RET                                 ; 004a1cec
    MOV EAX,0xffffffff                  ; 004a1ced
        ;   Label: LAB_004a1ced
    POP EBP                             ; 004a1cf2
    POP EDI                             ; 004a1cf3
    POP ESI                             ; 004a1cf4
    POP EBX                             ; 004a1cf5
    RET                                 ; 004a1cf6
    XOR EAX,EAX                         ; 004a1cf7
        ;   Label: LAB_004a1cf7
    POP EBP                             ; 004a1cf9
    POP EDI                             ; 004a1cfa
    POP ESI                             ; 004a1cfb
    POP EBX                             ; 004a1cfc
    RET                                 ; 004a1cfd

