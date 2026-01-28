; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(int left,int top,int mode,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   mode
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 at 0044cab4
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 at 0044c849
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b7d20
        ;   Label: wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
    CMP dword ptr [0x02d03e94],0x0      ; 005b7d21 | g_UseExternalRenderer
    JNZ 0x005b7d2e                      ; 005b7d28
        ;   XREF to: 005b7d2e (CONDITIONAL_JUMP)  ; LAB_005b7d2e
    XOR EAX,EAX                         ; 005b7d2a
    POP EBP                             ; 005b7d2c
    RET                                 ; 005b7d2d
    PUSH EDI                            ; 005b7d2e
        ;   Label: LAB_005b7d2e
    PUSH ESI                            ; 005b7d2f
    PUSH EBX                            ; 005b7d30
    MOV ECX,dword ptr [ESP + 0x24]      ; 005b7d31
    PUSH ECX                            ; 005b7d35
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b7d36
    PUSH EBX                            ; 005b7d3a
    MOV ESI,dword ptr [ESP + 0x24]      ; 005b7d3b
    PUSH ESI                            ; 005b7d3f
    MOV EDI,dword ptr [ESP + 0x24]      ; 005b7d40
    PUSH EDI                            ; 005b7d44
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b7d45
    PUSH EBP                            ; 005b7d49
    CALL dword ptr [0x03f6b910]         ; 005b7d4a | g_APIDLL_restoreZBuffer
    ADD ESP,0x14                        ; 005b7d50
    POP EBX                             ; 005b7d53
    POP ESI                             ; 005b7d54
    POP EDI                             ; 005b7d55
    POP EBP                             ; 005b7d56
    RET                                 ; 005b7d57

