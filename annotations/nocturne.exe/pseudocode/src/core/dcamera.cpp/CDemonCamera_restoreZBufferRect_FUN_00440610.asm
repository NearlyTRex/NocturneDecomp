; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(CDemonCamera *this_ptr,CRect *rect_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710 at 004409a9
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   uint*[1200] g_ZBufferScanlineArray
;   int g_UseExternalRenderer
;
; Called Functions:
;   core_dstrender.cpp_memcpyMMX_FUN_00465341
;   engine_special.cpp_restoreZBuffer_FUN_00532c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440610
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
    PUSH ESI                            ; 00440611
    PUSH EDI                            ; 00440612
    PUSH EBP                            ; 00440613
    SUB ESP,0x4                         ; 00440614
    MOV EDI,dword ptr [ESP + 0x18]      ; 00440617
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044061b
    MOV EDX,dword ptr [EDI + 0x11d4]    ; 0044061f
    CMP EDX,dword ptr [ESI + 0x4]       ; 00440625
    JGE 0x004406e0                      ; 00440628
        ;   XREF to: 004406e0 (CONDITIONAL_JUMP)  ; LAB_004406e0
    MOV ECX,dword ptr [EDI + 0x11d8]    ; 0044062e
    CMP ECX,dword ptr [ESI + 0xc]       ; 00440634
    JGE 0x004406e0                      ; 00440637
        ;   XREF to: 004406e0 (CONDITIONAL_JUMP)  ; LAB_004406e0
    MOV EBX,dword ptr [EDI + 0x11dc]    ; 0044063d
    CMP EBX,dword ptr [ESI]             ; 00440643
    JLE 0x004406e0                      ; 00440645
        ;   XREF to: 004406e0 (CONDITIONAL_JUMP)  ; LAB_004406e0
    MOV EBP,dword ptr [EDI + 0x11e0]    ; 0044064b
    CMP EBP,dword ptr [ESI + 0x8]       ; 00440651
    JLE 0x004406e0                      ; 00440654
        ;   XREF to: 004406e0 (CONDITIONAL_JUMP)  ; LAB_004406e0
    CMP dword ptr [0x01c02594],0x0      ; 0044065a | g_UseExternalRenderer
    JNZ 0x004406e8                      ; 00440661
        ;   XREF to: 004406e8 (CONDITIONAL_JUMP)  ; LAB_004406e8
    MOV EDX,dword ptr [ESI + 0xc]       ; 00440667
    MOV EBP,dword ptr [ESI + 0x8]       ; 0044066a
    CMP EBP,EDX                         ; 0044066d
    JG 0x004406e0                       ; 0044066f
        ;   XREF to: 004406e0 (CONDITIONAL_JUMP)  ; LAB_004406e0
    LEA EAX,[EBP*0x4 + 0x0]             ; 00440675
    MOV dword ptr [ESP],EAX             ; 0044067c
    MOV ECX,dword ptr [ESI]             ; 0044067f
        ;   Label: LAB_0044067f
    MOV EAX,dword ptr [ESP]             ; 00440681
    SHL ECX,0x2                         ; 00440684
    MOV EAX,dword ptr [EAX + 0x1bd4260] ; 00440687 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EDI + 0x148]     ; 0044068d
    ADD ECX,EAX                         ; 00440693
    MOV EAX,EBP                         ; 00440695
    MOV EDX,dword ptr [EDI + 0x13c]     ; 00440697
    SUB EAX,EBX                         ; 0044069d
    IMUL EAX,EDX                        ; 0044069f
    MOV EBX,dword ptr [ESI]             ; 004406a2
    MOV EDX,dword ptr [EDI + 0x144]     ; 004406a4
    ADD EAX,EBX                         ; 004406aa
    SUB EAX,EDX                         ; 004406ac
    SHL EAX,0x2                         ; 004406ae
    MOV EDX,dword ptr [EDI + 0x15c]     ; 004406b1
    ADD EDX,EAX                         ; 004406b7
    MOV EAX,dword ptr [ESI + 0x4]       ; 004406b9
    SUB EAX,EBX                         ; 004406bc
    SHL EAX,0x2                         ; 004406be
    ADD EAX,0x4                         ; 004406c1
    PUSH EAX                            ; 004406c4
    PUSH EDX                            ; 004406c5
    PUSH ECX                            ; 004406c6
    CALL core_dstrender.cpp_memcpyMMX_FUN_00465341 ; 004406c7
        ;   XREF to: 00465341 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00465341(void * dest, void * src, int byte_count)
    ADD ESP,0xc                         ; 004406cc
    MOV EAX,dword ptr [ESP]             ; 004406cf
    INC EBP                             ; 004406d2
    ADD EAX,0x4                         ; 004406d3
    MOV EDX,dword ptr [ESI + 0xc]       ; 004406d6
    MOV dword ptr [ESP],EAX             ; 004406d9
    CMP EBP,EDX                         ; 004406dc
    JLE 0x0044067f                      ; 004406de
        ;   XREF to: 0044067f (CONDITIONAL_JUMP)  ; LAB_0044067f
    ADD ESP,0x4                         ; 004406e0
        ;   Label: LAB_004406e0
    POP EBP                             ; 004406e3
    POP EDI                             ; 004406e4
    POP ESI                             ; 004406e5
    POP EBX                             ; 004406e6
    RET                                 ; 004406e7
    MOV EAX,[0x005b7620]                ; 004406e8 | g_WindowHeight
        ;   Label: LAB_004406e8
    DEC EAX                             ; 004406ed
    PUSH EAX                            ; 004406ee
    MOV EAX,[0x005b761c]                ; 004406ef | g_WindowWidth
    DEC EAX                             ; 004406f4
    PUSH EAX                            ; 004406f5
    PUSH 0x0                            ; 004406f6
    PUSH 0x0                            ; 004406f8
    PUSH 0x0                            ; 004406fa
    CALL engine_special.cpp_restoreZBuffer_FUN_00532c90 ; 004406fc
        ;   XREF to: 00532c90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreZBuffer_FUN_00532c90(int left, int top, int mode, int right, ...)
    ADD ESP,0x14                        ; 00440701
    ADD ESP,0x4                         ; 00440704
    POP EBP                             ; 00440707
    POP EDI                             ; 00440708
    POP ESI                             ; 00440709
    POP EBX                             ; 0044070a
    RET                                 ; 0044070b

