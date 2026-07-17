; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_unlockBackBuffer_FUN_10002c50(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0 at 10002bea
;   dll_dx7.cpp_APIDLLunlockFrame_FUN_10002e60 at 10002e76
;
; Referenced Globals:
;   int g_ScreenHeight = 0x1e0
;   IDirectDrawSurface* g_BackBufferSurface = 00000000
;   int g_BackBufferLocked = 0x0
;   void** g_ScanlinePtrBase = 00000000
;   void*[1024] g_ScanlinePointers
;   undefined4 g_ScanlinePointers[1]
;
; Called Functions:
;   dll_dx7.cpp_unlockSurface_FUN_10002cb0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f4],0x0      ; 10002c50 | g_BackBufferLocked
        ;   Label: dll_dx7.cpp_unlockBackBuffer_FUN_10002c50
    PUSH ESI                            ; 10002c57
    PUSH EDI                            ; 10002c58
    JNZ 0x10002c63                      ; 10002c59
        ;   XREF to: 10002c63 (CONDITIONAL_JUMP)  ; LAB_10002c63
    MOV EAX,0x1                         ; 10002c5b
    POP EDI                             ; 10002c60
    POP ESI                             ; 10002c61
    RET                                 ; 10002c62
    MOV ECX,dword ptr [0x10014178]      ; 10002c63 | g_ScreenHeight
        ;   Label: LAB_10002c63
    TEST ECX,ECX                        ; 10002c69
    JLE 0x10002c7a                      ; 10002c6b
        ;   XREF to: 10002c7a (CONDITIONAL_JUMP)  ; LAB_10002c7a
    MOV ESI,0x10225848                  ; 10002c6d | g_ScanlinePointers
    MOV EDI,dword ptr [0x10138fb4]      ; 10002c72 | g_ScanlinePtrBase
    MOVSD.REP ES:EDI,ESI                ; 10002c78 | g_ScanlinePointers | g_ScanlinePointers[1]
    MOV EAX,[0x10014180]                ; 10002c7a | g_BackBufferSurface
        ;   Label: LAB_10002c7a
    PUSH EAX                            ; 10002c7f
    CALL dll_dx7.cpp_unlockSurface_FUN_10002cb0 ; 10002c80
        ;   XREF to: 10002cb0 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_unlockSurface_FUN_10002cb0(IDirectDrawSurface * surface)
    ADD ESP,0x4                         ; 10002c85
    TEST EAX,EAX                        ; 10002c88
    JNZ 0x10002c91                      ; 10002c8a
        ;   XREF to: 10002c91 (CONDITIONAL_JUMP)  ; LAB_10002c91
    XOR EAX,EAX                         ; 10002c8c
    POP EDI                             ; 10002c8e
    POP ESI                             ; 10002c8f
    RET                                 ; 10002c90
    MOV EAX,0x1                         ; 10002c91
        ;   Label: LAB_10002c91
    POP EDI                             ; 10002c96
    MOV dword ptr [0x100141f4],0x0      ; 10002c97 | g_BackBufferLocked
    POP ESI                             ; 10002ca1
    RET                                 ; 10002ca2

