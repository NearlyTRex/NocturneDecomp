; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004ce540(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field444_0x1ec
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408f90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ce540
        ;   Label: core_hero.cpp_CHero_testLineIntersection_FUN_004ce540
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce541
    MOV EAX,[0x00616494]                ; 004ce545 | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004ce54a | g_CGameInstance.field444_0x1ec
    JNZ 0x004ce55f                      ; 004ce551
        ;   XREF to: 004ce55f (CONDITIONAL_JUMP)  ; LAB_004ce55f
    TEST dword ptr [EDX + 0x10a60],0x7fffffff ; 004ce553
    JZ 0x004ce563                       ; 004ce55d
        ;   XREF to: 004ce563 (CONDITIONAL_JUMP)  ; LAB_004ce563
    XOR EAX,EAX                         ; 004ce55f
        ;   Label: LAB_004ce55f
    POP EBP                             ; 004ce561
    RET                                 ; 004ce562
    PUSH EDI                            ; 004ce563
        ;   Label: LAB_004ce563
    PUSH ESI                            ; 004ce564
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ce565
    PUSH ESI                            ; 004ce569
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ce56a
    PUSH EDI                            ; 004ce56e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004ce56f
    PUSH EBP                            ; 004ce573
    PUSH EDX                            ; 004ce574
    CALL core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408f90 ; 004ce575
        ;   XREF to: 00408f90 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408f90(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)
    ADD ESP,0x10                        ; 004ce57a
    POP ESI                             ; 004ce57d
    POP EDI                             ; 004ce57e
    POP EBP                             ; 004ce57f
    RET                                 ; 004ce580

