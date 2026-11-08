; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8100(int param_1,int param_2)
;
;
; XREF[11]:
;   FUN_0040ce70 at 0040ce90
;   FUN_00450580 at 004505a0
;   FUN_005a09c0 at 005a09e4
;   FUN_005a1cc0 at 005a1ce4
;   FUN_005a3e70 at 005a3e94
;   FUN_005a5f50 at 005a5f74
;   FUN_005a8180 at 005a81ec
;   FUN_005a9370 at 005a9394
;   FUN_005aa7e0 at 005aa804
;   FUN_005ac7f0 at 005ac814
;   ... and 1 more
;
; Called Functions:
;   FUN_005a8160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8100
        ;   Label: FUN_005a8100
    CMP dword ptr [EAX + 0x14],0x0      ; 005a8104
    JZ 0x005a8118                       ; 005a8108
        ;   XREF to: 005a8118 (CONDITIONAL_JUMP)  ; LAB_005a8118
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a810a
    TEST ECX,ECX                        ; 005a810e
    JNZ 0x005a8119                      ; 005a8110
        ;   XREF to: 005a8119 (CONDITIONAL_JUMP)  ; LAB_005a8119
    MOV dword ptr [EAX + 0x34],ECX      ; 005a8112
    MOV dword ptr [EAX + 0x10],ECX      ; 005a8115
    RET                                 ; 005a8118
        ;   Label: LAB_005a8118
    PUSH EAX                            ; 005a8119
        ;   Label: LAB_005a8119
    MOV dword ptr [EAX + 0x34],0x1      ; 005a811a
    CALL FUN_005a8160                   ; 005a8121
        ;   XREF to: 005a8160 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8160()
    ADD ESP,0x4                         ; 005a8126
    RET                                 ; 005a8129

