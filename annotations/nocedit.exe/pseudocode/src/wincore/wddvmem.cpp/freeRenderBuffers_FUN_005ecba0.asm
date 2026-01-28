; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005ecba0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_00657764
;   TerminatedCString s_wincore_wddvmem_cpp_0065777b
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   void* g_SoftwareFrameBuffer
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ecba0
        ;   Label: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0
    PUSH EBP                            ; 005ecba1
    MOV EDX,dword ptr [0x00688010]      ; 005ecba2 | g_BackBuffer
    TEST EDX,EDX                        ; 005ecba8
    JNZ 0x005ecbb9                      ; 005ecbaa
        ;   XREF to: 005ecbb9 (CONDITIONAL_JUMP)  ; LAB_005ecbb9
    MOV ESI,dword ptr [0x03f95930]      ; 005ecbac | g_SoftwareFrameBuffer
    TEST ESI,ESI                        ; 005ecbb2
    JNZ 0x005ecbe3                      ; 005ecbb4
        ;   XREF to: 005ecbe3 (CONDITIONAL_JUMP)  ; LAB_005ecbe3
    POP EBP                             ; 005ecbb6
    POP ESI                             ; 005ecbb7
    RET                                 ; 005ecbb8
    PUSH EBX                            ; 005ecbb9
        ;   Label: LAB_005ecbb9
    PUSH 0xff                           ; 005ecbba
    PUSH 0x657764                       ; 005ecbbf | = "..\\wincore\\wddvmem.cpp"
    PUSH EDX                            ; 005ecbc4
    XOR EBX,EBX                         ; 005ecbc5
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ecbc7
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecbcc
    MOV dword ptr [0x00688010],EBX      ; 005ecbcf | g_BackBuffer
    POP EBX                             ; 005ecbd5
    MOV ESI,dword ptr [0x03f95930]      ; 005ecbd6 | g_SoftwareFrameBuffer
    TEST ESI,ESI                        ; 005ecbdc
    JNZ 0x005ecbe3                      ; 005ecbde
        ;   XREF to: 005ecbe3 (CONDITIONAL_JUMP)  ; LAB_005ecbe3
    POP EBP                             ; 005ecbe0
    POP ESI                             ; 005ecbe1
    RET                                 ; 005ecbe2
    PUSH 0x107                          ; 005ecbe3
        ;   Label: LAB_005ecbe3
    PUSH 0x65777b                       ; 005ecbe8 | = "..\\wincore\\wddvmem.cpp"
    PUSH ESI                            ; 005ecbed
    XOR EBP,EBP                         ; 005ecbee
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ecbf0
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecbf5
    MOV dword ptr [0x0077262c],EBP      ; 005ecbf8 | g_SoftwareZBuffer
    POP EBP                             ; 005ecbfe
    POP ESI                             ; 005ecbff
    RET                                 ; 005ecc00

