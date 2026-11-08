; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00491510(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00489670 at 0048b8a8
;   FUN_0048e7e0 at 0048eda4
;   FUN_00522350 at 00525645
;
; Called Functions:
;   FUN_00491630
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00491510
        ;   Label: FUN_00491510
    PUSH EDX                            ; 00491514
    MOV ECX,dword ptr [ESP + 0x8]       ; 00491515
    PUSH ECX                            ; 00491519
    CALL FUN_00491630                   ; 0049151a
        ;   XREF to: 00491630 (UNCONDITIONAL_CALL)  ; undefined FUN_00491630()
    ADD ESP,0x8                         ; 0049151f
    TEST EAX,EAX                        ; 00491522
    JL 0x00491538                       ; 00491524
        ;   XREF to: 00491538 (CONDITIONAL_JUMP)  ; LAB_00491538
    PUSH EBX                            ; 00491526
    MOV EBX,dword ptr [ESP + 0x8]       ; 00491527
    SHL EAX,0x2                         ; 0049152b
    ADD EAX,EBX                         ; 0049152e
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 00491530
    POP EBX                             ; 00491536
    RET                                 ; 00491537
    XOR EAX,EAX                         ; 00491538
        ;   Label: LAB_00491538
    RET                                 ; 0049153a

