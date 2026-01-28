; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_0060da87(filebuf *this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060da87
        ;   Label: crt_fstream.cpp_filebuf_underflow_FUN_0060da87
    PUSH EBP                            ; 0060da88
    MOV EBP,ESP                         ; 0060da89
    MOV EBX,dword ptr [EBP + 0xc]       ; 0060da8b
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060da8e
    SUB EAX,dword ptr [EBX + 0x18]      ; 0060da91
    TEST EAX,EAX                        ; 0060da94
    JG 0x0060dafd                       ; 0060da96
        ;   XREF to: 0060dafd (CONDITIONAL_JUMP)  ; LAB_0060dafd
    MOV dword ptr [EBX + 0x18],0x0      ; 0060da98
        ;   Label: LAB_0060da98
    MOV dword ptr [EBX + 0x20],0x0      ; 0060da9f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060daa6
    MOV dword ptr [EBX + 0x1c],0x0      ; 0060daa9
    TEST EAX,EAX                        ; 0060dab0
    JNZ 0x0060db61                      ; 0060dab2
        ;   XREF to: 0060db61 (CONDITIONAL_JUMP)  ; LAB_0060db61
    JZ 0x0060db0f                       ; 0060dab8
        ;   XREF to: 0060db0f (CONDITIONAL_JUMP)  ; LAB_0060db0f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060daba
        ;   Label: LAB_0060daba
    TEST EAX,EAX                        ; 0060dabd
    JZ 0x0060db29                       ; 0060dabf
        ;   XREF to: 0060db29 (CONDITIONAL_JUMP)  ; LAB_0060db29
    LEA EDX,[EAX + 0x4]                 ; 0060dac1
        ;   Label: LAB_0060dac1
    MOV dword ptr [EBX + 0xc],EAX       ; 0060dac4
    MOV dword ptr [EBX + 0x14],EDX      ; 0060dac7
    MOV dword ptr [EBX + 0x10],EDX      ; 0060daca
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060dacd
        ;   Label: LAB_0060dacd
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060dad0
    SUB EAX,EDX                         ; 0060dad3
    TEST EAX,EAX                        ; 0060dad5
    JG 0x0060db74                       ; 0060dad7
        ;   XREF to: 0060db74 (CONDITIONAL_JUMP)  ; LAB_0060db74
    XOR EAX,EAX                         ; 0060dadd
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060dadf
        ;   Label: LAB_0060dadf
    LEA ECX,[EDX + EAX*0x1]             ; 0060dae2
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060dae5
    MOV dword ptr [EBX + 0x10],ECX      ; 0060dae8
    CMP EAX,ECX                         ; 0060daeb
    JNC 0x0060db59                      ; 0060daed
        ;   XREF to: 0060db59 (CONDITIONAL_JUMP)  ; LAB_0060db59
    MOV AL,byte ptr [EAX]               ; 0060daf3
        ;   Label: LAB_0060daf3
    AND EAX,0xff                        ; 0060daf5
    POP EBP                             ; 0060dafa
    POP EBX                             ; 0060dafb
    RET                                 ; 0060dafc
    PUSH EBX                            ; 0060dafd
        ;   Label: LAB_0060dafd
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060dafe
    CALL dword ptr [EAX + 0x20]         ; 0060db01
    ADD ESP,0x4                         ; 0060db04
    CMP EAX,-0x1                        ; 0060db07
    JNZ 0x0060da98                      ; 0060db0a
        ;   XREF to: 0060da98 (CONDITIONAL_JUMP)  ; LAB_0060da98
    POP EBP                             ; 0060db0c
    POP EBX                             ; 0060db0d
    RET                                 ; 0060db0e
    MOV EAX,dword ptr [EBX + 0x24]      ; 0060db0f
        ;   Label: LAB_0060db0f
    AND EAX,0x1                         ; 0060db12
    JNZ 0x0060daba                      ; 0060db15
        ;   XREF to: 0060daba (CONDITIONAL_JUMP)  ; LAB_0060daba
    PUSH EBX                            ; 0060db17
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060db18
    CALL dword ptr [EAX + 0x28]         ; 0060db1b
    ADD ESP,0x4                         ; 0060db1e
    CMP EAX,-0x1                        ; 0060db21
    JNZ 0x0060daba                      ; 0060db24
        ;   XREF to: 0060daba (CONDITIONAL_JUMP)  ; LAB_0060daba
    POP EBP                             ; 0060db26
    POP EBX                             ; 0060db27
    RET                                 ; 0060db28
    LEA EAX,[EBX + 0x38]                ; 0060db29
        ;   Label: LAB_0060db29
    MOV dword ptr [EBX + 0x14],EAX      ; 0060db2c
    PUSH 0x1                            ; 0060db2f
    MOV dword ptr [EBX + 0x10],EAX      ; 0060db31
    PUSH EAX                            ; 0060db34
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060db35
    LEA EDX,[EBX + 0x34]                ; 0060db38
    PUSH EAX                            ; 0060db3b
    MOV dword ptr [EBX + 0xc],EDX       ; 0060db3c
    CALL crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 ; 0060db3f
        ;   XREF to: 0060e930 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930()
    ADD ESP,0xc                         ; 0060db44
    TEST EAX,EAX                        ; 0060db47
    JLE 0x0060db59                      ; 0060db49
        ;   XREF to: 0060db59 (CONDITIONAL_JUMP)  ; LAB_0060db59
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060db4b
    LEA ECX,[EDX + EAX*0x1]             ; 0060db4e
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060db51
    MOV dword ptr [EBX + 0x10],ECX      ; 0060db54
    JMP 0x0060daf3                      ; 0060db57
        ;   XREF to: 0060daf3 (UNCONDITIONAL_JUMP)  ; LAB_0060daf3
    MOV EAX,0xffffffff                  ; 0060db59
        ;   Label: LAB_0060db59
    POP EBP                             ; 0060db5e
    POP EBX                             ; 0060db5f
    RET                                 ; 0060db60
    MOV ECX,dword ptr [EBX + 0x14]      ; 0060db61
        ;   Label: LAB_0060db61
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060db64
    CMP ECX,EDX                         ; 0060db67
    JC 0x0060dacd                       ; 0060db69
        ;   XREF to: 0060dacd (CONDITIONAL_JUMP)  ; LAB_0060dacd
    JMP 0x0060dac1                      ; 0060db6f
        ;   XREF to: 0060dac1 (UNCONDITIONAL_JUMP)  ; LAB_0060dac1
    PUSH EAX                            ; 0060db74
        ;   Label: LAB_0060db74
    PUSH EDX                            ; 0060db75
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060db76
    PUSH EAX                            ; 0060db79
    CALL crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 ; 0060db7a
        ;   XREF to: 0060e930 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930()
    ADD ESP,0xc                         ; 0060db7f
    TEST EAX,EAX                        ; 0060db82
    JG 0x0060dadf                       ; 0060db84
        ;   XREF to: 0060dadf (CONDITIONAL_JUMP)  ; LAB_0060dadf
    JMP 0x0060db59                      ; 0060db8a
        ;   XREF to: 0060db59 (UNCONDITIONAL_JUMP)  ; LAB_0060db59

