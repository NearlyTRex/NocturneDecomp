; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573620(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[3]:
;   FUN_004aa400 at 004aa4de
;   FUN_004ce580 at 004cee52
;   FUN_00598d50 at 00598ec8
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573620
        ;   Label: FUN_00573620
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573622
    PUSH EDX                            ; 00573626
    CALL FUN_0056fa10                   ; 00573627
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 0057362c
    TEST EAX,EAX                        ; 0057362f
    JNZ 0x00573634                      ; 00573631
        ;   XREF to: 00573634 (CONDITIONAL_JUMP)  ; LAB_00573634
    RET                                 ; 00573633
    PUSH EDI                            ; 00573634
        ;   Label: LAB_00573634
    PUSH ESI                            ; 00573635
    MOV ECX,0x54                        ; 00573636
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057363b
    MOV ESI,dword ptr [EAX + 0x68]      ; 0057363f
    MOVSD.REP ES:EDI,ESI                ; 00573642
    CALL FUN_00573e70                   ; 00573644
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573649
    POP ESI                             ; 0057364e
    POP EDI                             ; 0057364f
    RET                                 ; 00573650

