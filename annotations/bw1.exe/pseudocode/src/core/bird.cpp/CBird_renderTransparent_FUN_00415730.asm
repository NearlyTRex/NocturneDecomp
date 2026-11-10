; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bird_cpp_CBird_renderTransparent_FUN_00415730(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005d3d1d
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415730
        ;   Label: core_bird.cpp_CBird_renderTransparent_FUN_00415730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415731
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00415735
    JNZ 0x00415742                      ; 0041573c
        ;   XREF to: 00415742 (CONDITIONAL_JUMP)  ; LAB_00415742
    XOR EAX,EAX                         ; 0041573e
        ;   Label: LAB_0041573e
    POP EBX                             ; 00415740
        ;   Label: LAB_00415740
    RET                                 ; 00415741
    PUSH 0x5d3d1d                       ; 00415742 | = "heroCanSee"
        ;   Label: LAB_00415742
    MOV ECX,dword ptr [0x0061b4d0]      ; 00415747 | DAT_0061b4d0
    PUSH ECX                            ; 0041574d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0041574e
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00415753
    TEST EAX,EAX                        ; 00415756
    JZ 0x00415740                       ; 00415758
        ;   XREF to: 00415740 (CONDITIONAL_JUMP)  ; LAB_00415740
    CMP dword ptr [EBX + 0x1fab0],0x0   ; 0041575a
    JNZ 0x0041573e                      ; 00415761
        ;   XREF to: 0041573e (CONDITIONAL_JUMP)  ; LAB_0041573e
    PUSH EBX                            ; 00415763
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0 ; 00415764
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00415769
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0041576c
    POP EBX                             ; 00415772
    RET                                 ; 00415773

