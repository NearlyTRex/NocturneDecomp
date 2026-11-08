; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b220(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0054d3c0 at 0054df12
;
; Referenced Globals:
;   undefined4 DAT_005f1015
;   undefined4 DAT_005f1018
;
; Called Functions:
;   FUN_00479180
;   FUN_0055b280
;   FUN_0055b330
;   FUN_005c0b10
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b220
        ;   Label: FUN_0055b220
    PUSH ESI                            ; 0055b221
    MOV ESI,dword ptr [ESP + 0xc]       ; 0055b222
    PUSH 0x5f1015                       ; 0055b226 | DAT_005f1015
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055b22b
    PUSH EDX                            ; 0055b22f
    PUSH 0x5f1018                       ; 0055b230 | DAT_005f1018
    CALL FUN_00479180                   ; 0055b235
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    MOV EBX,EAX                         ; 0055b23a
    ADD ESP,0xc                         ; 0055b23c
    TEST EAX,EAX                        ; 0055b23f
    JNZ 0x0055b25d                      ; 0055b241
        ;   XREF to: 0055b25d (CONDITIONAL_JUMP)  ; LAB_0055b25d
    PUSH ESI                            ; 0055b243
    CALL FUN_0055b330                   ; 0055b244
        ;   XREF to: 0055b330 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b330()
    ADD ESP,0x4                         ; 0055b249
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055b24c
    PUSH EBX                            ; 0055b250
    PUSH ESI                            ; 0055b251
    CALL FUN_0055b280                   ; 0055b252
        ;   XREF to: 0055b280 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b280()
    ADD ESP,0x8                         ; 0055b257
    POP ESI                             ; 0055b25a
    POP EBX                             ; 0055b25b
    RET                                 ; 0055b25c
    PUSH EAX                            ; 0055b25d
        ;   Label: LAB_0055b25d
    MOV ECX,dword ptr [ESI]             ; 0055b25e
    PUSH ECX                            ; 0055b260
    PUSH 0x3000                         ; 0055b261
    PUSH 0x20b28f4                      ; 0055b266
    CALL FUN_005c0b10                   ; 0055b26b
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 0055b270
    PUSH EBX                            ; 0055b273
    CALL FUN_005c0d10                   ; 0055b274
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0055b279
    POP ESI                             ; 0055b27c
    POP EBX                             ; 0055b27d
    RET                                 ; 0055b27e

