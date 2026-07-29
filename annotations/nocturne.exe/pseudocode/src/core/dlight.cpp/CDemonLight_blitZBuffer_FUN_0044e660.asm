; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044e660(CDemonLight *this_ptr,CRect *source_rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   source_rect
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 at 0044eba7
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c656
;   TerminatedCString s_CDemonLight_blitZBuffer_0057c669
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dstrender.cpp_memcpyMMX_FUN_00465341
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e660
        ;   Label: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660
    PUSH ESI                            ; 0044e661
    PUSH EDI                            ; 0044e662
    PUSH EBP                            ; 0044e663
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044e664
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044e668
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0044e66c
    JZ 0x0044e6f5                       ; 0044e673
        ;   XREF to: 0044e6f5 (CONDITIONAL_JUMP)  ; LAB_0044e6f5
    MOV EDI,dword ptr [EBP + 0x11d4]    ; 0044e679
        ;   Label: LAB_0044e679
    CMP EDI,dword ptr [ESI + 0x4]       ; 0044e67f
    JGE 0x0044e6f0                      ; 0044e682
        ;   XREF to: 0044e6f0 (CONDITIONAL_JUMP)  ; LAB_0044e6f0
    MOV EDX,dword ptr [EBP + 0x11d8]    ; 0044e688
    CMP EDX,dword ptr [ESI + 0xc]       ; 0044e68e
    JGE 0x0044e6f0                      ; 0044e691
        ;   XREF to: 0044e6f0 (CONDITIONAL_JUMP)  ; LAB_0044e6f0
    MOV ECX,dword ptr [EBP + 0x11dc]    ; 0044e693
    CMP ECX,dword ptr [ESI]             ; 0044e699
    JLE 0x0044e6f0                      ; 0044e69b
        ;   XREF to: 0044e6f0 (CONDITIONAL_JUMP)  ; LAB_0044e6f0
    MOV EBX,dword ptr [EBP + 0x11e0]    ; 0044e69d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e6a3
    CMP EAX,EBX                         ; 0044e6a6
    JGE 0x0044e6f0                      ; 0044e6a8
        ;   XREF to: 0044e6f0 (CONDITIONAL_JUMP)  ; LAB_0044e6f0
    MOV EDI,EAX                         ; 0044e6aa
    CMP EDI,dword ptr [ESI + 0xc]       ; 0044e6ac
    JG 0x0044e6f0                       ; 0044e6af
        ;   XREF to: 0044e6f0 (CONDITIONAL_JUMP)  ; LAB_0044e6f0
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0044e6b1
        ;   Label: LAB_0044e6b1
    IMUL EAX,EDI                        ; 0044e6b7
    ADD EAX,dword ptr [ESI]             ; 0044e6ba
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0044e6bc
    ADD EAX,EAX                         ; 0044e6c2
    LEA ECX,[EDX + EAX*0x1]             ; 0044e6c4
    MOV EDX,dword ptr [EBP + 0x2f9c]    ; 0044e6c7
    MOV EBX,dword ptr [ESI]             ; 0044e6cd
    ADD EDX,EAX                         ; 0044e6cf
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e6d1
    SUB EAX,EBX                         ; 0044e6d4
    ADD EAX,EAX                         ; 0044e6d6
    ADD EAX,0x2                         ; 0044e6d8
    PUSH EAX                            ; 0044e6db
    PUSH EDX                            ; 0044e6dc
    PUSH ECX                            ; 0044e6dd
    INC EDI                             ; 0044e6de
    CALL core_dstrender.cpp_memcpyMMX_FUN_00465341 ; 0044e6df
        ;   XREF to: 00465341 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00465341(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 0044e6e4
    ADD ESP,0xc                         ; 0044e6e7
    CMP EDI,EAX                         ; 0044e6ea
    JLE 0x0044e6b1                      ; 0044e6ec
        ;   XREF to: 0044e6b1 (CONDITIONAL_JUMP)  ; LAB_0044e6b1
    MOV EAX,EAX                         ; 0044e6ee
    POP EBP                             ; 0044e6f0
        ;   Label: LAB_0044e6f0
    POP EDI                             ; 0044e6f1
    POP ESI                             ; 0044e6f2
    POP EBX                             ; 0044e6f3
    RET                                 ; 0044e6f4
    MOV ECX,0x57c656                    ; 0044e6f5 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044e6f5
    MOV EBX,0x147                       ; 0044e6fa
    PUSH 0x57c669                       ; 0044e6ff | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044e704 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044e70a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044e710
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044e715
    JMP 0x0044e679                      ; 0044e718
        ;   XREF to: 0044e679 (UNCONDITIONAL_JUMP)  ; LAB_0044e679

