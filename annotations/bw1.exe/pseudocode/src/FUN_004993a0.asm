; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004993a0(int param_1,byte param_2)
;
;
; XREF[4]:
;   FUN_00494d20 at 00494dbf
;   FUN_0049a710 at 0049a764
;   FUN_004bbcf0 at 004bbcfc
;   FUN_00543710 at 00543724
;
; Referenced Globals:
;   undefined1* PTR_FUN_005ff814 = 004993a0
;   undefined4 DAT_005ff890
;
; Called Functions:
;   FUN_00499470
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004993a0
        ;   Label: FUN_004993a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004993a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004993a5
    JNZ 0x004993c7                      ; 004993aa
        ;   XREF to: 004993c7 (CONDITIONAL_JUMP)  ; LAB_004993c7
    PUSH EBX                            ; 004993ac
    MOV dword ptr [EBX + 0xc],0x5ff814  ; 004993ad | PTR_FUN_005ff814
    CALL FUN_00499470                   ; 004993b4
        ;   XREF to: 00499470 (UNCONDITIONAL_CALL)  ; undefined FUN_00499470()
    ADD ESP,0x4                         ; 004993b9
    TEST byte ptr [ESP + 0xc],0x2       ; 004993bc
    JNZ 0x004993e2                      ; 004993c1
        ;   XREF to: 004993e2 (CONDITIONAL_JUMP)  ; LAB_004993e2
    MOV EAX,EBX                         ; 004993c3
    POP EBX                             ; 004993c5
    RET                                 ; 004993c6
    PUSH 0x5ff890                       ; 004993c7 | DAT_005ff890
        ;   Label: LAB_004993c7
    PUSH EBX                            ; 004993cc
    CALL FUN_005c030f                   ; 004993cd
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004993d2
    PUSH EAX                            ; 004993d5
    CALL FUN_005c0336                   ; 004993d6
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004993db
    MOV EAX,EBX                         ; 004993de
    POP EBX                             ; 004993e0
    RET                                 ; 004993e1
    PUSH EBX                            ; 004993e2
        ;   Label: LAB_004993e2
    CALL FUN_005c0344                   ; 004993e3
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004993e8
    MOV EAX,EBX                         ; 004993eb
    POP EBX                             ; 004993ed
    RET                                 ; 004993ee

