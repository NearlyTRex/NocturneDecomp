; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00432090(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052cbab
;
; Called Functions:
;   FUN_004fb9c0
;   FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432090
        ;   Label: FUN_00432090
    MOV EBX,dword ptr [ESP + 0x8]       ; 00432091
    PUSH 0x0                            ; 00432095
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432097
    PUSH EDX                            ; 0043209b
    LEA EAX,[EBX + 0x158]               ; 0043209c
    PUSH EAX                            ; 004320a2
    MOV dword ptr [EBX + 0x2758],0x0    ; 004320a3
    CALL FUN_004fc310                   ; 004320ad
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 004320b2
    PUSH EAX                            ; 004320b5
    CALL FUN_004fb9c0                   ; 004320b6
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 004320bb
    MOV dword ptr [EBX + 0x2754],EAX    ; 004320be
    TEST EAX,EAX                        ; 004320c4
    SETGE AL                            ; 004320c6
    AND EAX,0xff                        ; 004320c9
    POP EBX                             ; 004320ce
    RET                                 ; 004320cf

