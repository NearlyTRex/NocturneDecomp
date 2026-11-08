; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c840(int param_1,undefined4 param_2)
;
;
; XREF[118]:
;   FUN_00408a40 at 00408ab2
;   FUN_00409f60 at 0040a2dc
;   FUN_00410490 at 004110ee
;   FUN_00422570 at 00422612
;   FUN_00423cd0 at 00423cfb
;   FUN_00424550 at 00424814
;   FUN_00425360 at 004253b6
;   FUN_0042ff70 at 0042ffb4
;   FUN_004300e0 at 0043023a
;   FUN_00431660 at 00431927
;   ... and 108 more
;
; Called Functions:
;   FUN_0040c810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c840
        ;   Label: FUN_0040c840
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c841
    TEST EBX,EBX                        ; 0040c845
    JNZ 0x0040c84d                      ; 0040c847
        ;   XREF to: 0040c84d (CONDITIONAL_JUMP)  ; LAB_0040c84d
    XOR EAX,EAX                         ; 0040c849
    POP EBX                             ; 0040c84b
        ;   Label: LAB_0040c84b
    RET                                 ; 0040c84c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c84d
        ;   Label: LAB_0040c84d
    PUSH EDX                            ; 0040c851
    PUSH EBX                            ; 0040c852
    CALL FUN_0040c810                   ; 0040c853
        ;   XREF to: 0040c810 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c810()
    ADD ESP,0x8                         ; 0040c858
    TEST EAX,EAX                        ; 0040c85b
    JZ 0x0040c84b                       ; 0040c85d
        ;   XREF to: 0040c84b (CONDITIONAL_JUMP)  ; LAB_0040c84b
    MOV EAX,EBX                         ; 0040c85f
    POP EBX                             ; 0040c861
    RET                                 ; 0040c862

