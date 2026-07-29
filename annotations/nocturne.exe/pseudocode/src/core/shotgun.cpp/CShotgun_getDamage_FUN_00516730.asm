; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_00516730(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00516730
        ;   Label: core_shotgun.cpp_CShotgun_getDamage_FUN_00516730
    MOV EAX,dword ptr [ESP + 0xc]       ; 00516733
    CMP dword ptr [EAX + 0x564],0x6     ; 00516737
    JNZ 0x0051674c                      ; 0051673e
        ;   XREF to: 0051674c (CONDITIONAL_JUMP)  ; LAB_0051674c
    XOR ECX,ECX                         ; 00516740
    MOV dword ptr [ESP],ECX             ; 00516742
    MOV EAX,dword ptr [ESP]             ; 00516745
    ADD ESP,0x8                         ; 00516748
    RET                                 ; 0051674b
    PUSH 0x43480000                     ; 0051674c
        ;   Label: LAB_0051674c
    PUSH 0x43160000                     ; 00516751
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00516756
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0051675b
    FLD float ptr [ESP + 0xc]           ; 0051675f
    ADD ESP,0x8                         ; 00516763
    FSTP float ptr [ESP]                ; 00516766
    MOV EAX,dword ptr [ESP]             ; 00516769
    ADD ESP,0x8                         ; 0051676c
    RET                                 ; 0051676f

