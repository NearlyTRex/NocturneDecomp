; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect *this_ptr,int render_mode,int render_completeness)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; int              Stack[0xc]:4   render_completeness
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderScene_FUN_00509a80 at 00509eb8
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508caa
;
; Referenced Globals:
;   undefined4 DAT_01c20140
;   undefined4 DAT_01c23d48
;   undefined4 g_CStake_ARRAY_01c23d50[0].physics_box.is_valid
;   undefined4 g_CStake_ARRAY_01c23d50[1].physics_box.is_valid
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00482f50
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
;   core_fire.cpp_CCrater_render_FUN_00487af0
;   core_fire.cpp_CStake_render_FUN_004835d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a970
        ;   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970
    PUSH ESI                            ; 0048a971
    PUSH EDI                            ; 0048a972
    PUSH EBP                            ; 0048a973
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048a974
    PUSH 0x1c20148                      ; 0048a978
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0 ; 0048a97d
        ;   XREF to: 00482ed0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0048a982
    TEST EBP,EBP                        ; 0048a985
    JZ 0x0048aa45                       ; 0048a987
        ;   XREF to: 0048aa45 (CONDITIONAL_JUMP)  ; LAB_0048aa45
    MOV ECX,dword ptr [0x01c20140]      ; 0048a98d | DAT_01c20140
    XOR ESI,ESI                         ; 0048a993
    TEST ECX,ECX                        ; 0048a995
    JLE 0x0048a9c1                      ; 0048a997
        ;   XREF to: 0048a9c1 (CONDITIONAL_JUMP)  ; LAB_0048a9c1
    XOR EBX,EBX                         ; 0048a999
    CMP dword ptr [EBX + 0x1c20158],0x0 ; 0048a99b
        ;   Label: LAB_0048a99b
    JNZ 0x0048a9b4                      ; 0048a9a2
        ;   XREF to: 0048a9b4 (CONDITIONAL_JUMP)  ; LAB_0048a9b4
    MOV EAX,0x1c20148                   ; 0048a9a4
    ADD EAX,EBX                         ; 0048a9a9
    PUSH EAX                            ; 0048a9ab
    CALL core_fire.cpp_CBulletHole_render_FUN_00482f50 ; 0048a9ac
        ;   XREF to: 00482f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00482f50(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0048a9b1
    MOV EAX,[0x01c20140]                ; 0048a9b4 | DAT_01c20140
        ;   Label: LAB_0048a9b4
    INC ESI                             ; 0048a9b9
    ADD EBX,0x3c                        ; 0048a9ba
    CMP ESI,EAX                         ; 0048a9bd
    JL 0x0048a99b                       ; 0048a9bf
        ;   XREF to: 0048a99b (CONDITIONAL_JUMP)  ; LAB_0048a99b
    TEST EBP,EBP                        ; 0048a9c1
        ;   Label: LAB_0048a9c1
    JZ 0x0048aa16                       ; 0048a9c3
        ;   XREF to: 0048aa16 (CONDITIONAL_JUMP)  ; LAB_0048aa16
    MOV EDX,dword ptr [0x01c23d48]      ; 0048a9c5 | DAT_01c23d48
    XOR ESI,ESI                         ; 0048a9cb
    TEST EDX,EDX                        ; 0048a9cd
    JLE 0x0048aa16                      ; 0048a9cf
        ;   XREF to: 0048aa16 (CONDITIONAL_JUMP)  ; LAB_0048aa16
    MOV EDI,0x1c23d50                   ; 0048a9d1
    XOR EBX,EBX                         ; 0048a9d6
    MOV EAX,dword ptr [EDI + 0x258]     ; 0048a9d8 | g_CStake_ARRAY_01c23d50[0].physics_box.is_valid | g_CStake_ARRAY_01c23d50[1].physics_box.is_valid
        ;   Label: LAB_0048a9d8
    TEST EAX,EAX                        ; 0048a9de
    JZ 0x0048aa93                       ; 0048a9e0
        ;   XREF to: 0048aa93 (CONDITIONAL_JUMP)  ; LAB_0048aa93
    CMP dword ptr [EBX + 0x1c23d50],0x0 ; 0048a9e6
    JZ 0x0048a9ff                       ; 0048a9ed
        ;   XREF to: 0048a9ff (CONDITIONAL_JUMP)  ; LAB_0048a9ff
    MOV EAX,0x1c23d50                   ; 0048a9ef
        ;   Label: LAB_0048a9ef
    ADD EAX,EBX                         ; 0048a9f4
    PUSH EAX                            ; 0048a9f6
    CALL core_fire.cpp_CStake_render_FUN_004835d0 ; 0048a9f7
        ;   XREF to: 004835d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004835d0(CStake * this_ptr)
    ADD ESP,0x4                         ; 0048a9fc
    MOV EDX,dword ptr [0x01c23d48]      ; 0048a9ff | DAT_01c23d48
        ;   Label: LAB_0048a9ff
    ADD EBX,0x260                       ; 0048aa05
    INC ESI                             ; 0048aa0b
    ADD EDI,0x260                       ; 0048aa0c
    CMP ESI,EDX                         ; 0048aa12
    JL 0x0048a9d8                       ; 0048aa14
        ;   XREF to: 0048a9d8 (CONDITIONAL_JUMP)  ; LAB_0048a9d8
    TEST EBP,EBP                        ; 0048aa16
        ;   Label: LAB_0048aa16
    JZ 0x0048aaa2                       ; 0048aa18
        ;   XREF to: 0048aaa2 (CONDITIONAL_JUMP)  ; LAB_0048aaa2
    MOV EBX,0x1c625f8                   ; 0048aa1e
    LEA ESI,[EBX + 0x8c0]               ; 0048aa23
    PUSH EBX                            ; 0048aa29
        ;   Label: LAB_0048aa29
    CALL core_fire.cpp_CCrater_render_FUN_00487af0 ; 0048aa2a
        ;   XREF to: 00487af0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00487af0(CCrater * this_ptr)
    ADD EBX,0x70                        ; 0048aa2f
    ADD ESP,0x4                         ; 0048aa32
    CMP EBX,ESI                         ; 0048aa35
    JNZ 0x0048aa29                      ; 0048aa37
        ;   XREF to: 0048aa29 (CONDITIONAL_JUMP)  ; LAB_0048aa29
    LEA EAX,[EAX]                       ; 0048aa39
    NOP                                 ; 0048aa3f
    POP EBP                             ; 0048aa40
        ;   Label: LAB_0048aa40
    POP EDI                             ; 0048aa41
    POP ESI                             ; 0048aa42
    POP EBX                             ; 0048aa43
    RET                                 ; 0048aa44
    MOV EDX,dword ptr [0x01c20140]      ; 0048aa45 | DAT_01c20140
        ;   Label: LAB_0048aa45
    XOR ESI,ESI                         ; 0048aa4b
    TEST EDX,EDX                        ; 0048aa4d
    JLE 0x0048a9c1                      ; 0048aa4f
        ;   XREF to: 0048a9c1 (CONDITIONAL_JUMP)  ; LAB_0048a9c1
    XOR EBX,EBX                         ; 0048aa55
    XOR EDI,EDI                         ; 0048aa57
    CMP EDI,dword ptr [EBX + 0x1c20154] ; 0048aa59
        ;   Label: LAB_0048aa59
    JZ 0x0048aa7f                       ; 0048aa5f
        ;   XREF to: 0048aa7f (CONDITIONAL_JUMP)  ; LAB_0048aa7f
    CMP EDI,dword ptr [EBX + 0x1c20158] ; 0048aa61
    JNZ 0x0048aa7f                      ; 0048aa67
        ;   XREF to: 0048aa7f (CONDITIONAL_JUMP)  ; LAB_0048aa7f
    MOV EAX,0x1c20148                   ; 0048aa69
    ADD EAX,EBX                         ; 0048aa6e
    PUSH EAX                            ; 0048aa70
    CALL core_fire.cpp_CBulletHole_render_FUN_00482f50 ; 0048aa71
        ;   XREF to: 00482f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00482f50(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0048aa76
    MOV dword ptr [EBX + 0x1c20154],EDI ; 0048aa79
    MOV ECX,dword ptr [0x01c20140]      ; 0048aa7f | DAT_01c20140
        ;   Label: LAB_0048aa7f
    INC ESI                             ; 0048aa85
    ADD EBX,0x3c                        ; 0048aa86
    CMP ESI,ECX                         ; 0048aa89
    JGE 0x0048a9c1                      ; 0048aa8b
        ;   XREF to: 0048a9c1 (CONDITIONAL_JUMP)  ; LAB_0048a9c1
    JMP 0x0048aa59                      ; 0048aa91
        ;   XREF to: 0048aa59 (UNCONDITIONAL_JUMP)  ; LAB_0048aa59
    MOV dword ptr [EBX + 0x1c23d50],0x1 ; 0048aa93
        ;   Label: LAB_0048aa93
    JMP 0x0048a9ef                      ; 0048aa9d
        ;   XREF to: 0048a9ef (UNCONDITIONAL_JUMP)  ; LAB_0048a9ef
    XOR EBX,EBX                         ; 0048aaa2
        ;   Label: LAB_0048aaa2
    XOR EDI,EDI                         ; 0048aaa4
    CMP EDI,dword ptr [EBX + 0x1c625fc] ; 0048aaa6
        ;   Label: LAB_0048aaa6
    JZ 0x0048aac4                       ; 0048aaac
        ;   XREF to: 0048aac4 (CONDITIONAL_JUMP)  ; LAB_0048aac4
    MOV ESI,0x1c625f8                   ; 0048aaae
    ADD ESI,EBX                         ; 0048aab3
    PUSH ESI                            ; 0048aab5
    CALL core_fire.cpp_CCrater_render_FUN_00487af0 ; 0048aab6
        ;   XREF to: 00487af0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00487af0(CCrater * this_ptr)
    ADD ESP,0x4                         ; 0048aabb
    MOV dword ptr [EBX + 0x1c625fc],EDI ; 0048aabe
    ADD EBX,0x70                        ; 0048aac4
        ;   Label: LAB_0048aac4
    CMP EBX,0x8c0                       ; 0048aac7
    JZ 0x0048aa40                       ; 0048aacd
        ;   XREF to: 0048aa40 (CONDITIONAL_JUMP)  ; LAB_0048aa40
    JMP 0x0048aaa6                      ; 0048aad3
        ;   XREF to: 0048aaa6 (UNCONDITIONAL_JUMP)  ; LAB_0048aaa6

