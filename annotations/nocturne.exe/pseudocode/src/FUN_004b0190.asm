; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0190(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   FUN_004ae960
;   FUN_004b0140
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004b0190
        ;   Label: FUN_004b0190
    JNZ 0x004b0198                      ; 004b0195
        ;   XREF to: 004b0198 (CONDITIONAL_JUMP)  ; LAB_004b0198
    RET                                 ; 004b0197
    PUSH ESI                            ; 004b0198
        ;   Label: LAB_004b0198
    PUSH EBX                            ; 004b0199
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b019a
    PUSH ECX                            ; 004b019e
    CALL FUN_004b0140                   ; 004b019f
        ;   XREF to: 004b0140 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0140()
    ADD ESP,0x4                         ; 004b01a4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b01a7
    PUSH EBX                            ; 004b01ab
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b01ac
    PUSH ESI                            ; 004b01b0
    PUSH EAX                            ; 004b01b1
    CALL FUN_004ae960                   ; 004b01b2
        ;   XREF to: 004ae960 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae960()
    ADD ESP,0xc                         ; 004b01b7
    POP EBX                             ; 004b01ba
    POP ESI                             ; 004b01bb
    RET                                 ; 004b01bc

