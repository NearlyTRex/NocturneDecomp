; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00527230(undefined4 param_1)
;
;
; XREF[14]:
;   FUN_00424f40 at 00424f6e
;   FUN_004259f0 at 00425c04
;   FUN_004269b0 at 00426cf3
;   FUN_00427b60 at 00427b82
;   FUN_0047ac50 at 0047b2dd
;   FUN_004874d0 at 0048754c
;   FUN_004b56f0 at 004b572f
;   FUN_004caef0 at 004caffe
;   FUN_004fe5b0 at 004fe6fb
;   FUN_0052df90 at 0052dfa6
;   ... and 4 more
;
; Called Functions:
;   FUN_005234b0
;   FUN_00525570
;   FUN_00528890
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00527230
        ;   Label: FUN_00527230
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527232
    PUSH EDX                            ; 00527236
    CALL FUN_005234b0                   ; 00527237
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005234b0()
    ADD ESP,0x8                         ; 0052723c
    TEST EAX,EAX                        ; 0052723f
    JNZ 0x00527244                      ; 00527241
        ;   XREF to: 00527244 (CONDITIONAL_JUMP)  ; LAB_00527244
    RET                                 ; 00527243
    PUSH EAX                            ; 00527244
        ;   Label: LAB_00527244
    CALL FUN_00525570                   ; 00527245
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined FUN_00525570()
    ADD ESP,0x4                         ; 0052724a
    CALL FUN_00528890                   ; 0052724d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
    MOV EAX,0x1                         ; 00527252
    RET                                 ; 00527257

