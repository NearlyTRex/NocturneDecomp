; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f64f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1bc48
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 004f64f0
        ;   Label: core_inv.cpp_FUN_004f64f0
    PUSH 0x2                            ; 004f64f5
    PUSH 0x2                            ; 004f64f7
    PUSH 0x1d1baf4                      ; 004f64f9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004f64fe
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EDX,dword ptr [0x01d1bc48]      ; 004f6503 | DAT_01d1bc48
    ADD ESP,0x10                        ; 004f6509
    CMP EDX,-0x1                        ; 004f650c
    JNZ 0x004f6512                      ; 004f650f
        ;   XREF to: 004f6512 (CONDITIONAL_JUMP)  ; LAB_004f6512
    RET                                 ; 004f6511
    PUSH EBX                            ; 004f6512
        ;   Label: LAB_004f6512
    PUSH 0xffff                         ; 004f6513
    PUSH 0x7                            ; 004f6518
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f651a
    PUSH 0x20                           ; 004f6521
    MOV EBX,0x1d1bb08                   ; 004f6523
    ADD EAX,EDX                         ; 004f6528
    PUSH 0x3                            ; 004f652a
    SHL EAX,0x4                         ; 004f652c
    PUSH 0x0                            ; 004f652f
    ADD EBX,EAX                         ; 004f6531
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004f6533
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV EDX,EAX                         ; 004f6538
    SHL EAX,0x2                         ; 004f653a
    ADD EAX,EDX                         ; 004f653d
    SHL EAX,0x2                         ; 004f653f
    ADD ESP,0x8                         ; 004f6542
    ADD EAX,EBX                         ; 004f6545
    PUSH EAX                            ; 004f6547
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004f6548
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f654d
    POP EBX                             ; 004f6550
    RET                                 ; 004f6551

