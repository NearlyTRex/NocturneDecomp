; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004db8d0(CInventory *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60
;   core_inv.cpp_FUN_004da880
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004db8d0
        ;   Label: core_inv.cpp_FUN_004db8d0
    PUSH EBP                            ; 004db8d1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004db8d2
    CMP dword ptr [ESI + 0x56c],-0x1    ; 004db8d6
    JNZ 0x004db8e2                      ; 004db8dd
        ;   XREF to: 004db8e2 (CONDITIONAL_JUMP)  ; LAB_004db8e2
    POP EBP                             ; 004db8df
    POP ESI                             ; 004db8e0
    RET                                 ; 004db8e1
    PUSH 0x320                          ; 004db8e2
        ;   Label: LAB_004db8e2
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004db8e7
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004db8ec
    TEST EAX,EAX                        ; 004db8ef
    JZ 0x004db8fc                       ; 004db8f1
        ;   XREF to: 004db8fc (CONDITIONAL_JUMP)  ; LAB_004db8fc
    PUSH EAX                            ; 004db8f3
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040de60 ; 004db8f4
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040de60(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004db8f9
    PUSH EDI                            ; 004db8fc
        ;   Label: LAB_004db8fc
    PUSH EBX                            ; 004db8fd
    MOV EBX,EAX                         ; 004db8fe
    TEST EAX,EAX                        ; 004db900
    JNZ 0x004db927                      ; 004db902
        ;   XREF to: 004db927 (CONDITIONAL_JUMP)  ; LAB_004db927
    MOV ECX,0x5c6287                    ; 004db904
    MOV EDI,0x498                       ; 004db909
    PUSH 0x5c6297                       ; 004db90e
    MOV dword ptr [0x01d71de0],ECX      ; 004db913 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004db919 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004db91f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004db924
    MOV EAX,dword ptr [ESI + 0x568]     ; 004db927
        ;   Label: LAB_004db927
    MOV dword ptr [EBX + 0x314],EAX     ; 004db92d
    MOV EAX,dword ptr [ESI + 0x56c]     ; 004db933
    MOV dword ptr [EBX + 0x318],EAX     ; 004db939
    PUSH EBX                            ; 004db93f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db940
    CALL dword ptr [EAX]                ; 004db946
    ADD ESP,0x4                         ; 004db948
    MOV EDI,EBX                         ; 004db94b
    MOV ESI,0x5c62a5                    ; 004db94d
    PUSH EDI                            ; 004db952
    MOV AL,byte ptr [ESI]               ; 004db953
        ;   Label: LAB_004db953
    MOV byte ptr [EDI],AL               ; 004db955
    CMP AL,0x0                          ; 004db957
    JZ 0x004db96b                       ; 004db959
        ;   XREF to: 004db96b (CONDITIONAL_JUMP)  ; LAB_004db96b
    MOV AL,byte ptr [ESI + 0x1]         ; 004db95b
    ADD ESI,0x2                         ; 004db95e
    MOV byte ptr [EDI + 0x1],AL         ; 004db961
    ADD EDI,0x2                         ; 004db964
    CMP AL,0x0                          ; 004db967
    JNZ 0x004db953                      ; 004db969
        ;   XREF to: 004db953 (CONDITIONAL_JUMP)  ; LAB_004db953
    POP EDI                             ; 004db96b
        ;   Label: LAB_004db96b
    PUSH 0x0                            ; 004db96c
    PUSH EBX                            ; 004db96e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004db96f
    PUSH EBP                            ; 004db973
    CALL core_inv.cpp_FUN_004da880      ; 004db974
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004db979
    POP EBX                             ; 004db97c
    POP EDI                             ; 004db97d
    POP EBP                             ; 004db97e
    POP ESI                             ; 004db97f
    RET                                 ; 004db980

