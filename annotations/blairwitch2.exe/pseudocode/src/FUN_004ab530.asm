; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ab530(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00484f20 at 004851d4
;   FUN_004b32c0 at 004b335b
;   FUN_004b3c50 at 004b3c93
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab530
        ;   Label: FUN_004ab530
    TEST EAX,EAX                        ; 004ab534
    JL 0x004ab53f                       ; 004ab536
        ;   XREF to: 004ab53f (CONDITIONAL_JUMP)  ; LAB_004ab53f
    CMP EAX,0x100                       ; 004ab538
    JL 0x004ab542                       ; 004ab53d
        ;   XREF to: 004ab542 (CONDITIONAL_JUMP)  ; LAB_004ab542
    XOR EAX,EAX                         ; 004ab53f
        ;   Label: LAB_004ab53f
    RET                                 ; 004ab541
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab542
        ;   Label: LAB_004ab542
    SHL EAX,0x2                         ; 004ab546
    ADD EAX,EDX                         ; 004ab549
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004ab54b
    RET                                 ; 004ab551

