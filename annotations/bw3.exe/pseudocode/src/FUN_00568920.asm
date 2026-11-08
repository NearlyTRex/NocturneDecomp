; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568920(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041efe0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568920
        ;   Label: FUN_00568920
    PUSH EDX                            ; 00568924
    CALL FUN_0041efe0                   ; 00568925
        ;   XREF to: 0041efe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041efe0()
    MOV dword ptr [EAX + 0x154],0x5e4ef4 ; 0056892a
    ADD ESP,0x4                         ; 00568934
    MOV dword ptr [EAX + 0x6e8],0x0     ; 00568937
    RET                                 ; 00568941

