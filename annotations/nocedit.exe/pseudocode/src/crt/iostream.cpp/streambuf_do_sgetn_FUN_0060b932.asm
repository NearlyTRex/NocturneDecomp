; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932(streambuf * buffer, void * output_buffer, SIZE_T bytes_to_read)
;
; Parameters:
; streambuf *      Stack[0x4]:4   buffer
; void *           Stack[0x8]:4   output_buffer
; SIZE_T           Stack[0xc]:4   bytes_to_read
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b932
        ;   Label: crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932
    PUSH ESI                            ; 0060b933
    PUSH EDI                            ; 0060b934
    PUSH EBP                            ; 0060b935
    SUB ESP,0x4                         ; 0060b936
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060b939
    MOV EBP,dword ptr [ESP + 0x20]      ; 0060b93d
    XOR EDX,EDX                         ; 0060b941
    MOV dword ptr [ESP],EDX             ; 0060b943
    TEST EBP,EBP                        ; 0060b946
        ;   Label: LAB_0060b946
    JLE 0x0060b9ac                      ; 0060b948
        ;   XREF to: 0060b9ac (CONDITIONAL_JUMP)  ; LAB_0060b9ac
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060b94a
    MOV EDX,dword ptr [EBX + 0x14]      ; 0060b94d
    SUB EAX,EDX                         ; 0060b950
    MOV EDX,EAX                         ; 0060b952
    TEST EAX,EAX                        ; 0060b954
    JLE 0x0060b991                      ; 0060b956
        ;   XREF to: 0060b991 (CONDITIONAL_JUMP)  ; LAB_0060b991
    CMP EDX,EBP                         ; 0060b958
        ;   Label: LAB_0060b958
    JLE 0x0060b95e                      ; 0060b95a
        ;   XREF to: 0060b95e (CONDITIONAL_JUMP)  ; LAB_0060b95e
    MOV EDX,EBP                         ; 0060b95c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0060b95e
        ;   Label: LAB_0060b95e
    MOV ECX,EDX                         ; 0060b962
    MOV ESI,dword ptr [EBX + 0x14]      ; 0060b964
    PUSH EDI                            ; 0060b967
    MOV EAX,ECX                         ; 0060b968
    SHR ECX,0x2                         ; 0060b96a
    MOVSD.REP ES:EDI,ESI                ; 0060b96d
    MOV CL,AL                           ; 0060b96f
    AND CL,0x3                          ; 0060b971
    MOVSB.REP ES:EDI,ESI                ; 0060b974
    POP EDI                             ; 0060b976
    SUB EBP,EDX                         ; 0060b977
    MOV ESI,dword ptr [ESP]             ; 0060b979
    ADD EDI,EDX                         ; 0060b97c
    MOV ECX,dword ptr [EBX + 0x14]      ; 0060b97e
    MOV dword ptr [ESP + 0x1c],EDI      ; 0060b981
    ADD ESI,EDX                         ; 0060b985
    ADD ECX,EDX                         ; 0060b987
    MOV dword ptr [ESP],ESI             ; 0060b989
    MOV dword ptr [EBX + 0x14],ECX      ; 0060b98c
    JMP 0x0060b946                      ; 0060b98f
        ;   XREF to: 0060b946 (UNCONDITIONAL_JUMP)  ; LAB_0060b946
    PUSH EBX                            ; 0060b991
        ;   Label: LAB_0060b991
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060b992
    CALL dword ptr [EAX + 0x10]         ; 0060b995
    ADD ESP,0x4                         ; 0060b998
    CMP EAX,-0x1                        ; 0060b99b
    JZ 0x0060b9ac                       ; 0060b99e
        ;   XREF to: 0060b9ac (CONDITIONAL_JUMP)  ; LAB_0060b9ac
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060b9a0
    MOV EDX,dword ptr [EBX + 0x14]      ; 0060b9a3
    SUB EAX,EDX                         ; 0060b9a6
    MOV EDX,EAX                         ; 0060b9a8
    JMP 0x0060b958                      ; 0060b9aa
        ;   XREF to: 0060b958 (UNCONDITIONAL_JUMP)  ; LAB_0060b958
    MOV EAX,dword ptr [ESP]             ; 0060b9ac
        ;   Label: LAB_0060b9ac
    ADD ESP,0x4                         ; 0060b9af
    POP EBP                             ; 0060b9b2
    POP EDI                             ; 0060b9b3
    POP ESI                             ; 0060b9b4
    POP EBX                             ; 0060b9b5
    RET                                 ; 0060b9b6

