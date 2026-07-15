; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLlockFrame(void)
;
;
; Referenced Globals:
;   undefined4 DAT_100141f8
;   undefined4 DAT_10014204
;
; Called Functions:
;   APIDLLendScene
;   FUN_10002dc0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 10002d90 | DAT_10014204
        ;   Label: APIDLLlockFrame
    JZ 0x10002d9e                       ; 10002d97
        ;   XREF to: 10002d9e (CONDITIONAL_JUMP)  ; LAB_10002d9e
    CALL APIDLLendScene                 ; 10002d99
        ;   XREF to: 10002d10 (UNCONDITIONAL_CALL)  ; int APIDLLendScene() | Ordinal_15
    CALL FUN_10002dc0                   ; 10002d9e
        ;   XREF to: 10002dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_10002dc0()
        ;   Label: LAB_10002d9e
    TEST EAX,EAX                        ; 10002da3
    JNZ 0x10002daa                      ; 10002da5
        ;   XREF to: 10002daa (CONDITIONAL_JUMP)  ; LAB_10002daa
    XOR EAX,EAX                         ; 10002da7
    RET                                 ; 10002da9
    MOV dword ptr [0x100141f8],0x1      ; 10002daa | DAT_100141f8
        ;   Label: LAB_10002daa
    MOV EAX,0x1                         ; 10002db4
    RET                                 ; 10002db9

