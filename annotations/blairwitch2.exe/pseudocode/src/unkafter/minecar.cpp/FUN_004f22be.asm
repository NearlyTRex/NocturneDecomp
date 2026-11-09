; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_minecar_cpp_FUN_004f22be(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d09b78
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d09b80
;   undefined4 DAT_01d0d2cc
;   undefined4 DAT_01d0d2d0
;   undefined4 DAT_01d12114
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   engine_mini3d.cpp_FUN_004f5f70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f22be
        ;   Label: unkafter_minecar.cpp_FUN_004f22be
    MOV EDX,dword ptr [0x01d12114]      ; 004f22c0 | DAT_01d12114
    PUSH EDX                            ; 004f22c6
    CALL engine_mini3d.cpp_FUN_004f5f70 ; 004f22c7
        ;   XREF to: 004f5f70 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5f70()
    XOR ECX,ECX                         ; 004f22cc
    ADD ESP,0x4                         ; 004f22ce
    MOV dword ptr [0x01d12114],ECX      ; 004f22d1 | DAT_01d12114
    LEA EAX,[EAX]                       ; 004f22d7
    LEA EDX,[EDX]                       ; 004f22dd
    PUSH EBP                            ; 004f22e0
    MOV EDX,dword ptr [0x01d09b78]      ; 004f22e1 | DAT_01d09b78
    TEST EDX,EDX                        ; 004f22e7
    JNZ 0x004f22f7                      ; 004f22e9
        ;   XREF to: 004f22f7 (CONDITIONAL_JUMP)  ; LAB_004f22f7
    MOV EBP,dword ptr [0x01d0d2cc]      ; 004f22eb | DAT_01d0d2cc
    TEST EBP,EBP                        ; 004f22f1
    JNZ 0x004f2322                      ; 004f22f3
        ;   XREF to: 004f2322 (CONDITIONAL_JUMP)  ; LAB_004f2322
    POP EBP                             ; 004f22f5
    RET                                 ; 004f22f6
    PUSH EBX                            ; 004f22f7
        ;   Label: LAB_004f22f7
    PUSH EDX                            ; 004f22f8
    CALL crt_unknown.c_FUN_005b86a0     ; 004f22f9
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR EBX,EBX                         ; 004f22fe
    ADD ESP,0x4                         ; 004f2300
    MOV dword ptr [0x01d09b78],EBX      ; 004f2303 | DAT_01d09b78
    MOV dword ptr [0x01d09b7c],EBX      ; 004f2309 | DAT_01d09b7c
    MOV dword ptr [0x01d09b80],EBX      ; 004f230f | DAT_01d09b80
    POP EBX                             ; 004f2315
    MOV EBP,dword ptr [0x01d0d2cc]      ; 004f2316 | DAT_01d0d2cc
    TEST EBP,EBP                        ; 004f231c
    JNZ 0x004f2322                      ; 004f231e
        ;   XREF to: 004f2322 (CONDITIONAL_JUMP)  ; LAB_004f2322
    POP EBP                             ; 004f2320
    RET                                 ; 004f2321
    PUSH EBP                            ; 004f2322
        ;   Label: LAB_004f2322
    CALL crt_unknown.c_FUN_005b86a0     ; 004f2323
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004f2328
    MOV EDX,dword ptr [0x01d0d2d0]      ; 004f232b | DAT_01d0d2d0
    PUSH EDX                            ; 004f2331
    CALL crt_unknown.c_FUN_005b86a0     ; 004f2332
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR ECX,ECX                         ; 004f2337
    ADD ESP,0x4                         ; 004f2339
    MOV dword ptr [0x01d0d2cc],ECX      ; 004f233c | DAT_01d0d2cc
    MOV dword ptr [0x01d0d2d0],ECX      ; 004f2342 | DAT_01d0d2d0
    POP EBP                             ; 004f2348
    RET                                 ; 004f2349

