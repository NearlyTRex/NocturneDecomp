; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(CFireEffect *this_ptr,int render_mode,int render_completeness)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; int              Stack[0xc]:4   render_completeness
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_0053ba00 at 0053ba26
;   core_set.cpp_CDemonSet_renderDecals_FUN_0053ba40 at 0053ba7e
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 005352f0
;   core_set.cpp_FUN_00535da0 at 0053621f
;
; Referenced Globals:
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8eea8
;   undefined4 g_StakePool[0].physics_box.is_valid
;   undefined4 g_StakePool[1].physics_box.is_valid
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00497610
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_004975a0
;   core_fire.cpp_CCrater_render_FUN_0049d980
;   core_fire.cpp_CStake_render_FUN_00497dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1e90
        ;   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90
    PUSH ESI                            ; 004a1e91
    PUSH EDI                            ; 004a1e92
    PUSH EBP                            ; 004a1e93
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a1e94
    PUSH 0x1c8aea8                      ; 004a1e98
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_004975a0 ; 004a1e9d
        ;   XREF to: 004975a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_004975a0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004a1ea2
    CMP dword ptr [ESP + 0x18],0x0      ; 004a1ea5
    JZ 0x004a1f75                       ; 004a1eaa
        ;   XREF to: 004a1f75 (CONDITIONAL_JUMP)  ; LAB_004a1f75
    MOV EBX,dword ptr [0x01c8aea0]      ; 004a1eb0 | DAT_01c8aea0
    XOR ESI,ESI                         ; 004a1eb6
    TEST EBX,EBX                        ; 004a1eb8
    JLE 0x004a1ee4                      ; 004a1eba
        ;   XREF to: 004a1ee4 (CONDITIONAL_JUMP)  ; LAB_004a1ee4
    XOR EBX,EBX                         ; 004a1ebc
    CMP dword ptr [EBX + 0x1c8aeb8],0x0 ; 004a1ebe
        ;   Label: LAB_004a1ebe
    JNZ 0x004a1ed7                      ; 004a1ec5
        ;   XREF to: 004a1ed7 (CONDITIONAL_JUMP)  ; LAB_004a1ed7
    MOV EAX,0x1c8aea8                   ; 004a1ec7
    ADD EAX,EBX                         ; 004a1ecc
    PUSH EAX                            ; 004a1ece
    CALL core_fire.cpp_CBulletHole_render_FUN_00497610 ; 004a1ecf
        ;   XREF to: 00497610 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00497610(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004a1ed4
    MOV EAX,[0x01c8aea0]                ; 004a1ed7 | DAT_01c8aea0
        ;   Label: LAB_004a1ed7
    INC ESI                             ; 004a1edc
    ADD EBX,0x40                        ; 004a1edd
    CMP ESI,EAX                         ; 004a1ee0
    JL 0x004a1ebe                       ; 004a1ee2
        ;   XREF to: 004a1ebe (CONDITIONAL_JUMP)  ; LAB_004a1ebe
    CMP dword ptr [ESP + 0x18],0x0      ; 004a1ee4
        ;   Label: LAB_004a1ee4
    JZ 0x004a1f3c                       ; 004a1ee9
        ;   XREF to: 004a1f3c (CONDITIONAL_JUMP)  ; LAB_004a1f3c
    MOV ECX,dword ptr [0x01c8eea8]      ; 004a1eeb | DAT_01c8eea8
    XOR ESI,ESI                         ; 004a1ef1
    TEST ECX,ECX                        ; 004a1ef3
    JLE 0x004a1f3c                      ; 004a1ef5
        ;   XREF to: 004a1f3c (CONDITIONAL_JUMP)  ; LAB_004a1f3c
    MOV EDI,0x1c8eeb0                   ; 004a1ef7
    XOR EBX,EBX                         ; 004a1efc
    MOV EAX,dword ptr [EDI + 0x258]     ; 004a1efe | g_StakePool[0].physics_box.is_valid | g_StakePool[1].physics_box.is_valid
        ;   Label: LAB_004a1efe
    TEST EAX,EAX                        ; 004a1f04
    JZ 0x004a1fc7                       ; 004a1f06
        ;   XREF to: 004a1fc7 (CONDITIONAL_JUMP)  ; LAB_004a1fc7
    CMP dword ptr [EBX + 0x1c8eeb0],0x0 ; 004a1f0c
    JZ 0x004a1f25                       ; 004a1f13
        ;   XREF to: 004a1f25 (CONDITIONAL_JUMP)  ; LAB_004a1f25
    MOV EAX,0x1c8eeb0                   ; 004a1f15
        ;   Label: LAB_004a1f15
    ADD EAX,EBX                         ; 004a1f1a
    PUSH EAX                            ; 004a1f1c
    CALL core_fire.cpp_CStake_render_FUN_00497dc0 ; 004a1f1d
        ;   XREF to: 00497dc0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_00497dc0(CStake * this_ptr)
    ADD ESP,0x4                         ; 004a1f22
    MOV ECX,dword ptr [0x01c8eea8]      ; 004a1f25 | DAT_01c8eea8
        ;   Label: LAB_004a1f25
    ADD EBX,0x260                       ; 004a1f2b
    INC ESI                             ; 004a1f31
    ADD EDI,0x260                       ; 004a1f32
    CMP ESI,ECX                         ; 004a1f38
    JL 0x004a1efe                       ; 004a1f3a
        ;   XREF to: 004a1efe (CONDITIONAL_JUMP)  ; LAB_004a1efe
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a1f3c
        ;   Label: LAB_004a1f3c
    TEST EBX,EBX                        ; 004a1f40
    JZ 0x004a1fd6                       ; 004a1f42
        ;   XREF to: 004a1fd6 (CONDITIONAL_JUMP)  ; LAB_004a1fd6
    MOV EBX,0x1cfaff8                   ; 004a1f48
    LEA ESI,[EBX + 0x8c0]               ; 004a1f4d
    PUSH EBX                            ; 004a1f53
        ;   Label: LAB_004a1f53
    CALL core_fire.cpp_CCrater_render_FUN_0049d980 ; 004a1f54
        ;   XREF to: 0049d980 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_0049d980(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004a1f59
    ADD ESP,0x4                         ; 004a1f5c
    CMP EBX,ESI                         ; 004a1f5f
    JNZ 0x004a1f53                      ; 004a1f61
        ;   XREF to: 004a1f53 (CONDITIONAL_JUMP)  ; LAB_004a1f53
    LEA EAX,[EAX]                       ; 004a1f63
    LEA EDX,[EDX]                       ; 004a1f69
    NOP                                 ; 004a1f6f
    POP EBP                             ; 004a1f70
        ;   Label: LAB_004a1f70
    POP EDI                             ; 004a1f71
    POP ESI                             ; 004a1f72
    POP EBX                             ; 004a1f73
    RET                                 ; 004a1f74
    MOV ECX,dword ptr [0x01c8aea0]      ; 004a1f75 | DAT_01c8aea0
        ;   Label: LAB_004a1f75
    XOR ESI,ESI                         ; 004a1f7b
    TEST ECX,ECX                        ; 004a1f7d
    JLE 0x004a1ee4                      ; 004a1f7f
        ;   XREF to: 004a1ee4 (CONDITIONAL_JUMP)  ; LAB_004a1ee4
    XOR EBX,EBX                         ; 004a1f85
    XOR EDI,EDI                         ; 004a1f87
    CMP EDI,dword ptr [EBX + 0x1c8aeb4] ; 004a1f89
        ;   Label: LAB_004a1f89
    JZ 0x004a1fb3                       ; 004a1f8f
        ;   XREF to: 004a1fb3 (CONDITIONAL_JUMP)  ; LAB_004a1fb3
    CMP EDI,dword ptr [EBX + 0x1c8aeb8] ; 004a1f91
    JNZ 0x004a1fb3                      ; 004a1f97
        ;   XREF to: 004a1fb3 (CONDITIONAL_JUMP)  ; LAB_004a1fb3
    MOV EAX,0x1c8aea8                   ; 004a1f99
    ADD EAX,EBX                         ; 004a1f9e
    PUSH EAX                            ; 004a1fa0
    CALL core_fire.cpp_CBulletHole_render_FUN_00497610 ; 004a1fa1
        ;   XREF to: 00497610 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00497610(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004a1fa6
    TEST EBP,EBP                        ; 004a1fa9
    JZ 0x004a1fb3                       ; 004a1fab
        ;   XREF to: 004a1fb3 (CONDITIONAL_JUMP)  ; LAB_004a1fb3
    MOV dword ptr [EBX + 0x1c8aeb4],EDI ; 004a1fad
    MOV ECX,dword ptr [0x01c8aea0]      ; 004a1fb3 | DAT_01c8aea0
        ;   Label: LAB_004a1fb3
    INC ESI                             ; 004a1fb9
    ADD EBX,0x40                        ; 004a1fba
    CMP ESI,ECX                         ; 004a1fbd
    JGE 0x004a1ee4                      ; 004a1fbf
        ;   XREF to: 004a1ee4 (CONDITIONAL_JUMP)  ; LAB_004a1ee4
    JMP 0x004a1f89                      ; 004a1fc5
        ;   XREF to: 004a1f89 (UNCONDITIONAL_JUMP)  ; LAB_004a1f89
    MOV dword ptr [EBX + 0x1c8eeb0],0x1 ; 004a1fc7
        ;   Label: LAB_004a1fc7
    JMP 0x004a1f15                      ; 004a1fd1
        ;   XREF to: 004a1f15 (UNCONDITIONAL_JUMP)  ; LAB_004a1f15
    XOR EDI,EDI                         ; 004a1fd6
        ;   Label: LAB_004a1fd6
    CMP EDI,dword ptr [EBX + 0x1cfaffc] ; 004a1fd8
        ;   Label: LAB_004a1fd8
    JZ 0x004a1ffa                       ; 004a1fde
        ;   XREF to: 004a1ffa (CONDITIONAL_JUMP)  ; LAB_004a1ffa
    MOV ESI,0x1cfaff8                   ; 004a1fe0
    ADD ESI,EBX                         ; 004a1fe5
    PUSH ESI                            ; 004a1fe7
    CALL core_fire.cpp_CCrater_render_FUN_0049d980 ; 004a1fe8
        ;   XREF to: 0049d980 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_0049d980(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004a1fed
    TEST EBP,EBP                        ; 004a1ff0
    JZ 0x004a1ffa                       ; 004a1ff2
        ;   XREF to: 004a1ffa (CONDITIONAL_JUMP)  ; LAB_004a1ffa
    MOV dword ptr [EBX + 0x1cfaffc],EDI ; 004a1ff4
    ADD EBX,0x70                        ; 004a1ffa
        ;   Label: LAB_004a1ffa
    CMP EBX,0x8c0                       ; 004a1ffd
    JZ 0x004a1f70                       ; 004a2003
        ;   XREF to: 004a1f70 (CONDITIONAL_JUMP)  ; LAB_004a1f70
    JMP 0x004a1fd8                      ; 004a2009
        ;   XREF to: 004a1fd8 (UNCONDITIONAL_JUMP)  ; LAB_004a1fd8

