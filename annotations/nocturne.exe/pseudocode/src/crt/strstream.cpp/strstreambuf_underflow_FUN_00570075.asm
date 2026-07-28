; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_strstream_cpp_strstreambuf_underflow_FUN_00570075(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00570075
        ;   Label: crt_strstream.cpp_strstreambuf_underflow_FUN_00570075
    TEST byte ptr [EAX + 0x3c],0x4      ; 00570079
    JNZ 0x0057009e                      ; 0057007d
        ;   XREF to: 0057009e (CONDITIONAL_JUMP)  ; LAB_0057009e
    MOV EDX,dword ptr [EAX + 0x20]      ; 0057007f
    MOV ECX,dword ptr [EAX + 0x10]      ; 00570082
    CMP EDX,ECX                         ; 00570085
    JBE 0x005700ba                      ; 00570087
        ;   XREF to: 005700ba (CONDITIONAL_JUMP)  ; LAB_005700ba
    MOV ECX,dword ptr [EAX + 0x14]      ; 00570089
    TEST ECX,ECX                        ; 0057008c
    JZ 0x005700ac                       ; 0057008e
        ;   XREF to: 005700ac (CONDITIONAL_JUMP)  ; LAB_005700ac
    MOV dword ptr [EAX + 0x10],EDX      ; 00570090
    MOV EAX,dword ptr [EAX + 0x14]      ; 00570093
        ;   Label: LAB_00570093
    MOV AL,byte ptr [EAX]               ; 00570096
    AND EAX,0xff                        ; 00570098
    RET                                 ; 0057009d
    MOV ECX,dword ptr [EAX + 0x10]      ; 0057009e
        ;   Label: LAB_0057009e
    ADD ECX,0x200                       ; 005700a1
    MOV dword ptr [EAX + 0x10],ECX      ; 005700a7
    JMP 0x00570093                      ; 005700aa
        ;   XREF to: 00570093 (UNCONDITIONAL_JUMP)  ; LAB_00570093
    MOV ECX,dword ptr [EAX + 0x18]      ; 005700ac
        ;   Label: LAB_005700ac
    MOV dword ptr [EAX + 0x10],EDX      ; 005700af
    MOV dword ptr [EAX + 0xc],ECX       ; 005700b2
    MOV dword ptr [EAX + 0x14],ECX      ; 005700b5
    JMP 0x00570093                      ; 005700b8
        ;   XREF to: 00570093 (UNCONDITIONAL_JUMP)  ; LAB_00570093
    MOV EAX,0xffffffff                  ; 005700ba
        ;   Label: LAB_005700ba
    RET                                 ; 005700bf

