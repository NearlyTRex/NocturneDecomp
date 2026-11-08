; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573a80(undefined4 param_1)
;
;
; XREF[59]:
;   FUN_004123d0 at 004123e2
;   FUN_00413f90 at 00413fa2
;   FUN_00416790 at 00416b9e
;   FUN_0041bb40 at 0041be16
;   FUN_0041d330 at 0041d33c
;   FUN_00424b10 at 00424b23
;   FUN_00428ae0 at 00428bc7
;   FUN_0042b850 at 0042b925
;   FUN_0042d5f0 at 0042d61e
;   FUN_0042e1a0 at 0042e3fa
;   ... and 49 more
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00571d70
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573a80
        ;   Label: FUN_00573a80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573a82
    PUSH EDX                            ; 00573a86
    CALL FUN_0056fa10                   ; 00573a87
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 00573a8c
    TEST EAX,EAX                        ; 00573a8f
    JNZ 0x00573a94                      ; 00573a91
        ;   XREF to: 00573a94 (CONDITIONAL_JUMP)  ; LAB_00573a94
    RET                                 ; 00573a93
    PUSH EAX                            ; 00573a94
        ;   Label: LAB_00573a94
    CALL FUN_00571d70                   ; 00573a95
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD ESP,0x4                         ; 00573a9a
    CALL FUN_00573e70                   ; 00573a9d
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573aa2
    RET                                 ; 00573aa7

