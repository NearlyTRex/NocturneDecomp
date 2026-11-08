; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ad9a0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005a3e30 at 005a3e4c
;
; Referenced Globals:
;   undefined4 DAT_005f9902
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad9a0
        ;   Label: FUN_005ad9a0
    PUSH EBP                            ; 005ad9a1
    MOV EBP,ESP                         ; 005ad9a2
    AND ESP,0xfffffff8                  ; 005ad9a4
    MOV EBX,dword ptr [EBP + 0xc]       ; 005ad9a7
    CMP dword ptr [EBX + 0x304],0x0     ; 005ad9aa
    JNZ 0x005ad9ea                      ; 005ad9b1
        ;   XREF to: 005ad9ea (CONDITIONAL_JUMP)  ; LAB_005ad9ea
    CMP dword ptr [EBX + 0x2d4],0x0     ; 005ad9b3
    JNZ 0x005ad9ea                      ; 005ad9ba
        ;   XREF to: 005ad9ea (CONDITIONAL_JUMP)  ; LAB_005ad9ea
    CMP dword ptr [EBX + 0x55c],0x0     ; 005ad9bc
    JZ 0x005ad9ea                       ; 005ad9c3
        ;   XREF to: 005ad9ea (CONDITIONAL_JUMP)  ; LAB_005ad9ea
    LEA EAX,[EBX + 0x354]               ; 005ad9c5
    FLD float ptr [EAX + 0x4]           ; 005ad9cb
    FMUL ST0                            ; 005ad9ce
    FLD float ptr [EAX]                 ; 005ad9d0
    FMUL ST0                            ; 005ad9d2
    FADDP                               ; 005ad9d4
    FLD float ptr [EAX + 0x8]           ; 005ad9d6
    FMUL ST0                            ; 005ad9d9
    FADDP                               ; 005ad9db
    FSQRT                               ; 005ad9dd
    FCOMP double ptr [0x005f9902]       ; 005ad9df | DAT_005f9902
    FNSTSW AX                           ; 005ad9e5
    SAHF                                ; 005ad9e7
    JA 0x005ad9f3                       ; 005ad9e8
        ;   XREF to: 005ad9f3 (CONDITIONAL_JUMP)  ; LAB_005ad9f3
    CMP dword ptr [EBX + 0x304],0x0     ; 005ad9ea
        ;   Label: LAB_005ad9ea
    JZ 0x005ad9fa                       ; 005ad9f1
        ;   XREF to: 005ad9fa (CONDITIONAL_JUMP)  ; LAB_005ad9fa
    XOR EAX,EAX                         ; 005ad9f3
        ;   Label: LAB_005ad9f3
    MOV ESP,EBP                         ; 005ad9f5
    POP EBP                             ; 005ad9f7
    POP EBX                             ; 005ad9f8
    RET                                 ; 005ad9f9
    PUSH 0x5f98f3                       ; 005ad9fa
        ;   Label: LAB_005ad9fa
    MOV EAX,dword ptr [EBP + 0x10]      ; 005ad9ff
    PUSH EAX                            ; 005ada02
    CALL FUN_0040c550                   ; 005ada03
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 005ada08
    TEST EAX,EAX                        ; 005ada0b
    JZ 0x005ada19                       ; 005ada0d
        ;   XREF to: 005ada19 (CONDITIONAL_JUMP)  ; LAB_005ada19
    MOV EAX,0x3                         ; 005ada0f
        ;   Label: LAB_005ada0f
    MOV ESP,EBP                         ; 005ada14
    POP EBP                             ; 005ada16
    POP EBX                             ; 005ada17
    RET                                 ; 005ada18
    PUSH 0x5f98fc                       ; 005ada19
        ;   Label: LAB_005ada19
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ada1e
    PUSH EDX                            ; 005ada21
    CALL FUN_0040c550                   ; 005ada22
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 005ada27
    TEST EAX,EAX                        ; 005ada2a
    JNZ 0x005ada42                      ; 005ada2c
        ;   XREF to: 005ada42 (CONDITIONAL_JUMP)  ; LAB_005ada42
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 005ada2e
    TEST ECX,ECX                        ; 005ada34
    JZ 0x005ada0f                       ; 005ada36
        ;   XREF to: 005ada0f (CONDITIONAL_JUMP)  ; LAB_005ada0f
    CMP ECX,0x3                         ; 005ada38
    JZ 0x005ada0f                       ; 005ada3b
        ;   XREF to: 005ada0f (CONDITIONAL_JUMP)  ; LAB_005ada0f
    MOV ESP,EBP                         ; 005ada3d
    POP EBP                             ; 005ada3f
    POP EBX                             ; 005ada40
    RET                                 ; 005ada41
    MOV EAX,0x2                         ; 005ada42
        ;   Label: LAB_005ada42
    MOV ESP,EBP                         ; 005ada47
    POP EBP                             ; 005ada49
    POP EBX                             ; 005ada4a
    RET                                 ; 005ada4b

