; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b4910(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777bc
;
; Called Functions:
;   FUN_0040a390
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4910
        ;   Label: FUN_004b4910
    MOV EAX,[0x005b9354]                ; 004b4914 | DAT_005b9354
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004b4919 | DAT_01c777bc
    JNZ 0x004b492e                      ; 004b4920
        ;   XREF to: 004b492e (CONDITIONAL_JUMP)  ; LAB_004b492e
    TEST dword ptr [EDX + 0xbc8c],0x7fffffff ; 004b4922
    JZ 0x004b4931                       ; 004b492c
        ;   XREF to: 004b4931 (CONDITIONAL_JUMP)  ; LAB_004b4931
    XOR EAX,EAX                         ; 004b492e
        ;   Label: LAB_004b492e
    RET                                 ; 004b4930
    PUSH ESI                            ; 004b4931
        ;   Label: LAB_004b4931
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b4932
    PUSH dword ptr [ESP + 0x10]         ; 004b4936
    PUSH ESI                            ; 004b493a
    PUSH EDX                            ; 004b493b
    CALL FUN_0040a390                   ; 004b493c
        ;   XREF to: 0040a390 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a390()
    ADD ESP,0xc                         ; 004b4941
    POP ESI                             ; 004b4944
    RET                                 ; 004b4945

