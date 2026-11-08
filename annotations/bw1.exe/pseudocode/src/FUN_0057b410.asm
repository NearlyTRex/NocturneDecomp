; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0057b410(UINT_PTR param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[1]:
;   FUN_005755c0 at 00575607
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005d0480 = 001d09de
;   undefined4 DAT_006235d4
;
; Called Functions:
;   FUN_0057a740
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 0057b410
        ;   Label: FUN_0057b410
    PUSH 0x2c82a4c                      ; 0057b413
    CALL FUN_0057a740                   ; 0057b418
        ;   XREF to: 0057a740 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a740()
    ADD ESP,0x4                         ; 0057b41d
    TEST EAX,EAX                        ; 0057b420
    JNZ 0x0057b428                      ; 0057b422
        ;   XREF to: 0057b428 (CONDITIONAL_JUMP)  ; LAB_0057b428
    ADD ESP,0x34                        ; 0057b424
    RET                                 ; 0057b427
    PUSH 0x34                           ; 0057b428
        ;   Label: LAB_0057b428
    LEA EAX,[ESP + 0x4]                 ; 0057b42a
    PUSH EAX                            ; 0057b42e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0057b42f
    PUSH EDX                            ; 0057b433
    CALL dword ptr CS:[0x5d0480]        ; 0057b434 | PTR_waveOutGetDevCapsA_005d0480
    TEST EAX,EAX                        ; 0057b43b
    JZ 0x0057b445                       ; 0057b43d
        ;   XREF to: 0057b445 (CONDITIONAL_JUMP)  ; LAB_0057b445
    XOR EAX,EAX                         ; 0057b43f
    ADD ESP,0x34                        ; 0057b441
    RET                                 ; 0057b444
    MOV EAX,dword ptr [ESP + 0x38]      ; 0057b445
        ;   Label: LAB_0057b445
    MOV [0x006235d4],EAX                ; 0057b449 | DAT_006235d4
    MOV EAX,0x2c82a4c                   ; 0057b44e
    ADD ESP,0x34                        ; 0057b453
    RET                                 ; 0057b456

