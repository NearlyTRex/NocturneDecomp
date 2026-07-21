; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00544440(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544440
        ;   Label: FUN_00544440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544441
    PUSH EBX                            ; 00544445
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00544446
    CALL dword ptr [EAX + 0x68]         ; 0054444c
    ADD ESP,0x4                         ; 0054444f
    TEST EAX,EAX                        ; 00544452
    JZ 0x00544465                       ; 00544454
        ;   XREF to: 00544465 (CONDITIONAL_JUMP)  ; LAB_00544465
    MOV EAX,[0x005baf90]                ; 00544456 | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 0054445b | DAT_01cc9454
    JNZ 0x00544465                      ; 0054445f
        ;   XREF to: 00544465 (CONDITIONAL_JUMP)  ; LAB_00544465
    XOR EAX,EAX                         ; 00544461
    POP EBX                             ; 00544463
    RET                                 ; 00544464
    PUSH EBX                            ; 00544465
        ;   Label: LAB_00544465
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 00544466
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440()
    ADD ESP,0x4                         ; 0054446b
    POP EBX                             ; 0054446e
    RET                                 ; 0054446f

