; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c2b0(undefined4 param_1)
;
;
; XREF[12]:
;   FUN_00410640 at 0041069c
;   FUN_004d2540 at 004d2549
;   FUN_004d27b0 at 004d322f
;   FUN_004eafd0 at 004eaff1
;   FUN_004ecca0 at 004eccb5
;   FUN_004f7050 at 004f70aa
;   FUN_004f7690 at 004f7fda
;   FUN_004f97a0 at 004f9a4f
;   FUN_0050f290 at 0050f491
;   FUN_0051a4f0 at 0051aa87
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2d8b
;   TerminatedCString s_Can_t_create_actor_of_un_005d2d9d
;   TerminatedCString s_core_actor_cpp_005d2dca
;   TerminatedCString s_Can_t_create_instance_of_005d2ddc
;   TerminatedCString s_core_actor_cpp_005d2e06
;   TerminatedCString s_Not_enough_memory_to_cre_005d2e18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0040c240
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c2b0
        ;   Label: FUN_0040c2b0
    PUSH ESI                            ; 0040c2b1
    PUSH EBP                            ; 0040c2b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040c2b3
    PUSH ESI                            ; 0040c2b7
    CALL FUN_0040c240                   ; 0040c2b8
        ;   XREF to: 0040c240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c240()
    ADD ESP,0x4                         ; 0040c2bd
    MOV EBX,EAX                         ; 0040c2c0
    TEST EAX,EAX                        ; 0040c2c2
    JZ 0x0040c2fe                       ; 0040c2c4
        ;   XREF to: 0040c2fe (CONDITIONAL_JUMP)  ; LAB_0040c2fe
    CMP dword ptr [EBX + 0x2c],0x0      ; 0040c2c6
        ;   Label: LAB_0040c2c6
    JNZ 0x0040c2ef                      ; 0040c2ca
        ;   XREF to: 0040c2ef (CONDITIONAL_JUMP)  ; LAB_0040c2ef
    PUSH ESI                            ; 0040c2cc
    MOV EBP,0x5d2dca                    ; 0040c2cd | = "..\\core\\actor.cpp"
    MOV EAX,0xa98                       ; 0040c2d2
    PUSH 0x5d2ddc                       ; 0040c2d7 | = "Can't create instance of abstract typ..."
    MOV dword ptr [0x01d1d400],EBP      ; 0040c2dc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0040c2e2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040c2e7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040c2ec
    CALL dword ptr [EBX + 0x2c]         ; 0040c2ef
        ;   Label: LAB_0040c2ef
    MOV EBX,EAX                         ; 0040c2f2
    TEST EAX,EAX                        ; 0040c2f4
    JZ 0x0040c324                       ; 0040c2f6
        ;   XREF to: 0040c324 (CONDITIONAL_JUMP)  ; LAB_0040c324
    MOV EAX,EBX                         ; 0040c2f8
    POP EBP                             ; 0040c2fa
    POP ESI                             ; 0040c2fb
    POP EBX                             ; 0040c2fc
    RET                                 ; 0040c2fd
    PUSH ESI                            ; 0040c2fe
        ;   Label: LAB_0040c2fe
    MOV EDX,0x5d2d8b                    ; 0040c2ff | = "..\\core\\actor.cpp"
    MOV ECX,0xa92                       ; 0040c304
    PUSH 0x5d2d9d                       ; 0040c309 | = "Can't create actor of unknown class t..."
    MOV dword ptr [0x01d1d400],EDX      ; 0040c30e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040c314 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040c31a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040c31f
    JMP 0x0040c2c6                      ; 0040c322
        ;   XREF to: 0040c2c6 (UNCONDITIONAL_JUMP)  ; LAB_0040c2c6
    PUSH ESI                            ; 0040c324
        ;   Label: LAB_0040c324
    MOV EDX,0x5d2e06                    ; 0040c325 | = "..\\core\\actor.cpp"
    MOV ECX,0xaa1                       ; 0040c32a
    PUSH 0x5d2e18                       ; 0040c32f | = "Not enough memory to create %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0040c334 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040c33a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040c340
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040c345
    MOV EAX,EBX                         ; 0040c348
    POP EBP                             ; 0040c34a
    POP ESI                             ; 0040c34b
    POP EBX                             ; 0040c34c
    RET                                 ; 0040c34d

