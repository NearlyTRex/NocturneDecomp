; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_strstream.cpp_strstreambuf_init_FUN_0060b815(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer_ptr
; int              Stack[0xc]:4   buffer_size
; char *           Stack[0x10]:4   put_start
;
; XREF[2]:
;   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe at 00606133
;   crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8 at 0060bc16
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b815
        ;   Label: crt_strstream.cpp_strstreambuf_init_FUN_0060b815
    PUSH ESI                            ; 0060b816
    PUSH EDI                            ; 0060b817
    PUSH EBP                            ; 0060b818
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060b819
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060b81d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0060b821
    MOV EBP,dword ptr [ESP + 0x20]      ; 0060b825
    MOV dword ptr [EBX + 0x2c],0x0      ; 0060b829
    MOV dword ptr [EBX + 0x30],0x0      ; 0060b830
    MOV dword ptr [EBX + 0x34],0x20     ; 0060b837
    MOV AH,byte ptr [EBX + 0x3c]        ; 0060b83e
    MOV dword ptr [EBX + 0x38],0x0      ; 0060b841
    AND AH,0xf8                         ; 0060b848
    MOV byte ptr [EBX + 0x3c],AH        ; 0060b84b
    TEST EDX,EDX                        ; 0060b84e
    JZ 0x0060b88d                       ; 0060b850 | LAB_0060b88d
        ;   XREF to: 0060b88d (CONDITIONAL_JUMP)
    MOV ESI,EDX                         ; 0060b852
    TEST ECX,ECX                        ; 0060b854
    JLE 0x0060b896                      ; 0060b856 | LAB_0060b896
        ;   XREF to: 0060b896 (CONDITIONAL_JUMP)
    LEA EDI,[EDX + ECX*0x1]             ; 0060b858
        ;   Label: LAB_0060b858
    PUSH 0x0                            ; 0060b85b
        ;   Label: LAB_0060b85b
    PUSH EDI                            ; 0060b85d
    PUSH ESI                            ; 0060b85e
    PUSH EBX                            ; 0060b85f
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060b860 | void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0060b865
    TEST EBP,EBP                        ; 0060b868
    JNZ 0x0060b8b7                      ; 0060b86a | LAB_0060b8b7
        ;   XREF to: 0060b8b7 (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 0060b86c
        ;   Label: LAB_0060b86c
    XOR EAX,EAX                         ; 0060b86e
    XOR EDX,EDX                         ; 0060b870
    MOV dword ptr [EBX + 0xc],ESI       ; 0060b872
        ;   Label: LAB_0060b872
    MOV dword ptr [EBX + 0x14],ESI      ; 0060b875
    MOV dword ptr [EBX + 0x10],EDI      ; 0060b878
    MOV dword ptr [EBX + 0x18],EAX      ; 0060b87b
    MOV dword ptr [EBX + 0x20],EAX      ; 0060b87e
    MOV dword ptr [EBX + 0x1c],EDX      ; 0060b881
    CMP EBP,EAX                         ; 0060b884
    JA 0x0060b8cb                       ; 0060b886 | LAB_0060b8cb
        ;   XREF to: 0060b8cb (CONDITIONAL_JUMP)
    POP EBP                             ; 0060b888
    POP EDI                             ; 0060b889
    POP ESI                             ; 0060b88a
    POP EBX                             ; 0060b88b
    RET                                 ; 0060b88c
    OR byte ptr [EBX + 0x3c],0x2        ; 0060b88d
        ;   Label: LAB_0060b88d
    POP EBP                             ; 0060b891
    POP EDI                             ; 0060b892
    POP ESI                             ; 0060b893
    POP EBX                             ; 0060b894
    RET                                 ; 0060b895
    JZ 0x0060b8a9                       ; 0060b896 | LAB_0060b8a9
        ;   Label: LAB_0060b896
        ;   XREF to: 0060b8a9 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [EBX + 0x3c]        ; 0060b898
    OR CL,0x4                           ; 0060b89b
    LEA EDI,[EDX + 0x200]               ; 0060b89e
    MOV byte ptr [EBX + 0x3c],CL        ; 0060b8a4
    JMP 0x0060b85b                      ; 0060b8a7 | LAB_0060b85b
        ;   XREF to: 0060b85b (UNCONDITIONAL_JUMP)
    MOV EDI,EDX                         ; 0060b8a9
        ;   Label: LAB_0060b8a9
    SUB ECX,ECX                         ; 0060b8ab
    DEC ECX                             ; 0060b8ad
    XOR EAX,EAX                         ; 0060b8ae
    SCASB.REPNE ES:EDI                  ; 0060b8b0
    NOT ECX                             ; 0060b8b2
    DEC ECX                             ; 0060b8b4
    JMP 0x0060b858                      ; 0060b8b5 | LAB_0060b858
        ;   XREF to: 0060b858 (UNCONDITIONAL_JUMP)
    CMP EBP,ESI                         ; 0060b8b7
        ;   Label: LAB_0060b8b7
    JC 0x0060b86c                       ; 0060b8b9 | LAB_0060b86c
        ;   XREF to: 0060b86c (CONDITIONAL_JUMP)
    CMP EBP,EDI                         ; 0060b8bb
    JC 0x0060b8c5                       ; 0060b8bd | LAB_0060b8c5
        ;   XREF to: 0060b8c5 (CONDITIONAL_JUMP)
    TEST byte ptr [EBX + 0x3c],0x4      ; 0060b8bf
    JZ 0x0060b86c                       ; 0060b8c3 | LAB_0060b86c
        ;   XREF to: 0060b86c (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0060b8c5
        ;   Label: LAB_0060b8c5
    MOV EDX,EDI                         ; 0060b8c7
    JMP 0x0060b872                      ; 0060b8c9 | LAB_0060b872
        ;   XREF to: 0060b872 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x20]      ; 0060b8cb
        ;   Label: LAB_0060b8cb
    SUB EBP,EAX                         ; 0060b8ce
    ADD EDX,EBP                         ; 0060b8d0
    MOV dword ptr [EBX + 0x20],EDX      ; 0060b8d2
    POP EBP                             ; 0060b8d5
    POP EDI                             ; 0060b8d6
    POP ESI                             ; 0060b8d7
    POP EBX                             ; 0060b8d8
    RET                                 ; 0060b8d9

