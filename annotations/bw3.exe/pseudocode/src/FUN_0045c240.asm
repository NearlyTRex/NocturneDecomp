; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045c240(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00420d30 at 00420d45
;
; Referenced Globals:
;   undefined1* PTR_FUN_005de514 = 0045c240
;   undefined4 DAT_005de530
;
; Called Functions:
;   FUN_00448c40
;   FUN_0045c380
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c240
        ;   Label: FUN_0045c240
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045c241
    TEST byte ptr [ESP + 0xc],0x4       ; 0045c245
    JNZ 0x0045c276                      ; 0045c24a
        ;   XREF to: 0045c276 (CONDITIONAL_JUMP)  ; LAB_0045c276
    PUSH EBX                            ; 0045c24c
    MOV dword ptr [EBX + 0x3c],0x5de514 ; 0045c24d | PTR_FUN_005de514
    CALL FUN_0045c380                   ; 0045c254
        ;   XREF to: 0045c380 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c380()
    ADD ESP,0x4                         ; 0045c259
    PUSH 0x1                            ; 0045c25c
    PUSH EBX                            ; 0045c25e
    CALL FUN_00448c40                   ; 0045c25f
        ;   XREF to: 00448c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00448c40()
    ADD ESP,0x8                         ; 0045c264
    MOV DL,byte ptr [ESP + 0xc]         ; 0045c267
    MOV EBX,EAX                         ; 0045c26b
    TEST DL,0x2                         ; 0045c26d
    JNZ 0x0045c291                      ; 0045c270
        ;   XREF to: 0045c291 (CONDITIONAL_JUMP)  ; LAB_0045c291
    MOV EAX,EBX                         ; 0045c272
    POP EBX                             ; 0045c274
    RET                                 ; 0045c275
    PUSH 0x5de530                       ; 0045c276 | DAT_005de530
        ;   Label: LAB_0045c276
    PUSH EBX                            ; 0045c27b
    CALL FUN_005a308f                   ; 0045c27c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0045c281
    PUSH EAX                            ; 0045c284
    CALL FUN_005a30b6                   ; 0045c285
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0045c28a
    MOV EAX,EBX                         ; 0045c28d
    POP EBX                             ; 0045c28f
    RET                                 ; 0045c290
    PUSH EAX                            ; 0045c291
        ;   Label: LAB_0045c291
    CALL FUN_005a30c4                   ; 0045c292
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0045c297
    MOV EAX,EBX                         ; 0045c29a
    POP EBX                             ; 0045c29c
    RET                                 ; 0045c29d

