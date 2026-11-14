; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210(CDemonCamera *this_ptr,CRect *rect_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0 at 0044d57d
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;   undefined4 DAT_01c50948
;
; Called Functions:
;   core_dstrendr.cpp_memcpyMMX_FUN_004886f1
;   engine_special.cpp_restoreZBuffer_FUN_00582aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d210
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210
    PUSH ESI                            ; 0044d211
    PUSH EDI                            ; 0044d212
    PUSH EBP                            ; 0044d213
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044d214
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d218
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d21c
    CMP EAX,dword ptr [EDX + 0x11d4]    ; 0044d21f
    JLE 0x0044d2c0                      ; 0044d225
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    MOV EBX,dword ptr [EDX + 0x11d8]    ; 0044d22b
    CMP EBX,dword ptr [ESI + 0xc]       ; 0044d231
    JGE 0x0044d2c0                      ; 0044d234
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    MOV EDI,dword ptr [EDX + 0x11dc]    ; 0044d23a
    CMP EDI,dword ptr [ESI]             ; 0044d240
    JLE 0x0044d2c0                      ; 0044d242
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    MOV EBP,dword ptr [EDX + 0x11e0]    ; 0044d248
    CMP EBP,dword ptr [ESI + 0x8]       ; 0044d24e
    JLE 0x0044d2c0                      ; 0044d251
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    CMP dword ptr [0x01c50948],0x0      ; 0044d257 | DAT_01c50948
    JNZ 0x0044d2c5                      ; 0044d25e
        ;   XREF to: 0044d2c5 (CONDITIONAL_JUMP)  ; LAB_0044d2c5
    MOV EDX,dword ptr [ESI + 0xc]       ; 0044d260
    MOV EDI,dword ptr [ESI + 0x8]       ; 0044d263
    CMP EDI,EDX                         ; 0044d266
    JG 0x0044d2c0                       ; 0044d268
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    LEA EBP,[EDI*0x4 + 0x0]             ; 0044d26a
    MOV ECX,dword ptr [ESI]             ; 0044d271
        ;   Label: LAB_0044d271
    MOV EAX,dword ptr [EBP + 0x1c4480c] ; 0044d273 | DAT_01c4480c | DAT_01c44810
    SHL ECX,0x2                         ; 0044d279
    ADD ECX,EAX                         ; 0044d27c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d27e
    MOV EAX,dword ptr [EAX + 0x144]     ; 0044d282
    IMUL EAX,EDI                        ; 0044d288
    MOV EBX,dword ptr [ESI]             ; 0044d28b
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d28d
    ADD EAX,EBX                         ; 0044d291
    MOV EDX,dword ptr [EDX + 0x15c]     ; 0044d293
    SHL EAX,0x2                         ; 0044d299
    ADD EDX,EAX                         ; 0044d29c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d29e
    SUB EAX,EBX                         ; 0044d2a1
    SHL EAX,0x2                         ; 0044d2a3
    ADD EAX,0x4                         ; 0044d2a6
    PUSH EAX                            ; 0044d2a9
    PUSH EDX                            ; 0044d2aa
    PUSH ECX                            ; 0044d2ab
    ADD EBP,0x4                         ; 0044d2ac
    INC EDI                             ; 0044d2af
    CALL core_dstrendr.cpp_memcpyMMX_FUN_004886f1 ; 0044d2b0
        ;   XREF to: 004886f1 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_004886f1(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 0044d2b5
    ADD ESP,0xc                         ; 0044d2b8
    CMP EDI,EAX                         ; 0044d2bb
    JLE 0x0044d271                      ; 0044d2bd
        ;   XREF to: 0044d271 (CONDITIONAL_JUMP)  ; LAB_0044d271
    NOP                                 ; 0044d2bf
    POP EBP                             ; 0044d2c0
        ;   Label: LAB_0044d2c0
    POP EDI                             ; 0044d2c1
    POP ESI                             ; 0044d2c2
    POP EBX                             ; 0044d2c3
    RET                                 ; 0044d2c4
    MOV EAX,[0x0061b49c]                ; 0044d2c5 | DAT_0061b49c
        ;   Label: LAB_0044d2c5
    DEC EAX                             ; 0044d2ca
    PUSH EAX                            ; 0044d2cb
    MOV EAX,[0x0061b498]                ; 0044d2cc | DAT_0061b498
    DEC EAX                             ; 0044d2d1
    PUSH EAX                            ; 0044d2d2
    PUSH 0x0                            ; 0044d2d3
    PUSH 0x0                            ; 0044d2d5
    PUSH 0x0                            ; 0044d2d7
    CALL engine_special.cpp_restoreZBuffer_FUN_00582aa0 ; 0044d2d9
        ;   XREF to: 00582aa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreZBuffer_FUN_00582aa0(int slot, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 0044d2de
    POP EBP                             ; 0044d2e1
    POP EDI                             ; 0044d2e2
    POP ESI                             ; 0044d2e3
    POP EBX                             ; 0044d2e4
    RET                                 ; 0044d2e5

