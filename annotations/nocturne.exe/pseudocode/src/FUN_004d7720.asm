; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7720(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0050e490 at 0050e4ac
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_0045f190
;   FUN_004d74a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d7720
        ;   Label: FUN_004d7720
    PUSH EDX                            ; 004d7724
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d7725
    PUSH ECX                            ; 004d7729
    CALL FUN_004d74a0                   ; 004d772a
        ;   XREF to: 004d74a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d74a0()
    ADD ESP,0x8                         ; 004d772f
    TEST EAX,EAX                        ; 004d7732
    JNZ 0x004d7737                      ; 004d7734
        ;   XREF to: 004d7737 (CONDITIONAL_JUMP)  ; LAB_004d7737
    RET                                 ; 004d7736
    PUSH EBX                            ; 004d7737
        ;   Label: LAB_004d7737
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7738
    ADD EAX,0xe8                        ; 004d773c
    PUSH EAX                            ; 004d7741
    MOV EBX,dword ptr [0x005ae704]      ; 004d7742 | DAT_005ae704
    PUSH EBX                            ; 004d7748 | DAT_01b4d738
    CALL FUN_0045f190                   ; 004d7749
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f190()
    ADD ESP,0x8                         ; 004d774e
    POP EBX                             ; 004d7751
    RET                                 ; 004d7752

