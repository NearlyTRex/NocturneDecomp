; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c__strncpy_FUN_1000a9f0(char *dest,char *source,size_t count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   source
; size_t           Stack[0xc]:4   count
;
; XREF[6]:
;   crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0 at 1000c284
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0 at 1000f795
;   crt_locale.c__lc_strtolc_FUN_1000b380 at 1000b442
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000ad6a
;   crt_startup.c__NMSG_WRITE_FUN_10008610 at 100086e7
;   crt_time.c__tzset_FUN_10010050 at 10010230
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 1000a9f0
        ;   Label: crt_string.c__strncpy_FUN_1000a9f0
    PUSH EDI                            ; 1000a9f4
    TEST ECX,ECX                        ; 1000a9f5
    JZ 0x1000aa73                       ; 1000a9f7
        ;   XREF to: 1000aa73 (CONDITIONAL_JUMP)  ; LAB_1000aa73
    PUSH ESI                            ; 1000a9f9
    PUSH EBX                            ; 1000a9fa
    MOV EBX,ECX                         ; 1000a9fb
    MOV ESI,dword ptr [ESP + 0x14]      ; 1000a9fd
    TEST ESI,0x3                        ; 1000aa01
    MOV EDI,dword ptr [ESP + 0x10]      ; 1000aa07
    JNZ 0x1000aa14                      ; 1000aa0b
        ;   XREF to: 1000aa14 (CONDITIONAL_JUMP)  ; LAB_1000aa14
    SHR ECX,0x2                         ; 1000aa0d
    JNZ 0x1000aa81                      ; 1000aa10
        ;   XREF to: 1000aa81 (CONDITIONAL_JUMP)  ; LAB_1000aa81
    JMP 0x1000aa35                      ; 1000aa12
        ;   XREF to: 1000aa35 (UNCONDITIONAL_JUMP)  ; LAB_1000aa35
    MOV AL,byte ptr [ESI]               ; 1000aa14
        ;   Label: LAB_1000aa14
    INC ESI                             ; 1000aa16
    MOV byte ptr [EDI],AL               ; 1000aa17
    INC EDI                             ; 1000aa19
    DEC ECX                             ; 1000aa1a
    JZ 0x1000aa42                       ; 1000aa1b
        ;   XREF to: 1000aa42 (CONDITIONAL_JUMP)  ; LAB_1000aa42
    TEST AL,AL                          ; 1000aa1d
    JZ 0x1000aa4a                       ; 1000aa1f
        ;   XREF to: 1000aa4a (CONDITIONAL_JUMP)  ; LAB_1000aa4a
    TEST ESI,0x3                        ; 1000aa21
    JNZ 0x1000aa14                      ; 1000aa27
        ;   XREF to: 1000aa14 (CONDITIONAL_JUMP)  ; LAB_1000aa14
    MOV EBX,ECX                         ; 1000aa29
    SHR ECX,0x2                         ; 1000aa2b
    JNZ 0x1000aa81                      ; 1000aa2e
        ;   XREF to: 1000aa81 (CONDITIONAL_JUMP)  ; LAB_1000aa81
    AND EBX,0x3                         ; 1000aa30
        ;   Label: LAB_1000aa30
    JZ 0x1000aa42                       ; 1000aa33
        ;   XREF to: 1000aa42 (CONDITIONAL_JUMP)  ; LAB_1000aa42
    MOV AL,byte ptr [ESI]               ; 1000aa35
        ;   Label: LAB_1000aa35
    INC ESI                             ; 1000aa37
    MOV byte ptr [EDI],AL               ; 1000aa38
    INC EDI                             ; 1000aa3a
    TEST AL,AL                          ; 1000aa3b
    JZ 0x1000aa6e                       ; 1000aa3d
        ;   XREF to: 1000aa6e (CONDITIONAL_JUMP)  ; LAB_1000aa6e
    DEC EBX                             ; 1000aa3f
    JNZ 0x1000aa35                      ; 1000aa40
        ;   XREF to: 1000aa35 (CONDITIONAL_JUMP)  ; LAB_1000aa35
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000aa42
        ;   Label: LAB_1000aa42
    POP EBX                             ; 1000aa46
    POP ESI                             ; 1000aa47
    POP EDI                             ; 1000aa48
    RET                                 ; 1000aa49
    TEST EDI,0x3                        ; 1000aa4a
        ;   Label: LAB_1000aa4a
    JZ 0x1000aa64                       ; 1000aa50
        ;   XREF to: 1000aa64 (CONDITIONAL_JUMP)  ; LAB_1000aa64
    MOV byte ptr [EDI],AL               ; 1000aa52
        ;   Label: LAB_1000aa52
    INC EDI                             ; 1000aa54
    DEC ECX                             ; 1000aa55
    JZ 0x1000aae6                       ; 1000aa56
        ;   XREF to: 1000aae6 (CONDITIONAL_JUMP)  ; LAB_1000aae6
    TEST EDI,0x3                        ; 1000aa5c
    JNZ 0x1000aa52                      ; 1000aa62
        ;   XREF to: 1000aa52 (CONDITIONAL_JUMP)  ; LAB_1000aa52
    MOV EBX,ECX                         ; 1000aa64
        ;   Label: LAB_1000aa64
    SHR ECX,0x2                         ; 1000aa66
    JNZ 0x1000aad7                      ; 1000aa69
        ;   XREF to: 1000aad7 (CONDITIONAL_JUMP)  ; LAB_1000aad7
    MOV byte ptr [EDI],AL               ; 1000aa6b
        ;   Label: LAB_1000aa6b
    INC EDI                             ; 1000aa6d
    DEC EBX                             ; 1000aa6e
        ;   Label: LAB_1000aa6e
    JNZ 0x1000aa6b                      ; 1000aa6f
        ;   XREF to: 1000aa6b (CONDITIONAL_JUMP)  ; LAB_1000aa6b
    POP EBX                             ; 1000aa71
    POP ESI                             ; 1000aa72
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000aa73
        ;   Label: LAB_1000aa73
    POP EDI                             ; 1000aa77
    RET                                 ; 1000aa78
    MOV dword ptr [EDI],EDX             ; 1000aa79
        ;   Label: LAB_1000aa79
    ADD EDI,0x4                         ; 1000aa7b
    DEC ECX                             ; 1000aa7e
    JZ 0x1000aa30                       ; 1000aa7f
        ;   XREF to: 1000aa30 (CONDITIONAL_JUMP)  ; LAB_1000aa30
    MOV EDX,0x7efefeff                  ; 1000aa81
        ;   Label: LAB_1000aa81
    MOV EAX,dword ptr [ESI]             ; 1000aa86
    ADD EDX,EAX                         ; 1000aa88
    XOR EAX,0xffffffff                  ; 1000aa8a
    XOR EAX,EDX                         ; 1000aa8d
    MOV EDX,dword ptr [ESI]             ; 1000aa8f
    ADD ESI,0x4                         ; 1000aa91
    TEST EAX,0x81010100                 ; 1000aa94
    JZ 0x1000aa79                       ; 1000aa99
        ;   XREF to: 1000aa79 (CONDITIONAL_JUMP)  ; LAB_1000aa79
    TEST DL,DL                          ; 1000aa9b
    JZ 0x1000aacb                       ; 1000aa9d
        ;   XREF to: 1000aacb (CONDITIONAL_JUMP)  ; LAB_1000aacb
    TEST DH,DH                          ; 1000aa9f
    JZ 0x1000aac1                       ; 1000aaa1
        ;   XREF to: 1000aac1 (CONDITIONAL_JUMP)  ; LAB_1000aac1
    TEST EDX,0xff0000                   ; 1000aaa3
    JZ 0x1000aab7                       ; 1000aaa9
        ;   XREF to: 1000aab7 (CONDITIONAL_JUMP)  ; LAB_1000aab7
    TEST EDX,0xff000000                 ; 1000aaab
    JNZ 0x1000aa79                      ; 1000aab1
        ;   XREF to: 1000aa79 (CONDITIONAL_JUMP)  ; LAB_1000aa79
    MOV dword ptr [EDI],EDX             ; 1000aab3
    JMP 0x1000aacf                      ; 1000aab5
        ;   XREF to: 1000aacf (UNCONDITIONAL_JUMP)  ; LAB_1000aacf
    AND EDX,0xffff                      ; 1000aab7
        ;   Label: LAB_1000aab7
    MOV dword ptr [EDI],EDX             ; 1000aabd
    JMP 0x1000aacf                      ; 1000aabf
        ;   XREF to: 1000aacf (UNCONDITIONAL_JUMP)  ; LAB_1000aacf
    AND EDX,0xff                        ; 1000aac1
        ;   Label: LAB_1000aac1
    MOV dword ptr [EDI],EDX             ; 1000aac7
    JMP 0x1000aacf                      ; 1000aac9
        ;   XREF to: 1000aacf (UNCONDITIONAL_JUMP)  ; LAB_1000aacf
    XOR EDX,EDX                         ; 1000aacb
        ;   Label: LAB_1000aacb
    MOV dword ptr [EDI],EDX             ; 1000aacd
    ADD EDI,0x4                         ; 1000aacf
        ;   Label: LAB_1000aacf
    XOR EAX,EAX                         ; 1000aad2
    DEC ECX                             ; 1000aad4
    JZ 0x1000aae1                       ; 1000aad5
        ;   XREF to: 1000aae1 (CONDITIONAL_JUMP)  ; LAB_1000aae1
    XOR EAX,EAX                         ; 1000aad7
        ;   Label: LAB_1000aad7
    MOV dword ptr [EDI],EAX             ; 1000aad9
        ;   Label: LAB_1000aad9
    ADD EDI,0x4                         ; 1000aadb
    DEC ECX                             ; 1000aade
    JNZ 0x1000aad9                      ; 1000aadf
        ;   XREF to: 1000aad9 (CONDITIONAL_JUMP)  ; LAB_1000aad9
    AND EBX,0x3                         ; 1000aae1
        ;   Label: LAB_1000aae1
    JNZ 0x1000aa6b                      ; 1000aae4
        ;   XREF to: 1000aa6b (CONDITIONAL_JUMP)  ; LAB_1000aa6b
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000aae6
        ;   Label: LAB_1000aae6
    POP EBX                             ; 1000aaea
    POP ESI                             ; 1000aaeb
    POP EDI                             ; 1000aaec
    RET                                 ; 1000aaed

