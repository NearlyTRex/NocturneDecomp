; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTwigZombie * __cdecl core_fforest_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fforest.cpp_factoryFuncTwigZombie_FUN_005a26a0 at 005a26b3
;
; Referenced Globals:
;   undefined4 DAT_005ff16c
;   undefined4 DAT_005ff170
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0
;   core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0
;   core_muzzle.cpp_FUN_0059d7f0
;   core_muzzle.cpp_FUN_0059d990
;   core_muzzle.cpp_FUN_0059dc80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a26d0
        ;   Label: core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0
    PUSH ESI                            ; 005a26d1
    PUSH EDI                            ; 005a26d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a26d3
    PUSH EDX                            ; 005a26d7
    CALL core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 ; 005a26d8
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a26dd
    PUSH 0x5eff7b                       ; 005a26e0
    MOV EBX,EAX                         ; 005a26e5
    LEA ESI,[EAX + 0x2b4]               ; 005a26e7
    PUSH ESI                            ; 005a26ed
    MOV dword ptr [EAX + 0x2b0],0x5ff184 ; 005a26ee
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a26f8
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x1134c],0x3f400000 ; 005a26fd
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a2707
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a2711
    LEA EDI,[EBX + 0x113d4]             ; 005a271b
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a2721
    FLD float ptr [0x005ff16c]          ; 005a272b | DAT_005ff16c
    MOV dword ptr [EBX + 0x1138c],0x6   ; 005a2731
    FLD float ptr [0x005ff170]          ; 005a273b | DAT_005ff170
    MOV dword ptr [EBX + 0x11398],0x4479c000 ; 005a2741
    MOV ESI,0x5eff8a                    ; 005a274b
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a2750
    ADD ESP,0x8                         ; 005a275a
    FXCH                                ; 005a275d
    FSTP float ptr [EBX + 0x11370]      ; 005a275f
    FSTP float ptr [EBX + 0x11394]      ; 005a2765
    PUSH EDI                            ; 005a276b
    MOV AL,byte ptr [ESI]               ; 005a276c
        ;   Label: LAB_005a276c
    MOV byte ptr [EDI],AL               ; 005a276e
    CMP AL,0x0                          ; 005a2770
    JZ 0x005a2784                       ; 005a2772
        ;   XREF to: 005a2784 (CONDITIONAL_JUMP)  ; LAB_005a2784
    MOV AL,byte ptr [ESI + 0x1]         ; 005a2774
    ADD ESI,0x2                         ; 005a2777
    MOV byte ptr [EDI + 0x1],AL         ; 005a277a
    ADD EDI,0x2                         ; 005a277d
    CMP AL,0x0                          ; 005a2780
    JNZ 0x005a276c                      ; 005a2782
        ;   XREF to: 005a276c (CONDITIONAL_JUMP)  ; LAB_005a276c
    POP EDI                             ; 005a2784
        ;   Label: LAB_005a2784
    PUSH 0x0                            ; 005a2785
    PUSH 0x0                            ; 005a2787
    PUSH EBX                            ; 005a2789
    CALL core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0 ; 005a278a
        ;   XREF to: 005a28a0 (UNCONDITIONAL_CALL)  ; void core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0(CTwigZombie * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a278f
    PUSH 0x5eff91                       ; 005a2792
    PUSH 0x5eff9b                       ; 005a2797
    LEA ESI,[EBX + 0x10af8]             ; 005a279c
    PUSH ESI                            ; 005a27a2
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005a27a3
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a27a8
    PUSH 0x5effa9                       ; 005a27ab
    PUSH ESI                            ; 005a27b0
    CALL core_muzzle.cpp_FUN_0059d990   ; 005a27b1
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a27b6
    PUSH ESI                            ; 005a27b9
    CALL core_muzzle.cpp_FUN_0059dc80   ; 005a27ba
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a27bf
    LEA EDI,[EBX + 0x11444]             ; 005a27c2
    MOV ESI,0x5effaf                    ; 005a27c8
    PUSH EDI                            ; 005a27cd
    MOV AL,byte ptr [ESI]               ; 005a27ce
        ;   Label: LAB_005a27ce
    MOV byte ptr [EDI],AL               ; 005a27d0
    CMP AL,0x0                          ; 005a27d2
    JZ 0x005a27e6                       ; 005a27d4
        ;   XREF to: 005a27e6 (CONDITIONAL_JUMP)  ; LAB_005a27e6
    MOV AL,byte ptr [ESI + 0x1]         ; 005a27d6
    ADD ESI,0x2                         ; 005a27d9
    MOV byte ptr [EDI + 0x1],AL         ; 005a27dc
    ADD EDI,0x2                         ; 005a27df
    CMP AL,0x0                          ; 005a27e2
    JNZ 0x005a27ce                      ; 005a27e4
        ;   XREF to: 005a27ce (CONDITIONAL_JUMP)  ; LAB_005a27ce
    POP EDI                             ; 005a27e6
        ;   Label: LAB_005a27e6
    MOV ESI,0x5effbd                    ; 005a27e7
    LEA EDI,[EBX + 0x11741]             ; 005a27ec
    PUSH EDI                            ; 005a27f2
    MOV AL,byte ptr [ESI]               ; 005a27f3
        ;   Label: LAB_005a27f3
    MOV byte ptr [EDI],AL               ; 005a27f5
    CMP AL,0x0                          ; 005a27f7
    JZ 0x005a280b                       ; 005a27f9
        ;   XREF to: 005a280b (CONDITIONAL_JUMP)  ; LAB_005a280b
    MOV AL,byte ptr [ESI + 0x1]         ; 005a27fb
    ADD ESI,0x2                         ; 005a27fe
    MOV byte ptr [EDI + 0x1],AL         ; 005a2801
    ADD EDI,0x2                         ; 005a2804
    CMP AL,0x0                          ; 005a2807
    JNZ 0x005a27f3                      ; 005a2809
        ;   XREF to: 005a27f3 (CONDITIONAL_JUMP)  ; LAB_005a27f3
    POP EDI                             ; 005a280b
        ;   Label: LAB_005a280b
    MOV EAX,EBX                         ; 005a280c
    MOV dword ptr [EBX + 0x2ac],0x0     ; 005a280e
    POP EDI                             ; 005a2818
    POP ESI                             ; 005a2819
    POP EBX                             ; 005a281a
    RET                                 ; 005a281b

