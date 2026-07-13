; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b56f0(int param_1)
;
;
; XREF[2]:
;   FUN_00495a20 at 00496bf5
;   FUN_00535900 at 00536ed3
;
; Referenced Globals:
;   undefined4 DAT_00764838
;
; Called Functions:
;   FUN_0040d890
;   FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b56f0
        ;   Label: FUN_004b56f0
    PUSH EBP                            ; 004b56f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b56f2
    MOV EDX,dword ptr [EBX + 0x1fa0c]   ; 004b56f6
    TEST EDX,EDX                        ; 004b56fc
    JNZ 0x004b5703                      ; 004b56fe
        ;   XREF to: 004b5703 (CONDITIONAL_JUMP)  ; LAB_004b5703
    POP EBP                             ; 004b5700
    POP EBX                             ; 004b5701
    RET                                 ; 004b5702
    PUSH EDI                            ; 004b5703
        ;   Label: LAB_004b5703
    MOV ECX,dword ptr [0x00764838]      ; 004b5704 | DAT_00764838
    PUSH ECX                            ; 004b570a
    PUSH EDX                            ; 004b570b
    CALL FUN_0040d890                   ; 004b570c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EDI,dword ptr [EAX + 0x318]     ; 004b5711
    ADD ESP,0x8                         ; 004b5717
    CMP EBX,EDI                         ; 004b571a
    JNZ 0x004b5737                      ; 004b571c
        ;   XREF to: 004b5737 (CONDITIONAL_JUMP)  ; LAB_004b5737
    MOV EBP,dword ptr [EAX + 0x320]     ; 004b571e
    PUSH EBP                            ; 004b5724
    MOV dword ptr [EAX + 0x318],0x0     ; 004b5725
    CALL FUN_00527230                   ; 004b572f
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004b5734
    MOV dword ptr [EBX + 0x1fa0c],0x0   ; 004b5737
        ;   Label: LAB_004b5737
    POP EDI                             ; 004b5741
    POP EBP                             ; 004b5742
    POP EBX                             ; 004b5743
    RET                                 ; 004b5744

