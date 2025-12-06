; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   new_buffer
; void *           Stack[0xc]:4   buffer_end
; int              Stack[0x10]:4   ownership_flag
;
; XREF[5]:
;   crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c at 0060dbb3
;   crt_iostream.cpp_doallocate_FUN_0060d677 at 0060d69d
;   crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff at 0060d643
;   crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22 at 0060bc8f
;   crt_strstream.cpp_strstreambuf_init_FUN_0060b815 at 0060b860
;
; Called Functions:
;   crt_iostream.cpp_freeBuffer_FUN_0060d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d6a8
        ;   Label: crt_iostream.cpp_setBuffer_FUN_0060d6a8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060d6a9
    TEST byte ptr [EBX + 0x24],0x2      ; 0060d6ad
    JNZ 0x0060d6e3                      ; 0060d6b1 | LAB_0060d6e3
        ;   XREF to: 0060d6e3 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060d6b3
        ;   Label: LAB_0060d6b3
    TEST ECX,ECX                        ; 0060d6b7
    JZ 0x0060d6c3                       ; 0060d6b9 | LAB_0060d6c3
        ;   XREF to: 0060d6c3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060d6bb
    CMP EAX,ECX                         ; 0060d6bf
    JA 0x0060d6f1                       ; 0060d6c1 | LAB_0060d6f1
        ;   XREF to: 0060d6f1 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [EBX + 0x24]        ; 0060d6c3
        ;   Label: LAB_0060d6c3
    MOV dword ptr [EBX + 0x4],0x0       ; 0060d6c6
    AND AL,0xfc                         ; 0060d6cd
    MOV byte ptr [EBX + 0x24],AL        ; 0060d6cf
    MOV AH,AL                           ; 0060d6d2
    MOV dword ptr [EBX + 0x8],0x0       ; 0060d6d4
    OR AH,0x1                           ; 0060d6db
    MOV byte ptr [EBX + 0x24],AH        ; 0060d6de
    POP EBX                             ; 0060d6e1
    RET                                 ; 0060d6e2
    MOV EDX,dword ptr [EBX + 0x4]       ; 0060d6e3
        ;   Label: LAB_0060d6e3
    PUSH EDX                            ; 0060d6e6
    CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0 ; 0060d6e7 | void crt_iostream.cpp_freeBuffer_FUN_0060d7a0(void * buffer)
        ;   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060d6ec
    JMP 0x0060d6b3                      ; 0060d6ef | LAB_0060d6b3
        ;   XREF to: 0060d6b3 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 0060d6f1
        ;   Label: LAB_0060d6f1
    MOV dword ptr [EBX + 0x4],ECX       ; 0060d6f2
    MOV EDI,dword ptr [ESP + 0x18]      ; 0060d6f5
    MOV dword ptr [EBX + 0x8],EAX       ; 0060d6f9
    LEA EAX,[EBX + 0x24]                ; 0060d6fc
    TEST EDI,EDI                        ; 0060d6ff
    SETNZ DL                            ; 0060d701
    AND EDX,0xff                        ; 0060d704
    MOV CL,byte ptr [EAX]               ; 0060d70a
    AND EDX,0xff                        ; 0060d70c
    AND CL,0xfd                         ; 0060d712
    AND EDX,0x1                         ; 0060d715
    MOV byte ptr [EAX],CL               ; 0060d718
    ADD EDX,EDX                         ; 0060d71a
    OR dword ptr [EAX],EDX              ; 0060d71c
    AND byte ptr [EBX + 0x24],0xfe      ; 0060d71e
    POP EDI                             ; 0060d722
    POP EBX                             ; 0060d723
    RET                                 ; 0060d724

