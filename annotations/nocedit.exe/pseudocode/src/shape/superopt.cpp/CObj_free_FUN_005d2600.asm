; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_free_FUN_005d2600(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_superopt.cpp_CObj_dtor_FUN_005d2260 at 005d226d
;   shape_superopt.cpp_COptimize_FUN_005d7000 at 005d7009
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7d24
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2600
        ;   Label: shape_superopt.cpp_CObj_free_FUN_005d2600
    PUSH ESI                            ; 005d2601
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d2602
    MOV EDX,dword ptr [EBX + 0x4]       ; 005d2606
    TEST EDX,EDX                        ; 005d2609
    JNZ 0x005d2625                      ; 005d260b
        ;   XREF to: 005d2625 (CONDITIONAL_JUMP)  ; LAB_005d2625
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d260d
        ;   Label: LAB_005d260d
    MOV dword ptr [EBX + 0x4],0x0       ; 005d2610
    TEST ESI,ESI                        ; 005d2617
    JNZ 0x005d2630                      ; 005d2619
        ;   XREF to: 005d2630 (CONDITIONAL_JUMP)  ; LAB_005d2630
    MOV dword ptr [EBX + 0xc],0x0       ; 005d261b
    POP ESI                             ; 005d2622
    POP EBX                             ; 005d2623
    RET                                 ; 005d2624
    PUSH EDX                            ; 005d2625
        ;   Label: LAB_005d2625
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d2626
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005d262b
    JMP 0x005d260d                      ; 005d262e
        ;   XREF to: 005d260d (UNCONDITIONAL_JUMP)  ; LAB_005d260d
    PUSH ESI                            ; 005d2630
        ;   Label: LAB_005d2630
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d2631
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005d2636
    MOV dword ptr [EBX + 0xc],0x0       ; 005d2639
    POP ESI                             ; 005d2640
    POP EBX                             ; 005d2641
    RET                                 ; 005d2642

