; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a3fc0(int param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a3e40 at 004a3f18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3fc0
        ;   Label: core_fldnotes.cpp_FUN_004a3fc0
    PUSH ESI                            ; 004a3fc1
    PUSH EDI                            ; 004a3fc2
    PUSH EBP                            ; 004a3fc3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a3fc4
    MOV EDX,dword ptr [ECX + 0x80]      ; 004a3fc8
    XOR EBP,EBP                         ; 004a3fce
    XOR ESI,ESI                         ; 004a3fd0
    TEST EDX,EDX                        ; 004a3fd2
    JLE 0x004a4056                      ; 004a3fd4
        ;   XREF to: 004a4056 (CONDITIONAL_JUMP)  ; LAB_004a4056
    MOV EDI,dword ptr [ECX + 0x7c]      ; 004a3fda
        ;   Label: LAB_004a3fda
    XOR EBX,EBX                         ; 004a3fdd
    TEST EDI,EDI                        ; 004a3fdf
    JLE 0x004a404d                      ; 004a3fe1
        ;   XREF to: 004a404d (CONDITIONAL_JUMP)  ; LAB_004a404d
    MOV EDX,dword ptr [ECX + 0x98]      ; 004a3fe3
        ;   Label: LAB_004a3fe3
    IMUL EDX,EBP                        ; 004a3fe9
    MOV EDI,dword ptr [ECX + 0x80]      ; 004a3fec
    MOV EAX,EDX                         ; 004a3ff2
    SAR EDX,0x1f                        ; 004a3ff4
    IDIV EDI                            ; 004a3ff7
    MOV EDX,dword ptr [ECX + 0x94]      ; 004a3ff9
    IMUL EDX,EBX                        ; 004a3fff
    MOV EDI,EAX                         ; 004a4002
    MOV EAX,EDX                         ; 004a4004
    SAR EDX,0x1f                        ; 004a4006
    IDIV dword ptr [ECX + 0x7c]         ; 004a4009
    MOV EDX,dword ptr [ECX + 0x94]      ; 004a400c
    IMUL EDX,EDI                        ; 004a4012
    ADD EDX,EAX                         ; 004a4015
    MOV EAX,dword ptr [ECX + 0x84]      ; 004a4017
    MOVZX EDI,byte ptr [ESI + EAX*0x1]  ; 004a401d
    MOV EAX,dword ptr [ECX + 0x8c]      ; 004a4021
    ADD EAX,EDX                         ; 004a4027
    XOR EDX,EDX                         ; 004a4029
    MOV DL,byte ptr [EAX]               ; 004a402b
    IMUL EDX,EDI                        ; 004a402d
    MOV EDI,0xff                        ; 004a4030
    MOV EAX,EDX                         ; 004a4035
    SAR EDX,0x1f                        ; 004a4037
    IDIV EDI                            ; 004a403a
    MOV DL,AL                           ; 004a403c
    MOV EAX,dword ptr [ECX + 0x74]      ; 004a403e
    MOV byte ptr [ESI + EAX*0x1],DL     ; 004a4041
    INC EBX                             ; 004a4044
    MOV EAX,dword ptr [ECX + 0x7c]      ; 004a4045
    INC ESI                             ; 004a4048
    CMP EBX,EAX                         ; 004a4049
    JL 0x004a3fe3                       ; 004a404b
        ;   XREF to: 004a3fe3 (CONDITIONAL_JUMP)  ; LAB_004a3fe3
    INC EBP                             ; 004a404d
        ;   Label: LAB_004a404d
    CMP EBP,dword ptr [ECX + 0x80]      ; 004a404e
    JL 0x004a3fda                       ; 004a4054
        ;   XREF to: 004a3fda (CONDITIONAL_JUMP)  ; LAB_004a3fda
    MOV dword ptr [ECX + 0x96c],0x0     ; 004a4056
        ;   Label: LAB_004a4056
    POP EBP                             ; 004a4060
    POP EDI                             ; 004a4061
    POP ESI                             ; 004a4062
    POP EBX                             ; 004a4063
    RET                                 ; 004a4064

