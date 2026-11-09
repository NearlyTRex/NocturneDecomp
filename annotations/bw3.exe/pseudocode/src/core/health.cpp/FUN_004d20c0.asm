; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_health_cpp_FUN_004d20c0(int param_1,int param_2)
;
;
; XREF[2]:
;   core_inv.cpp_CInventory_select_FUN_004dcb40 at 004dcd29
;   core_inv.cpp_FUN_004da880 at 004da904
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;
; Called Functions:
;   core_game.cpp_FUN_004bd910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d20c0
        ;   Label: core_health.cpp_FUN_004d20c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d20c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d20c5
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004d20c9
    JLE 0x004d211a                      ; 004d20d0
        ;   XREF to: 004d211a (CONDITIONAL_JUMP)  ; LAB_004d211a
    FLD float ptr [EBX + 0x2d8]         ; 004d20d2
    FADD float ptr [EAX + 0x2538]       ; 004d20d8
    FSTP float ptr [EAX + 0x2538]       ; 004d20de
    CMP dword ptr [EAX + 0x2538],0x42c80000 ; 004d20e4
    JLE 0x004d20fa                      ; 004d20ee
        ;   XREF to: 004d20fa (CONDITIONAL_JUMP)  ; LAB_004d20fa
    MOV dword ptr [EAX + 0x2538],0x42c80000 ; 004d20f0
    PUSH EDI                            ; 004d20fa
        ;   Label: LAB_004d20fa
    PUSH ESI                            ; 004d20fb
    MOV EDI,dword ptr [EBX + 0x2d4]     ; 004d20fc
    MOV ESI,dword ptr [0x005fe9dc]      ; 004d2102 | g_CGamePtr
    DEC EDI                             ; 004d2108
    PUSH ESI                            ; 004d2109
    MOV dword ptr [EBX + 0x2d4],EDI     ; 004d210a
    CALL core_game.cpp_FUN_004bd910     ; 004d2110
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd910(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d2115
    POP ESI                             ; 004d2118
    POP EDI                             ; 004d2119
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 004d211a
        ;   Label: LAB_004d211a
    POP EBX                             ; 004d2120
    RET                                 ; 004d2121

