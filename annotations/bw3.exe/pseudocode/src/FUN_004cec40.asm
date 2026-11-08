; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cec40(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[25]:
;   FUN_0040fb40 at 0040fc35
;   FUN_00425da0 at 00426dcb
;   FUN_00445130 at 004454e3
;   FUN_00455080 at 0045649b
;   FUN_004628b0 at 00462d12
;   FUN_004c6eb0 at 004c7a0f
;   FUN_004d56b0 at 004d59b7
;   FUN_004d6a90 at 004d70ec
;   FUN_00509120 at 0050922e
;   FUN_00531380 at 00531985
;   ... and 15 more
;
; Called Functions:
;   FUN_004cdff0
;   FUN_004cebf0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004cec40
        ;   Label: FUN_004cec40
    JNZ 0x004cec48                      ; 004cec45
        ;   XREF to: 004cec48 (CONDITIONAL_JUMP)  ; LAB_004cec48
    RET                                 ; 004cec47
    PUSH ESI                            ; 004cec48
        ;   Label: LAB_004cec48
    PUSH EBX                            ; 004cec49
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cec4a
    PUSH ECX                            ; 004cec4e
    CALL FUN_004cebf0                   ; 004cec4f
        ;   XREF to: 004cebf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cebf0()
    ADD ESP,0x4                         ; 004cec54
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cec57
    PUSH EBX                            ; 004cec5b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004cec5c
    PUSH ESI                            ; 004cec60
    PUSH EAX                            ; 004cec61
    CALL FUN_004cdff0                   ; 004cec62
        ;   XREF to: 004cdff0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cdff0()
    ADD ESP,0xc                         ; 004cec67
    POP EBX                             ; 004cec6a
    POP ESI                             ; 004cec6b
    RET                                 ; 004cec6c

