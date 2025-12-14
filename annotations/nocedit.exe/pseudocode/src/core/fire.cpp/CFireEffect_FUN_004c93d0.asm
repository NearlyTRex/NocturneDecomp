; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_fire.cpp_CFireEffect_FUN_004c93d0(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cbfc
;
; Referenced Globals:
;   CMuzzleFlash[20] g_MuzzleFlashPool
;   undefined4 DAT_02d58a60
;   undefined4 DAT_02d58abc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02d58a04]      ; 004c93d0 | g_MuzzleFlashPool
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c93d0
    XOR EAX,EAX                         ; 004c93d6
    CMP EDX,0x1                         ; 004c93d8
    JZ 0x004c93f4                       ; 004c93db
        ;   XREF to: 004c93f4 (CONDITIONAL_JUMP)  ; LAB_004c93f4
    ADD EAX,0x5c                        ; 004c93dd
        ;   Label: LAB_004c93dd
    CMP EAX,0x730                       ; 004c93e0
    JGE 0x004c64b0                      ; 004c93e5
        ;   XREF to: 004c64b0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2d58a04],0x1 ; 004c93eb | DAT_02d58a60 | DAT_02d58abc
    JNZ 0x004c93dd                      ; 004c93f2
        ;   XREF to: 004c93dd (CONDITIONAL_JUMP)  ; LAB_004c93dd
    MOV EAX,0x1                         ; 004c93f4
        ;   Label: LAB_004c93f4
    RET                                 ; 004c93f9

