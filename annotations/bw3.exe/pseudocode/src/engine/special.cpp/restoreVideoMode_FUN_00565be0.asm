; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_restoreVideoMode_FUN_00565be0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0 at 0057a308
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_0057ab20 at 0057ab49
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   void* g_PTR_02cf5ff8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565be0
        ;   Label: engine_special.cpp_restoreVideoMode_FUN_00565be0
    CMP dword ptr [0x01c6cee8],0x0      ; 00565be1 | g_INT_01c6cee8
    JZ 0x00565bfc                       ; 00565be8
        ;   XREF to: 00565bfc (CONDITIONAL_JUMP)  ; LAB_00565bfc
    XOR ECX,ECX                         ; 00565bea
    MOV EBX,dword ptr [0x02cf5ff8]      ; 00565bec | g_PTR_02cf5ff8
    MOV dword ptr [0x01c6cee8],ECX      ; 00565bf2 | g_INT_01c6cee8
    TEST EBX,EBX                        ; 00565bf8
    JNZ 0x00565c00                      ; 00565bfa
        ;   XREF to: 00565c00 (CONDITIONAL_JUMP)  ; LAB_00565c00
    XOR EAX,EAX                         ; 00565bfc
        ;   Label: LAB_00565bfc
    POP EBX                             ; 00565bfe
    RET                                 ; 00565bff
    CALL dword ptr [0x02cf5ff8]         ; 00565c00 | g_PTR_02cf5ff8
        ;   Label: LAB_00565c00
    POP EBX                             ; 00565c06
    RET                                 ; 00565c07

