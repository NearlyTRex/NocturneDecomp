; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005386a0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_00538450 at 00538456
;   FUN_00538470 at 00538481
;   FUN_00539be0 at 00539c00
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005386a0
        ;   Label: FUN_005386a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005386a1
    MOV EDX,dword ptr [EBX + 0x24]      ; 005386a5
    TEST EDX,EDX                        ; 005386a8
    JNZ 0x005386ba                      ; 005386aa
        ;   XREF to: 005386ba (CONDITIONAL_JUMP)  ; LAB_005386ba
    MOV dword ptr [EBX + 0x4],0x0       ; 005386ac
    MOV EAX,dword ptr [EBX + 0x4]       ; 005386b3
    MOV dword ptr [EBX],EAX             ; 005386b6
    POP EBX                             ; 005386b8
    RET                                 ; 005386b9
    PUSH EDX                            ; 005386ba
        ;   Label: LAB_005386ba
    CALL FUN_005b86a0                   ; 005386bb
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005386c0
    MOV dword ptr [EBX + 0x24],0x0      ; 005386c3
    MOV dword ptr [EBX + 0x4],0x0       ; 005386ca
    MOV EAX,dword ptr [EBX + 0x4]       ; 005386d1
    MOV dword ptr [EBX],EAX             ; 005386d4
    POP EBX                             ; 005386d6
    RET                                 ; 005386d7

