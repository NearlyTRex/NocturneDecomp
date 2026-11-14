; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574ce0(int param_1)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_005750d0 at 005750d7
;
; Referenced Globals:
;   undefined4 DAT_02652e64
;
; Called Functions:
;   engine_texture.cpp_FUN_00574520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574ce0
        ;   Label: engine_texture.cpp_FUN_00574ce0
    PUSH EBP                            ; 00574ce1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574ce2
    MOV EDX,dword ptr [EAX + 0x18004]   ; 00574ce6
    XOR EBX,EBX                         ; 00574cec
    TEST EDX,EDX                        ; 00574cee
    JLE 0x00574d46                      ; 00574cf0
        ;   XREF to: 00574d46 (CONDITIONAL_JUMP)  ; LAB_00574d46
    PUSH EDI                            ; 00574cf2
    PUSH ESI                            ; 00574cf3
    MOV EDI,0x2652e68                   ; 00574cf4
    LEA EBP,[EAX + 0x8]                 ; 00574cf9
    MOV ESI,EBP                         ; 00574cfc
        ;   Label: LAB_00574cfc
    MOV dword ptr [0x02652e64],EBX      ; 00574cfe | DAT_02652e64
    PUSH EDI                            ; 00574d04
    MOV AL,byte ptr [ESI]               ; 00574d05
        ;   Label: LAB_00574d05
    MOV byte ptr [EDI],AL               ; 00574d07
    CMP AL,0x0                          ; 00574d09
    JZ 0x00574d1d                       ; 00574d0b
        ;   XREF to: 00574d1d (CONDITIONAL_JUMP)  ; LAB_00574d1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00574d0d
    ADD ESI,0x2                         ; 00574d10
    MOV byte ptr [EDI + 0x1],AL         ; 00574d13
    ADD EDI,0x2                         ; 00574d16
    CMP AL,0x0                          ; 00574d19
    JNZ 0x00574d05                      ; 00574d1b
        ;   XREF to: 00574d05 (CONDITIONAL_JUMP)  ; LAB_00574d05
    POP EDI                             ; 00574d1d
        ;   Label: LAB_00574d1d
    PUSH 0x1                            ; 00574d1e
    PUSH 0x2652e60                      ; 00574d20
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00574d25
    PUSH ECX                            ; 00574d29
    CALL engine_texture.cpp_FUN_00574520 ; 00574d2a
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574520()
    ADD ESP,0xc                         ; 00574d2f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00574d32
    INC EBX                             ; 00574d36
    MOV ESI,dword ptr [EAX + 0x18004]   ; 00574d37
    ADD EBP,0x60                        ; 00574d3d
    CMP EBX,ESI                         ; 00574d40
    JL 0x00574cfc                       ; 00574d42
        ;   XREF to: 00574cfc (CONDITIONAL_JUMP)  ; LAB_00574cfc
    POP ESI                             ; 00574d44
    POP EDI                             ; 00574d45
    POP EBP                             ; 00574d46
        ;   Label: LAB_00574d46
    POP EBX                             ; 00574d47
    RET                                 ; 00574d48

