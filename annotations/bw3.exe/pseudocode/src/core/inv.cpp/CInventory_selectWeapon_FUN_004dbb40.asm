; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   specific_weapon
; int              Stack[0xc]:4   weapon_category
; int              Stack[0x10]:4   direction
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_game.cpp_FUN_004b9960 at 004b9c7d
;   core_game.cpp_FUN_004c07b0 at 004c0a31
;   core_inv.cpp_CInventory_select_FUN_004dcb40 at 004dcc5b
;   core_inv.cpp_FUN_004da880 at 004db62d
;   core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430 at 005184c7
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e6de
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
;   core_inv.cpp_FUN_004dd2d0
;   core_inv.cpp_FUN_004dd310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbb40
        ;   Label: core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
    PUSH ESI                            ; 004dbb41
    PUSH EDI                            ; 004dbb42
    PUSH EBP                            ; 004dbb43
    SUB ESP,0x4                         ; 004dbb44
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dbb47
    CMP dword ptr [ESI + 0x10],0x1      ; 004dbb4b
    JGE 0x004dbb63                      ; 004dbb4f
        ;   XREF to: 004dbb63 (CONDITIONAL_JUMP)  ; LAB_004dbb63
    MOV dword ptr [ESI + 0x338],0x0     ; 004dbb51
    ADD ESP,0x4                         ; 004dbb5b
        ;   Label: LAB_004dbb5b
    POP EBP                             ; 004dbb5e
    POP EDI                             ; 004dbb5f
    POP ESI                             ; 004dbb60
    POP EBX                             ; 004dbb61
    RET                                 ; 004dbb62
    PUSH 0x1                            ; 004dbb63
        ;   Label: LAB_004dbb63
    PUSH ESI                            ; 004dbb65
    XOR EBX,EBX                         ; 004dbb66
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340 ; 004dbb68
        ;   XREF to: 004dd340 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory * this_ptr, int reset_both)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dbb6d
    ADD ESP,0x8                         ; 004dbb70
    TEST ECX,ECX                        ; 004dbb73
    JLE 0x004dbb84                      ; 004dbb75
        ;   XREF to: 004dbb84 (CONDITIONAL_JUMP)  ; LAB_004dbb84
    MOV EDI,ESI                         ; 004dbb77
    MOV EDX,dword ptr [ESI + 0x338]     ; 004dbb79
        ;   Label: LAB_004dbb79
    CMP EDX,dword ptr [EDI + 0x14]      ; 004dbb7f
    JNZ 0x004dbbbf                      ; 004dbb82
        ;   XREF to: 004dbbbf (CONDITIONAL_JUMP)  ; LAB_004dbbbf
    XOR EBP,EBP                         ; 004dbb84
        ;   Label: LAB_004dbb84
    MOV ECX,dword ptr [ESP + 0x24]      ; 004dbb86
        ;   Label: LAB_004dbb86
    MOV EDI,dword ptr [ESI + 0x10]      ; 004dbb8a
    ADD EBX,ECX                         ; 004dbb8d
    CMP EBX,EDI                         ; 004dbb8f
    JL 0x004dbbcc                       ; 004dbb91
        ;   XREF to: 004dbbcc (CONDITIONAL_JUMP)  ; LAB_004dbbcc
    XOR EBX,EBX                         ; 004dbb93
    MOV EAX,[0x02d0c150]                ; 004dbb95 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004dbb95
    PUSH EAX                            ; 004dbb9a
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0x14] ; 004dbb9b
    PUSH EDX                            ; 004dbb9f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dbba0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dbba5
    MOV EDI,EAX                         ; 004dbba8
    MOV dword ptr [ESP],EAX             ; 004dbbaa
    TEST EAX,EAX                        ; 004dbbad
    JNZ 0x004dbbd5                      ; 004dbbaf
        ;   XREF to: 004dbbd5 (CONDITIONAL_JUMP)  ; LAB_004dbbd5
    INC EBP                             ; 004dbbb1
        ;   Label: LAB_004dbbb1
    CMP EBP,0x64                        ; 004dbbb2
    JL 0x004dbb86                       ; 004dbbb5
        ;   XREF to: 004dbb86 (CONDITIONAL_JUMP)  ; LAB_004dbb86
    ADD ESP,0x4                         ; 004dbbb7
    POP EBP                             ; 004dbbba
    POP EDI                             ; 004dbbbb
    POP ESI                             ; 004dbbbc
    POP EBX                             ; 004dbbbd
    RET                                 ; 004dbbbe
    INC EBX                             ; 004dbbbf
        ;   Label: LAB_004dbbbf
    MOV EBP,dword ptr [ESI + 0x10]      ; 004dbbc0
    ADD EDI,0x4                         ; 004dbbc3
    CMP EBX,EBP                         ; 004dbbc6
    JL 0x004dbb79                       ; 004dbbc8
        ;   XREF to: 004dbb79 (CONDITIONAL_JUMP)  ; LAB_004dbb79
    JMP 0x004dbb84                      ; 004dbbca
        ;   XREF to: 004dbb84 (UNCONDITIONAL_JUMP)  ; LAB_004dbb84
    TEST EBX,EBX                        ; 004dbbcc
        ;   Label: LAB_004dbbcc
    JGE 0x004dbb95                      ; 004dbbce
        ;   XREF to: 004dbb95 (CONDITIONAL_JUMP)  ; LAB_004dbb95
    LEA EBX,[EDI + -0x1]                ; 004dbbd0
    JMP 0x004dbb95                      ; 004dbbd3
        ;   XREF to: 004dbb95 (UNCONDITIONAL_JUMP)  ; LAB_004dbb95
    MOV ECX,dword ptr [ESP + 0x20]      ; 004dbbd5
        ;   Label: LAB_004dbbd5
    PUSH ECX                            ; 004dbbd9
    PUSH EAX                            ; 004dbbda
    PUSH ESI                            ; 004dbbdb
    CALL core_inv.cpp_FUN_004dd310      ; 004dbbdc
        ;   XREF to: 004dd310 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd310()
    ADD ESP,0xc                         ; 004dbbe1
    TEST EAX,EAX                        ; 004dbbe4
    JZ 0x004dbbb1                       ; 004dbbe6
        ;   XREF to: 004dbbb1 (CONDITIONAL_JUMP)  ; LAB_004dbbb1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dbbe8
    TEST EAX,EAX                        ; 004dbbec
    JZ 0x004dbbf4                       ; 004dbbee
        ;   XREF to: 004dbbf4 (CONDITIONAL_JUMP)  ; LAB_004dbbf4
    CMP EDI,EAX                         ; 004dbbf0
    JNZ 0x004dbbb1                      ; 004dbbf2
        ;   XREF to: 004dbbb1 (CONDITIONAL_JUMP)  ; LAB_004dbbb1
    MOV ECX,dword ptr [ESP]             ; 004dbbf4
        ;   Label: LAB_004dbbf4
    MOV EAX,dword ptr [ESI + 0x338]     ; 004dbbf7
    CMP EAX,ECX                         ; 004dbbfd
    JZ 0x004dbb5b                       ; 004dbbff
        ;   XREF to: 004dbb5b (CONDITIONAL_JUMP)  ; LAB_004dbb5b
    TEST EAX,EAX                        ; 004dbc05
    JZ 0x004dbc1b                       ; 004dbc07
        ;   XREF to: 004dbc1b (CONDITIONAL_JUMP)  ; LAB_004dbc1b
    PUSH 0x3dcccccd                     ; 004dbc09
    MOV EBX,dword ptr [EAX + 0x154]     ; 004dbc0e
    PUSH EAX                            ; 004dbc14
    CALL dword ptr [EBX + 0xc]          ; 004dbc15
    ADD ESP,0x8                         ; 004dbc18
    PUSH 0x3e7                          ; 004dbc1b
        ;   Label: LAB_004dbc1b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004dbc20
    PUSH ESI                            ; 004dbc24
    MOV dword ptr [ESI + 0x338],EAX     ; 004dbc25
    CALL core_inv.cpp_FUN_004dd2d0      ; 004dbc2b
        ;   XREF to: 004dd2d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd2d0()
    ADD ESP,0x8                         ; 004dbc30
    ADD ESP,0x4                         ; 004dbc33
    POP EBP                             ; 004dbc36
    POP EDI                             ; 004dbc37
    POP ESI                             ; 004dbc38
    POP EBX                             ; 004dbc39
    RET                                 ; 004dbc3a

