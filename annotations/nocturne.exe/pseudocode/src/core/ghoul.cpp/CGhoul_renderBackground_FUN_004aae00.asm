; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CEnemy *param_1,int param_2)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_renderBackground_FUN_0047a000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aae00
        ;   Label: core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00
    CMP dword ptr [EAX + 0xbd44],0x0    ; 004aae04
    JNZ 0x004aae16                      ; 004aae0b
        ;   XREF to: 004aae16 (CONDITIONAL_JUMP)  ; LAB_004aae16
    CMP dword ptr [EAX + 0xbd40],0x0    ; 004aae0d
    JLE 0x004aae17                      ; 004aae14
        ;   XREF to: 004aae17 (CONDITIONAL_JUMP)  ; LAB_004aae17
    RET                                 ; 004aae16
        ;   Label: LAB_004aae16
    PUSH EBX                            ; 004aae17
        ;   Label: LAB_004aae17
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aae18
    PUSH EBX                            ; 004aae1c
    PUSH EAX                            ; 004aae1d
    CALL core_enemy.cpp_CEnemy_renderBackground_FUN_0047a000 ; 004aae1e
        ;   XREF to: 0047a000 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_renderBackground_FUN_0047a000(CEnemy * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004aae23
    POP EBX                             ; 004aae26
    RET                                 ; 004aae27

