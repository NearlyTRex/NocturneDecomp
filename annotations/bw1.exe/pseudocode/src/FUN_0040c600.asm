; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c600(int param_1,undefined4 param_2)
;
;
; XREF[132]:
;   FUN_00408a00 at 00408a72
;   FUN_00409f20 at 0040a17d
;   FUN_0040fa70 at 0040faa1
;   FUN_0040fc00 at 0040fca5
;   FUN_00410640 at 0041067f
;   FUN_00412ba0 at 0041365a
;   FUN_004263d0 at 00426466
;   FUN_00427b40 at 00427b6b
;   FUN_00432240 at 00432502
;   FUN_00432f10 at 004331ea
;   ... and 122 more
;
; Called Functions:
;   FUN_0040c5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c600
        ;   Label: FUN_0040c600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c601
    TEST EBX,EBX                        ; 0040c605
    JNZ 0x0040c60d                      ; 0040c607
        ;   XREF to: 0040c60d (CONDITIONAL_JUMP)  ; LAB_0040c60d
    XOR EAX,EAX                         ; 0040c609
    POP EBX                             ; 0040c60b
        ;   Label: LAB_0040c60b
    RET                                 ; 0040c60c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c60d
        ;   Label: LAB_0040c60d
    PUSH EDX                            ; 0040c611
    PUSH EBX                            ; 0040c612
    CALL FUN_0040c5d0                   ; 0040c613
        ;   XREF to: 0040c5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5d0()
    ADD ESP,0x8                         ; 0040c618
    TEST EAX,EAX                        ; 0040c61b
    JZ 0x0040c60b                       ; 0040c61d
        ;   XREF to: 0040c60b (CONDITIONAL_JUMP)  ; LAB_0040c60b
    MOV EAX,EBX                         ; 0040c61f
    POP EBX                             ; 0040c621
    RET                                 ; 0040c622

