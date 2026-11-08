; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c4510(int param_1,int param_2)
;
;
; XREF[31]:
;   FUN_00493720 at 00493760
;   FUN_00493d40 at 00493d72
;   FUN_00494400 at 0049442b
;   FUN_00494690 at 004946d9
;   FUN_004958d0 at 0049592f
;   FUN_004961b0 at 004961f8
;   FUN_00496840 at 0049688c
;   FUN_00496920 at 0049694c
;   FUN_00496ee0 at 00496f08
;   FUN_0049a8b0 at 0049a8f8
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4510
        ;   Label: FUN_004c4510
    TEST EAX,EAX                        ; 004c4514
    JL 0x004c451f                       ; 004c4516
        ;   XREF to: 004c451f (CONDITIONAL_JUMP)  ; LAB_004c451f
    CMP EAX,0x100                       ; 004c4518
    JL 0x004c4522                       ; 004c451d
        ;   XREF to: 004c4522 (CONDITIONAL_JUMP)  ; LAB_004c4522
    XOR EAX,EAX                         ; 004c451f
        ;   Label: LAB_004c451f
    RET                                 ; 004c4521
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4522
        ;   Label: LAB_004c4522
    SHL EAX,0x2                         ; 004c4526
    ADD EDX,EAX                         ; 004c4529
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004c452b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004c4531
    RET                                 ; 004c4537

