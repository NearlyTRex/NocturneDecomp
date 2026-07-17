; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_APIDLLkill_FUN_10002460(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001a8a
;   dll_dx7.cpp_fatalError_FUN_10002340 at 10002340
;
; Referenced Globals:
;   IDirectDraw* g_DirectDraw = 00000000
;   IDirectDraw4* g_DirectDraw4 = 00000000
;
; Called Functions:
;   dll_dx7.cpp_releaseDirectXResources_FUN_10002370
;
; *****************************************************************************

section .text

    CALL dll_dx7.cpp_releaseDirectXResources_FUN_10002370 ; 10002460
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_releaseDirectXResources_FUN_10002370()
        ;   Label: dll_dx7.cpp_APIDLLkill_FUN_10002460
    CMP dword ptr [0x10014188],0x0      ; 10002465 | g_DirectDraw4
    JZ 0x10002483                       ; 1000246c
        ;   XREF to: 10002483 (CONDITIONAL_JUMP)  ; LAB_10002483
    MOV EAX,[0x10014188]                ; 1000246e | g_DirectDraw4
    PUSH EAX                            ; 10002473
    MOV EAX,dword ptr [EAX]             ; 10002474
    CALL dword ptr [EAX + 0x8]          ; 10002476
    MOV dword ptr [0x10014188],0x0      ; 10002479 | g_DirectDraw4
    CMP dword ptr [0x10014184],0x0      ; 10002483 | g_DirectDraw
        ;   Label: LAB_10002483
    JZ 0x100024a1                       ; 1000248a
        ;   XREF to: 100024a1 (CONDITIONAL_JUMP)  ; LAB_100024a1
    MOV EAX,[0x10014184]                ; 1000248c | g_DirectDraw
    PUSH EAX                            ; 10002491
    MOV EAX,dword ptr [EAX]             ; 10002492
    CALL dword ptr [EAX + 0x8]          ; 10002494
    MOV dword ptr [0x10014184],0x0      ; 10002497 | g_DirectDraw
    MOV EAX,0x1                         ; 100024a1
        ;   Label: LAB_100024a1
    RET                                 ; 100024a6

