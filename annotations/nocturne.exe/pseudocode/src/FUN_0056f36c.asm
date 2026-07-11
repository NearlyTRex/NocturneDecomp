; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f36c(int param_1)
;
;
; XREF[1]:
;   FUN_0056f2d0 at 0056f2f3
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;
; Called Functions:
;   FUN_0056f30c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f36c
        ;   Label: FUN_0056f36c
    PUSH ESI                            ; 0056f36d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056f36e
    PUSH EAX                            ; 0056f372
    MOV ESI,dword ptr [EAX + 0x4]       ; 0056f373
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056f376
    CALL FUN_0056f30c                   ; 0056f379
        ;   XREF to: 0056f30c (UNCONDITIONAL_CALL)  ; undefined FUN_0056f30c()
    ADD ESP,0x4                         ; 0056f37e
    TEST EAX,EAX                        ; 0056f381
    JNZ 0x0056f39b                      ; 0056f383
        ;   XREF to: 0056f39b (CONDITIONAL_JUMP)  ; LAB_0056f39b
    TEST ESI,ESI                        ; 0056f385
    JNZ 0x0056f391                      ; 0056f387
        ;   XREF to: 0056f391 (CONDITIONAL_JUMP)  ; LAB_0056f391
    MOV dword ptr [0x005c1680],EBX      ; 0056f389 | DAT_005c1680
    JMP 0x0056f394                      ; 0056f38f
        ;   XREF to: 0056f394 (UNCONDITIONAL_JUMP)  ; LAB_0056f394
    MOV dword ptr [ESI + 0x8],EBX       ; 0056f391
        ;   Label: LAB_0056f391
    TEST EBX,EBX                        ; 0056f394
        ;   Label: LAB_0056f394
    JZ 0x0056f39b                       ; 0056f396
        ;   XREF to: 0056f39b (CONDITIONAL_JUMP)  ; LAB_0056f39b
    MOV dword ptr [EBX + 0x4],ESI       ; 0056f398
    POP ESI                             ; 0056f39b
        ;   Label: LAB_0056f39b
    POP EBX                             ; 0056f39c
    RET                                 ; 0056f39d

