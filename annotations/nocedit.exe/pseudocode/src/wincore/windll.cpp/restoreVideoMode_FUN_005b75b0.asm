; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005b75b0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0 at 005ed4c8
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50 at 005edc64
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b75b0
        ;   Label: wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
    CMP dword ptr [0x02d03e94],0x0      ; 005b75b1 | g_UseExternalRenderer
    JZ 0x005b75cc                       ; 005b75b8
        ;   XREF to: 005b75cc (CONDITIONAL_JUMP)  ; LAB_005b75cc
    XOR ECX,ECX                         ; 005b75ba
    MOV EBX,dword ptr [0x03f6b8a0]      ; 005b75bc | g_APIDLL_restoreVideoMode
    MOV dword ptr [0x02d03e94],ECX      ; 005b75c2 | g_UseExternalRenderer
    TEST EBX,EBX                        ; 005b75c8
    JNZ 0x005b75d0                      ; 005b75ca
        ;   XREF to: 005b75d0 (CONDITIONAL_JUMP)  ; LAB_005b75d0
    XOR EAX,EAX                         ; 005b75cc
        ;   Label: LAB_005b75cc
    POP EBX                             ; 005b75ce
    RET                                 ; 005b75cf
    CALL dword ptr [0x03f6b8a0]         ; 005b75d0 | g_APIDLL_restoreVideoMode
        ;   Label: LAB_005b75d0
    POP EBX                             ; 005b75d6
    RET                                 ; 005b75d7

