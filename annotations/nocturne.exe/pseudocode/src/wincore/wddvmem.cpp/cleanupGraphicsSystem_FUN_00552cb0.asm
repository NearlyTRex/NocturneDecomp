; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00552cb0(void)
;
;
; XREF[1]:
;   engine_2d.c_cleanupGraphicsSystem_FUN_004012a0 at 004012a8
;
; Referenced Globals:
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   void* g_SoftwareFrameBuffer
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   engine_special.cpp_kill_FUN_005322b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552cb0
        ;   Label: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_00552cb0
    PUSH ESI                            ; 00552cb1
    PUSH EBP                            ; 00552cb2
    MOV EDX,dword ptr [0x005c5010]      ; 00552cb3 | g_BackBuffer
    TEST EDX,EDX                        ; 00552cb9
    JNZ 0x00552d38                      ; 00552cbb
        ;   XREF to: 00552d38 (CONDITIONAL_JUMP)  ; LAB_00552d38
    MOV ESI,dword ptr [0x02ddf560]      ; 00552cc1 | g_SoftwareFrameBuffer
        ;   Label: LAB_00552cc1
    TEST ESI,ESI                        ; 00552cc7
    JZ 0x00552cdc                       ; 00552cc9
        ;   XREF to: 00552cdc (CONDITIONAL_JUMP)  ; LAB_00552cdc
    PUSH ESI                            ; 00552ccb
    CALL crt_memory.c_free_FUN_005638d0 ; 00552ccc
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBP,EBP                         ; 00552cd1
    ADD ESP,0x4                         ; 00552cd3
    MOV dword ptr [0x006af62c],EBP      ; 00552cd6 | g_SoftwareZBuffer
    CALL engine_special.cpp_kill_FUN_005322b0 ; 00552cdc
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005322b0()
        ;   Label: LAB_00552cdc
    MOV EAX,[0x02ddf55c]                ; 00552ce1 | g_DirectDrawUnknown
    TEST EAX,EAX                        ; 00552ce6
    JZ 0x00552cf8                       ; 00552ce8
        ;   XREF to: 00552cf8 (CONDITIONAL_JUMP)  ; LAB_00552cf8
    PUSH EAX                            ; 00552cea
    MOV EDX,dword ptr [EAX]             ; 00552ceb
    CALL dword ptr [EDX + 0x8]          ; 00552ced
    XOR EDX,EDX                         ; 00552cf0
    MOV dword ptr [0x02ddf55c],EDX      ; 00552cf2 | g_DirectDrawUnknown
    MOV ECX,dword ptr [0x02ddf558]      ; 00552cf8 | g_SoftwareRenderSurface
        ;   Label: LAB_00552cf8
    TEST ECX,ECX                        ; 00552cfe
    JZ 0x00552d10                       ; 00552d00
        ;   XREF to: 00552d10 (CONDITIONAL_JUMP)  ; LAB_00552d10
    PUSH ECX                            ; 00552d02
    MOV EDX,dword ptr [ECX]             ; 00552d03
    XOR EBX,EBX                         ; 00552d05
    CALL dword ptr [EDX + 0x8]          ; 00552d07
    MOV dword ptr [0x02ddf558],EBX      ; 00552d0a | g_SoftwareRenderSurface
    MOV ESI,dword ptr [0x02ddf554]      ; 00552d10 | g_DirectDrawSurface
        ;   Label: LAB_00552d10
    TEST ESI,ESI                        ; 00552d16
    JZ 0x00552d2a                       ; 00552d18
        ;   XREF to: 00552d2a (CONDITIONAL_JUMP)  ; LAB_00552d2a
    PUSH EDI                            ; 00552d1a
    PUSH ESI                            ; 00552d1b
    MOV EDX,dword ptr [ESI]             ; 00552d1c
    XOR EDI,EDI                         ; 00552d1e
    CALL dword ptr [EDX + 0x8]          ; 00552d20
    MOV dword ptr [0x02ddf554],EDI      ; 00552d23 | g_DirectDrawSurface
    POP EDI                             ; 00552d29
    MOV EBP,dword ptr [0x02ddf550]      ; 00552d2a | g_DirectDrawObject
        ;   Label: LAB_00552d2a
    TEST EBP,EBP                        ; 00552d30
    JNZ 0x00552d4e                      ; 00552d32
        ;   XREF to: 00552d4e (CONDITIONAL_JUMP)  ; LAB_00552d4e
    POP EBP                             ; 00552d34
    POP ESI                             ; 00552d35
    POP EBX                             ; 00552d36
    RET                                 ; 00552d37
    PUSH EDX                            ; 00552d38
        ;   Label: LAB_00552d38
    CALL crt_memory.c_free_FUN_005638d0 ; 00552d39
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBX,EBX                         ; 00552d3e
    ADD ESP,0x4                         ; 00552d40
    MOV dword ptr [0x005c5010],EBX      ; 00552d43 | g_BackBuffer
    JMP 0x00552cc1                      ; 00552d49
        ;   XREF to: 00552cc1 (UNCONDITIONAL_JUMP)  ; LAB_00552cc1
    PUSH EBP                            ; 00552d4e
        ;   Label: LAB_00552d4e
    MOV EDX,dword ptr [EBP]             ; 00552d4f
    CALL dword ptr [EDX + 0x4c]         ; 00552d52
    MOV EAX,[0x02ddf550]                ; 00552d55 | g_DirectDrawObject
    PUSH EAX                            ; 00552d5a
    MOV EDX,dword ptr [EAX]             ; 00552d5b
    CALL dword ptr [EDX + 0x8]          ; 00552d5d
    XOR EAX,EAX                         ; 00552d60
    MOV [0x02ddf550],EAX                ; 00552d62 | g_DirectDrawObject
    POP EBP                             ; 00552d67
    POP ESI                             ; 00552d68
    POP EBX                             ; 00552d69
    RET                                 ; 00552d6a

