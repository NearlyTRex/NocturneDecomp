; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f230(int param_1)
;
;
; XREF[5]:
;   FUN_0050f1e0 at 0050f1e6
;   FUN_0050f910 at 0050f91d
;   FUN_0050fa90 at 0050faa2
;   FUN_0050ff60 at 0050ff70
;   FUN_00510160 at 0051016a
;
; Called Functions:
;   FUN_0050f200
;   FUN_005a30b6
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f230
        ;   Label: FUN_0050f230
    PUSH ESI                            ; 0050f231
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f232
    MOV EDX,dword ptr [EBX + 0x14]      ; 0050f236
    TEST EDX,EDX                        ; 0050f239
    JNZ 0x0050f255                      ; 0050f23b
        ;   XREF to: 0050f255 (CONDITIONAL_JUMP)  ; LAB_0050f255
    MOV ESI,dword ptr [EBX + 0x20]      ; 0050f23d
        ;   Label: LAB_0050f23d
    PUSH ESI                            ; 0050f240
    CALL FUN_005a30b6                   ; 0050f241
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0050f246
    PUSH EBX                            ; 0050f249
    CALL FUN_0050f200                   ; 0050f24a
        ;   XREF to: 0050f200 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f200()
    ADD ESP,0x4                         ; 0050f24f
    POP ESI                             ; 0050f252
    POP EBX                             ; 0050f253
    RET                                 ; 0050f254
    PUSH EDX                            ; 0050f255
        ;   Label: LAB_0050f255
    CALL FUN_005a3770                   ; 0050f256
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0050f25b
    JMP 0x0050f23d                      ; 0050f25e
        ;   XREF to: 0050f23d (UNCONDITIONAL_JUMP)  ; LAB_0050f23d

