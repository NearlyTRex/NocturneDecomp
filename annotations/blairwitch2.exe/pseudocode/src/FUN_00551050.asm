; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00551050(undefined4 param_1)
;
;
; XREF[57]:
;   FUN_00412760 at 00412772
;   FUN_00414290 at 004142a2
;   FUN_004186c0 at 00418996
;   FUN_00419eb0 at 00419ebc
;   FUN_0041ead0 at 0041eae3
;   FUN_00423900 at 0042392e
;   FUN_004244b0 at 004246c6
;   FUN_00425fb0 at 00426346
;   FUN_00427360 at 00427382
;   FUN_00436e80 at 00437b5f
;   ... and 47 more
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_0054f700
;   FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00551050
        ;   Label: FUN_00551050
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551052
    PUSH EDX                            ; 00551056
    CALL FUN_0054d3a0                   ; 00551057
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 0055105c
    TEST EAX,EAX                        ; 0055105f
    JNZ 0x00551064                      ; 00551061
        ;   XREF to: 00551064 (CONDITIONAL_JUMP)  ; LAB_00551064
    RET                                 ; 00551063
    PUSH EAX                            ; 00551064
        ;   Label: LAB_00551064
    CALL FUN_0054f700                   ; 00551065
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f700()
    ADD ESP,0x4                         ; 0055106a
    CALL FUN_00551440                   ; 0055106d
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,0x1                         ; 00551072
    RET                                 ; 00551077

