; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_0041a810(CBoneGuy *param_1,int param_2)
;
;
; Called Functions:
;   core_boneguy.cpp_FUN_00419550
;   core_enemy.cpp_FUN_00489c90
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a810
        ;   Label: core_boneguy.cpp_FUN_0041a810
    PUSH ESI                            ; 0041a811
    MOV EBX,dword ptr [ESP + 0xc]       ; 0041a812
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041a816
    MOV EDX,dword ptr [EBX + 0xd078]    ; 0041a81a
    PUSH EDX                            ; 0041a820
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0041a821
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV ECX,dword ptr [ESI + 0x30]      ; 0041a826
    ADD ESP,0x4                         ; 0041a829
    CMP ECX,0x70                        ; 0041a82c
    JZ 0x0041a859                       ; 0041a82f
        ;   XREF to: 0041a859 (CONDITIONAL_JUMP)  ; LAB_0041a859
    FLD float ptr [ESI + 0x4]           ; 0041a831
    FSUBR float ptr [EBX + 0x2538]      ; 0041a834
    FST float ptr [EBX + 0x2538]        ; 0041a83a
    FLDZ                                ; 0041a840
    FCOMPP                              ; 0041a842
    FNSTSW AX                           ; 0041a844
    SAHF                                ; 0041a846
    JNC 0x0041a85c                      ; 0041a847
        ;   XREF to: 0041a85c (CONDITIONAL_JUMP)  ; LAB_0041a85c
    PUSH dword ptr [ESI + 0x4]          ; 0041a849
    PUSH EBX                            ; 0041a84c
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 0041a84d
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 0041a852
    TEST EAX,EAX                        ; 0041a855
    JNZ 0x0041a87b                      ; 0041a857
        ;   XREF to: 0041a87b (CONDITIONAL_JUMP)  ; LAB_0041a87b
    POP ESI                             ; 0041a859
        ;   Label: LAB_0041a859
    POP EBX                             ; 0041a85a
    RET                                 ; 0041a85b
    PUSH EBX                            ; 0041a85c
        ;   Label: LAB_0041a85c
    CALL core_enemy.cpp_FUN_00489c90    ; 0041a85d
        ;   XREF to: 00489c90 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489c90()
    ADD ESP,0x4                         ; 0041a862
    PUSH EBX                            ; 0041a865
    MOV dword ptr [EBX + 0x2538],0x3f800000 ; 0041a866
    CALL core_boneguy.cpp_FUN_00419550  ; 0041a870
        ;   XREF to: 00419550 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_FUN_00419550(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 0041a875
    POP ESI                             ; 0041a878
    POP EBX                             ; 0041a879
    RET                                 ; 0041a87a
    PUSH 0x1                            ; 0041a87b
        ;   Label: LAB_0041a87b
    PUSH 0x3                            ; 0041a87d
    ADD EBX,0x158                       ; 0041a87f
    PUSH EBX                            ; 0041a885
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a886
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a88b
    POP ESI                             ; 0041a88e
    POP EBX                             ; 0041a88f
    RET                                 ; 0041a890

