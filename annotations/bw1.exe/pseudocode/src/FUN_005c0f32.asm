; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c0f32(int param_1)
;
;
; XREF[22]:
;   FUN_0040e210 at 0040e258
;   FUN_00418940 at 00418958
;   FUN_00441cc0 at 00441ce9
;   FUN_0045d7c0 at 0045d837
;   FUN_0045e000 at 0045e009
;   FUN_004bb570 at 004bb583
;   FUN_004bb6f0 at 004bb842
;   FUN_004bc020 at 004bc03e
;   FUN_004bca60 at 004bca69
;   FUN_004d27b0 at 004d3c54
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_02c9f6b8
;   undefined4 DAT_02c9f6bc
;
; Called Functions:
;   FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0f32
        ;   Label: FUN_005c0f32
    PUSH ESI                            ; 005c0f33
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0f34
    TEST EBX,EBX                        ; 005c0f38
    JZ 0x005c0f62                       ; 005c0f3a
        ;   XREF to: 005c0f62 (CONDITIONAL_JUMP)  ; LAB_005c0f62
    PUSH EBX                            ; 005c0f3c
        ;   Label: LAB_005c0f3c
    CALL FUN_005c08d0                   ; 005c0f3d
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005c0f42
    MOV ESI,EAX                         ; 005c0f45
    TEST EAX,EAX                        ; 005c0f47
    JNZ 0x005c0f5d                      ; 005c0f49
        ;   XREF to: 005c0f5d (CONDITIONAL_JUMP)  ; LAB_005c0f5d
    MOV EAX,[0x02c9f6bc]                ; 005c0f4b | DAT_02c9f6bc
    TEST EAX,EAX                        ; 005c0f50
    JNZ 0x005c0f65                      ; 005c0f52
        ;   XREF to: 005c0f65 (CONDITIONAL_JUMP)  ; LAB_005c0f65
    MOV EAX,[0x02c9f6b8]                ; 005c0f54 | DAT_02c9f6b8
        ;   Label: LAB_005c0f54
    TEST EAX,EAX                        ; 005c0f59
    JNZ 0x005c0f71                      ; 005c0f5b
        ;   XREF to: 005c0f71 (CONDITIONAL_JUMP)  ; LAB_005c0f71
    MOV EAX,ESI                         ; 005c0f5d
        ;   Label: LAB_005c0f5d
    POP ESI                             ; 005c0f5f
    POP EBX                             ; 005c0f60
    RET                                 ; 005c0f61
    INC EBX                             ; 005c0f62
        ;   Label: LAB_005c0f62
    JMP 0x005c0f3c                      ; 005c0f63
        ;   XREF to: 005c0f3c (UNCONDITIONAL_JUMP)  ; LAB_005c0f3c
    PUSH EBX                            ; 005c0f65
        ;   Label: LAB_005c0f65
    CALL EAX                            ; 005c0f66
    ADD ESP,0x4                         ; 005c0f68
    TEST EAX,EAX                        ; 005c0f6b
    JNZ 0x005c0f3c                      ; 005c0f6d
        ;   XREF to: 005c0f3c (CONDITIONAL_JUMP)  ; LAB_005c0f3c
    JMP 0x005c0f54                      ; 005c0f6f
        ;   XREF to: 005c0f54 (UNCONDITIONAL_JUMP)  ; LAB_005c0f54
    CALL EAX                            ; 005c0f71
        ;   Label: LAB_005c0f71
    JMP 0x005c0f3c                      ; 005c0f73
        ;   XREF to: 005c0f3c (UNCONDITIONAL_JUMP)  ; LAB_005c0f3c

