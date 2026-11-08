; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c1594(int param_1)
;
;
; XREF[1]:
;   FUN_005c1614 at 005c1657
;
; Referenced Globals:
;   void* PTR_FUN_00626610 = 005c50d4
;   void* PTR_FUN_00626614 = 005c50d4
;   undefined4 DAT_02c9f050
;   undefined4 DAT_02c9f054
;
; Called Functions:
;   FUN_005c0e40
;   FUN_005c50d4
;   FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1594
        ;   Label: FUN_005c1594
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1595
    CALL dword ptr [0x00626610]         ; 005c1599 | PTR_FUN_00626610
    MOV EAX,[0x02c9f050]                ; 005c159f | DAT_02c9f050
    TEST EAX,EAX                        ; 005c15a4
    JZ 0x005c15d0                       ; 005c15a6
        ;   XREF to: 005c15d0 (CONDITIONAL_JUMP)  ; LAB_005c15d0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c15a8
        ;   Label: LAB_005c15a8
    CMP EBX,EDX                         ; 005c15ab
    JNZ 0x005c15ca                      ; 005c15ad
        ;   XREF to: 005c15ca (CONDITIONAL_JUMP)  ; LAB_005c15ca
    TEST byte ptr [EDX + 0xc],0x3       ; 005c15af
    JZ 0x005c15c0                       ; 005c15b3
        ;   XREF to: 005c15c0 (CONDITIONAL_JUMP)  ; LAB_005c15c0
    PUSH 0x1                            ; 005c15b5
    PUSH EDX                            ; 005c15b7
    CALL FUN_005c0e40                   ; 005c15b8
        ;   XREF to: 005c0e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e40()
    ADD ESP,0x8                         ; 005c15bd
    CALL dword ptr [0x00626614]         ; 005c15c0 | PTR_FUN_00626614
        ;   Label: LAB_005c15c0
    MOV EAX,EBX                         ; 005c15c6
    POP EBX                             ; 005c15c8
    RET                                 ; 005c15c9
    MOV EAX,dword ptr [EAX]             ; 005c15ca
        ;   Label: LAB_005c15ca
    TEST EAX,EAX                        ; 005c15cc
    JNZ 0x005c15a8                      ; 005c15ce
        ;   XREF to: 005c15a8 (CONDITIONAL_JUMP)  ; LAB_005c15a8
    MOV EDX,0x2c9f054                   ; 005c15d0
        ;   Label: LAB_005c15d0
    MOV EAX,dword ptr [EDX]             ; 005c15d5 | DAT_02c9f054
        ;   Label: LAB_005c15d5
    TEST EAX,EAX                        ; 005c15d7
    JZ 0x005c15ff                       ; 005c15d9
        ;   XREF to: 005c15ff (CONDITIONAL_JUMP)  ; LAB_005c15ff
    CMP EBX,dword ptr [EAX + 0x4]       ; 005c15db
    JNZ 0x005c15fb                      ; 005c15de
        ;   XREF to: 005c15fb (CONDITIONAL_JUMP)  ; LAB_005c15fb
    MOV ECX,dword ptr [EAX]             ; 005c15e0
    MOV dword ptr [EDX],ECX             ; 005c15e2 | DAT_02c9f054
    MOV EDX,dword ptr [0x02c9f050]      ; 005c15e4 | DAT_02c9f050
    MOV [0x02c9f050],EAX                ; 005c15ea | DAT_02c9f050
    MOV dword ptr [EAX],EDX             ; 005c15ef
    CALL dword ptr [0x00626614]         ; 005c15f1 | PTR_FUN_00626614
    MOV EAX,EBX                         ; 005c15f7
    POP EBX                             ; 005c15f9
    RET                                 ; 005c15fa
    MOV EDX,EAX                         ; 005c15fb
        ;   Label: LAB_005c15fb
    JMP 0x005c15d5                      ; 005c15fd
        ;   XREF to: 005c15d5 (UNCONDITIONAL_JUMP)  ; LAB_005c15d5
    PUSH 0x4                            ; 005c15ff
        ;   Label: LAB_005c15ff
    CALL FUN_005c6450                   ; 005c1601
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c1606
    CALL dword ptr [0x00626614]         ; 005c1609 | PTR_FUN_00626614
    XOR EAX,EAX                         ; 005c160f
    POP EBX                             ; 005c1611
    RET                                 ; 005c1612

