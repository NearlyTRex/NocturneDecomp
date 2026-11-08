; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b30c0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00486120 at 004863d4
;   FUN_004b47d0 at 004b49eb
;   FUN_004b51e0 at 004b5223
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b30c0
        ;   Label: FUN_004b30c0
    TEST EAX,EAX                        ; 004b30c4
    JL 0x004b30cf                       ; 004b30c6
        ;   XREF to: 004b30cf (CONDITIONAL_JUMP)  ; LAB_004b30cf
    CMP EAX,0x100                       ; 004b30c8
    JL 0x004b30d2                       ; 004b30cd
        ;   XREF to: 004b30d2 (CONDITIONAL_JUMP)  ; LAB_004b30d2
    XOR EAX,EAX                         ; 004b30cf
        ;   Label: LAB_004b30cf
    RET                                 ; 004b30d1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b30d2
        ;   Label: LAB_004b30d2
    SHL EAX,0x2                         ; 004b30d6
    ADD EAX,EDX                         ; 004b30d9
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004b30db
    RET                                 ; 004b30e1

