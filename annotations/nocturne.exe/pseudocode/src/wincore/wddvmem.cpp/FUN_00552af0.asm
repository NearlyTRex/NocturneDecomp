; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00552af0(void)
;
;
; Referenced Globals:
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   void* g_SoftwareFrameBuffer
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00552af0
        ;   Label: wincore_wddvmem.cpp_FUN_00552af0
    PUSH EBP                            ; 00552af1
    MOV EDX,dword ptr [0x005c5010]      ; 00552af2 | g_BackBuffer
    TEST EDX,EDX                        ; 00552af8
    JNZ 0x00552b09                      ; 00552afa
        ;   XREF to: 00552b09 (CONDITIONAL_JUMP)  ; LAB_00552b09
    MOV ESI,dword ptr [0x02ddf560]      ; 00552afc | g_SoftwareFrameBuffer
    TEST ESI,ESI                        ; 00552b02
    JNZ 0x00552b29                      ; 00552b04
        ;   XREF to: 00552b29 (CONDITIONAL_JUMP)  ; LAB_00552b29
    POP EBP                             ; 00552b06
    POP ESI                             ; 00552b07
    RET                                 ; 00552b08
    PUSH EBX                            ; 00552b09
        ;   Label: LAB_00552b09
    PUSH EDX                            ; 00552b0a
    CALL crt_memory.c_free_FUN_005638d0 ; 00552b0b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBX,EBX                         ; 00552b10
    ADD ESP,0x4                         ; 00552b12
    MOV dword ptr [0x005c5010],EBX      ; 00552b15 | g_BackBuffer
    POP EBX                             ; 00552b1b
    MOV ESI,dword ptr [0x02ddf560]      ; 00552b1c | g_SoftwareFrameBuffer
    TEST ESI,ESI                        ; 00552b22
    JNZ 0x00552b29                      ; 00552b24
        ;   XREF to: 00552b29 (CONDITIONAL_JUMP)  ; LAB_00552b29
    POP EBP                             ; 00552b26
    POP ESI                             ; 00552b27
    RET                                 ; 00552b28
    PUSH ESI                            ; 00552b29
        ;   Label: LAB_00552b29
    CALL crt_memory.c_free_FUN_005638d0 ; 00552b2a
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBP,EBP                         ; 00552b2f
    ADD ESP,0x4                         ; 00552b31
    MOV dword ptr [0x006af62c],EBP      ; 00552b34 | g_SoftwareZBuffer
    POP EBP                             ; 00552b3a
    POP ESI                             ; 00552b3b
    RET                                 ; 00552b3c

