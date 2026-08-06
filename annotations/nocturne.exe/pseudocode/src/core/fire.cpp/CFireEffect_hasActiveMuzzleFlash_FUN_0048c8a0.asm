; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0050a260 at 0050a4dc
;
; Referenced Globals:
;   CMuzzleFlash[20] g_CMuzzleFlash_ARRAY_01c4e958
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c4e958]      ; 0048c8a0 | g_CMuzzleFlash_ARRAY_01c4e958
        ;   Label: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
    XOR EAX,EAX                         ; 0048c8a6
    CMP EDX,0x1                         ; 0048c8a8
    JZ 0x0048c8c4                       ; 0048c8ab
        ;   XREF to: 0048c8c4 (CONDITIONAL_JUMP)  ; LAB_0048c8c4
    ADD EAX,0x5c                        ; 0048c8ad
        ;   Label: LAB_0048c8ad
    CMP EAX,0x730                       ; 0048c8b0
    JGE 0x00489980                      ; 0048c8b5
        ;   XREF to: 00489980 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x1c4e958],0x1 ; 0048c8bb
    JNZ 0x0048c8ad                      ; 0048c8c2
        ;   XREF to: 0048c8ad (CONDITIONAL_JUMP)  ; LAB_0048c8ad
    MOV EAX,0x1                         ; 0048c8c4
        ;   Label: LAB_0048c8c4
    RET                                 ; 0048c8c9

