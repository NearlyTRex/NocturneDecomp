; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044a210(CDemonLight *this_ptr,CRect *source_rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   source_rect
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520 at 0044a757
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf2df
;   TerminatedCString s_CDemonLight_blitZBuffer_005cf2f2
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dstrendr.cpp_memcpyMMX_FUN_00470201
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a210
        ;   Label: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044a210
    PUSH ESI                            ; 0044a211
    PUSH EDI                            ; 0044a212
    PUSH EBP                            ; 0044a213
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044a214
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044a218
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0044a21c
    JZ 0x0044a2a5                       ; 0044a223
        ;   XREF to: 0044a2a5 (CONDITIONAL_JUMP)  ; LAB_0044a2a5
    MOV EDI,dword ptr [EBP + 0x11d4]    ; 0044a229
        ;   Label: LAB_0044a229
    CMP EDI,dword ptr [ESI + 0x4]       ; 0044a22f
    JGE 0x0044a2a0                      ; 0044a232
        ;   XREF to: 0044a2a0 (CONDITIONAL_JUMP)  ; LAB_0044a2a0
    MOV EDX,dword ptr [EBP + 0x11d8]    ; 0044a238
    CMP EDX,dword ptr [ESI + 0xc]       ; 0044a23e
    JGE 0x0044a2a0                      ; 0044a241
        ;   XREF to: 0044a2a0 (CONDITIONAL_JUMP)  ; LAB_0044a2a0
    MOV ECX,dword ptr [EBP + 0x11dc]    ; 0044a243
    CMP ECX,dword ptr [ESI]             ; 0044a249
    JLE 0x0044a2a0                      ; 0044a24b
        ;   XREF to: 0044a2a0 (CONDITIONAL_JUMP)  ; LAB_0044a2a0
    MOV EBX,dword ptr [EBP + 0x11e0]    ; 0044a24d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a253
    CMP EAX,EBX                         ; 0044a256
    JGE 0x0044a2a0                      ; 0044a258
        ;   XREF to: 0044a2a0 (CONDITIONAL_JUMP)  ; LAB_0044a2a0
    MOV EDI,EAX                         ; 0044a25a
    CMP EDI,dword ptr [ESI + 0xc]       ; 0044a25c
    JG 0x0044a2a0                       ; 0044a25f
        ;   XREF to: 0044a2a0 (CONDITIONAL_JUMP)  ; LAB_0044a2a0
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0044a261
        ;   Label: LAB_0044a261
    IMUL EAX,EDI                        ; 0044a267
    ADD EAX,dword ptr [ESI]             ; 0044a26a
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0044a26c
    ADD EAX,EAX                         ; 0044a272
    LEA ECX,[EDX + EAX*0x1]             ; 0044a274
    MOV EDX,dword ptr [EBP + 0x2f9c]    ; 0044a277
    MOV EBX,dword ptr [ESI]             ; 0044a27d
    ADD EDX,EAX                         ; 0044a27f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a281
    SUB EAX,EBX                         ; 0044a284
    ADD EAX,EAX                         ; 0044a286
    ADD EAX,0x2                         ; 0044a288
    PUSH EAX                            ; 0044a28b
    PUSH EDX                            ; 0044a28c
    PUSH ECX                            ; 0044a28d
    INC EDI                             ; 0044a28e
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00470201 ; 0044a28f
        ;   XREF to: 00470201 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00470201(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 0044a294
    ADD ESP,0xc                         ; 0044a297
    CMP EDI,EAX                         ; 0044a29a
    JLE 0x0044a261                      ; 0044a29c
        ;   XREF to: 0044a261 (CONDITIONAL_JUMP)  ; LAB_0044a261
    MOV EAX,EAX                         ; 0044a29e
    POP EBP                             ; 0044a2a0
        ;   Label: LAB_0044a2a0
    POP EDI                             ; 0044a2a1
    POP ESI                             ; 0044a2a2
    POP EBX                             ; 0044a2a3
    RET                                 ; 0044a2a4
    MOV ECX,0x5cf2df                    ; 0044a2a5 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044a2a5
    MOV EBX,0x148                       ; 0044a2aa
    PUSH 0x5cf2f2                       ; 0044a2af | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0044a2b4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0044a2ba | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a2c0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a2c5
    JMP 0x0044a229                      ; 0044a2c8
        ;   XREF to: 0044a229 (UNCONDITIONAL_JUMP)  ; LAB_0044a229

