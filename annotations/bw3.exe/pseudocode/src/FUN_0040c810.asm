; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c810(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_0040c840 at 0040c853
;   FUN_0048b950 at 0048b9e5
;   FUN_005289b0 at 00528a36
;   FUN_0053d770 at 0053d7b8
;
; Called Functions:
;   FUN_0040c7c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c810
        ;   Label: FUN_0040c810
    TEST EAX,EAX                        ; 0040c814
    JNZ 0x0040c819                      ; 0040c816
        ;   XREF to: 0040c819 (CONDITIONAL_JUMP)  ; LAB_0040c819
    RET                                 ; 0040c818
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c819
        ;   Label: LAB_0040c819
    PUSH EDX                            ; 0040c81d
    PUSH EAX                            ; 0040c81e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c81f
    CALL dword ptr [EDX + 0xcc]         ; 0040c825
    ADD ESP,0x4                         ; 0040c82b
    PUSH EAX                            ; 0040c82e
    CALL FUN_0040c7c0                   ; 0040c82f
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c7c0()
    ADD ESP,0x8                         ; 0040c834
    RET                                 ; 0040c837

