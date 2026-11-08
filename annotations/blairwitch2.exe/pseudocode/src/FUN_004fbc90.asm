; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fbc90(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   FUN_004fce00 at 004fceca
;
; Referenced Globals:
;   undefined4 DAT_005de46d
;   undefined4 DAT_0061b460
;
; Called Functions:
;   FUN_00521cf0
;   FUN_005b9f4c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004fbc90
        ;   Label: FUN_004fbc90
    MOV EAX,dword ptr [ESP + 0x108]     ; 004fbc96
    PUSH 0x5de46d                       ; 004fbc9d | DAT_005de46d
    ADD EAX,0x1014                      ; 004fbca2
    PUSH EAX                            ; 004fbca7
    PUSH 0x0                            ; 004fbca8
    PUSH 0x0                            ; 004fbcaa
    LEA EAX,[ESP + 0x10]                ; 004fbcac
    PUSH EAX                            ; 004fbcb0
    CALL FUN_005b9f4c                   ; 004fbcb1
        ;   XREF to: 005b9f4c (UNCONDITIONAL_CALL)  ; undefined FUN_005b9f4c()
    ADD ESP,0x14                        ; 004fbcb6
    MOV EAX,ESP                         ; 004fbcb9
    PUSH EAX                            ; 004fbcbb
    MOV EDX,dword ptr [0x0061b460]      ; 004fbcbc | DAT_0061b460
    PUSH EDX                            ; 004fbcc2
    CALL FUN_00521cf0                   ; 004fbcc3
        ;   XREF to: 00521cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00521cf0()
    ADD ESP,0x8                         ; 004fbcc8
    ADD ESP,0x104                       ; 004fbccb
    RET                                 ; 004fbcd1

