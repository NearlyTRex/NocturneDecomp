; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bc220(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005c1d70 at 005c1ede
;
; Called Functions:
;   FUN_005bc18c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc220
        ;   Label: FUN_005bc220
    MOV EBP,ESP                         ; 005bc221
    PUSH EBX                            ; 005bc223
    PUSH ESI                            ; 005bc224
    MOV EBX,dword ptr [EBP + 0xc]       ; 005bc225
    CMP EBX,0x1000                      ; 005bc228
    JLE 0x005bc241                      ; 005bc22e
        ;   XREF to: 005bc241 (CONDITIONAL_JUMP)  ; LAB_005bc241
    PUSH 0x1000                         ; 005bc230
    MOV ECX,dword ptr [EBP + 0x8]       ; 005bc235
    PUSH ECX                            ; 005bc238
    SUB EBX,0x1000                      ; 005bc239
    JMP 0x005bc258                      ; 005bc23f
        ;   XREF to: 005bc258 (UNCONDITIONAL_JUMP)  ; LAB_005bc258
    CMP EBX,0xfffff000                  ; 005bc241
        ;   Label: LAB_005bc241
    JGE 0x005bc260                      ; 005bc247
        ;   XREF to: 005bc260 (CONDITIONAL_JUMP)  ; LAB_005bc260
    PUSH 0xfffff000                     ; 005bc249
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bc24e
    PUSH EDX                            ; 005bc251
    ADD EBX,0x1000                      ; 005bc252
    CALL FUN_005bc18c                   ; 005bc258
        ;   XREF to: 005bc18c (UNCONDITIONAL_CALL)  ; undefined FUN_005bc18c()
        ;   Label: LAB_005bc258
    ADD ESP,0x8                         ; 005bc25d
    PUSH EBX                            ; 005bc260
        ;   Label: LAB_005bc260
    MOV ESI,dword ptr [EBP + 0x8]       ; 005bc261
    PUSH ESI                            ; 005bc264
    CALL FUN_005bc18c                   ; 005bc265
        ;   XREF to: 005bc18c (UNCONDITIONAL_CALL)  ; undefined FUN_005bc18c()
    ADD ESP,0x8                         ; 005bc26a
    POP ESI                             ; 005bc26d
    POP EBX                             ; 005bc26e
    POP EBP                             ; 005bc26f
    RET                                 ; 005bc270

