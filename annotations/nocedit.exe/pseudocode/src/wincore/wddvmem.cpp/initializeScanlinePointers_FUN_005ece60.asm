; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ece60
        ;   Label: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
    SUB ESP,0x4                         ; 005ece61
    MOV EDX,dword ptr [0x00679398]      ; 005ece64 | g_WindowHeight
    XOR ECX,ECX                         ; 005ece6a
    TEST EDX,EDX                        ; 005ece6c
    JLE 0x005ecedd                      ; 005ece6e
        ;   XREF to: 005ecedd (CONDITIONAL_JUMP)  ; LAB_005ecedd
    PUSH EDI                            ; 005ece70
    PUSH ESI                            ; 005ece71
    PUSH EBX                            ; 005ece72
    MOV EAX,[0x0067939c]                ; 005ece73 | g_BitsPerPixel
    MOV EDX,EAX                         ; 005ece78
    SAR EDX,0x1f                        ; 005ece7a
    SHL EDX,0x3                         ; 005ece7d
    SBB EAX,EDX                         ; 005ece80
    SAR EAX,0x3                         ; 005ece82
    MOV EDI,EAX                         ; 005ece85
    MOV EAX,[0x00679394]                ; 005ece87 | g_WindowWidth
    SHL EAX,0x2                         ; 005ece8c
    MOV EBP,dword ptr [0x00679394]      ; 005ece8f | g_WindowWidth
    MOV dword ptr [ESP + 0xc],EAX       ; 005ece95
    XOR EAX,EAX                         ; 005ece99
    IMUL EDX,EBP,0x0                    ; 005ece9b
    MOV EBX,dword ptr [0x00679394]      ; 005ece9e | g_WindowWidth
        ;   Label: LAB_005ece9e
    IMUL EBX,ECX                        ; 005ecea4
    IMUL EBX,EDI                        ; 005ecea7
    MOV ESI,dword ptr [0x00688010]      ; 005eceaa | g_BackBuffer
    ADD EBX,ESI                         ; 005eceb0
    MOV dword ptr [EAX + 0x2cf6a9c],EBX ; 005eceb2 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [0x0077262c]      ; 005eceb8 | g_SoftwareZBuffer
    ADD EAX,0x4                         ; 005ecebe
    ADD EBX,EDX                         ; 005ecec1
    INC ECX                             ; 005ecec3
    MOV dword ptr [EAX + 0x2cf7d58],EBX ; 005ecec4 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ececa
    MOV ESI,dword ptr [0x00679398]      ; 005ecece | g_WindowHeight
    ADD EDX,EBX                         ; 005eced4
    CMP ECX,ESI                         ; 005eced6
    JL 0x005ece9e                       ; 005eced8
        ;   XREF to: 005ece9e (CONDITIONAL_JUMP)  ; LAB_005ece9e
    POP EBX                             ; 005eceda
    POP ESI                             ; 005ecedb
    POP EDI                             ; 005ecedc
    ADD ESP,0x4                         ; 005ecedd
        ;   Label: LAB_005ecedd
    POP EBP                             ; 005ecee0
    RET                                 ; 005ecee1

