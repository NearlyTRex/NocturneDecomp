; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057146c(void)
;
;
; XREF[2]:
;   FUN_005714e0 at 005714e0
;   FUN_005714ec at 005714ec
;
; Referenced Globals:
;   void* PTR_CreateFileA_00575498 = 00175b06
;   string s_conin$_005991ec
;   string s_conout$_005991f4
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c20d0
;   undefined4 DAT_005c20d4
;
; Called Functions:
;   CreateFileA
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0057146c
        ;   Label: FUN_0057146c
    CALL dword ptr [0x005c1ac0]         ; 0057146e | PTR_FUN_005c1ac0
    MOV EDX,dword ptr [0x005c20d0]      ; 00571474 | DAT_005c20d0
    ADD ESP,0x4                         ; 0057147a
    CMP EDX,-0x1                        ; 0057147d
    JNZ 0x005714a5                      ; 00571480
        ;   XREF to: 005714a5 (CONDITIONAL_JUMP)  ; LAB_005714a5
    PUSH 0x0                            ; 00571482
    PUSH 0x80                           ; 00571484
    PUSH 0x3                            ; 00571489
    PUSH 0x0                            ; 0057148b
    PUSH 0x1                            ; 0057148d
    PUSH 0x80000000                     ; 0057148f
    PUSH 0x5991ec                       ; 00571494 | = "conin$"
    CALL dword ptr CS:[0x575498]        ; 00571499 | PTR_CreateFileA_00575498
    MOV [0x005c20d0],EAX                ; 005714a0 | DAT_005c20d0
    CMP dword ptr [0x005c20d4],-0x1     ; 005714a5 | DAT_005c20d4
        ;   Label: LAB_005714a5
    JNZ 0x005714d1                      ; 005714ac
        ;   XREF to: 005714d1 (CONDITIONAL_JUMP)  ; LAB_005714d1
    PUSH 0x0                            ; 005714ae
    PUSH 0x80                           ; 005714b0
    PUSH 0x3                            ; 005714b5
    PUSH 0x0                            ; 005714b7
    PUSH 0x2                            ; 005714b9
    PUSH 0x40000000                     ; 005714bb
    PUSH 0x5991f4                       ; 005714c0 | = "conout$"
    CALL dword ptr CS:[0x575498]        ; 005714c5 | PTR_CreateFileA_00575498
    MOV [0x005c20d4],EAX                ; 005714cc | DAT_005c20d4
    PUSH 0x0                            ; 005714d1
        ;   Label: LAB_005714d1
    CALL dword ptr [0x005c1ac4]         ; 005714d3 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 005714d9
    RET                                 ; 005714dc

