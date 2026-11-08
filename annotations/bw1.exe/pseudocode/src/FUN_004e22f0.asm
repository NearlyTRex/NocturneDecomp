; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e22f0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e22f0
        ;   Label: FUN_004e22f0
    CMP dword ptr [EAX + 0x180],0x0     ; 004e22f4
    JZ 0x004e2306                       ; 004e22fb
        ;   XREF to: 004e2306 (CONDITIONAL_JUMP)  ; LAB_004e2306
    CMP dword ptr [EAX + 0x1e8],0x0     ; 004e22fd
    JZ 0x004e230c                       ; 004e2304
        ;   XREF to: 004e230c (CONDITIONAL_JUMP)  ; LAB_004e230c
    MOV EAX,0x1                         ; 004e2306
        ;   Label: LAB_004e2306
    RET                                 ; 004e230b
    MOV dword ptr [EAX + 0x100],0x1     ; 004e230c
        ;   Label: LAB_004e230c
    XOR EAX,EAX                         ; 004e2316
    RET                                 ; 004e2318

