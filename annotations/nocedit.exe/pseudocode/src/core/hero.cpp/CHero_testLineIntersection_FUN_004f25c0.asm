; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c6c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004f25c0
        ;   Label: core_hero.cpp_CHero_testLineIntersection_FUN_004f25c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f25c1
    MOV EAX,[0x0067b654]                ; 004f25c5 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004f25ca | DAT_02d81c6c
    JNZ 0x004f25df                      ; 004f25d1
        ;   XREF to: 004f25df (CONDITIONAL_JUMP)  ; LAB_004f25df
    TEST dword ptr [EDX + 0xbe24],0x7fffffff ; 004f25d3
    JZ 0x004f25e3                       ; 004f25dd
        ;   XREF to: 004f25e3 (CONDITIONAL_JUMP)  ; LAB_004f25e3
    XOR EAX,EAX                         ; 004f25df
        ;   Label: LAB_004f25df
    POP EBP                             ; 004f25e1
    RET                                 ; 004f25e2
    PUSH EDI                            ; 004f25e3
        ;   Label: LAB_004f25e3
    PUSH ESI                            ; 004f25e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f25e5
    PUSH ESI                            ; 004f25e9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f25ea
    PUSH EDI                            ; 004f25ee
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f25ef
    PUSH EBP                            ; 004f25f3
    PUSH EDX                            ; 004f25f4
    CALL core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150 ; 004f25f5
        ;   XREF to: 00409150 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)
    ADD ESP,0x10                        ; 004f25fa
    POP ESI                             ; 004f25fd
    POP EDI                             ; 004f25fe
    POP EBP                             ; 004f25ff
    RET                                 ; 004f2600

