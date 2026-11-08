; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b89c0(int param_1)
;
;
; XREF[50]:
;   FUN_0040d5a0 at 0040d636
;   FUN_00436710 at 004367c7
;   FUN_00438af0 at 00438be1
;   FUN_0043e930 at 0043e9f8
;   FUN_00441f50 at 0044253a
;   FUN_004478d0 at 004478fd
;   FUN_00447c50 at 00447cd9
;   FUN_0044dcd0 at 0044dd41
;   FUN_00472ab0 at 00472adf
;   FUN_004a41b0 at 004a42d7
;   ... and 40 more
;
; Referenced Globals:
;   void* PTR_FUN_0061f2b8 = 005bce04
;   void* PTR_FUN_0061f2bc = 005bce04
;   undefined4 DAT_02680160
;
; Called Functions:
;   FUN_005b8a04
;   FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b89c0
        ;   Label: FUN_005b89c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b89c1
    CALL dword ptr [0x0061f2b8]         ; 005b89c5 | PTR_FUN_0061f2b8
    MOV EAX,[0x02680160]                ; 005b89cb | DAT_02680160
    TEST EAX,EAX                        ; 005b89d0
    JNZ 0x005b89e1                      ; 005b89d2
        ;   XREF to: 005b89e1 (CONDITIONAL_JUMP)  ; LAB_005b89e1
    CALL dword ptr [0x0061f2bc]         ; 005b89d4 | PTR_FUN_0061f2bc
        ;   Label: LAB_005b89d4
    MOV EAX,0xffffffff                  ; 005b89da
    POP EBX                             ; 005b89df
    RET                                 ; 005b89e0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005b89e1
        ;   Label: LAB_005b89e1
    JZ 0x005b89ee                       ; 005b89e4
        ;   XREF to: 005b89ee (CONDITIONAL_JUMP)  ; LAB_005b89ee
    MOV EAX,dword ptr [EAX]             ; 005b89e6
    TEST EAX,EAX                        ; 005b89e8
    JZ 0x005b89d4                       ; 005b89ea
        ;   XREF to: 005b89d4 (CONDITIONAL_JUMP)  ; LAB_005b89d4
    JMP 0x005b89e1                      ; 005b89ec
        ;   XREF to: 005b89e1 (UNCONDITIONAL_JUMP)  ; LAB_005b89e1
    CALL dword ptr [0x0061f2bc]         ; 005b89ee | PTR_FUN_0061f2bc
        ;   Label: LAB_005b89ee
    PUSH 0x1                            ; 005b89f4
    PUSH EBX                            ; 005b89f6
    CALL FUN_005b8a04                   ; 005b89f7
        ;   XREF to: 005b8a04 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8a04()
    ADD ESP,0x8                         ; 005b89fc
    POP EBX                             ; 005b89ff
    RET                                 ; 005b8a00

