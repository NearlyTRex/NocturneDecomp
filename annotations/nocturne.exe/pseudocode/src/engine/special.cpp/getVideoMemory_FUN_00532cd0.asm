; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_getVideoMemory_FUN_00532cd0(int *total_memory,int *available_memory,int *memory_type)
;
; Parameters:
; int *            Stack[0x4]:4   total_memory
; int *            Stack[0x8]:4   available_memory
; int *            Stack[0xc]:4   memory_type
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0124
;
; Referenced Globals:
;   APIDLL_getVideoMemory* g_APIDLL_getVideoMemory
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e04],0x0      ; 00532cd0 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_getVideoMemory_FUN_00532cd0
    JNZ 0x00532cdc                      ; 00532cd7
        ;   XREF to: 00532cdc (CONDITIONAL_JUMP)  ; LAB_00532cdc
    XOR EAX,EAX                         ; 00532cd9
    RET                                 ; 00532cdb
    PUSH ESI                            ; 00532cdc
        ;   Label: LAB_00532cdc
    PUSH EBX                            ; 00532cdd
    MOV ECX,dword ptr [ESP + 0x14]      ; 00532cde
    PUSH ECX                            ; 00532ce2
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532ce3
    PUSH EBX                            ; 00532ce7
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532ce8
    PUSH ESI                            ; 00532cec
    CALL dword ptr [0x02dc9df0]         ; 00532ced | g_APIDLL_getVideoMemory
    ADD ESP,0xc                         ; 00532cf3
    POP EBX                             ; 00532cf6
    POP ESI                             ; 00532cf7
    RET                                 ; 00532cf8

