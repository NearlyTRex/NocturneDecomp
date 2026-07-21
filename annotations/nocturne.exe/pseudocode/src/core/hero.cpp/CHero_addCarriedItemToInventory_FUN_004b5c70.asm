; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0053f310 at 0053f560
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410 at 00497538
;   core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 at 00537f73
;
; Called Functions:
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5c70
        ;   Label: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b5c71
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b5c75
    MOV EAX,EDX                         ; 004b5c79
    SHL EAX,0x4                         ; 004b5c7b
    ADD EAX,EDX                         ; 004b5c7e
    SHL EAX,0x2                         ; 004b5c80
    LEA EBX,[ECX + EAX*0x1]             ; 004b5c83
    MOV EAX,dword ptr [EBX + 0x24ac]    ; 004b5c86
    TEST EAX,EAX                        ; 004b5c8c
    JNZ 0x004b5c92                      ; 004b5c8e
        ;   XREF to: 004b5c92 (CONDITIONAL_JUMP)  ; LAB_004b5c92
    POP EBX                             ; 004b5c90
    RET                                 ; 004b5c91
    PUSH 0x1                            ; 004b5c92
        ;   Label: LAB_004b5c92
    PUSH EAX                            ; 004b5c94
    LEA EAX,[ECX + 0x1f5a0]             ; 004b5c95
    PUSH EAX                            ; 004b5c9b
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004b5c9c
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_addItem_FUN_004bf360()
    ADD ESP,0xc                         ; 004b5ca1
    MOV dword ptr [EBX + 0x24ac],0x0    ; 004b5ca4
    POP EBX                             ; 004b5cae
    RET                                 ; 004b5caf

