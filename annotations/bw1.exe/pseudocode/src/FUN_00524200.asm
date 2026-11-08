; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00524200(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_005673f0 at 0056740f
;
; Referenced Globals:
;   void* PTR_FUN_006042e4 = 00524200
;   undefined4 DAT_006042f0
;
; Called Functions:
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524200
        ;   Label: FUN_00524200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00524201
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524205
    TEST AL,0x4                         ; 00524209
    JNZ 0x0052421c                      ; 0052420b
        ;   XREF to: 0052421c (CONDITIONAL_JUMP)  ; LAB_0052421c
    MOV dword ptr [EBX + 0x50],0x6042e4 ; 0052420d | PTR_FUN_006042e4
    TEST AL,0x2                         ; 00524214
    JNZ 0x00524237                      ; 00524216
        ;   XREF to: 00524237 (CONDITIONAL_JUMP)  ; LAB_00524237
    MOV EAX,EBX                         ; 00524218
    POP EBX                             ; 0052421a
    RET                                 ; 0052421b
    PUSH 0x6042f0                       ; 0052421c | DAT_006042f0
        ;   Label: LAB_0052421c
    PUSH EBX                            ; 00524221
    CALL FUN_005c030f                   ; 00524222
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00524227
    PUSH EAX                            ; 0052422a
    CALL FUN_005c0336                   ; 0052422b
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00524230
    MOV EAX,EBX                         ; 00524233
    POP EBX                             ; 00524235
    RET                                 ; 00524236
    PUSH EBX                            ; 00524237
        ;   Label: LAB_00524237
    CALL FUN_005c0344                   ; 00524238
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0052423d
    MOV EAX,EBX                         ; 00524240
    POP EBX                             ; 00524242
    RET                                 ; 00524243

