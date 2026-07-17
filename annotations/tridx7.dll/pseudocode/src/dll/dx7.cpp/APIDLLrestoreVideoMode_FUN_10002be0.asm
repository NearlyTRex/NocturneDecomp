; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLrestoreVideoMode_FUN_10002be0(void)
;
;
; Referenced Globals:
;   IDirectDraw* g_DirectDraw = 00000000
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   int g_FrameLocked = 0x0
;   TerminatedCString s_Cannot_unlock_back_buffe_10016a14
;   HWND g_WindowHandle = 00000000
;   void* PTR_ShowCursor_10242294 = 002422f0
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;   dll_dx7.cpp_FUN_10002370
;   dll_dx7.cpp_FUN_10002c50
;   ShowCursor
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f8],0x0      ; 10002be0 | g_FrameLocked
        ;   Label: dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0
    PUSH ESI                            ; 10002be7
    JZ 0x10002c00                       ; 10002be8
        ;   XREF to: 10002c00 (CONDITIONAL_JUMP)  ; LAB_10002c00
    CALL dll_dx7.cpp_FUN_10002c50       ; 10002bea
        ;   XREF to: 10002c50 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002c50()
    TEST EAX,EAX                        ; 10002bef
    JNZ 0x10002c00                      ; 10002bf1
        ;   XREF to: 10002c00 (CONDITIONAL_JUMP)  ; LAB_10002c00
    PUSH 0x10016a14                     ; 10002bf3 | = "Cannot unlock back buffer"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002bf8
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,[0x10014184]                ; 10002c00 | g_DirectDraw
        ;   Label: LAB_10002c00
    PUSH EAX                            ; 10002c05
    MOV ESI,dword ptr [EAX]             ; 10002c06
    CALL dword ptr [ESI + 0x28]         ; 10002c08
    MOV ECX,dword ptr [0x10014188]      ; 10002c0b | g_DirectDraw4
    PUSH ECX                            ; 10002c11
    MOV EAX,dword ptr [ECX]             ; 10002c12
    CALL dword ptr [EAX + 0x4c]         ; 10002c14
    PUSH 0x8                            ; 10002c17
    MOV ECX,dword ptr [0x10138fb8]      ; 10002c19 | g_WindowHandle
    PUSH ECX                            ; 10002c1f
    MOV EDX,dword ptr [0x10014188]      ; 10002c20 | g_DirectDraw4
    PUSH EDX                            ; 10002c26
    MOV EAX,dword ptr [EDX]             ; 10002c27
    CALL dword ptr [EAX + 0x50]         ; 10002c29
    CALL dll_dx7.cpp_FUN_10002370       ; 10002c2c
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002370()
    MOV ESI,dword ptr [0x10242294]      ; 10002c31 | PTR_ShowCursor_10242294
    PUSH 0x1                            ; 10002c37
        ;   Label: LAB_10002c37
    CALL ESI                            ; 10002c39 | int ShowCursor(BOOL bShow)
    CMP EAX,0x1                         ; 10002c3b
    JL 0x10002c37                       ; 10002c3e
        ;   XREF to: 10002c37 (CONDITIONAL_JUMP)  ; LAB_10002c37
    MOV EAX,0x1                         ; 10002c40
    POP ESI                             ; 10002c45
    RET                                 ; 10002c46

