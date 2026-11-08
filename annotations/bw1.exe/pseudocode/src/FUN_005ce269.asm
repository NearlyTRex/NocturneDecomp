; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005ce269(int *param_1)
;
;
; XREF[1]:
;   FUN_005cdbe5 at 005cdc1a
;
; Called Functions:
;   FUN_005c8e45
;   FUN_005c8f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce269
        ;   Label: FUN_005ce269
    PUSH ESI                            ; 005ce26a
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ce26b
    PUSH 0x1                            ; 005ce26f
    PUSH EBX                            ; 005ce271
    MOV ESI,0xffffffff                  ; 005ce272
    CALL FUN_005c8f5f                   ; 005ce277
        ;   XREF to: 005c8f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005c8f5f()
    ADD ESP,0x8                         ; 005ce27c
    TEST EAX,EAX                        ; 005ce27f
    JZ 0x005ce2ea                       ; 005ce281
        ;   XREF to: 005ce2ea (CONDITIONAL_JUMP)  ; LAB_005ce2ea
    MOV EAX,dword ptr [EBX]             ; 005ce283
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce285
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005ce288
    MOV EDX,dword ptr [EAX + 0x14]      ; 005ce28c
    MOV ECX,dword ptr [EAX + 0x10]      ; 005ce28f
    MOV ESI,EAX                         ; 005ce292
    CMP EDX,ECX                         ; 005ce294
    JNC 0x005ce2bb                      ; 005ce296
        ;   XREF to: 005ce2bb (CONDITIONAL_JUMP)  ; LAB_005ce2bb
    MOV EAX,dword ptr [ESI + 0x14]      ; 005ce298
        ;   Label: LAB_005ce298
    LEA EDX,[EAX + 0x1]                 ; 005ce29b
    MOV dword ptr [ESI + 0x14],EDX      ; 005ce29e
    MOV AL,byte ptr [EAX]               ; 005ce2a1
    AND EAX,0xff                        ; 005ce2a3
    MOV ESI,EAX                         ; 005ce2a8
        ;   Label: LAB_005ce2a8
    CMP EAX,-0x1                        ; 005ce2aa
    JZ 0x005ce2cc                       ; 005ce2ad
        ;   XREF to: 005ce2cc (CONDITIONAL_JUMP)  ; LAB_005ce2cc
    MOV dword ptr [EBX + 0x4],0x1       ; 005ce2af
    MOV EAX,ESI                         ; 005ce2b6
    POP ESI                             ; 005ce2b8
    POP EBX                             ; 005ce2b9
    RET                                 ; 005ce2ba
    PUSH EAX                            ; 005ce2bb
        ;   Label: LAB_005ce2bb
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ce2bc
    CALL dword ptr [EDX + 0x10]         ; 005ce2bf
    ADD ESP,0x4                         ; 005ce2c2
    CMP EAX,-0x1                        ; 005ce2c5
    JNZ 0x005ce298                      ; 005ce2c8
        ;   XREF to: 005ce298 (CONDITIONAL_JUMP)  ; LAB_005ce298
    JMP 0x005ce2a8                      ; 005ce2ca
        ;   XREF to: 005ce2a8 (UNCONDITIONAL_JUMP)  ; LAB_005ce2a8
    MOV EAX,dword ptr [EBX]             ; 005ce2cc
        ;   Label: LAB_005ce2cc
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce2ce
    PUSH 0x4                            ; 005ce2d1
    ADD EAX,EBX                         ; 005ce2d3
    PUSH EAX                            ; 005ce2d5
    CALL FUN_005c8e45                   ; 005ce2d6
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e45()
    ADD ESP,0x8                         ; 005ce2db
    MOV dword ptr [EBX + 0x4],0x0       ; 005ce2de
    MOV EAX,ESI                         ; 005ce2e5
    POP ESI                             ; 005ce2e7
    POP EBX                             ; 005ce2e8
    RET                                 ; 005ce2e9
    MOV dword ptr [EBX + 0x4],EAX       ; 005ce2ea
        ;   Label: LAB_005ce2ea
    MOV EAX,ESI                         ; 005ce2ed
    POP ESI                             ; 005ce2ef
    POP EBX                             ; 005ce2f0
    RET                                 ; 005ce2f1

