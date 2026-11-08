; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d880(int param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00433000 at 004330d8
;
; Called Functions:
;   FUN_005481d0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d880
        ;   Label: FUN_0054d880
    PUSH ESI                            ; 0054d881
    PUSH EDI                            ; 0054d882
    PUSH EBP                            ; 0054d883
    SUB ESP,0x4                         ; 0054d884
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054d887
    PUSH EBP                            ; 0054d88b
    CALL FUN_0054eac0                   ; 0054d88c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    XOR EBX,EBX                         ; 0054d891
    ADD ESP,0x4                         ; 0054d893
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054d896
    MOV dword ptr [ESP],EAX             ; 0054d89c
    TEST EDX,EDX                        ; 0054d89f
    JLE 0x0054d8d9                      ; 0054d8a1
        ;   XREF to: 0054d8d9 (CONDITIONAL_JUMP)  ; LAB_0054d8d9
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054d8a3
        ;   Label: LAB_0054d8a3
    PUSH ESI                            ; 0054d8a7
    PUSH EBX                            ; 0054d8a8
    MOV EDI,dword ptr [ESP + 0x8]       ; 0054d8a9
    PUSH EDI                            ; 0054d8ad
    CALL FUN_005481d0                   ; 0054d8ae
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005481d0()
    ADD ESP,0xc                         ; 0054d8b3
    TEST EAX,EAX                        ; 0054d8b6
    JL 0x0054d8c8                       ; 0054d8b8
        ;   XREF to: 0054d8c8 (CONDITIONAL_JUMP)  ; LAB_0054d8c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054d8ba
    LEA EDI,[EBP + 0x6b0]               ; 0054d8be
    MOVSD ES:EDI,ESI                    ; 0054d8c4
    MOVSD ES:EDI,ESI                    ; 0054d8c5
    MOVSD ES:EDI,ESI                    ; 0054d8c6
    MOVSD ES:EDI,ESI                    ; 0054d8c7
    MOV EAX,dword ptr [ESP]             ; 0054d8c8
        ;   Label: LAB_0054d8c8
    INC EBX                             ; 0054d8cb
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054d8cc
    ADD EBP,0x10                        ; 0054d8d2
    CMP EBX,ECX                         ; 0054d8d5
    JL 0x0054d8a3                       ; 0054d8d7
        ;   XREF to: 0054d8a3 (CONDITIONAL_JUMP)  ; LAB_0054d8a3
    ADD ESP,0x4                         ; 0054d8d9
        ;   Label: LAB_0054d8d9
    POP EBP                             ; 0054d8dc
    POP EDI                             ; 0054d8dd
    POP ESI                             ; 0054d8de
    POP EBX                             ; 0054d8df
    RET                                 ; 0054d8e0

