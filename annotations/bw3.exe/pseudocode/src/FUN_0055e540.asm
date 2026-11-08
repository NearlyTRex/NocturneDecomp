; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0055e540(UINT_PTR param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[1]:
;   FUN_00558730 at 00558777
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005b3480 = 001b39de
;   undefined4 DAT_00604514
;
; Called Functions:
;   FUN_0055d870
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 0055e540
        ;   Label: FUN_0055e540
    PUSH 0x2cf5678                      ; 0055e543
    CALL FUN_0055d870                   ; 0055e548
        ;   XREF to: 0055d870 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d870()
    ADD ESP,0x4                         ; 0055e54d
    TEST EAX,EAX                        ; 0055e550
    JNZ 0x0055e558                      ; 0055e552
        ;   XREF to: 0055e558 (CONDITIONAL_JUMP)  ; LAB_0055e558
    ADD ESP,0x34                        ; 0055e554
    RET                                 ; 0055e557
    PUSH 0x34                           ; 0055e558
        ;   Label: LAB_0055e558
    LEA EAX,[ESP + 0x4]                 ; 0055e55a
    PUSH EAX                            ; 0055e55e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0055e55f
    PUSH EDX                            ; 0055e563
    CALL dword ptr CS:[0x5b3480]        ; 0055e564 | PTR_waveOutGetDevCapsA_005b3480
    TEST EAX,EAX                        ; 0055e56b
    JZ 0x0055e575                       ; 0055e56d
        ;   XREF to: 0055e575 (CONDITIONAL_JUMP)  ; LAB_0055e575
    XOR EAX,EAX                         ; 0055e56f
    ADD ESP,0x34                        ; 0055e571
    RET                                 ; 0055e574
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055e575
        ;   Label: LAB_0055e575
    MOV [0x00604514],EAX                ; 0055e579 | DAT_00604514
    MOV EAX,0x2cf5678                   ; 0055e57e
    ADD ESP,0x34                        ; 0055e583
    RET                                 ; 0055e586

