; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bd8d0(void)
;
;
; XREF[3]:
;   FUN_00491f40 at 0049313d
;   FUN_004b7f90 at 004b8d08
;   FUN_00529a70 at 0052c91f
;
; Referenced Globals:
;   undefined4 DAT_01d22c84
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d22c84]      ; 004bd8d0 | DAT_01d22c84
        ;   Label: FUN_004bd8d0
    TEST EDX,EDX                        ; 004bd8d6
    JZ 0x004bd8df                       ; 004bd8d8
        ;   XREF to: 004bd8df (CONDITIONAL_JUMP)  ; LAB_004bd8df
    CMP EDX,0x5                         ; 004bd8da
    JNZ 0x004bd8e5                      ; 004bd8dd
        ;   XREF to: 004bd8e5 (CONDITIONAL_JUMP)  ; LAB_004bd8e5
    MOV EAX,0x1                         ; 004bd8df
        ;   Label: LAB_004bd8df
    RET                                 ; 004bd8e4
    XOR EAX,EAX                         ; 004bd8e5
        ;   Label: LAB_004bd8e5
    RET                                 ; 004bd8e7

