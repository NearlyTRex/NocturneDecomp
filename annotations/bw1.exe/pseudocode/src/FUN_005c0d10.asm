; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0d10(int param_1)
;
;
; XREF[53]:
;   FUN_0040d220 at 0040d2b5
;   FUN_0043e6d0 at 0043eb5a
;   FUN_00445430 at 004454e7
;   FUN_00447db0 at 00447ea1
;   FUN_0044fff0 at 004500b8
;   FUN_00453610 at 00453bfa
;   FUN_0045da30 at 0045da5d
;   FUN_0045ddb0 at 0045de39
;   FUN_004668a0 at 00466911
;   FUN_0048afa0 at 0048afcf
;   ... and 43 more
;
; Referenced Globals:
;   void* PTR_FUN_00626610 = 005c50d4
;   void* PTR_FUN_00626614 = 005c50d4
;   undefined4 DAT_02c9f050
;
; Called Functions:
;   FUN_005c0d54
;   FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d10
        ;   Label: FUN_005c0d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c0d11
    CALL dword ptr [0x00626610]         ; 005c0d15 | PTR_FUN_00626610
    MOV EAX,[0x02c9f050]                ; 005c0d1b | DAT_02c9f050
    TEST EAX,EAX                        ; 005c0d20
    JNZ 0x005c0d31                      ; 005c0d22
        ;   XREF to: 005c0d31 (CONDITIONAL_JUMP)  ; LAB_005c0d31
    CALL dword ptr [0x00626614]         ; 005c0d24 | PTR_FUN_00626614
        ;   Label: LAB_005c0d24
    MOV EAX,0xffffffff                  ; 005c0d2a
    POP EBX                             ; 005c0d2f
    RET                                 ; 005c0d30
    CMP EBX,dword ptr [EAX + 0x4]       ; 005c0d31
        ;   Label: LAB_005c0d31
    JZ 0x005c0d3e                       ; 005c0d34
        ;   XREF to: 005c0d3e (CONDITIONAL_JUMP)  ; LAB_005c0d3e
    MOV EAX,dword ptr [EAX]             ; 005c0d36
    TEST EAX,EAX                        ; 005c0d38
    JZ 0x005c0d24                       ; 005c0d3a
        ;   XREF to: 005c0d24 (CONDITIONAL_JUMP)  ; LAB_005c0d24
    JMP 0x005c0d31                      ; 005c0d3c
        ;   XREF to: 005c0d31 (UNCONDITIONAL_JUMP)  ; LAB_005c0d31
    CALL dword ptr [0x00626614]         ; 005c0d3e | PTR_FUN_00626614
        ;   Label: LAB_005c0d3e
    PUSH 0x1                            ; 005c0d44
    PUSH EBX                            ; 005c0d46
    CALL FUN_005c0d54                   ; 005c0d47
        ;   XREF to: 005c0d54 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d54()
    ADD ESP,0x8                         ; 005c0d4c
    POP EBX                             ; 005c0d4f
    RET                                 ; 005c0d50

