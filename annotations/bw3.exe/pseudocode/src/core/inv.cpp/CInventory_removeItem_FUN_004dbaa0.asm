; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_to_remove
; int              Stack[0xc]:4   should_delete_actor
;
; XREF[5]:
;   core_inv.cpp_CInventory_clear_FUN_004da440 at 004da463
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004de6e0 at 004de71c
;   core_inv.cpp_CInventory_select_FUN_004dcb40 at 004dcd3d
;   core_prye.cpp_FUN_00524940 at 00524c0c
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e150
;
; Called Functions:
;   core_actor.cpp_FUN_004085a0
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbaa0
        ;   Label: core_inv.cpp_CInventory_removeItem_FUN_004dbaa0
    PUSH ESI                            ; 004dbaa1
    PUSH EDI                            ; 004dbaa2
    PUSH EBP                            ; 004dbaa3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004dbaa4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004dbaa8
    CMP EBX,dword ptr [ECX + 0x338]     ; 004dbaac
    JZ 0x004dbaef                       ; 004dbab2
        ;   XREF to: 004dbaef (CONDITIONAL_JUMP)  ; LAB_004dbaef
    CMP EBX,dword ptr [ECX + 0x33c]     ; 004dbab4
        ;   Label: LAB_004dbab4
    JNZ 0x004dbac6                      ; 004dbaba
        ;   XREF to: 004dbac6 (CONDITIONAL_JUMP)  ; LAB_004dbac6
    MOV dword ptr [ECX + 0x33c],0x0     ; 004dbabc
    MOV EDI,dword ptr [ECX + 0x10]      ; 004dbac6
        ;   Label: LAB_004dbac6
    XOR EAX,EAX                         ; 004dbac9
    TEST EDI,EDI                        ; 004dbacb
    JLE 0x004dbaea                      ; 004dbacd
        ;   XREF to: 004dbaea (CONDITIONAL_JUMP)  ; LAB_004dbaea
    MOV EDX,ECX                         ; 004dbacf
    MOV EDI,dword ptr [EDX + 0x14]      ; 004dbad1
        ;   Label: LAB_004dbad1
    LEA ESI,[EAX*0x4 + 0x0]             ; 004dbad4
    CMP EBX,EDI                         ; 004dbadb
    JZ 0x004dbafb                       ; 004dbadd
        ;   XREF to: 004dbafb (CONDITIONAL_JUMP)  ; LAB_004dbafb
    INC EAX                             ; 004dbadf
    MOV EBP,dword ptr [ECX + 0x10]      ; 004dbae0
    ADD EDX,0x4                         ; 004dbae3
    CMP EAX,EBP                         ; 004dbae6
    JL 0x004dbad1                       ; 004dbae8
        ;   XREF to: 004dbad1 (CONDITIONAL_JUMP)  ; LAB_004dbad1
    POP EBP                             ; 004dbaea
        ;   Label: LAB_004dbaea
    POP EDI                             ; 004dbaeb
    POP ESI                             ; 004dbaec
    POP EBX                             ; 004dbaed
    RET                                 ; 004dbaee
    MOV dword ptr [ECX + 0x338],0x0     ; 004dbaef
        ;   Label: LAB_004dbaef
    JMP 0x004dbab4                      ; 004dbaf9
        ;   XREF to: 004dbab4 (UNCONDITIONAL_JUMP)  ; LAB_004dbab4
    MOV EBP,dword ptr [ECX + 0x10]      ; 004dbafb
        ;   Label: LAB_004dbafb
    DEC EBP                             ; 004dbafe
    MOV EDX,EBP                         ; 004dbaff
    SUB EDX,EAX                         ; 004dbb01
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbb03
    ADD ECX,0x14                        ; 004dbb0a
    PUSH EAX                            ; 004dbb0d
    LEA EAX,[ESI + 0x4]                 ; 004dbb0e
    ADD EAX,ECX                         ; 004dbb11
    PUSH EAX                            ; 004dbb13
    MOV dword ptr [ECX + -0x4],EBP      ; 004dbb14
    ADD ECX,ESI                         ; 004dbb17
    PUSH ECX                            ; 004dbb19
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004dbb1a
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004dbb1f
    CMP dword ptr [ESP + 0x1c],0x0      ; 004dbb22
    JZ 0x004dbaea                       ; 004dbb27
        ;   XREF to: 004dbaea (CONDITIONAL_JUMP)  ; LAB_004dbaea
    PUSH EDI                            ; 004dbb29
    CALL core_actor.cpp_FUN_004085a0    ; 004dbb2a
        ;   XREF to: 004085a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004085a0()
    ADD ESP,0x4                         ; 004dbb2f
    POP EBP                             ; 004dbb32
    POP EDI                             ; 004dbb33
    POP ESI                             ; 004dbb34
    POP EBX                             ; 004dbb35
    RET                                 ; 004dbb36

