; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_iostream_cpp_setBuffer_FUN_00571df8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   new_buffer
; void *           Stack[0xc]:4   buffer_end
; int              Stack[0x10]:4   ownership_flag
;
; XREF[5]:
;   crt_fstream.cpp_filebuf_setbuf_FUN_005722dc at 00572303
;   crt_iostream.cpp_doallocate_FUN_00571dc7 at 00571ded
;   crt_iostream.cpp_streambuf_setbuf_FUN_00571d4f at 00571d77
;   crt_strstream.cpp_strstreambuf_doallocate_FUN_00570272 at 005702df
;   crt_strstream.cpp_strstreambuf_init_FUN_0056fe65 at 0056feb0
;
; Called Functions:
;   crt_unknown.c_freeBuffer_FUN_00571ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571df8
        ;   Label: crt_iostream.cpp_setBuffer_FUN_00571df8
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571df9
    TEST byte ptr [EBX + 0x24],0x2      ; 00571dfd
    JNZ 0x00571e33                      ; 00571e01
        ;   XREF to: 00571e33 (CONDITIONAL_JUMP)  ; LAB_00571e33
    MOV ECX,dword ptr [ESP + 0xc]       ; 00571e03
        ;   Label: LAB_00571e03
    TEST ECX,ECX                        ; 00571e07
    JZ 0x00571e13                       ; 00571e09
        ;   XREF to: 00571e13 (CONDITIONAL_JUMP)  ; LAB_00571e13
    MOV EAX,dword ptr [ESP + 0x10]      ; 00571e0b
    CMP EAX,ECX                         ; 00571e0f
    JA 0x00571e41                       ; 00571e11
        ;   XREF to: 00571e41 (CONDITIONAL_JUMP)  ; LAB_00571e41
    MOV AL,byte ptr [EBX + 0x24]        ; 00571e13
        ;   Label: LAB_00571e13
    MOV dword ptr [EBX + 0x4],0x0       ; 00571e16
    AND AL,0xfc                         ; 00571e1d
    MOV byte ptr [EBX + 0x24],AL        ; 00571e1f
    MOV AH,AL                           ; 00571e22
    MOV dword ptr [EBX + 0x8],0x0       ; 00571e24
    OR AH,0x1                           ; 00571e2b
    MOV byte ptr [EBX + 0x24],AH        ; 00571e2e
    POP EBX                             ; 00571e31
    RET                                 ; 00571e32
    MOV EDX,dword ptr [EBX + 0x4]       ; 00571e33
        ;   Label: LAB_00571e33
    PUSH EDX                            ; 00571e36
    CALL crt_unknown.c_freeBuffer_FUN_00571ef0 ; 00571e37
        ;   XREF to: 00571ef0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_freeBuffer_FUN_00571ef0(void * buffer)
    ADD ESP,0x4                         ; 00571e3c
    JMP 0x00571e03                      ; 00571e3f
        ;   XREF to: 00571e03 (UNCONDITIONAL_JUMP)  ; LAB_00571e03
    PUSH EDI                            ; 00571e41
        ;   Label: LAB_00571e41
    MOV dword ptr [EBX + 0x4],ECX       ; 00571e42
    MOV EDI,dword ptr [ESP + 0x18]      ; 00571e45
    MOV dword ptr [EBX + 0x8],EAX       ; 00571e49
    LEA EAX,[EBX + 0x24]                ; 00571e4c
    TEST EDI,EDI                        ; 00571e4f
    SETNZ DL                            ; 00571e51
    AND EDX,0xff                        ; 00571e54
    MOV CL,byte ptr [EAX]               ; 00571e5a
    AND EDX,0xff                        ; 00571e5c
    AND CL,0xfd                         ; 00571e62
    AND EDX,0x1                         ; 00571e65
    MOV byte ptr [EAX],CL               ; 00571e68
    ADD EDX,EDX                         ; 00571e6a
    OR dword ptr [EAX],EDX              ; 00571e6c
    AND byte ptr [EBX + 0x24],0xfe      ; 00571e6e
    POP EDI                             ; 00571e72
    POP EBX                             ; 00571e73
    RET                                 ; 00571e74

