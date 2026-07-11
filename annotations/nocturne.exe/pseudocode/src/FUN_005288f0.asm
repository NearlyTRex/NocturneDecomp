; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005288f0(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   FUN_004dec50 at 004dec5c
;
; Referenced Globals:
;   undefined4 DAT_005939b6
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc84a8
;   undefined4 DAT_02dc84b8
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_005298f0
;   FUN_00559bf0
;   FUN_00559c30
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc8318],0x0      ; 005288f0 | DAT_02dc8318
        ;   Label: FUN_005288f0
    JNZ 0x005288fa                      ; 005288f7
        ;   XREF to: 005288fa (CONDITIONAL_JUMP)  ; LAB_005288fa
    RET                                 ; 005288f9
        ;   Label: LAB_005288f9
    FLD double ptr [0x02dc84a8]         ; 005288fa | DAT_02dc84a8
        ;   Label: LAB_005288fa
    FMUL double ptr [0x005939b6]        ; 00528900 | DAT_005939b6
    SUB ESP,0x8                         ; 00528906
    MOV ECX,dword ptr [0x02dc84b8]      ; 00528909 | DAT_02dc84b8
    FSTP double ptr [ESP]               ; 0052890f
    PUSH ECX                            ; 00528912
    CALL FUN_00559bf0                   ; 00528913
        ;   XREF to: 00559bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00559bf0()
    ADD ESP,0xc                         ; 00528918
    TEST EAX,EAX                        ; 0052891b
    JZ 0x005288f9                       ; 0052891d
        ;   XREF to: 005288f9 (CONDITIONAL_JUMP)  ; LAB_005288f9
    PUSH EDI                            ; 0052891f
    PUSH ESI                            ; 00528920
    PUSH EBX                            ; 00528921
    MOV EAX,[0x02dc8318]                ; 00528922 | DAT_02dc8318
    MOV EBX,dword ptr [0x02dc84bc]      ; 00528927 | DAT_02dc84bc
    PUSH EAX                            ; 0052892d
    INC EBX                             ; 0052892e
    MOV EDX,dword ptr [EAX]             ; 0052892f
    MOV dword ptr [0x02dc84bc],EBX      ; 00528931 | DAT_02dc84bc
    CALL dword ptr [EDX + 0x10]         ; 00528937
    ADD ESP,0x4                         ; 0052893a
    PUSH 0x0                            ; 0052893d
    CALL FUN_005298f0                   ; 0052893f
        ;   XREF to: 005298f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005298f0()
    MOV EDI,dword ptr [0x02dc84bc]      ; 00528944 | DAT_02dc84bc
    ADD ESP,0x4                         ; 0052894a
    MOV ESI,dword ptr [0x02dc84b8]      ; 0052894d | DAT_02dc84b8
    DEC EDI                             ; 00528953
    PUSH ESI                            ; 00528954
    MOV dword ptr [0x02dc84bc],EDI      ; 00528955 | DAT_02dc84bc
    CALL FUN_00559c30                   ; 0052895b
        ;   XREF to: 00559c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00559c30()
    ADD ESP,0x4                         ; 00528960
    POP EBX                             ; 00528963
    POP ESI                             ; 00528964
    POP EDI                             ; 00528965
    RET                                 ; 00528966

