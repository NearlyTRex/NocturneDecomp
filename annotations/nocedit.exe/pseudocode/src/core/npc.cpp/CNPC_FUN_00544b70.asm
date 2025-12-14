; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_npc.cpp_CNPC_FUN_00544b70(CNPC * this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120 at 004f6165
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042a390
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544b70
        ;   Label: core_npc.cpp_CNPC_FUN_00544b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00544b74
    CMP dword ptr [EAX + 0x1f704],0x0   ; 00544b78
    JZ 0x00544b99                       ; 00544b7f
        ;   XREF to: 00544b99 (CONDITIONAL_JUMP)  ; LAB_00544b99
    TEST EDX,EDX                        ; 00544b81
    JZ 0x00544b8f                       ; 00544b83
        ;   XREF to: 00544b8f (CONDITIONAL_JUMP)  ; LAB_00544b8f
    MOV dword ptr [EAX + 0x240c],0x1    ; 00544b85
    PUSH EDX                            ; 00544b8f
        ;   Label: LAB_00544b8f
    PUSH EAX                            ; 00544b90
    CALL core_charactr.cpp_CCharacter_FUN_0042a390 ; 00544b91
        ;   XREF to: 0042a390 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a390(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00544b96
    RET                                 ; 00544b99
        ;   Label: LAB_00544b99

