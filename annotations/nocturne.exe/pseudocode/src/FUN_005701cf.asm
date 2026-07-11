; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005701cf(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_0056b5ad at 0056b5de
;
; Referenced Globals:
;   undefined1* PTR_LAB_005a4884 = 0056ff82
;   undefined4 DAT_005a4af0
;
; Called Functions:
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;   FUN_00571d9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005701cf
        ;   Label: FUN_005701cf
    MOV EBX,dword ptr [ESP + 0x8]       ; 005701d0
    TEST byte ptr [ESP + 0xc],0x4       ; 005701d4
    JNZ 0x0057021f                      ; 005701d9
        ;   XREF to: 0057021f (CONDITIONAL_JUMP)  ; LAB_0057021f
    MOV DL,byte ptr [EBX + 0x3c]        ; 005701db
    MOV dword ptr [EBX + 0x28],0x5a4884 ; 005701de | PTR_LAB_005a4884
    TEST DL,0x2                         ; 005701e5
    JZ 0x00570205                       ; 005701e8
        ;   XREF to: 00570205 (CONDITIONAL_JUMP)  ; LAB_00570205
    TEST DL,0x1                         ; 005701ea
    JNZ 0x00570205                      ; 005701ed
        ;   XREF to: 00570205 (CONDITIONAL_JUMP)  ; LAB_00570205
    MOV EAX,dword ptr [EBX + 0x4]       ; 005701ef
    TEST EAX,EAX                        ; 005701f2
    JZ 0x00570205                       ; 005701f4
        ;   XREF to: 00570205 (CONDITIONAL_JUMP)  ; LAB_00570205
    CMP dword ptr [EBX + 0x30],0x0      ; 005701f6
    JNZ 0x0057023a                      ; 005701fa
        ;   XREF to: 0057023a (CONDITIONAL_JUMP)  ; LAB_0057023a
    PUSH EAX                            ; 005701fc
    CALL FUN_00564486                   ; 005701fd
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00570202
        ;   Label: LAB_00570202
    PUSH 0x1                            ; 00570205
        ;   Label: LAB_00570205
    PUSH EBX                            ; 00570207
    CALL FUN_00571d9f                   ; 00570208
        ;   XREF to: 00571d9f (UNCONDITIONAL_CALL)  ; undefined FUN_00571d9f()
    ADD ESP,0x8                         ; 0057020d
    MOV CL,byte ptr [ESP + 0xc]         ; 00570210
    MOV EBX,EAX                         ; 00570214
    TEST CL,0x2                         ; 00570216
    JNZ 0x00570240                      ; 00570219
        ;   XREF to: 00570240 (CONDITIONAL_JUMP)  ; LAB_00570240
    MOV EAX,EBX                         ; 0057021b
    POP EBX                             ; 0057021d
    RET                                 ; 0057021e
    PUSH 0x5a4af0                       ; 0057021f | DAT_005a4af0
        ;   Label: LAB_0057021f
    PUSH EBX                            ; 00570224
    CALL FUN_0056445f                   ; 00570225
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0057022a
    PUSH EAX                            ; 0057022d
    CALL FUN_00564486                   ; 0057022e
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00570233
        ;   Label: LAB_00570233
    MOV EAX,EBX                         ; 00570236
    POP EBX                             ; 00570238
    RET                                 ; 00570239
    PUSH EAX                            ; 0057023a
        ;   Label: LAB_0057023a
    CALL dword ptr [EBX + 0x30]         ; 0057023b
    JMP 0x00570202                      ; 0057023e
        ;   XREF to: 00570202 (UNCONDITIONAL_JUMP)  ; LAB_00570202
    PUSH EAX                            ; 00570240
        ;   Label: LAB_00570240
    CALL FUN_00564494                   ; 00570241
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    JMP 0x00570233                      ; 00570246
        ;   XREF to: 00570233 (UNCONDITIONAL_JUMP)  ; LAB_00570233

