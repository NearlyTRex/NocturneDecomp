; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042ccf0(int param_1)
;
;
; XREF[20]:
;   FUN_004179b0 at 00417ee3
;   FUN_00419b40 at 0041a03c
;   FUN_00425da0 at 004269d8
;   FUN_00442a20 at 0044347c
;   FUN_00445130 at 0044524f
;   FUN_00455080 at 00456fa8
;   FUN_004628b0 at 00462a26
;   FUN_004c5350 at 004c54b0
;   FUN_004c6eb0 at 004c703b
;   FUN_004d56b0 at 004d57d2
;   ... and 10 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042ccf0
        ;   Label: FUN_0042ccf0
    CMP dword ptr [EDX + 0xdc],0x0      ; 0042ccf4
    JNZ 0x0042cd0b                      ; 0042ccfb
        ;   XREF to: 0042cd0b (CONDITIONAL_JUMP)  ; LAB_0042cd0b
    FLD float ptr [EDX + 0x24]          ; 0042ccfd
    FCOMP float ptr [EDX + 0x2504]      ; 0042cd00
    FNSTSW AX                           ; 0042cd06
    SAHF                                ; 0042cd08
    JZ 0x0042cd11                       ; 0042cd09
        ;   XREF to: 0042cd11 (CONDITIONAL_JUMP)  ; LAB_0042cd11
    MOV EAX,0x1                         ; 0042cd0b
        ;   Label: LAB_0042cd0b
    RET                                 ; 0042cd10
    CMP dword ptr [EDX + 0x2500],0x0    ; 0042cd11
        ;   Label: LAB_0042cd11
    JZ 0x0042cd0b                       ; 0042cd18
        ;   XREF to: 0042cd0b (CONDITIONAL_JUMP)  ; LAB_0042cd0b
    PUSH EDX                            ; 0042cd1a
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042cd1b
    CALL dword ptr [EAX + 0x5c]         ; 0042cd21
    ADD ESP,0x4                         ; 0042cd24
    TEST EAX,EAX                        ; 0042cd27
    JNZ 0x0042cd0b                      ; 0042cd29
        ;   XREF to: 0042cd0b (CONDITIONAL_JUMP)  ; LAB_0042cd0b
    RET                                 ; 0042cd2b

