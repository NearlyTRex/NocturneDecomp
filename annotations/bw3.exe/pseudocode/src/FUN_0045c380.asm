; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c380(int param_1)
;
;
; XREF[2]:
;   FUN_0045c240 at 0045c254
;   FUN_0045c2a0 at 0045c2aa
;
; Called Functions:
;   FUN_0045c500
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c380
        ;   Label: FUN_0045c380
    PUSH ESI                            ; 0045c381
    PUSH EBP                            ; 0045c382
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045c383
    CMP dword ptr [EBX + 0x2f94],0x0    ; 0045c387
    JNZ 0x0045c3c4                      ; 0045c38e
        ;   XREF to: 0045c3c4 (CONDITIONAL_JUMP)  ; LAB_0045c3c4
    PUSH EBX                            ; 0045c390
        ;   Label: LAB_0045c390
    CALL FUN_0045c500                   ; 0045c391
        ;   XREF to: 0045c500 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c500()
    MOV ESI,dword ptr [EBX + 0x2fa0]    ; 0045c396
    ADD ESP,0x4                         ; 0045c39c
    TEST ESI,ESI                        ; 0045c39f
    JZ 0x0045c3b6                       ; 0045c3a1
        ;   XREF to: 0045c3b6 (CONDITIONAL_JUMP)  ; LAB_0045c3b6
    PUSH ESI                            ; 0045c3a3
    CALL FUN_005a3770                   ; 0045c3a4
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0045c3a9
    MOV dword ptr [EBX + 0x2fa0],0x0    ; 0045c3ac
    MOV EBP,dword ptr [EBX + 0x1c6c]    ; 0045c3b6
        ;   Label: LAB_0045c3b6
    TEST EBP,EBP                        ; 0045c3bc
    JNZ 0x0045c3e9                      ; 0045c3be
        ;   XREF to: 0045c3e9 (CONDITIONAL_JUMP)  ; LAB_0045c3e9
    POP EBP                             ; 0045c3c0
    POP ESI                             ; 0045c3c1
    POP EBX                             ; 0045c3c2
    RET                                 ; 0045c3c3
    MOV ECX,dword ptr [EBX + 0x2f98]    ; 0045c3c4
        ;   Label: LAB_0045c3c4
    PUSH ECX                            ; 0045c3ca
    CALL FUN_005a3770                   ; 0045c3cb
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    MOV dword ptr [EBX + 0x2f94],0x0    ; 0045c3d0
    ADD ESP,0x4                         ; 0045c3da
    MOV dword ptr [EBX + 0x2f98],0x0    ; 0045c3dd
    JMP 0x0045c390                      ; 0045c3e7
        ;   XREF to: 0045c390 (UNCONDITIONAL_JUMP)  ; LAB_0045c390
    PUSH EBP                            ; 0045c3e9
        ;   Label: LAB_0045c3e9
    CALL FUN_005a3770                   ; 0045c3ea
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0045c3ef
    MOV dword ptr [EBX + 0x1c6c],0x0    ; 0045c3f2
    POP EBP                             ; 0045c3fc
    POP ESI                             ; 0045c3fd
    POP EBX                             ; 0045c3fe
    RET                                 ; 0045c3ff

