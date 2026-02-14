; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004fea70(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_to_remove
; int              Stack[0xc]:4   should_delete_actor
;
; XREF[6]:
;   core_inv.cpp_CInventory_clear_FUN_004fd0e0 at 004fd103
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0 at 005014dc
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff9fe
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e45a
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5457
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030 at 005e71ee
;
; Called Functions:
;   core_actor.cpp_deleteActor_FUN_00408820
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fea70
        ;   Label: core_inv.cpp_CInventory_removeItem_FUN_004fea70
    PUSH ESI                            ; 004fea71
    PUSH EDI                            ; 004fea72
    PUSH EBP                            ; 004fea73
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fea74
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fea78
    CMP EBX,dword ptr [ECX + 0x330]     ; 004fea7c
    JZ 0x004feabf                       ; 004fea82
        ;   XREF to: 004feabf (CONDITIONAL_JUMP)  ; LAB_004feabf
    CMP EBX,dword ptr [ECX + 0x334]     ; 004fea84
        ;   Label: LAB_004fea84
    JNZ 0x004fea96                      ; 004fea8a
        ;   XREF to: 004fea96 (CONDITIONAL_JUMP)  ; LAB_004fea96
    MOV dword ptr [ECX + 0x334],0x0     ; 004fea8c
    MOV EDI,dword ptr [ECX + 0x8]       ; 004fea96
        ;   Label: LAB_004fea96
    XOR EAX,EAX                         ; 004fea99
    TEST EDI,EDI                        ; 004fea9b
    JLE 0x004feaba                      ; 004fea9d
        ;   XREF to: 004feaba (CONDITIONAL_JUMP)  ; LAB_004feaba
    MOV EDX,ECX                         ; 004fea9f
    MOV EDI,dword ptr [EDX + 0xc]       ; 004feaa1
        ;   Label: LAB_004feaa1
    LEA ESI,[EAX*0x4 + 0x0]             ; 004feaa4
    CMP EBX,EDI                         ; 004feaab
    JZ 0x004feacb                       ; 004feaad
        ;   XREF to: 004feacb (CONDITIONAL_JUMP)  ; LAB_004feacb
    INC EAX                             ; 004feaaf
    MOV EBP,dword ptr [ECX + 0x8]       ; 004feab0
    ADD EDX,0x4                         ; 004feab3
    CMP EAX,EBP                         ; 004feab6
    JL 0x004feaa1                       ; 004feab8
        ;   XREF to: 004feaa1 (CONDITIONAL_JUMP)  ; LAB_004feaa1
    POP EBP                             ; 004feaba
        ;   Label: LAB_004feaba
    POP EDI                             ; 004feabb
    POP ESI                             ; 004feabc
    POP EBX                             ; 004feabd
    RET                                 ; 004feabe
    MOV dword ptr [ECX + 0x330],0x0     ; 004feabf
        ;   Label: LAB_004feabf
    JMP 0x004fea84                      ; 004feac9
        ;   XREF to: 004fea84 (UNCONDITIONAL_JUMP)  ; LAB_004fea84
    MOV EBP,dword ptr [ECX + 0x8]       ; 004feacb
        ;   Label: LAB_004feacb
    DEC EBP                             ; 004feace
    MOV EDX,EBP                         ; 004feacf
    SUB EDX,EAX                         ; 004fead1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fead3
    ADD ECX,0xc                         ; 004feada
    PUSH EAX                            ; 004feadd
    LEA EAX,[ESI + 0x4]                 ; 004feade
    ADD EAX,ECX                         ; 004feae1
    PUSH EAX                            ; 004feae3
    MOV dword ptr [ECX + -0x4],EBP      ; 004feae4
    ADD ECX,ESI                         ; 004feae7
    PUSH ECX                            ; 004feae9
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004feaea
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004feaef
    CMP dword ptr [ESP + 0x1c],0x0      ; 004feaf2
    JZ 0x004feaba                       ; 004feaf7
        ;   XREF to: 004feaba (CONDITIONAL_JUMP)  ; LAB_004feaba
    PUSH EDI                            ; 004feaf9
    CALL core_actor.cpp_deleteActor_FUN_00408820 ; 004feafa
        ;   XREF to: 00408820 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_deleteActor_FUN_00408820(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004feaff
    POP EBP                             ; 004feb02
    POP EDI                             ; 004feb03
    POP ESI                             ; 004feb04
    POP EBX                             ; 004feb05
    RET                                 ; 004feb06

