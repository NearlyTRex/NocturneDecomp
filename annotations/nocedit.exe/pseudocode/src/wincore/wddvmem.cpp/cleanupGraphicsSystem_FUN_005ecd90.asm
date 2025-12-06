; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90(void)
;
;
; XREF[1]:
;   engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90 at 00401130
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_00657764
;   TerminatedCString s_wincore_wddvmem_cpp_0065777b
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   void* g_SoftwareFrameBuffer
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   wincore_windll.cpp_kill_FUN_005b71e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ecd90
        ;   Label: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90
    PUSH ESI                            ; 005ecd91
    PUSH EBP                            ; 005ecd92
    MOV EDX,dword ptr [0x00688010]      ; 005ecd93 | void * g_BackBuffer
    TEST EDX,EDX                        ; 005ecd99
    JNZ 0x005ece22                      ; 005ecd9b | LAB_005ece22
        ;   XREF to: 005ece22 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f95930]      ; 005ecda1 | void * g_SoftwareFrameBuffer
        ;   Label: LAB_005ecda1
    TEST ESI,ESI                        ; 005ecda7
    JZ 0x005ecdc6                       ; 005ecda9 | LAB_005ecdc6
        ;   XREF to: 005ecdc6 (CONDITIONAL_JUMP)
    PUSH 0x107                          ; 005ecdab
    PUSH 0x65777b                       ; 005ecdb0 | = "..\\wincore\\wddvmem.cpp" | s_wincore_wddvmem_cpp_0065777b = ..\wincore\wddvmem.cpp
    PUSH ESI                            ; 005ecdb5
    XOR EBP,EBP                         ; 005ecdb6
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ecdb8 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ecdbd
    MOV dword ptr [0x0077262c],EBP      ; 005ecdc0 | void * g_SoftwareZBuffer
    CALL wincore_windll.cpp_kill_FUN_005b71e0 ; 005ecdc6 | int wincore_windll.cpp_kill_FUN_005b71e0()
        ;   Label: LAB_005ecdc6
        ;   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f9592c]                ; 005ecdcb | IUnknown * g_DirectDrawUnknown
    TEST EAX,EAX                        ; 005ecdd0
    JZ 0x005ecde2                       ; 005ecdd2 | LAB_005ecde2
        ;   XREF to: 005ecde2 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005ecdd4
    MOV EDX,dword ptr [EAX]             ; 005ecdd5
    CALL dword ptr [EDX + 0x8]          ; 005ecdd7
    XOR EDX,EDX                         ; 005ecdda
    MOV dword ptr [0x03f9592c],EDX      ; 005ecddc | IUnknown * g_DirectDrawUnknown
    MOV ECX,dword ptr [0x03f95928]      ; 005ecde2 | IDirectDrawSurface * g_SoftwareRenderSurface
        ;   Label: LAB_005ecde2
    TEST ECX,ECX                        ; 005ecde8
    JZ 0x005ecdfa                       ; 005ecdea | LAB_005ecdfa
        ;   XREF to: 005ecdfa (CONDITIONAL_JUMP)
    PUSH ECX                            ; 005ecdec
    MOV EDX,dword ptr [ECX]             ; 005ecded
    XOR EBX,EBX                         ; 005ecdef
    CALL dword ptr [EDX + 0x8]          ; 005ecdf1
    MOV dword ptr [0x03f95928],EBX      ; 005ecdf4 | IDirectDrawSurface * g_SoftwareRenderSurface
    MOV ESI,dword ptr [0x03f95924]      ; 005ecdfa | IDirectDrawSurface * g_DirectDrawSurface
        ;   Label: LAB_005ecdfa
    TEST ESI,ESI                        ; 005ece00
    JZ 0x005ece14                       ; 005ece02 | LAB_005ece14
        ;   XREF to: 005ece14 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005ece04
    PUSH ESI                            ; 005ece05
    MOV EDX,dword ptr [ESI]             ; 005ece06
    XOR EDI,EDI                         ; 005ece08
    CALL dword ptr [EDX + 0x8]          ; 005ece0a
    MOV dword ptr [0x03f95924],EDI      ; 005ece0d | IDirectDrawSurface * g_DirectDrawSurface
    POP EDI                             ; 005ece13
    MOV EBP,dword ptr [0x03f95920]      ; 005ece14 | IDirectDraw * g_DirectDrawObject
        ;   Label: LAB_005ece14
    TEST EBP,EBP                        ; 005ece1a
    JNZ 0x005ece42                      ; 005ece1c | LAB_005ece42
        ;   XREF to: 005ece42 (CONDITIONAL_JUMP)
    POP EBP                             ; 005ece1e
    POP ESI                             ; 005ece1f
    POP EBX                             ; 005ece20
    RET                                 ; 005ece21
    PUSH 0xff                           ; 005ece22
        ;   Label: LAB_005ece22
    PUSH 0x657764                       ; 005ece27 | = "..\\wincore\\wddvmem.cpp" | s_wincore_wddvmem_cpp_00657764 = ..\wincore\wddvmem.cpp
    PUSH EDX                            ; 005ece2c
    XOR EBX,EBX                         ; 005ece2d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ece2f | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ece34
    MOV dword ptr [0x00688010],EBX      ; 005ece37 | void * g_BackBuffer
    JMP 0x005ecda1                      ; 005ece3d | LAB_005ecda1
        ;   XREF to: 005ecda1 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 005ece42
        ;   Label: LAB_005ece42
    MOV EDX,dword ptr [EBP]             ; 005ece43
    CALL dword ptr [EDX + 0x4c]         ; 005ece46
    MOV EAX,[0x03f95920]                ; 005ece49 | IDirectDraw * g_DirectDrawObject
    PUSH EAX                            ; 005ece4e
    MOV EDX,dword ptr [EAX]             ; 005ece4f
    CALL dword ptr [EDX + 0x8]          ; 005ece51
    XOR EAX,EAX                         ; 005ece54
    MOV [0x03f95920],EAX                ; 005ece56 | IDirectDraw * g_DirectDrawObject
    POP EBP                             ; 005ece5b
    POP ESI                             ; 005ece5c
    POP EBX                             ; 005ece5d
    RET                                 ; 005ece5e

