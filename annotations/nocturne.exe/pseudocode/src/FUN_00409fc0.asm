; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409fc0(int param_1)
;
;
; XREF[41]:
;   FUN_0040ff30 at 0040ff45
;   FUN_00411760 at 00411766
;   FUN_00411ae0 at 00411b0e
;   FUN_00414de0 at 00414de6
;   FUN_00416500 at 00416508
;   FUN_0041e430 at 0041e43a
;   FUN_00424260 at 0042426c
;   FUN_0042b8f0 at 0042b8fc
;   FUN_0043c870 at 0043c879
;   FUN_0043dad0 at 0043dae0
;   ... and 31 more
;
; Called Functions:
;   FUN_0040a000
;   FUN_004f0360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409fc0
        ;   Label: FUN_00409fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00409fc1
    PUSH EBX                            ; 00409fc5
    MOV dword ptr [EBX + 0x114],0x0     ; 00409fc6
    CALL FUN_0040a000                   ; 00409fd0
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 00409fd5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00409fd8
    PUSH EBX                            ; 00409fde
    CALL dword ptr [EAX + 0xbc]         ; 00409fdf
    ADD ESP,0x4                         ; 00409fe5
    TEST EAX,EAX                        ; 00409fe8
    JNZ 0x00409fee                      ; 00409fea
        ;   XREF to: 00409fee (CONDITIONAL_JUMP)  ; LAB_00409fee
    POP EBX                             ; 00409fec
    RET                                 ; 00409fed
    PUSH 0x1                            ; 00409fee
        ;   Label: LAB_00409fee
    ADD EBX,0x20                        ; 00409ff0
    PUSH EBX                            ; 00409ff3
    PUSH EAX                            ; 00409ff4
    CALL FUN_004f0360                   ; 00409ff5
        ;   XREF to: 004f0360 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0360()
    ADD ESP,0xc                         ; 00409ffa
    POP EBX                             ; 00409ffd
    RET                                 ; 00409ffe

