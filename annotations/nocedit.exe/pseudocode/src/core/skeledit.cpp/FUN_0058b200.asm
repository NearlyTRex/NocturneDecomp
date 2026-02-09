; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_skeledit_cpp_FUN_0058b200(void)
;
;
; XREF[2]:
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 00592f90
;   core_skeledit.cpp_FUN_0058c190 at 0058c274
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 0058b200
        ;   Label: core_skeledit.cpp_FUN_0058b200
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058b205
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058b20a
    PUSH ESI                            ; 0058b20b
    PUSH EDI                            ; 0058b20c
    PUSH EBP                            ; 0058b20d
    MOV ESI,dword ptr [ESP + 0x14]      ; 0058b20e
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058b212
    MOV ECX,dword ptr [EDX]             ; 0058b216
    MOV EAX,dword ptr [ESI]             ; 0058b218
    CMP EAX,ECX                         ; 0058b21a
    JNZ 0x0058b24d                      ; 0058b21c
        ;   XREF to: 0058b24d (CONDITIONAL_JUMP)  ; LAB_0058b24d
    MOV EBX,dword ptr [ESI]             ; 0058b21e
    XOR EAX,ECX                         ; 0058b220
    TEST EBX,EBX                        ; 0058b222
    JLE 0x0058b243                      ; 0058b224
        ;   XREF to: 0058b243 (CONDITIONAL_JUMP)  ; LAB_0058b243
    MOV ECX,ESI                         ; 0058b226
    MOV EBP,dword ptr [EDX + 0x24]      ; 0058b228
        ;   Label: LAB_0058b228
    CMP EBP,dword ptr [ECX + 0x24]      ; 0058b22b
    JNZ 0x0058b24d                      ; 0058b22e
        ;   XREF to: 0058b24d (CONDITIONAL_JUMP)  ; LAB_0058b24d
    ADD EDX,0x84                        ; 0058b230
    INC EAX                             ; 0058b236
    MOV EDI,dword ptr [ESI]             ; 0058b237
    ADD ECX,0x84                        ; 0058b239
    CMP EAX,EDI                         ; 0058b23f
    JL 0x0058b228                       ; 0058b241
        ;   XREF to: 0058b228 (CONDITIONAL_JUMP)  ; LAB_0058b228
    MOV EAX,0x1                         ; 0058b243
        ;   Label: LAB_0058b243
    POP EBP                             ; 0058b248
    POP EDI                             ; 0058b249
    POP ESI                             ; 0058b24a
    POP EBX                             ; 0058b24b
    RET                                 ; 0058b24c
    XOR EAX,EAX                         ; 0058b24d
        ;   Label: LAB_0058b24d
    POP EBP                             ; 0058b24f
    POP EDI                             ; 0058b250
    POP ESI                             ; 0058b251
    POP EBX                             ; 0058b252
    RET                                 ; 0058b253

