; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22(strstreambuf * this_ptr)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x28]:4  buffer_start_offset
; int              Stack[-0x24]:4  read_ptr_offset
; int              Stack[-0x20]:4  data_end_offset
; typedef SIZE_T ULONG_PTR Stack[-0x1c]:4  current_buffer_size
; typedef SIZE_T ULONG_PTR Stack[-0x18]:4  new_buffer_size
; void *           Stack[-0x14]:4  old_buffer_start
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_malloc_FUN_006021da
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bc22
        ;   Label: crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22
    PUSH ESI                            ; 0060bc23
    PUSH EDI                            ; 0060bc24
    PUSH EBP                            ; 0060bc25
    SUB ESP,0x18                        ; 0060bc26
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0060bc29
    MOV AH,byte ptr [EBX + 0x3c]        ; 0060bc2d
    TEST AH,0x2                         ; 0060bc30
    JZ 0x0060bd27                       ; 0060bc33
        ;   XREF to: 0060bd27 (CONDITIONAL_JUMP)  ; LAB_0060bd27
    TEST AH,0x1                         ; 0060bc39
    JNZ 0x0060bd27                      ; 0060bc3c
        ;   XREF to: 0060bd27 (CONDITIONAL_JUMP)  ; LAB_0060bd27
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060bc42
    MOV EDX,dword ptr [EBX + 0x8]       ; 0060bc45
    SUB EDX,EAX                         ; 0060bc48
    MOV dword ptr [ESP + 0x14],EAX      ; 0060bc4a
    MOV EAX,EDX                         ; 0060bc4e
    MOV dword ptr [ESP + 0xc],EDX       ; 0060bc50
    MOV EDX,dword ptr [EBX + 0x34]      ; 0060bc54
    CMP EAX,EDX                         ; 0060bc57
    JGE 0x0060bd2e                      ; 0060bc59
        ;   XREF to: 0060bd2e (CONDITIONAL_JUMP)  ; LAB_0060bd2e
    MOV dword ptr [ESP + 0x10],EDX      ; 0060bc5f
    CMP dword ptr [EBX + 0x2c],0x0      ; 0060bc63
        ;   Label: LAB_0060bc63
    JNZ 0x0060bd3c                      ; 0060bc67
        ;   XREF to: 0060bd3c (CONDITIONAL_JUMP)  ; LAB_0060bd3c
    MOV EDI,dword ptr [ESP + 0x10]      ; 0060bc6d
    PUSH EDI                            ; 0060bc71
    CALL crt_memory.c_malloc_FUN_006021da ; 0060bc72
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
    ADD ESP,0x4                         ; 0060bc77
        ;   Label: LAB_0060bc77
    MOV EBP,EAX                         ; 0060bc7a
    TEST EBP,EBP                        ; 0060bc7c
    JZ 0x0060bd27                       ; 0060bc7e
        ;   XREF to: 0060bd27 (CONDITIONAL_JUMP)  ; LAB_0060bd27
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060bc84
    PUSH 0x0                            ; 0060bc88
    ADD EAX,EBP                         ; 0060bc8a
    PUSH EAX                            ; 0060bc8c
    PUSH EBP                            ; 0060bc8d
    PUSH EBX                            ; 0060bc8e
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060bc8f
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    MOV ESI,dword ptr [EBX + 0xc]       ; 0060bc94
    ADD ESP,0x10                        ; 0060bc97
    TEST ESI,ESI                        ; 0060bc9a
    JZ 0x0060bcec                       ; 0060bc9c
        ;   XREF to: 0060bcec (CONDITIONAL_JUMP)  ; LAB_0060bcec
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060bc9e
    MOV EAX,ESI                         ; 0060bca2
    SUB EAX,EDX                         ; 0060bca4
    MOV dword ptr [ESP],EAX             ; 0060bca6
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060bca9
    SUB EAX,EDX                         ; 0060bcac
    MOV dword ptr [ESP + 0x4],EAX       ; 0060bcae
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060bcb2
    SUB EAX,EDX                         ; 0060bcb5
    MOV dword ptr [ESP + 0x8],EAX       ; 0060bcb7
    MOV ECX,EAX                         ; 0060bcbb
    MOV EAX,dword ptr [ESP]             ; 0060bcbd
    SUB ECX,EAX                         ; 0060bcc0
    LEA EDX,[EAX + EBP*0x1]             ; 0060bcc2
    MOV EDI,EDX                         ; 0060bcc5
    PUSH EDI                            ; 0060bcc7
    MOV EAX,ECX                         ; 0060bcc8
    SHR ECX,0x2                         ; 0060bcca
    MOVSD.REP ES:EDI,ESI                ; 0060bccd
    MOV CL,AL                           ; 0060bccf
    AND CL,0x3                          ; 0060bcd1
    MOVSB.REP ES:EDI,ESI                ; 0060bcd4
    POP EDI                             ; 0060bcd6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060bcd7
    MOV ECX,dword ptr [ESP + 0x4]       ; 0060bcdb
    MOV dword ptr [EBX + 0xc],EDX       ; 0060bcdf
    ADD ECX,EBP                         ; 0060bce2
    ADD EAX,EBP                         ; 0060bce4
    MOV dword ptr [EBX + 0x14],ECX      ; 0060bce6
    MOV dword ptr [EBX + 0x10],EAX      ; 0060bce9
    MOV ESI,dword ptr [EBX + 0x18]      ; 0060bcec
        ;   Label: LAB_0060bcec
    TEST ESI,ESI                        ; 0060bcef
    JNZ 0x0060bd49                      ; 0060bcf1
        ;   XREF to: 0060bd49 (CONDITIONAL_JUMP)  ; LAB_0060bd49
    MOV dword ptr [EBX + 0x18],EBP      ; 0060bcf3
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060bcf6
    MOV dword ptr [EBX + 0x20],EBP      ; 0060bcfa
    ADD EAX,EBP                         ; 0060bcfd
    MOV dword ptr [EBX + 0x1c],EAX      ; 0060bcff
    MOV ECX,dword ptr [ESP + 0x14]      ; 0060bd02
        ;   Label: LAB_0060bd02
    TEST ECX,ECX                        ; 0060bd06
    JZ 0x0060bd1d                       ; 0060bd08
        ;   XREF to: 0060bd1d (CONDITIONAL_JUMP)  ; LAB_0060bd1d
    CMP dword ptr [EBX + 0x30],0x0      ; 0060bd0a
    JNZ 0x0060bdb7                      ; 0060bd0e
        ;   XREF to: 0060bdb7 (CONDITIONAL_JUMP)  ; LAB_0060bdb7
    PUSH ECX                            ; 0060bd14
    CALL crt_memory.c_free_FUN_005fe659 ; 0060bd15
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0060bd1a
        ;   Label: LAB_0060bd1a
    XOR EAX,EAX                         ; 0060bd1d
        ;   Label: LAB_0060bd1d
    ADD ESP,0x18                        ; 0060bd1f
        ;   Label: LAB_0060bd1f
    POP EBP                             ; 0060bd22
    POP EDI                             ; 0060bd23
    POP ESI                             ; 0060bd24
    POP EBX                             ; 0060bd25
    RET                                 ; 0060bd26
    MOV EAX,0xffffffff                  ; 0060bd27
        ;   Label: LAB_0060bd27
    JMP 0x0060bd1f                      ; 0060bd2c
        ;   XREF to: 0060bd1f (UNCONDITIONAL_JUMP)  ; LAB_0060bd1f
    ADD EAX,0x200                       ; 0060bd2e
        ;   Label: LAB_0060bd2e
    MOV dword ptr [ESP + 0x10],EAX      ; 0060bd33
    JMP 0x0060bc63                      ; 0060bd37
        ;   XREF to: 0060bc63 (UNCONDITIONAL_JUMP)  ; LAB_0060bc63
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060bd3c
        ;   Label: LAB_0060bd3c
    PUSH ESI                            ; 0060bd40
    CALL dword ptr [EBX + 0x2c]         ; 0060bd41
    JMP 0x0060bc77                      ; 0060bd44
        ;   XREF to: 0060bc77 (UNCONDITIONAL_JUMP)  ; LAB_0060bc77
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060bd49
        ;   Label: LAB_0060bd49
    MOV EAX,ESI                         ; 0060bd4d
    SUB EAX,EDX                         ; 0060bd4f
    MOV dword ptr [ESP],EAX             ; 0060bd51
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060bd54
    SUB EAX,EDX                         ; 0060bd57
    MOV dword ptr [ESP + 0x4],EAX       ; 0060bd59
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060bd5d
    SUB EAX,EDX                         ; 0060bd60
    MOV dword ptr [ESP + 0x8],EAX       ; 0060bd62
    MOV ECX,EAX                         ; 0060bd66
    MOV EAX,dword ptr [ESP]             ; 0060bd68
    SUB ECX,EAX                         ; 0060bd6b
    LEA EDX,[EAX + EBP*0x1]             ; 0060bd6d
    MOV EDI,EDX                         ; 0060bd70
    PUSH EDI                            ; 0060bd72
    MOV EAX,ECX                         ; 0060bd73
    SHR ECX,0x2                         ; 0060bd75
    MOVSD.REP ES:EDI,ESI                ; 0060bd78
    MOV CL,AL                           ; 0060bd7a
    AND CL,0x3                          ; 0060bd7c
    MOVSB.REP ES:EDI,ESI                ; 0060bd7f
    POP EDI                             ; 0060bd81
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060bd82
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060bd86
    MOV ESI,dword ptr [ESP + 0x8]       ; 0060bd8a
    SUB EAX,ECX                         ; 0060bd8e
    MOV dword ptr [EBX + 0x18],EDX      ; 0060bd90
    ADD ESI,EAX                         ; 0060bd93
    MOV dword ptr [EBX + 0x20],EDX      ; 0060bd95
    ADD EBP,ESI                         ; 0060bd98
    MOV EAX,dword ptr [ESP + 0x4]       ; 0060bd9a
    MOV dword ptr [EBX + 0x1c],EBP      ; 0060bd9e
    MOV EBP,dword ptr [ESP]             ; 0060bda1
    MOV EDX,dword ptr [EBX + 0x20]      ; 0060bda4
    SUB EAX,EBP                         ; 0060bda7
    ADD EDX,EAX                         ; 0060bda9
    MOV dword ptr [ESP + 0x8],ESI       ; 0060bdab
    MOV dword ptr [EBX + 0x20],EDX      ; 0060bdaf
    JMP 0x0060bd02                      ; 0060bdb2
        ;   XREF to: 0060bd02 (UNCONDITIONAL_JUMP)  ; LAB_0060bd02
    PUSH ECX                            ; 0060bdb7
        ;   Label: LAB_0060bdb7
    CALL dword ptr [EBX + 0x30]         ; 0060bdb8
    JMP 0x0060bd1a                      ; 0060bdbb
        ;   XREF to: 0060bd1a (UNCONDITIONAL_JUMP)  ; LAB_0060bd1a

