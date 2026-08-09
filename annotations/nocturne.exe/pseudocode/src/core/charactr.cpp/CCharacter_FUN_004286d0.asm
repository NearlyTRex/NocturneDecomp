; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_FUN_004286d0(CCharacter *this_ptr,float param_2)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; XREF[2]:
;   core_baron.cpp_CBaron_FUN_00410cc0 at 00410e13
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 00428684
;
; Referenced Globals:
;   CForceFeedback* g_CForceFeedback_PTR_005b9284 = 01c70f74
;   int g_LocalHeroIndex
;
; Called Functions:
;   engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004286d0
        ;   Label: core_charactr.cpp_CCharacter_FUN_004286d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004286d4
    MOV dword ptr [EDX + 0xb648],EAX    ; 004286d8
    MOV EAX,[0x01cae0e8]                ; 004286de | g_LocalHeroIndex
    CMP EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004286e3
    JZ 0x004286ed                       ; 004286ea
        ;   XREF to: 004286ed (CONDITIONAL_JUMP)  ; LAB_004286ed
    RET                                 ; 004286ec
    PUSH EBX                            ; 004286ed
        ;   Label: LAB_004286ed
    MOV EBX,dword ptr [0x005b9284]      ; 004286ee | g_CForceFeedback_PTR_005b9284
    PUSH dword ptr [ESP + 0xc]          ; 004286f4
    PUSH EBX                            ; 004286f8
    CALL engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0 ; 004286f9
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; void engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0(CForceFeedback * this_ptr)
    ADD ESP,0x8                         ; 004286fe
    POP EBX                             ; 00428701
    RET                                 ; 00428702

