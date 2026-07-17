; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_lockBackBuffer_FUN_10002dc0(void)
;
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLlockFrame_FUN_10002d90 at 10002d9e
;
; Referenced Globals:
;   int g_ScreenHeight = 0x1e0
;   IDirectDrawSurface* g_BackBufferSurface = 00000000
;   int g_BackBufferLocked = 0x0
;   void** g_ScanlinePtrBase = 00000000
;   DDSURFACEDESC2 g_PrimarySurfaceDesc
;   undefined4 g_PrimarySurfaceDesc.dwPitchOrLinearSize
;   undefined4 g_PrimarySurfaceDesc.lpSurface
;
; Called Functions:
;   dll_dx7.cpp_FUN_10002e20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f4],0x0      ; 10002dc0 | g_BackBufferLocked
        ;   Label: dll_dx7.cpp_lockBackBuffer_FUN_10002dc0
    JZ 0x10002dcf                       ; 10002dc7
        ;   XREF to: 10002dcf (CONDITIONAL_JUMP)  ; LAB_10002dcf
    MOV EAX,0x1                         ; 10002dc9
    RET                                 ; 10002dce
    PUSH 0x10226e88                     ; 10002dcf | g_PrimarySurfaceDesc
        ;   Label: LAB_10002dcf
    MOV EAX,[0x10014180]                ; 10002dd4 | g_BackBufferSurface
    PUSH EAX                            ; 10002dd9
    CALL dll_dx7.cpp_FUN_10002e20       ; 10002dda
        ;   XREF to: 10002e20 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_FUN_10002e20(int * param_1, undefined4 * param_2)
    ADD ESP,0x8                         ; 10002ddf
    TEST EAX,EAX                        ; 10002de2
    JNZ 0x10002de9                      ; 10002de4
        ;   XREF to: 10002de9 (CONDITIONAL_JUMP)  ; LAB_10002de9
    XOR EAX,EAX                         ; 10002de6
    RET                                 ; 10002de8
    MOV ECX,dword ptr [0x10226eac]      ; 10002de9 | g_PrimarySurfaceDesc.lpSurface
        ;   Label: LAB_10002de9
    MOV EAX,[0x10014178]                ; 10002def | g_ScreenHeight
    TEST EAX,EAX                        ; 10002df4
    JLE 0x10002e0c                      ; 10002df6
        ;   XREF to: 10002e0c (CONDITIONAL_JUMP)  ; LAB_10002e0c
    MOV EDX,dword ptr [0x10138fb4]      ; 10002df8 | g_ScanlinePtrBase
    MOV dword ptr [EDX],ECX             ; 10002dfe
        ;   Label: LAB_10002dfe
    ADD EDX,0x4                         ; 10002e00
    ADD ECX,dword ptr [0x10226e98]      ; 10002e03 | g_PrimarySurfaceDesc.dwPitchOrLinearSize
    DEC EAX                             ; 10002e09
    JNZ 0x10002dfe                      ; 10002e0a
        ;   XREF to: 10002dfe (CONDITIONAL_JUMP)  ; LAB_10002dfe
    MOV dword ptr [0x100141f4],0x1      ; 10002e0c | g_BackBufferLocked
        ;   Label: LAB_10002e0c
    MOV EAX,0x1                         ; 10002e16
    RET                                 ; 10002e1b

