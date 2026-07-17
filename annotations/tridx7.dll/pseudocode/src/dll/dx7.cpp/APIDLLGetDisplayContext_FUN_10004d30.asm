; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_APIDLLGetDisplayContext_FUN_10004d30(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   IDirectDrawSurface* g_BackBufferSurface = 00000000
;   int g_BackBufferLocked = 0x0
;   undefined4 DAT_10014230
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10004d30
        ;   Label: dll_dx7.cpp_APIDLLGetDisplayContext_FUN_10004d30
    CMP dword ptr [0x10014180],0x0      ; 10004d33 | g_BackBufferSurface
    MOV dword ptr [ESP],0x0             ; 10004d3a
    PUSH ESI                            ; 10004d42
    JZ 0x10004d8f                       ; 10004d43
        ;   XREF to: 10004d8f (CONDITIONAL_JUMP)  ; LAB_10004d8f
    CMP dword ptr [0x100141f4],0x0      ; 10004d45 | g_BackBufferLocked
    JZ 0x10004d72                       ; 10004d4c
        ;   XREF to: 10004d72 (CONDITIONAL_JUMP)  ; LAB_10004d72
    PUSH 0x0                            ; 10004d4e
    MOV EAX,[0x10014180]                ; 10004d50 | g_BackBufferSurface
    PUSH EAX                            ; 10004d55
    MOV ESI,dword ptr [EAX]             ; 10004d56
    CALL dword ptr [ESI + 0x80]         ; 10004d58
    MOV dword ptr [0x100141f4],0x0      ; 10004d5e | g_BackBufferLocked
    MOV dword ptr [0x10014230],0x1      ; 10004d68 | DAT_10014230
    LEA EAX,[ESP + 0x4]                 ; 10004d72
        ;   Label: LAB_10004d72
    MOV ECX,dword ptr [0x10014180]      ; 10004d76 | g_BackBufferSurface
    PUSH EAX                            ; 10004d7c
    PUSH ECX                            ; 10004d7d
    MOV EAX,dword ptr [ECX]             ; 10004d7e
    CALL dword ptr [EAX + 0x44]         ; 10004d80
    TEST EAX,EAX                        ; 10004d83
    JZ 0x10004d8f                       ; 10004d85
        ;   XREF to: 10004d8f (CONDITIONAL_JUMP)  ; LAB_10004d8f
    MOV dword ptr [ESP + 0x4],0x0       ; 10004d87
    MOV ECX,dword ptr [ESP + 0x4]       ; 10004d8f
        ;   Label: LAB_10004d8f
    MOV EAX,dword ptr [ESP + 0xc]       ; 10004d93
    POP ESI                             ; 10004d97
    MOV dword ptr [EAX],ECX             ; 10004d98
    ADD ESP,0x4                         ; 10004d9a
    RET                                 ; 10004d9d

