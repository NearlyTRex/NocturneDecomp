; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005715ac(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00571858 at 00571881
;
; Called Functions:
;   FUN_00571564
;   FUN_00571588
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005715ac
        ;   Label: FUN_005715ac
    PUSH EDX                            ; 005715b0
    CALL FUN_00571588                   ; 005715b1
        ;   XREF to: 00571588 (UNCONDITIONAL_CALL)  ; undefined FUN_00571588()
    ADD ESP,0x4                         ; 005715b6
    CMP EAX,dword ptr [ESP + 0x8]       ; 005715b9
    JNZ 0x005715cd                      ; 005715bd
        ;   XREF to: 005715cd (CONDITIONAL_JUMP)  ; LAB_005715cd
    MOV ECX,dword ptr [ESP + 0x4]       ; 005715bf
    PUSH ECX                            ; 005715c3
    CALL FUN_00571564                   ; 005715c4
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; undefined FUN_00571564()
    ADD ESP,0x4                         ; 005715c9
    RET                                 ; 005715cc
    XOR EAX,EAX                         ; 005715cd
        ;   Label: LAB_005715cd
    RET                                 ; 005715cf

