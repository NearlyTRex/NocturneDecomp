; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3a90(int param_1)
;
;
; XREF[53]:
;   FUN_0040d460 at 0040d4f5
;   FUN_0043c330 at 0043c7ba
;   FUN_00441ff0 at 004420a7
;   FUN_00444970 at 00444a61
;   FUN_0044c130 at 0044c1f8
;   FUN_0044f750 at 0044fd3a
;   FUN_00459980 at 004599ad
;   FUN_00459d00 at 00459d89
;   FUN_00460550 at 004605c1
;   FUN_00473b20 at 00473b4f
;   ... and 43 more
;
; Referenced Globals:
;   void* PTR_FUN_006079b4 = 005a7f44
;   void* PTR_FUN_006079b8 = 005a7f44
;   undefined4 DAT_02d252a0
;
; Called Functions:
;   FUN_005a3ad4
;   FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3a90
        ;   Label: FUN_005a3a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3a91
    CALL dword ptr [0x006079b4]         ; 005a3a95 | PTR_FUN_006079b4
    MOV EAX,[0x02d252a0]                ; 005a3a9b | DAT_02d252a0
    TEST EAX,EAX                        ; 005a3aa0
    JNZ 0x005a3ab1                      ; 005a3aa2
        ;   XREF to: 005a3ab1 (CONDITIONAL_JUMP)  ; LAB_005a3ab1
    CALL dword ptr [0x006079b8]         ; 005a3aa4 | PTR_FUN_006079b8
        ;   Label: LAB_005a3aa4
    MOV EAX,0xffffffff                  ; 005a3aaa
    POP EBX                             ; 005a3aaf
    RET                                 ; 005a3ab0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005a3ab1
        ;   Label: LAB_005a3ab1
    JZ 0x005a3abe                       ; 005a3ab4
        ;   XREF to: 005a3abe (CONDITIONAL_JUMP)  ; LAB_005a3abe
    MOV EAX,dword ptr [EAX]             ; 005a3ab6
    TEST EAX,EAX                        ; 005a3ab8
    JZ 0x005a3aa4                       ; 005a3aba
        ;   XREF to: 005a3aa4 (CONDITIONAL_JUMP)  ; LAB_005a3aa4
    JMP 0x005a3ab1                      ; 005a3abc
        ;   XREF to: 005a3ab1 (UNCONDITIONAL_JUMP)  ; LAB_005a3ab1
    CALL dword ptr [0x006079b8]         ; 005a3abe | PTR_FUN_006079b8
        ;   Label: LAB_005a3abe
    PUSH 0x1                            ; 005a3ac4
    PUSH EBX                            ; 005a3ac6
    CALL FUN_005a3ad4                   ; 005a3ac7
        ;   XREF to: 005a3ad4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3ad4()
    ADD ESP,0x8                         ; 005a3acc
    POP EBX                             ; 005a3acf
    RET                                 ; 005a3ad0

