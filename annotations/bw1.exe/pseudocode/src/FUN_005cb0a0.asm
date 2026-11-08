; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cb0a0(int *param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   FUN_005c5348 at 005c536e
;   FUN_005ccf80 at 005ccf93
;
; Referenced Globals:
;   void* PTR_VirtualQuery_005d067c = 001d12bc
;   undefined1 DAT_006265df
;   undefined2 DAT_006265e1
;
; Called Functions:
;   VirtualQuery
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb0a0
        ;   Label: FUN_005cb0a0
    PUSH ESI                            ; 005cb0a1
    SUB ESP,0x20                        ; 005cb0a2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005cb0a5
    PUSH 0x1c                           ; 005cb0a9
    LEA EAX,[ESP + 0x4]                 ; 005cb0ab
    PUSH EAX                            ; 005cb0af
    LEA EAX,[ESP + 0x24]                ; 005cb0b0
    PUSH EAX                            ; 005cb0b4
    CALL dword ptr CS:[0x5d067c]        ; 005cb0b5 | PTR_VirtualQuery_005d067c
    MOV EDX,dword ptr [ESP]             ; 005cb0bc
    ADD EDX,dword ptr [ESP + 0xc]       ; 005cb0bf
    MOV CX,word ptr [0x006265e1]        ; 005cb0c3 | DAT_006265e1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005cb0ca
    CMP CX,0x8000                       ; 005cb0ce
    JNC 0x005cb0dc                      ; 005cb0d3
        ;   XREF to: 005cb0dc (CONDITIONAL_JUMP)  ; LAB_005cb0dc
    ADD EAX,0x3000                      ; 005cb0d5
    JMP 0x005cb0f3                      ; 005cb0da
        ;   XREF to: 005cb0f3 (UNCONDITIONAL_JUMP)  ; LAB_005cb0f3
    JC 0x005cb0ee                       ; 005cb0dc
        ;   XREF to: 005cb0ee (CONDITIONAL_JUMP)  ; LAB_005cb0ee
        ;   Label: LAB_005cb0dc
    CMP byte ptr [0x006265df],0x4       ; 005cb0de | DAT_006265df
    JNC 0x005cb0ee                      ; 005cb0e5
        ;   XREF to: 005cb0ee (CONDITIONAL_JUMP)  ; LAB_005cb0ee
    ADD EAX,0x12000                     ; 005cb0e7
    JMP 0x005cb0f3                      ; 005cb0ec
        ;   XREF to: 005cb0f3 (UNCONDITIONAL_JUMP)  ; LAB_005cb0f3
    ADD EAX,0x13000                     ; 005cb0ee
        ;   Label: LAB_005cb0ee
    TEST EBX,EBX                        ; 005cb0f3
        ;   Label: LAB_005cb0f3
    JZ 0x005cb0f9                       ; 005cb0f5
        ;   XREF to: 005cb0f9 (CONDITIONAL_JUMP)  ; LAB_005cb0f9
    MOV dword ptr [EBX],EAX             ; 005cb0f7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005cb0f9
        ;   Label: LAB_005cb0f9
    TEST ESI,ESI                        ; 005cb0fd
    JZ 0x005cb103                       ; 005cb0ff
        ;   XREF to: 005cb103 (CONDITIONAL_JUMP)  ; LAB_005cb103
    MOV dword ptr [ESI],EDX             ; 005cb101
    ADD ESP,0x20                        ; 005cb103
        ;   Label: LAB_005cb103
    POP ESI                             ; 005cb106
    POP EBX                             ; 005cb107
    RET                                 ; 005cb108

