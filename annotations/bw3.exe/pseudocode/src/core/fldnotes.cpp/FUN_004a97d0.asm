; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a97d0(int param_1,char *param_2)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a8f30 at 004a8fce
;
; Called Functions:
;   engine_font.cpp_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a97d0
        ;   Label: core_fldnotes.cpp_FUN_004a97d0
    PUSH ESI                            ; 004a97d1
    PUSH EDI                            ; 004a97d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a97d3
    CMP byte ptr [EBX + 0x48],0x0       ; 004a97d7
    JNZ 0x004a97e9                      ; 004a97db
        ;   XREF to: 004a97e9 (CONDITIONAL_JUMP)  ; LAB_004a97e9
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a97dd
    MOV dword ptr [EBX + 0x40],EAX      ; 004a97e0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a97e3
    MOV dword ptr [EBX + 0x44],EAX      ; 004a97e6
    LEA EDX,[EBX + 0x48]                ; 004a97e9
        ;   Label: LAB_004a97e9
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a97ec
    MOV EDI,EDX                         ; 004a97f0
    PUSH EDI                            ; 004a97f2
    SUB ECX,ECX                         ; 004a97f3
    DEC ECX                             ; 004a97f5
    MOV AL,0x0                          ; 004a97f6
    SCASB.REPNE ES:EDI                  ; 004a97f8
    DEC EDI                             ; 004a97fa
    MOV AL,byte ptr [ESI]               ; 004a97fb
        ;   Label: LAB_004a97fb
    MOV byte ptr [EDI],AL               ; 004a97fd
    CMP AL,0x0                          ; 004a97ff
    JZ 0x004a9813                       ; 004a9801
        ;   XREF to: 004a9813 (CONDITIONAL_JUMP)  ; LAB_004a9813
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9803
    ADD ESI,0x2                         ; 004a9806
    MOV byte ptr [EDI + 0x1],AL         ; 004a9809
    ADD EDI,0x2                         ; 004a980c
    CMP AL,0x0                          ; 004a980f
    JNZ 0x004a97fb                      ; 004a9811
        ;   XREF to: 004a97fb (CONDITIONAL_JUMP)  ; LAB_004a97fb
    POP EDI                             ; 004a9813
        ;   Label: LAB_004a9813
    PUSH EDX                            ; 004a9814
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a9815
    PUSH EDX                            ; 004a9818
    CALL engine_font.cpp_FUN_004b2a80   ; 004a9819
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004a981e
    MOV EAX,dword ptr [EBX + 0x40]      ; 004a9820
    ADD EAX,EDX                         ; 004a9823
    ADD ESP,0x8                         ; 004a9825
    MOV dword ptr [EBX + 0x14],EAX      ; 004a9828
    POP EDI                             ; 004a982b
    POP ESI                             ; 004a982c
    POP EBX                             ; 004a982d
    RET                                 ; 004a982e

