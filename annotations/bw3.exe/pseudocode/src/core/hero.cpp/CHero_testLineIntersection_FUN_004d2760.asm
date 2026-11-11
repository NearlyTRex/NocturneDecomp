; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004d2760(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.god_mode_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d2760
        ;   Label: core_hero.cpp_CHero_testLineIntersection_FUN_004d2760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2761
    MOV EAX,[0x005fe9dc]                ; 004d2765 | g_CGamePtr
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004d276a | g_CGameInstance.god_mode_enabled
    JNZ 0x004d277f                      ; 004d2771
        ;   XREF to: 004d277f (CONDITIONAL_JUMP)  ; LAB_004d277f
    TEST dword ptr [EDX + 0xcdcc],0x7fffffff ; 004d2773
    JZ 0x004d2783                       ; 004d277d
        ;   XREF to: 004d2783 (CONDITIONAL_JUMP)  ; LAB_004d2783
    XOR EAX,EAX                         ; 004d277f
        ;   Label: LAB_004d277f
    POP EBP                             ; 004d2781
    RET                                 ; 004d2782
    PUSH EDI                            ; 004d2783
        ;   Label: LAB_004d2783
    PUSH ESI                            ; 004d2784
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d2785
    PUSH ESI                            ; 004d2789
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004d278a
    PUSH EDI                            ; 004d278e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d278f
    PUSH EBP                            ; 004d2793
    PUSH EDX                            ; 004d2794
    CALL core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0 ; 004d2795
        ;   XREF to: 00408da0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)
    ADD ESP,0x10                        ; 004d279a
    POP ESI                             ; 004d279d
    POP EDI                             ; 004d279e
    POP EBP                             ; 004d279f
    RET                                 ; 004d27a0

