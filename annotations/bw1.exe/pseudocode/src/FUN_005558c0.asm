; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005558c0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00420990 at 00420b30
;   FUN_004551a0 at 00455246
;   FUN_004665c0 at 0046661e
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bc1224
;
; Called Functions:
;   FUN_00481eb0
;   FUN_00519be0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 005558c0
        ;   Label: FUN_005558c0
    MOV EAX,[0x00612560]                ; 005558c4 | DAT_00612560
    MOV EDX,dword ptr [EAX + 0x18]      ; 005558c9 | DAT_01bc1224
    TEST EDX,EDX                        ; 005558cc
    JZ 0x005558e5                       ; 005558ce
        ;   XREF to: 005558e5 (CONDITIONAL_JUMP)  ; LAB_005558e5
    MOV EAX,dword ptr [ESP + 0x4]       ; 005558d0
    PUSH ECX                            ; 005558d4
    MOV EDX,dword ptr [EAX + 0x161668]  ; 005558d5
    PUSH EDX                            ; 005558db
    CALL FUN_00519be0                   ; 005558dc
        ;   XREF to: 00519be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00519be0()
    ADD ESP,0x8                         ; 005558e1
    RET                                 ; 005558e4
    PUSH ECX                            ; 005558e5
        ;   Label: LAB_005558e5
    PUSH EAX                            ; 005558e6 | DAT_01bc120c
    CALL FUN_00481eb0                   ; 005558e7
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481eb0()
    ADD ESP,0x8                         ; 005558ec
    RET                                 ; 005558ef

