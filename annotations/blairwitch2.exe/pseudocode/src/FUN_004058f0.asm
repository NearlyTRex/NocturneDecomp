; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004058f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004058f0
        ;   Label: FUN_004058f0
    PUSH ESI                            ; 004058f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004058f2
    LEA ESI,[EBX + 0x18]                ; 004058f6
    LEA EAX,[EBX + 0x8]                 ; 004058f9
    PUSH EAX                            ; 004058fc
    CALL FUN_00403970                   ; 004058fd
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00405902
    TEST EAX,EAX                        ; 00405905
    JZ 0x00405945                       ; 00405907
        ;   XREF to: 00405945 (CONDITIONAL_JUMP)  ; LAB_00405945
    CMP dword ptr [0x01c38b40],0x0      ; 00405909 | DAT_01c38b40
    JNZ 0x0040595f                      ; 00405910
        ;   XREF to: 0040595f (CONDITIONAL_JUMP)  ; LAB_0040595f
    CMP dword ptr [0x006141c0],0x20     ; 00405912 | DAT_006141c0
    JNZ 0x00405953                      ; 00405919
        ;   XREF to: 00405953 (CONDITIONAL_JUMP)  ; LAB_00405953
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040591b | DAT_01c35e6c
    PUSH EDI                            ; 00405925
        ;   Label: LAB_00405925
    PUSH ESI                            ; 00405926
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405927
    MOV EDI,0x5                         ; 0040592a
    PUSH EAX                            ; 0040592f
    MOV dword ptr [0x01c38b54],EDI      ; 00405930 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 00405936 | DAT_01c38b58
    CALL FUN_00431d90                   ; 0040593c
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00405941
    POP EDI                             ; 00405944
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405945
        ;   Label: LAB_00405945
    ADD EBX,0x18                        ; 00405948
    SHL EAX,0x2                         ; 0040594b
    ADD EAX,EBX                         ; 0040594e
    POP ESI                             ; 00405950
    POP EBX                             ; 00405951
    RET                                 ; 00405952
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405953 | DAT_01c35e6c
        ;   Label: LAB_00405953
    JMP 0x00405925                      ; 0040595d
        ;   XREF to: 00405925 (UNCONDITIONAL_JUMP)  ; LAB_00405925
    CMP dword ptr [0x006141c0],0x20     ; 0040595f | DAT_006141c0
        ;   Label: LAB_0040595f
    JNZ 0x00405974                      ; 00405966
        ;   XREF to: 00405974 (CONDITIONAL_JUMP)  ; LAB_00405974
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405968 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00405925                      ; 00405972
        ;   XREF to: 00405925 (UNCONDITIONAL_JUMP)  ; LAB_00405925
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405974 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00405974
    JMP 0x00405925                      ; 0040597e
        ;   XREF to: 00405925 (UNCONDITIONAL_JUMP)  ; LAB_00405925

