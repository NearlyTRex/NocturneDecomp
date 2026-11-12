; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a1d00(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00616028
;   undefined4 DAT_0061602c
;   undefined4 CAlphaBitmap_01caf218.width
;   undefined4 CAlphaBitmap_01caf218.height
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1d00
        ;   Label: core_flashlit.cpp_FUN_004a1d00
    PUSH ESI                            ; 004a1d01
    PUSH EDI                            ; 004a1d02
    PUSH EBP                            ; 004a1d03
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a1d04
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a1d08
    MOV EBX,dword ptr [0x00616028]      ; 004a1d0c | DAT_00616028
    CMP EDX,EBX                         ; 004a1d12
    JL 0x004a1d3a                       ; 004a1d14
        ;   XREF to: 004a1d3a (CONDITIONAL_JUMP)  ; LAB_004a1d3a
    MOV ESI,dword ptr [0x0061602c]      ; 004a1d16 | DAT_0061602c
    CMP ECX,ESI                         ; 004a1d1c
    JL 0x004a1d3a                       ; 004a1d1e
        ;   XREF to: 004a1d3a (CONDITIONAL_JUMP)  ; LAB_004a1d3a
    MOV EDI,dword ptr [0x01caf224]      ; 004a1d20 | CAlphaBitmap_01caf218.width
    LEA EAX,[EBX + EDI*0x1]             ; 004a1d26
    CMP EDX,EAX                         ; 004a1d29
    JGE 0x004a1d3a                      ; 004a1d2b
        ;   XREF to: 004a1d3a (CONDITIONAL_JUMP)  ; LAB_004a1d3a
    MOV EBP,dword ptr [0x01caf228]      ; 004a1d2d | CAlphaBitmap_01caf218.height
    LEA EAX,[ESI + EBP*0x1]             ; 004a1d33
    CMP ECX,EAX                         ; 004a1d36
    JL 0x004a1d41                       ; 004a1d38
        ;   XREF to: 004a1d41 (CONDITIONAL_JUMP)  ; LAB_004a1d41
    XOR EAX,EAX                         ; 004a1d3a
        ;   Label: LAB_004a1d3a
    POP EBP                             ; 004a1d3c
    POP EDI                             ; 004a1d3d
    POP ESI                             ; 004a1d3e
    POP EBX                             ; 004a1d3f
    RET                                 ; 004a1d40
    MOV EAX,0x1                         ; 004a1d41
        ;   Label: LAB_004a1d41
    POP EBP                             ; 004a1d46
    POP EDI                             ; 004a1d47
    POP ESI                             ; 004a1d48
    POP EBX                             ; 004a1d49
    RET                                 ; 004a1d4a

