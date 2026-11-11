; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004eaab0(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.god_mode_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408d60
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004eaab0
        ;   Label: core_hero.cpp_CHero_testLineIntersection_FUN_004eaab0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eaab1
    MOV EAX,[0x0061d95c]                ; 004eaab5 | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004eaaba | g_CGameInstance.god_mode_enabled
    JNZ 0x004eaacf                      ; 004eaac1
        ;   XREF to: 004eaacf (CONDITIONAL_JUMP)  ; LAB_004eaacf
    TEST dword ptr [EDX + 0xc1d0],0x7fffffff ; 004eaac3
    JZ 0x004eaad3                       ; 004eaacd
        ;   XREF to: 004eaad3 (CONDITIONAL_JUMP)  ; LAB_004eaad3
    XOR EAX,EAX                         ; 004eaacf
        ;   Label: LAB_004eaacf
    POP EBP                             ; 004eaad1
    RET                                 ; 004eaad2
    PUSH EDI                            ; 004eaad3
        ;   Label: LAB_004eaad3
    PUSH ESI                            ; 004eaad4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004eaad5
    PUSH ESI                            ; 004eaad9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004eaada
    PUSH EDI                            ; 004eaade
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004eaadf
    PUSH EBP                            ; 004eaae3
    PUSH EDX                            ; 004eaae4
    CALL core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408d60 ; 004eaae5
        ;   XREF to: 00408d60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408d60(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)
    ADD ESP,0x10                        ; 004eaaea
    POP ESI                             ; 004eaaed
    POP EDI                             ; 004eaaee
    POP EBP                             ; 004eaaef
    RET                                 ; 004eaaf0

