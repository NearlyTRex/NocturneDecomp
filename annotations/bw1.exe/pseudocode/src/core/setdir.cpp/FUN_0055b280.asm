; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b280(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0055b220 at 0055b252
;
; Referenced Globals:
;   undefined4 DAT_005f101d
;   undefined4 DAT_005f1020
;   TerminatedCString s_core_setdir_cpp_005f1025
;   TerminatedCString s_Can_t_create_s_005f1038
;   TerminatedCString s_core_setdir_cpp_005f1048
;   TerminatedCString s_Error_writing_s_005f105b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_005030e0
;   FUN_005c0d10
;   FUN_005c1a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b280
        ;   Label: FUN_0055b280
    PUSH ESI                            ; 0055b281
    PUSH EDI                            ; 0055b282
    PUSH EBP                            ; 0055b283
    MOV ESI,dword ptr [ESP + 0x18]      ; 0055b284
    PUSH 0x5f101d                       ; 0055b288 | DAT_005f101d
    PUSH ESI                            ; 0055b28d
    PUSH 0x5f1020                       ; 0055b28e | DAT_005f1020
    CALL FUN_00479180                   ; 0055b293
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0055b298
    MOV EBX,EAX                         ; 0055b29b
    TEST EAX,EAX                        ; 0055b29d
    JNZ 0x0055b2c5                      ; 0055b29f
        ;   XREF to: 0055b2c5 (CONDITIONAL_JUMP)  ; LAB_0055b2c5
    PUSH ESI                            ; 0055b2a1
    MOV EDX,0x5f1025                    ; 0055b2a2 | = "..\\core\\setdir.cpp"
    MOV ECX,0x2b5                       ; 0055b2a7
    PUSH 0x5f1038                       ; 0055b2ac | = "Can't create %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0055b2b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0055b2b7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0055b2bd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0055b2c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055b2c5
        ;   Label: LAB_0055b2c5
    PUSH EBX                            ; 0055b2c9
    MOV EDI,dword ptr [EAX]             ; 0055b2ca
    PUSH EDI                            ; 0055b2cc
    PUSH 0x3000                         ; 0055b2cd
    PUSH 0x20b28f4                      ; 0055b2d2
    CALL FUN_005c1a70                   ; 0055b2d7
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1a70()
    MOV AH,byte ptr [EBX + 0xc]         ; 0055b2dc
    ADD ESP,0x10                        ; 0055b2df
    TEST AH,0x20                        ; 0055b2e2
    JNZ 0x0055b2f5                      ; 0055b2e5
        ;   XREF to: 0055b2f5 (CONDITIONAL_JUMP)  ; LAB_0055b2f5
    PUSH EBX                            ; 0055b2e7
    CALL FUN_005c0d10                   ; 0055b2e8
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0055b2ed
    POP EBP                             ; 0055b2f0
    POP EDI                             ; 0055b2f1
    POP ESI                             ; 0055b2f2
    POP EBX                             ; 0055b2f3
    RET                                 ; 0055b2f4
    PUSH ESI                            ; 0055b2f5
        ;   Label: LAB_0055b2f5
    MOV EBP,0x5f1048                    ; 0055b2f6 | = "..\\core\\setdir.cpp"
    MOV EAX,0x2b7                       ; 0055b2fb
    PUSH 0x5f105b                       ; 0055b300 | = "Error writing %s"
    MOV dword ptr [0x01d1d400],EBP      ; 0055b305 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0055b30b | DAT_01d1d404
    CALL FUN_005030e0                   ; 0055b310
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0055b315
    PUSH EBX                            ; 0055b318
    CALL FUN_005c0d10                   ; 0055b319
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0055b31e
    POP EBP                             ; 0055b321
    POP EDI                             ; 0055b322
    POP ESI                             ; 0055b323
    POP EBX                             ; 0055b324
    RET                                 ; 0055b325

