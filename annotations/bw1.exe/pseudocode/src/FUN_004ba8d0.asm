; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ba8d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   void* PTR_FUN_00600934 = 004ba8d0
;   undefined4 DAT_006009e0
;
; Called Functions:
;   FUN_004ba760
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba8d0
        ;   Label: FUN_004ba8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ba8d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ba8d5
    JNZ 0x004ba8fd                      ; 004ba8da
        ;   XREF to: 004ba8fd (CONDITIONAL_JUMP)  ; LAB_004ba8fd
    PUSH 0x1                            ; 004ba8dc
    PUSH EBX                            ; 004ba8de
    MOV dword ptr [EBX + 0x14],0x600934 ; 004ba8df | PTR_FUN_00600934
    CALL FUN_004ba760                   ; 004ba8e6
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba760()
    ADD ESP,0x8                         ; 004ba8eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004ba8ee
    MOV EBX,EAX                         ; 004ba8f2
    TEST DL,0x2                         ; 004ba8f4
    JNZ 0x004ba918                      ; 004ba8f7
        ;   XREF to: 004ba918 (CONDITIONAL_JUMP)  ; LAB_004ba918
    MOV EAX,EBX                         ; 004ba8f9
    POP EBX                             ; 004ba8fb
    RET                                 ; 004ba8fc
    PUSH 0x6009e0                       ; 004ba8fd | DAT_006009e0
        ;   Label: LAB_004ba8fd
    PUSH EBX                            ; 004ba902
    CALL FUN_005c030f                   ; 004ba903
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ba908
    PUSH EAX                            ; 004ba90b
    CALL FUN_005c0336                   ; 004ba90c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ba911
    MOV EAX,EBX                         ; 004ba914
    POP EBX                             ; 004ba916
    RET                                 ; 004ba917
    PUSH EAX                            ; 004ba918
        ;   Label: LAB_004ba918
    CALL FUN_005c0344                   ; 004ba919
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ba91e
    MOV EAX,EBX                         ; 004ba921
    POP EBX                             ; 004ba923
    RET                                 ; 004ba924

