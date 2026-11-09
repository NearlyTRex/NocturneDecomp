; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00462a10(CDemonLight *this_ptr,CRect *source_rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   source_rect
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 at 00462f57
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d8ffc
;   TerminatedCString s_CDemonLight_blitZBuffer_005d900f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dstrendr.cpp_memcpyMMX_FUN_004886f1
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462a10
        ;   Label: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00462a10
    PUSH ESI                            ; 00462a11
    PUSH EDI                            ; 00462a12
    PUSH EBP                            ; 00462a13
    MOV EBP,dword ptr [ESP + 0x14]      ; 00462a14
    MOV ESI,dword ptr [ESP + 0x18]      ; 00462a18
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 00462a1c
    JZ 0x00462aa5                       ; 00462a23
        ;   XREF to: 00462aa5 (CONDITIONAL_JUMP)  ; LAB_00462aa5
    MOV EDI,dword ptr [EBP + 0x11d4]    ; 00462a29
        ;   Label: LAB_00462a29
    CMP EDI,dword ptr [ESI + 0x4]       ; 00462a2f
    JGE 0x00462aa0                      ; 00462a32
        ;   XREF to: 00462aa0 (CONDITIONAL_JUMP)  ; LAB_00462aa0
    MOV EDX,dword ptr [EBP + 0x11d8]    ; 00462a38
    CMP EDX,dword ptr [ESI + 0xc]       ; 00462a3e
    JGE 0x00462aa0                      ; 00462a41
        ;   XREF to: 00462aa0 (CONDITIONAL_JUMP)  ; LAB_00462aa0
    MOV ECX,dword ptr [EBP + 0x11dc]    ; 00462a43
    CMP ECX,dword ptr [ESI]             ; 00462a49
    JLE 0x00462aa0                      ; 00462a4b
        ;   XREF to: 00462aa0 (CONDITIONAL_JUMP)  ; LAB_00462aa0
    MOV EBX,dword ptr [EBP + 0x11e0]    ; 00462a4d
    MOV EAX,dword ptr [ESI + 0x8]       ; 00462a53
    CMP EAX,EBX                         ; 00462a56
    JGE 0x00462aa0                      ; 00462a58
        ;   XREF to: 00462aa0 (CONDITIONAL_JUMP)  ; LAB_00462aa0
    MOV EDI,EAX                         ; 00462a5a
    CMP EDI,dword ptr [ESI + 0xc]       ; 00462a5c
    JG 0x00462aa0                       ; 00462a5f
        ;   XREF to: 00462aa0 (CONDITIONAL_JUMP)  ; LAB_00462aa0
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 00462a61
        ;   Label: LAB_00462a61
    IMUL EAX,EDI                        ; 00462a67
    ADD EAX,dword ptr [ESI]             ; 00462a6a
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 00462a6c
    ADD EAX,EAX                         ; 00462a72
    LEA ECX,[EDX + EAX*0x1]             ; 00462a74
    MOV EDX,dword ptr [EBP + 0x2f9c]    ; 00462a77
    MOV EBX,dword ptr [ESI]             ; 00462a7d
    ADD EDX,EAX                         ; 00462a7f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00462a81
    SUB EAX,EBX                         ; 00462a84
    ADD EAX,EAX                         ; 00462a86
    ADD EAX,0x2                         ; 00462a88
    PUSH EAX                            ; 00462a8b
    PUSH EDX                            ; 00462a8c
    PUSH ECX                            ; 00462a8d
    INC EDI                             ; 00462a8e
    CALL core_dstrendr.cpp_memcpyMMX_FUN_004886f1 ; 00462a8f
        ;   XREF to: 004886f1 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_004886f1(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 00462a94
    ADD ESP,0xc                         ; 00462a97
    CMP EDI,EAX                         ; 00462a9a
    JLE 0x00462a61                      ; 00462a9c
        ;   XREF to: 00462a61 (CONDITIONAL_JUMP)  ; LAB_00462a61
    MOV EAX,EAX                         ; 00462a9e
    POP EBP                             ; 00462aa0
        ;   Label: LAB_00462aa0
    POP EDI                             ; 00462aa1
    POP ESI                             ; 00462aa2
    POP EBX                             ; 00462aa3
    RET                                 ; 00462aa4
    MOV ECX,0x5d8ffc                    ; 00462aa5 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00462aa5
    MOV EBX,0x147                       ; 00462aaa
    PUSH 0x5d900f                       ; 00462aaf | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00462ab4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00462aba | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00462ac0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00462ac5
    JMP 0x00462a29                      ; 00462ac8
        ;   XREF to: 00462a29 (UNCONDITIONAL_JUMP)  ; LAB_00462a29

