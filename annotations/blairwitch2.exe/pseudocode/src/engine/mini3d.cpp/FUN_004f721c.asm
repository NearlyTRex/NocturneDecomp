; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_mini3d_cpp_FUN_004f721c(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d17ab4
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004f721c
        ;   Label: engine_mini3d.cpp_FUN_004f721c
    PUSH EBX                            ; 004f7220
    PUSH ESI                            ; 004f7221
    MOV EBX,dword ptr [0x01d17ab4]      ; 004f7222 | DAT_01d17ab4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f7228
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f722c
    MOV EAX,0x1d17ab8                   ; 004f7230
    XOR EDX,EDX                         ; 004f7235
    TEST EBX,EBX                        ; 004f7237
    JLE 0x004f724b                      ; 004f7239
        ;   XREF to: 004f724b (CONDITIONAL_JUMP)  ; LAB_004f724b
    CMP ECX,dword ptr [EAX]             ; 004f723b
        ;   Label: LAB_004f723b
    JNZ 0x004f7243                      ; 004f723d
        ;   XREF to: 004f7243 (CONDITIONAL_JUMP)  ; LAB_004f7243
    CMP EAX,ESI                         ; 004f723f
    JNZ 0x004f724d                      ; 004f7241
        ;   XREF to: 004f724d (CONDITIONAL_JUMP)  ; LAB_004f724d
    INC EDX                             ; 004f7243
        ;   Label: LAB_004f7243
    ADD EAX,0x50                        ; 004f7244
    CMP EDX,EBX                         ; 004f7247
    JL 0x004f723b                       ; 004f7249
        ;   XREF to: 004f723b (CONDITIONAL_JUMP)  ; LAB_004f723b
    XOR EAX,EAX                         ; 004f724b
        ;   Label: LAB_004f724b
    MOV dword ptr [0x01d17ab4],EBX      ; 004f724d | DAT_01d17ab4
        ;   Label: LAB_004f724d
    POP ESI                             ; 004f7253
    POP EBX                             ; 004f7254
    RET                                 ; 004f7255

