; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e3a0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)
;
;
; XREF[12]:
;   FUN_0042d8e0 at 0042d92b
;   FUN_0042f010 at 0042f1d0
;   FUN_005095f0 at 0050974f
;   FUN_00545710 at 0054588b
;   FUN_00591680 at 005917b6
;   FUN_00593710 at 00593896
;   FUN_00597970 at 00597ab2
;   FUN_00598480 at 00598530
;   FUN_00599b20 at 00599b83
;   FUN_0059b3d0 at 0059b433
;   ... and 2 more
;
; Called Functions:
;   FUN_0054af10
;   FUN_0054e4b0
;   FUN_0054e500
;   FUN_0054e550
;   FUN_0054e5a0
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e3a0
        ;   Label: FUN_0054e3a0
    PUSH ESI                            ; 0054e3a1
    PUSH EDI                            ; 0054e3a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e3a3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054e3a7
    MOV ESI,EAX                         ; 0054e3ab
    TEST EAX,EAX                        ; 0054e3ad
    JL 0x0054e3e7                       ; 0054e3af
        ;   XREF to: 0054e3e7 (CONDITIONAL_JUMP)  ; LAB_0054e3e7
    PUSH ESI                            ; 0054e3b1
        ;   Label: LAB_0054e3b1
    PUSH EBX                            ; 0054e3b2
    CALL FUN_0054e4b0                   ; 0054e3b3
        ;   XREF to: 0054e4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4b0()
    ADD ESP,0x8                         ; 0054e3b8
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054e3bb
    JNZ 0x0054e404                      ; 0054e3c0
        ;   XREF to: 0054e404 (CONDITIONAL_JUMP)  ; LAB_0054e404
    CMP dword ptr [ESP + 0x18],0x0      ; 0054e3c2
    JL 0x0054e410                       ; 0054e3c7
        ;   XREF to: 0054e410 (CONDITIONAL_JUMP)  ; LAB_0054e410
    TEST byte ptr [ESP + 0x19],0x1      ; 0054e3c9
    JZ 0x0054e410                       ; 0054e3ce
        ;   XREF to: 0054e410 (CONDITIONAL_JUMP)  ; LAB_0054e410
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054e3d0
        ;   Label: LAB_0054e3d0
    PUSH ESI                            ; 0054e3d4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054e3d5
    PUSH EDI                            ; 0054e3d9
    PUSH EBX                            ; 0054e3da
    CALL FUN_0054e5a0                   ; 0054e3db
        ;   XREF to: 0054e5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e5a0()
    ADD ESP,0xc                         ; 0054e3e0
    POP EDI                             ; 0054e3e3
    POP ESI                             ; 0054e3e4
    POP EBX                             ; 0054e3e5
    RET                                 ; 0054e3e6
    LEA EAX,[EBX + 0x2328]              ; 0054e3e7
        ;   Label: LAB_0054e3e7
    PUSH EAX                            ; 0054e3ed
    PUSH EBX                            ; 0054e3ee
    CALL FUN_0054ea40                   ; 0054e3ef
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0054e3f4
    PUSH EAX                            ; 0054e3f7
    CALL FUN_0054af10                   ; 0054e3f8
        ;   XREF to: 0054af10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054af10()
    ADD ESP,0x8                         ; 0054e3fd
    MOV ESI,EAX                         ; 0054e400
    JMP 0x0054e3b1                      ; 0054e402
        ;   XREF to: 0054e3b1 (UNCONDITIONAL_JUMP)  ; LAB_0054e3b1
    PUSH ESI                            ; 0054e404
        ;   Label: LAB_0054e404
    PUSH EBX                            ; 0054e405
    CALL FUN_0054e500                   ; 0054e406
        ;   XREF to: 0054e500 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e500()
    ADD ESP,0x8                         ; 0054e40b
    JMP 0x0054e3d0                      ; 0054e40e
        ;   XREF to: 0054e3d0 (UNCONDITIONAL_JUMP)  ; LAB_0054e3d0
    PUSH ESI                            ; 0054e410
        ;   Label: LAB_0054e410
    PUSH EBX                            ; 0054e411
    CALL FUN_0054e550                   ; 0054e412
        ;   XREF to: 0054e550 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e550()
    ADD ESP,0x8                         ; 0054e417
    JMP 0x0054e3d0                      ; 0054e41a
        ;   XREF to: 0054e3d0 (UNCONDITIONAL_JUMP)  ; LAB_0054e3d0

