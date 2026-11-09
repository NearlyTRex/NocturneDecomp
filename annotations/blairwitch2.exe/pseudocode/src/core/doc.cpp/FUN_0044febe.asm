; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_0044febe(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0044febe
        ;   Label: core_doc.cpp_FUN_0044febe
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044fec0
    TEST EDX,EDX                        ; 0044fec4
    JZ 0x0044fee0                       ; 0044fec6
        ;   XREF to: 0044fee0 (CONDITIONAL_JUMP)  ; LAB_0044fee0
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0044fec8
    CMP EAX,0xd                         ; 0044fece
    JA 0x0044ff06                       ; 0044fed1
        ;   XREF to: 0044ff06 (CONDITIONAL_JUMP)  ; LAB_0044ff06
    JMP dword ptr [EAX*0x4 + 0x44fe80]  ; 0044fed3
    XOR EAX,EAX                         ; 0044fee0
        ;   Label: LAB_0044fee0
    RET                                 ; 0044fee2
    MOV EAX,0x3                         ; 0044ff06
        ;   Label: LAB_0044ff06
    RET                                 ; 0044ff0b

