; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051dad0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_004270e0 at 004271cf
;   FUN_0051d9d0 at 0051d9e3
;
; Called Functions:
;   FUN_00518440
;   FUN_0051da50
;   FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051dad0
        ;   Label: FUN_0051dad0
    PUSH ESI                            ; 0051dad1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051dad2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051dad6
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0051dada
    JNZ 0x0051db05                      ; 0051dae0
        ;   XREF to: 0051db05 (CONDITIONAL_JUMP)  ; LAB_0051db05
    MOV ECX,dword ptr [EBX + 0x2234]    ; 0051dae2
        ;   Label: LAB_0051dae2
    PUSH ECX                            ; 0051dae8
    MOV ESI,dword ptr [EBX + 0x2230]    ; 0051dae9
    PUSH ESI                            ; 0051daef
    PUSH EBX                            ; 0051daf0
    CALL FUN_0051e020                   ; 0051daf1
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051daf6
    PUSH EAX                            ; 0051daf9
    CALL FUN_00518440                   ; 0051dafa
        ;   XREF to: 00518440 (UNCONDITIONAL_CALL)  ; undefined FUN_00518440()
    ADD ESP,0xc                         ; 0051daff
    POP ESI                             ; 0051db02
    POP EBX                             ; 0051db03
    RET                                 ; 0051db04
    PUSH EAX                            ; 0051db05
        ;   Label: LAB_0051db05
    PUSH EBX                            ; 0051db06
    CALL FUN_0051da50                   ; 0051db07
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0051da50()
    ADD ESP,0x8                         ; 0051db0c
    JMP 0x0051dae2                      ; 0051db0f
        ;   XREF to: 0051dae2 (UNCONDITIONAL_JUMP)  ; LAB_0051dae2

