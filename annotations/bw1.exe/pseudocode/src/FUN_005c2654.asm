; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2654(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005c2694 at 005c26a4
;
; Called Functions:
;   FUN_005c2622
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c2654
        ;   Label: FUN_005c2654
    TEST EAX,EAX                        ; 005c2658
    JNZ 0x005c265d                      ; 005c265a
        ;   XREF to: 005c265d (CONDITIONAL_JUMP)  ; LAB_005c265d
    RET                                 ; 005c265c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c265d
        ;   Label: LAB_005c265d
    MOV dword ptr [EAX],EDX             ; 005c2661
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c2663
    PUSH EDX                            ; 005c2667
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c2668
    PUSH ECX                            ; 005c266c
    ADD EAX,0x4                         ; 005c266d
    PUSH EAX                            ; 005c2670
    CALL FUN_005c2622                   ; 005c2671
        ;   XREF to: 005c2622 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2622()
    ADD ESP,0xc                         ; 005c2676
    RET                                 ; 005c2679

