; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b4950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777bc
;
; Called Functions:
;   FUN_0040a420
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b4950
        ;   Label: FUN_004b4950
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b4951
    MOV EAX,[0x005b9354]                ; 004b4955 | DAT_005b9354
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004b495a | DAT_01c777bc
    JNZ 0x004b496f                      ; 004b4961
        ;   XREF to: 004b496f (CONDITIONAL_JUMP)  ; LAB_004b496f
    TEST dword ptr [EDX + 0xbc8c],0x7fffffff ; 004b4963
    JZ 0x004b4973                       ; 004b496d
        ;   XREF to: 004b4973 (CONDITIONAL_JUMP)  ; LAB_004b4973
    XOR EAX,EAX                         ; 004b496f
        ;   Label: LAB_004b496f
    POP EBP                             ; 004b4971
    RET                                 ; 004b4972
    PUSH EDI                            ; 004b4973
        ;   Label: LAB_004b4973
    PUSH ESI                            ; 004b4974
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b4975
    PUSH ESI                            ; 004b4979
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004b497a
    PUSH EDI                            ; 004b497e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b497f
    PUSH EBP                            ; 004b4983
    PUSH EDX                            ; 004b4984
    CALL FUN_0040a420                   ; 004b4985
        ;   XREF to: 0040a420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a420()
    ADD ESP,0x10                        ; 004b498a
    POP ESI                             ; 004b498d
    POP EDI                             ; 004b498e
    POP EBP                             ; 004b498f
    RET                                 ; 004b4990

