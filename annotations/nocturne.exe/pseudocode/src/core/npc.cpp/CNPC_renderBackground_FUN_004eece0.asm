; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_004eece0(CNPC *this_ptr,int layer_flag)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[1]:
;   core_hostage.cpp_CHostage_renderBackground_FUN_004b82d0 at 004b8315
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_00426510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eece0
        ;   Label: core_npc.cpp_CNPC_renderBackground_FUN_004eece0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eece4
    CMP dword ptr [EAX + 0x1f56c],0x0   ; 004eece8
    JZ 0x004eed09                       ; 004eecef
        ;   XREF to: 004eed09 (CONDITIONAL_JUMP)  ; LAB_004eed09
    TEST EDX,EDX                        ; 004eecf1
    JZ 0x004eecff                       ; 004eecf3
        ;   XREF to: 004eecff (CONDITIONAL_JUMP)  ; LAB_004eecff
    MOV dword ptr [EAX + 0x2404],0x1    ; 004eecf5
    PUSH EDX                            ; 004eecff
        ;   Label: LAB_004eecff
    PUSH EAX                            ; 004eed00
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_00426510 ; 004eed01
        ;   XREF to: 00426510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_00426510(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004eed06
    RET                                 ; 004eed09
        ;   Label: LAB_004eed09

