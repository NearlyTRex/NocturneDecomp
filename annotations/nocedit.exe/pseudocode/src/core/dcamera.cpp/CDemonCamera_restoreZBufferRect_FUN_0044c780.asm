; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera *this_ptr,CRect *rect_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 at 0044caed
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   core_dstrender.cpp_memcpyMMX_FUN_00492001
;   wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c780
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
    PUSH ESI                            ; 0044c781
    PUSH EDI                            ; 0044c782
    PUSH EBP                            ; 0044c783
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044c784
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044c788
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044c78c
    CMP EAX,dword ptr [EDX + 0x11d4]    ; 0044c78f
    JLE 0x0044c830                      ; 0044c795
        ;   XREF to: 0044c830 (CONDITIONAL_JUMP)  ; LAB_0044c830
    MOV EBX,dword ptr [EDX + 0x11d8]    ; 0044c79b
    CMP EBX,dword ptr [ESI + 0xc]       ; 0044c7a1
    JGE 0x0044c830                      ; 0044c7a4
        ;   XREF to: 0044c830 (CONDITIONAL_JUMP)  ; LAB_0044c830
    MOV EDI,dword ptr [EDX + 0x11dc]    ; 0044c7aa
    CMP EDI,dword ptr [ESI]             ; 0044c7b0
    JLE 0x0044c830                      ; 0044c7b2
        ;   XREF to: 0044c830 (CONDITIONAL_JUMP)  ; LAB_0044c830
    MOV EBP,dword ptr [EDX + 0x11e0]    ; 0044c7b8
    CMP EBP,dword ptr [ESI + 0x8]       ; 0044c7be
    JLE 0x0044c830                      ; 0044c7c1
        ;   XREF to: 0044c830 (CONDITIONAL_JUMP)  ; LAB_0044c830
    CMP dword ptr [0x02d03e94],0x0      ; 0044c7c7 | g_UseExternalRenderer
    JNZ 0x0044c835                      ; 0044c7ce
        ;   XREF to: 0044c835 (CONDITIONAL_JUMP)  ; LAB_0044c835
    MOV EDX,dword ptr [ESI + 0xc]       ; 0044c7d0
    MOV EDI,dword ptr [ESI + 0x8]       ; 0044c7d3
    CMP EDI,EDX                         ; 0044c7d6
    JG 0x0044c830                       ; 0044c7d8
        ;   XREF to: 0044c830 (CONDITIONAL_JUMP)  ; LAB_0044c830
    LEA EBP,[EDI*0x4 + 0x0]             ; 0044c7da
    MOV ECX,dword ptr [ESI]             ; 0044c7e1
        ;   Label: LAB_0044c7e1
    MOV EAX,dword ptr [EBP + 0x2cf7d5c] ; 0044c7e3 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    SHL ECX,0x2                         ; 0044c7e9
    ADD ECX,EAX                         ; 0044c7ec
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044c7ee
    MOV EAX,dword ptr [EAX + 0x144]     ; 0044c7f2
    IMUL EAX,EDI                        ; 0044c7f8
    MOV EBX,dword ptr [ESI]             ; 0044c7fb
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044c7fd
    ADD EAX,EBX                         ; 0044c801
    MOV EDX,dword ptr [EDX + 0x15c]     ; 0044c803
    SHL EAX,0x2                         ; 0044c809
    ADD EDX,EAX                         ; 0044c80c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044c80e
    SUB EAX,EBX                         ; 0044c811
    SHL EAX,0x2                         ; 0044c813
    ADD EAX,0x4                         ; 0044c816
    PUSH EAX                            ; 0044c819
    PUSH EDX                            ; 0044c81a
    PUSH ECX                            ; 0044c81b
    ADD EBP,0x4                         ; 0044c81c
    INC EDI                             ; 0044c81f
    CALL core_dstrender.cpp_memcpyMMX_FUN_00492001 ; 0044c820
        ;   XREF to: 00492001 (UNCONDITIONAL_CALL)  ; void * core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 0044c825
    ADD ESP,0xc                         ; 0044c828
    CMP EDI,EAX                         ; 0044c82b
    JLE 0x0044c7e1                      ; 0044c82d
        ;   XREF to: 0044c7e1 (CONDITIONAL_JUMP)  ; LAB_0044c7e1
    NOP                                 ; 0044c82f
    POP EBP                             ; 0044c830
        ;   Label: LAB_0044c830
    POP EDI                             ; 0044c831
    POP ESI                             ; 0044c832
    POP EBX                             ; 0044c833
    RET                                 ; 0044c834
    MOV EAX,[0x00679398]                ; 0044c835 | g_WindowHeight
        ;   Label: LAB_0044c835
    DEC EAX                             ; 0044c83a
    PUSH EAX                            ; 0044c83b
    MOV EAX,[0x00679394]                ; 0044c83c | g_WindowWidth
    DEC EAX                             ; 0044c841
    PUSH EAX                            ; 0044c842
    PUSH 0x0                            ; 0044c843
    PUSH 0x0                            ; 0044c845
    PUSH 0x0                            ; 0044c847
    CALL wincore_windll.cpp_restoreZBuffer_FUN_005b7d20 ; 0044c849
        ;   XREF to: 005b7d20 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_restoreZBuffer_FUN_005b7d20(int left, int top, int mode, int right, ...)
    ADD ESP,0x14                        ; 0044c84e
    POP EBP                             ; 0044c851
    POP EDI                             ; 0044c852
    POP ESI                             ; 0044c853
    POP EBX                             ; 0044c854
    RET                                 ; 0044c855

