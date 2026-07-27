; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_004e3f20(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005bbdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3f20
        ;   Label: sound_mp3.cpp_FUN_004e3f20
    PUSH ESI                            ; 004e3f21
    PUSH EDI                            ; 004e3f22
    SUB ESP,0x8                         ; 004e3f23
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e3f26
    XOR EDI,EDI                         ; 004e3f2a
    MOV ESI,dword ptr [ESI + 0x10]      ; 004e3f2c
    XOR EDX,EDX                         ; 004e3f2f
        ;   Label: LAB_004e3f2f
    TEST ESI,ESI                        ; 004e3f31
    JLE 0x004e3f66                      ; 004e3f33
        ;   XREF to: 004e3f66 (CONDITIONAL_JUMP)  ; LAB_004e3f66
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e3f35
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e3f39
    ADD EAX,EDI                         ; 004e3f3d
    ADD ECX,EDI                         ; 004e3f3f
    FLD float ptr [EAX]                 ; 004e3f41
        ;   Label: LAB_004e3f41
    MOV EBX,dword ptr [ECX]             ; 004e3f43
    FLD ST0                             ; 004e3f45
    FMUL double ptr [EBX*0x8 + 0x5bbdf0] ; 004e3f47 | DAT_005bbdf0
    ADD ECX,0x180                       ; 004e3f4e
    ADD EAX,0x180                       ; 004e3f54
    INC EDX                             ; 004e3f59
    FSTP ST1                            ; 004e3f5a
    FSTP float ptr [EAX + 0xfffffe80]   ; 004e3f5c
    CMP EDX,ESI                         ; 004e3f62
    JL 0x004e3f41                       ; 004e3f64
        ;   XREF to: 004e3f41 (CONDITIONAL_JUMP)  ; LAB_004e3f41
    ADD EDI,0x4                         ; 004e3f66
        ;   Label: LAB_004e3f66
    CMP EDI,0x80                        ; 004e3f69
    JNZ 0x004e3f2f                      ; 004e3f6f
        ;   XREF to: 004e3f2f (CONDITIONAL_JUMP)  ; LAB_004e3f2f
    ADD ESP,0x8                         ; 004e3f71
    POP EDI                             ; 004e3f74
    POP ESI                             ; 004e3f75
    POP EBX                             ; 004e3f76
    RET                                 ; 004e3f77

