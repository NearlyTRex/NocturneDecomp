; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_004780e0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004780e0
        ;   Label: core_elephant.cpp_CElephantGun_getDamage_FUN_004780e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004780e3
    CMP dword ptr [EAX + 0x564],0x6     ; 004780e7
    JNZ 0x004780fc                      ; 004780ee
        ;   XREF to: 004780fc (CONDITIONAL_JUMP)  ; LAB_004780fc
    XOR ECX,ECX                         ; 004780f0
    MOV dword ptr [ESP],ECX             ; 004780f2
    MOV EAX,dword ptr [ESP]             ; 004780f5
    ADD ESP,0x8                         ; 004780f8
    RET                                 ; 004780fb
    PUSH 0x44160000                     ; 004780fc
        ;   Label: LAB_004780fc
    PUSH 0x43e10000                     ; 00478101
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478106
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0047810b
    FLD float ptr [ESP + 0xc]           ; 0047810f
    ADD ESP,0x8                         ; 00478113
    FSTP float ptr [ESP]                ; 00478116
    MOV EAX,dword ptr [ESP]             ; 00478119
    ADD ESP,0x8                         ; 0047811c
    RET                                 ; 0047811f

