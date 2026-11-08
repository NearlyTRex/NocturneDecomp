; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a9150(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004aa6d0 at 004aa712
;
; Called Functions:
;   FUN_004a91b0
;   FUN_004a9230
;   FUN_004a9300
;   FUN_004a9710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9150
        ;   Label: FUN_004a9150
    PUSH ESI                            ; 004a9151
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a9152
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a9156
    PUSH EBX                            ; 004a915a
    CALL FUN_004a91b0                   ; 004a915b
        ;   XREF to: 004a91b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a91b0()
    ADD ESP,0x4                         ; 004a9160
    MOV EDX,dword ptr [ESI + 0xc]       ; 004a9163
    PUSH EDX                            ; 004a9166
    MOV ECX,dword ptr [ESI + 0x8]       ; 004a9167
    PUSH ECX                            ; 004a916a
    PUSH EBX                            ; 004a916b
    CALL FUN_004a9710                   ; 004a916c
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9710()
    ADD ESP,0xc                         ; 004a9171
    TEST EAX,EAX                        ; 004a9174
    JZ 0x004a91a2                       ; 004a9176
        ;   XREF to: 004a91a2 (CONDITIONAL_JUMP)  ; LAB_004a91a2
    PUSH EDI                            ; 004a9178
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a9179
    MOV dword ptr [ESI + 0x4],EAX       ; 004a917c
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a917f
    MOV dword ptr [ESI],EAX             ; 004a9182
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a9184
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a9187
    PUSH ESI                            ; 004a918a
    ADD EDI,EAX                         ; 004a918b
    PUSH EBX                            ; 004a918d
    MOV dword ptr [EBX + 0x14],EDI      ; 004a918e
    CALL FUN_004a9230                   ; 004a9191
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9230()
    MOV EAX,0x1                         ; 004a9196
    ADD ESP,0x8                         ; 004a919b
    POP EDI                             ; 004a919e
    POP ESI                             ; 004a919f
    POP EBX                             ; 004a91a0
    RET                                 ; 004a91a1
    PUSH EBX                            ; 004a91a2
        ;   Label: LAB_004a91a2
    CALL FUN_004a9300                   ; 004a91a3
        ;   XREF to: 004a9300 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9300()
    ADD ESP,0x4                         ; 004a91a8
    XOR EAX,EAX                         ; 004a91ab
    POP ESI                             ; 004a91ad
    POP EBX                             ; 004a91ae
    RET                                 ; 004a91af

