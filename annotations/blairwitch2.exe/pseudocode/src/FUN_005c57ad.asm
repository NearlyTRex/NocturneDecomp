; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c57ad(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_005c3add at 005c3bb4
;
; Referenced Globals:
;   void* PTR_thunk_FUN_005c68db_0061f7ec = 005c5e14
;
; Called Functions:
;   FUN_005be190
;   FUN_005be19c
;   FUN_005c5760
;   thunk_FUN_005c68db
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c57ad
        ;   Label: FUN_005c57ad
    MOV EBP,ESP                         ; 005c57ae
    PUSH EBX                            ; 005c57b0
    PUSH ESI                            ; 005c57b1
    SUB ESP,0x8                         ; 005c57b2
    MOV EBX,dword ptr [EBP + 0x8]       ; 005c57b5
    PUSH EBX                            ; 005c57b8
    CALL dword ptr [0x0061f7ec]         ; 005c57b9 | PTR_thunk_FUN_005c68db_0061f7ec
    ADD ESP,0x4                         ; 005c57bf
    TEST EAX,EAX                        ; 005c57c2
    JNZ 0x005c57e8                      ; 005c57c4
        ;   XREF to: 005c57e8 (CONDITIONAL_JUMP)  ; LAB_005c57e8
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c57c6
    PUSH EDX                            ; 005c57c9
    MOV ECX,dword ptr [EBX]             ; 005c57ca
    PUSH ECX                            ; 005c57cc
    CALL FUN_005c5760                   ; 005c57cd
        ;   XREF to: 005c5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5760()
    MOV ESI,dword ptr [EBX]             ; 005c57d2
    ADD ESP,0x8                         ; 005c57d4
    CMP ESI,0x1                         ; 005c57d7
    JNZ 0x005c57e3                      ; 005c57da
        ;   XREF to: 005c57e3 (CONDITIONAL_JUMP)  ; LAB_005c57e3
    CALL FUN_005be190                   ; 005c57dc
        ;   XREF to: 005be190 (UNCONDITIONAL_CALL)  ; undefined FUN_005be190()
    JMP 0x005c57e8                      ; 005c57e1
        ;   XREF to: 005c57e8 (UNCONDITIONAL_JUMP)  ; LAB_005c57e8
    CALL FUN_005be19c                   ; 005c57e3
        ;   XREF to: 005be19c (UNCONDITIONAL_CALL)  ; undefined FUN_005be19c()
        ;   Label: LAB_005c57e3
    MOV EAX,dword ptr [EBX + 0x18]      ; 005c57e8
        ;   Label: LAB_005c57e8
    MOV dword ptr [EBP + -0x10],EAX     ; 005c57eb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c57ee
    MOV dword ptr [EBP + -0xc],EAX      ; 005c57f1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c57f4
    MOV EDX,dword ptr [EBP + -0xc]      ; 005c57f7
    LEA ESP,[EBP + -0x8]                ; 005c57fa
    POP ESI                             ; 005c57fd
    POP EBX                             ; 005c57fe
    POP EBP                             ; 005c57ff
    RET                                 ; 005c5800

