; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005589e0(UINT_PTR param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[1]:
;   FUN_00552b90 at 00552bd7
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005c8474 = 001c89c6
;   undefined4 DAT_0061bf84
;
; Called Functions:
;   FUN_00557d10
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 005589e0
        ;   Label: FUN_005589e0
    PUSH 0x264b27c                      ; 005589e3
    CALL FUN_00557d10                   ; 005589e8
        ;   XREF to: 00557d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00557d10()
    ADD ESP,0x4                         ; 005589ed
    TEST EAX,EAX                        ; 005589f0
    JNZ 0x005589f8                      ; 005589f2
        ;   XREF to: 005589f8 (CONDITIONAL_JUMP)  ; LAB_005589f8
    ADD ESP,0x34                        ; 005589f4
    RET                                 ; 005589f7
    PUSH 0x34                           ; 005589f8
        ;   Label: LAB_005589f8
    LEA EAX,[ESP + 0x4]                 ; 005589fa
    PUSH EAX                            ; 005589fe
    MOV EDX,dword ptr [ESP + 0x40]      ; 005589ff
    PUSH EDX                            ; 00558a03
    CALL dword ptr CS:[0x5c8474]        ; 00558a04 | PTR_waveOutGetDevCapsA_005c8474
    TEST EAX,EAX                        ; 00558a0b
    JZ 0x00558a15                       ; 00558a0d
        ;   XREF to: 00558a15 (CONDITIONAL_JUMP)  ; LAB_00558a15
    XOR EAX,EAX                         ; 00558a0f
    ADD ESP,0x34                        ; 00558a11
    RET                                 ; 00558a14
    MOV EAX,dword ptr [ESP + 0x38]      ; 00558a15
        ;   Label: LAB_00558a15
    MOV [0x0061bf84],EAX                ; 00558a19 | DAT_0061bf84
    MOV EAX,0x264b27c                   ; 00558a1e
    ADD ESP,0x34                        ; 00558a23
    RET                                 ; 00558a26

