; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0(int param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f216
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c32e0
        ;   Label: core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c32e1
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c32e5 | DAT_01cae0e8
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c32eb
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c32ee
    JNZ 0x004c332a                      ; 004c32f5
        ;   XREF to: 004c332a (CONDITIONAL_JUMP)  ; LAB_004c332a
    CMP dword ptr [EBX + 0x44c],0x0     ; 004c32f7
    SETZ AL                             ; 004c32fe
    FLD float ptr [EBX + 0x33c]         ; 004c3301
    AND EAX,0xff                        ; 004c3307
    FLDZ                                ; 004c330c
    MOV dword ptr [EBX + 0x44c],EAX     ; 004c330e
    FCOMPP                              ; 004c3314
    FNSTSW AX                           ; 004c3316
    SAHF                                ; 004c3318
    JC 0x004c332c                       ; 004c3319
        ;   XREF to: 004c332c (CONDITIONAL_JUMP)  ; LAB_004c332c
    FLD float ptr [EBX + 0x338]         ; 004c331b
        ;   Label: LAB_004c331b
    FLDZ                                ; 004c3321
    FCOMPP                              ; 004c3323
    FNSTSW AX                           ; 004c3325
    SAHF                                ; 004c3327
    JC 0x004c3337                       ; 004c3328
        ;   XREF to: 004c3337 (CONDITIONAL_JUMP)  ; LAB_004c3337
    POP EBX                             ; 004c332a
        ;   Label: LAB_004c332a
    RET                                 ; 004c332b
    PUSH EBX                            ; 004c332c
        ;   Label: LAB_004c332c
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70 ; 004c332d
        ;   XREF to: 004c1d70 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70()
    ADD ESP,0x4                         ; 004c3332
    JMP 0x004c331b                      ; 004c3335
        ;   XREF to: 004c331b (UNCONDITIONAL_JUMP)  ; LAB_004c331b
    PUSH 0x0                            ; 004c3337
        ;   Label: LAB_004c3337
    PUSH EBX                            ; 004c3339
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20 ; 004c333a
        ;   XREF to: 004c1d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20()
    ADD ESP,0x8                         ; 004c333f
    POP EBX                             ; 004c3342
    RET                                 ; 004c3343

