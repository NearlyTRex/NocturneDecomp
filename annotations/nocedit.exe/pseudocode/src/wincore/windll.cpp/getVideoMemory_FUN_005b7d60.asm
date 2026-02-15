; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_getVideoMemory_FUN_005b7d60(int *total_memory,int *available_memory,int *memory_type)
;
; Parameters:
; int *            Stack[0x4]:4   total_memory
; int *            Stack[0x8]:4   available_memory
; int *            Stack[0xc]:4   memory_type
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00510d24
;
; Referenced Globals:
;   APIDLL_getVideoMemory* g_APIDLL_getVideoMemory
;   int g_ExternalRendererActive
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b978],0x0      ; 005b7d60 | g_ExternalRendererActive
        ;   Label: wincore_windll.cpp_getVideoMemory_FUN_005b7d60
    JNZ 0x005b7d6c                      ; 005b7d67
        ;   XREF to: 005b7d6c (CONDITIONAL_JUMP)  ; LAB_005b7d6c
    XOR EAX,EAX                         ; 005b7d69
    RET                                 ; 005b7d6b
    PUSH ESI                            ; 005b7d6c
        ;   Label: LAB_005b7d6c
    PUSH EBX                            ; 005b7d6d
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b7d6e
    PUSH ECX                            ; 005b7d72
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b7d73
    PUSH EBX                            ; 005b7d77
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b7d78
    PUSH ESI                            ; 005b7d7c
    CALL dword ptr [0x03f6b914]         ; 005b7d7d | g_APIDLL_getVideoMemory
    ADD ESP,0xc                         ; 005b7d83
    POP EBX                             ; 005b7d86
    POP ESI                             ; 005b7d87
    RET                                 ; 005b7d88

