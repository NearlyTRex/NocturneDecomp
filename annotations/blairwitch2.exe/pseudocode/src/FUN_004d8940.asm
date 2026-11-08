; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d8940(int param_1,uint param_2)
;
;
; XREF[4]:
;   FUN_004bc840 at 004bca90
;   FUN_004d8d60 at 004d9496
;   FUN_004d94d0 at 004d9b93
;   FUN_00522350 at 00525696
;
; Referenced Globals:
;   undefined4 DAT_005f75a0
;   void* PTR_FUN_005f8ef4 = 004d8940
;
; Called Functions:
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8940
        ;   Label: FUN_004d8940
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8941
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d8945
    TEST AL,0x4                         ; 004d8949
    JNZ 0x004d895f                      ; 004d894b
        ;   XREF to: 004d895f (CONDITIONAL_JUMP)  ; LAB_004d895f
    MOV dword ptr [EBX + 0x200],0x5f8ef4 ; 004d894d | PTR_FUN_005f8ef4
    TEST AL,0x2                         ; 004d8957
    JNZ 0x004d897a                      ; 004d8959
        ;   XREF to: 004d897a (CONDITIONAL_JUMP)  ; LAB_004d897a
    MOV EAX,EBX                         ; 004d895b
    POP EBX                             ; 004d895d
    RET                                 ; 004d895e
    PUSH 0x5f75a0                       ; 004d895f | DAT_005f75a0
        ;   Label: LAB_004d895f
    PUSH EBX                            ; 004d8964
    CALL FUN_005b7fa7                   ; 004d8965
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d896a
    PUSH EAX                            ; 004d896d
    CALL FUN_005b7fce                   ; 004d896e
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d8973
    MOV EAX,EBX                         ; 004d8976
    POP EBX                             ; 004d8978
    RET                                 ; 004d8979
    PUSH EBX                            ; 004d897a
        ;   Label: LAB_004d897a
    CALL FUN_005b7fdc                   ; 004d897b
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d8980
    MOV EAX,EBX                         ; 004d8983
    POP EBX                             ; 004d8985
    RET                                 ; 004d8986

