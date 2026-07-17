; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLmasterZBuffer_FUN_10004e10(int z_buffer_mode)
;
; Parameters:
; int              Stack[0x4]:4   z_buffer_mode
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int g_ScreenWidth = 0x280
;   int g_ScreenHeight = 0x1e0
;   IDirectDrawSurface* g_ZBufferSurface = 00000000
;   IDirectDrawSurface*[8] g_MasterZBufferSurfaces
;   TerminatedCString s_masterZ_blt_failed_10016b8c
;   uint g_MasterZBufferCount = 0x0
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10004e10
        ;   Label: dll_dx7.cpp_APIDLLmasterZBuffer_FUN_10004e10
    SUB ESP,0x10                        ; 10004e14
    TEST EAX,EAX                        ; 10004e17
    JL 0x10004e82                       ; 10004e19
        ;   XREF to: 10004e82 (CONDITIONAL_JUMP)  ; LAB_10004e82
    CMP EAX,dword ptr [0x10226a48]      ; 10004e1b | g_MasterZBufferCount
    JGE 0x10004e82                      ; 10004e21
        ;   XREF to: 10004e82 (CONDITIONAL_JUMP)  ; LAB_10004e82
    MOV EDX,dword ptr [EAX*0x4 + 0x10014198] ; 10004e23 | g_MasterZBufferSurfaces
    TEST EDX,EDX                        ; 10004e2a
    JNZ 0x10004e34                      ; 10004e2c
        ;   XREF to: 10004e34 (CONDITIONAL_JUMP)  ; LAB_10004e34
    XOR EAX,EAX                         ; 10004e2e
    ADD ESP,0x10                        ; 10004e30
    RET                                 ; 10004e33
    XOR ECX,ECX                         ; 10004e34
        ;   Label: LAB_10004e34
    MOV EAX,[0x10014174]                ; 10004e36 | g_ScreenWidth
    MOV dword ptr [ESP],ECX             ; 10004e3b
    PUSH ECX                            ; 10004e3f
    MOV dword ptr [ESP + 0x8],ECX       ; 10004e40
    PUSH ECX                            ; 10004e44
    LEA ECX,[ESP + 0x8]                 ; 10004e45
    MOV dword ptr [ESP + 0x10],EAX      ; 10004e49
    MOV EAX,[0x10014178]                ; 10004e4d | g_ScreenHeight
    PUSH ECX                            ; 10004e52
    LEA ECX,[ESP + 0xc]                 ; 10004e53
    MOV dword ptr [ESP + 0x18],EAX      ; 10004e57
    MOV EAX,[0x10014190]                ; 10004e5b | g_ZBufferSurface
    PUSH EAX                            ; 10004e60
    PUSH ECX                            ; 10004e61
    PUSH EDX                            ; 10004e62
    MOV EAX,dword ptr [EDX]             ; 10004e63
    CALL dword ptr [EAX + 0x14]         ; 10004e65
    TEST EAX,EAX                        ; 10004e68
    JZ 0x10004e79                       ; 10004e6a
        ;   XREF to: 10004e79 (CONDITIONAL_JUMP)  ; LAB_10004e79
    PUSH 0x10016b8c                     ; 10004e6c | = "masterZ blt failed"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10004e71
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,0x1                         ; 10004e79
        ;   Label: LAB_10004e79
    ADD ESP,0x10                        ; 10004e7e
    RET                                 ; 10004e81
    XOR EAX,EAX                         ; 10004e82
        ;   Label: LAB_10004e82
    ADD ESP,0x10                        ; 10004e84
    RET                                 ; 10004e87

