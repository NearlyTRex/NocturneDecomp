; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
;   core_inv.cpp_FUN_004dd2d0
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004dbd7e
        ;   Label: core_inv.cpp_FUN_004dbd7e
    PUSH EBX                            ; 004dbd80
    PUSH ESI                            ; 004dbd81
    PUSH EDI                            ; 004dbd82
    PUSH EBP                            ; 004dbd83
    SUB ESP,0x4                         ; 004dbd84
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dbd87
    PUSH 0x1                            ; 004dbd8b
    PUSH ESI                            ; 004dbd8d
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340 ; 004dbd8e
        ;   XREF to: 004dd340 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory * this_ptr, int reset_both)
    MOV EDX,dword ptr [ESI + 0x338]     ; 004dbd93
    ADD ESP,0x8                         ; 004dbd99
    TEST EDX,EDX                        ; 004dbd9c
    JZ 0x004dbde9                       ; 004dbd9e
        ;   XREF to: 004dbde9 (CONDITIONAL_JUMP)  ; LAB_004dbde9
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dbda0
    XOR EBX,EBX                         ; 004dbda3
    TEST ECX,ECX                        ; 004dbda5
    JLE 0x004dbdb6                      ; 004dbda7
        ;   XREF to: 004dbdb6 (CONDITIONAL_JUMP)  ; LAB_004dbdb6
    MOV EDI,ESI                         ; 004dbda9
    MOV EDX,dword ptr [ESI + 0x338]     ; 004dbdab
        ;   Label: LAB_004dbdab
    CMP EDX,dword ptr [EDI + 0x14]      ; 004dbdb1
    JNZ 0x004dbdf1                      ; 004dbdb4
        ;   XREF to: 004dbdf1 (CONDITIONAL_JUMP)  ; LAB_004dbdf1
    XOR EBP,EBP                         ; 004dbdb6
        ;   Label: LAB_004dbdb6
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004dbdb8
        ;   Label: LAB_004dbdb8
    MOV EDI,dword ptr [ESI + 0x10]      ; 004dbdbc
    ADD EBX,ECX                         ; 004dbdbf
    CMP EBX,EDI                         ; 004dbdc1
    JL 0x004dbdfe                       ; 004dbdc3
        ;   XREF to: 004dbdfe (CONDITIONAL_JUMP)  ; LAB_004dbdfe
    XOR EBX,EBX                         ; 004dbdc5
    MOV EAX,[0x02d0c150]                ; 004dbdc7 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004dbdc7
    PUSH EAX                            ; 004dbdcc
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0x14] ; 004dbdcd
    PUSH EDX                            ; 004dbdd1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dbdd2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dbdd7
    MOV EDI,EAX                         ; 004dbdda
    MOV dword ptr [ESP],EAX             ; 004dbddc
    TEST EAX,EAX                        ; 004dbddf
    JNZ 0x004dbe07                      ; 004dbde1
        ;   XREF to: 004dbe07 (CONDITIONAL_JUMP)  ; LAB_004dbe07
    INC EBP                             ; 004dbde3
        ;   Label: LAB_004dbde3
    CMP EBP,0x64                        ; 004dbde4
    JL 0x004dbdb8                       ; 004dbde7
        ;   XREF to: 004dbdb8 (CONDITIONAL_JUMP)  ; LAB_004dbdb8
    ADD ESP,0x4                         ; 004dbde9
        ;   Label: LAB_004dbde9
    POP EBP                             ; 004dbdec
    POP EDI                             ; 004dbded
    POP ESI                             ; 004dbdee
    POP EBX                             ; 004dbdef
    RET                                 ; 004dbdf0
    INC EBX                             ; 004dbdf1
        ;   Label: LAB_004dbdf1
    MOV EBP,dword ptr [ESI + 0x10]      ; 004dbdf2
    ADD EDI,0x4                         ; 004dbdf5
    CMP EBX,EBP                         ; 004dbdf8
    JL 0x004dbdab                       ; 004dbdfa
        ;   XREF to: 004dbdab (CONDITIONAL_JUMP)  ; LAB_004dbdab
    JMP 0x004dbdb6                      ; 004dbdfc
        ;   XREF to: 004dbdb6 (UNCONDITIONAL_JUMP)  ; LAB_004dbdb6
    TEST EBX,EBX                        ; 004dbdfe
        ;   Label: LAB_004dbdfe
    JGE 0x004dbdc7                      ; 004dbe00
        ;   XREF to: 004dbdc7 (CONDITIONAL_JUMP)  ; LAB_004dbdc7
    LEA EBX,[EDI + -0x1]                ; 004dbe02
    JMP 0x004dbdc7                      ; 004dbe05
        ;   XREF to: 004dbdc7 (UNCONDITIONAL_JUMP)  ; LAB_004dbdc7
    MOV ECX,dword ptr [ESI + 0x338]     ; 004dbe07
        ;   Label: LAB_004dbe07
    PUSH ECX                            ; 004dbe0d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004dbe0e
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004dbe13
    PUSH EAX                            ; 004dbe16
    PUSH EDI                            ; 004dbe17
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004dbe18
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004dbe1d
    PUSH EAX                            ; 004dbe20
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004dbe21
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dbe26
    TEST EAX,EAX                        ; 004dbe29
    JNZ 0x004dbde3                      ; 004dbe2b
        ;   XREF to: 004dbde3 (CONDITIONAL_JUMP)  ; LAB_004dbde3
    MOV EBX,dword ptr [ESI + 0x338]     ; 004dbe2d
    CMP EDI,EBX                         ; 004dbe33
    JZ 0x004dbde9                       ; 004dbe35
        ;   XREF to: 004dbde9 (CONDITIONAL_JUMP)  ; LAB_004dbde9
    TEST EBX,EBX                        ; 004dbe37
    JZ 0x004dbe4f                       ; 004dbe39
        ;   XREF to: 004dbe4f (CONDITIONAL_JUMP)  ; LAB_004dbe4f
    MOV EAX,EBX                         ; 004dbe3b
    PUSH 0x3dcccccd                     ; 004dbe3d
    PUSH EAX                            ; 004dbe42
    MOV EBX,dword ptr [EBX + 0x154]     ; 004dbe43
    CALL dword ptr [EBX + 0xc]          ; 004dbe49
    ADD ESP,0x8                         ; 004dbe4c
    PUSH 0x3e7                          ; 004dbe4f
        ;   Label: LAB_004dbe4f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004dbe54
    PUSH ESI                            ; 004dbe58
    MOV dword ptr [ESI + 0x338],EAX     ; 004dbe59
    CALL core_inv.cpp_FUN_004dd2d0      ; 004dbe5f
        ;   XREF to: 004dd2d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd2d0()
    ADD ESP,0x8                         ; 004dbe64
    ADD ESP,0x4                         ; 004dbe67
    POP EBP                             ; 004dbe6a
    POP EDI                             ; 004dbe6b
    POP ESI                             ; 004dbe6c
    POP EBX                             ; 004dbe6d
    RET                                 ; 004dbe6e

