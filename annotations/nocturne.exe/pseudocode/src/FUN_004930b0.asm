; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004930b0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00492da0 at 00492e2d
;   FUN_0049ab50 at 0049abeb
;   FUN_0049b4e0 at 0049b523
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004930b0
        ;   Label: FUN_004930b0
    TEST EAX,EAX                        ; 004930b4
    JL 0x004930bf                       ; 004930b6
        ;   XREF to: 004930bf (CONDITIONAL_JUMP)  ; LAB_004930bf
    CMP EAX,0x100                       ; 004930b8
    JL 0x004930c2                       ; 004930bd
        ;   XREF to: 004930c2 (CONDITIONAL_JUMP)  ; LAB_004930c2
    XOR EAX,EAX                         ; 004930bf
        ;   Label: LAB_004930bf
    RET                                 ; 004930c1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004930c2
        ;   Label: LAB_004930c2
    SHL EAX,0x2                         ; 004930c6
    ADD EAX,EDX                         ; 004930c9
    MOV EAX,dword ptr [EAX + 0x2568]    ; 004930cb
    RET                                 ; 004930d1

