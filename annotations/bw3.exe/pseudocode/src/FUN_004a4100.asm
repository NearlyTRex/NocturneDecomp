; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a4100(void)
;
;
; XREF[1]:
;   FUN_005365c0 at 0053685e
;
; Referenced Globals:
;   undefined4 DAT_01cbb9bc
;   undefined4 DAT_01cbba18
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 004a0cc0
        ;   Label: LAB_004a0cc0
    RET                                 ; 004a0cc2
    MOV EDX,dword ptr [0x01cbb9bc]      ; 004a4100 | DAT_01cbb9bc
        ;   Label: FUN_004a4100
    XOR EAX,EAX                         ; 004a4106
    CMP EDX,0x1                         ; 004a4108
    JZ 0x004a4124                       ; 004a410b
        ;   XREF to: 004a4124 (CONDITIONAL_JUMP)  ; LAB_004a4124
    ADD EAX,0x5c                        ; 004a410d
        ;   Label: LAB_004a410d
    CMP EAX,0x730                       ; 004a4110
    JGE 0x004a0cc0                      ; 004a4115
        ;   XREF to: 004a0cc0 (CONDITIONAL_JUMP)  ; LAB_004a0cc0
    CMP dword ptr [EAX + 0x1cbb9bc],0x1 ; 004a411b | DAT_01cbba18
    JNZ 0x004a410d                      ; 004a4122
        ;   XREF to: 004a410d (CONDITIONAL_JUMP)  ; LAB_004a410d
    MOV EAX,0x1                         ; 004a4124
        ;   Label: LAB_004a4124
    RET                                 ; 004a4129

