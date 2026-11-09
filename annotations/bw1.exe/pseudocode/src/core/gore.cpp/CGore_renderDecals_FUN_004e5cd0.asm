; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(CGore *this_ptr,int render_all,int expire_flag)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_all
; int              Stack[0xc]:4   expire_flag
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_00556040 at 00556050
;   core_set.cpp_CDemonSet_renderDecals_FUN_00556080 at 005560ab
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054fb1d
;   core_set.cpp_FUN_00550580 at 005509ec
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cf69f8
;   undefined4 DAT_01cf6f00
;
; Called Functions:
;   core_gore.cpp_CBloodPool_render_FUN_004e5180
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0
;   core_gore.cpp_CBloodSplat_render_FUN_004e49a0
;   core_gore.cpp_CBloodSplat_setupRenderState_FUN_004e4910
;   core_gore.cpp_CFootstep_render_FUN_004e5860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5cd0
        ;   Label: core_gore.cpp_CGore_renderDecals_FUN_004e5cd0
    PUSH ESI                            ; 004e5cd1
    PUSH EDI                            ; 004e5cd2
    PUSH EBP                            ; 004e5cd3
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e5cd4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e5cd8
    MOV EAX,[0x0061d95c]                ; 004e5cdc | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x14],0x0      ; 004e5ce1 | g_CGameInstance.field20_0x14
    JNZ 0x004e5cf5                      ; 004e5ce5
        ;   XREF to: 004e5cf5 (CONDITIONAL_JUMP)  ; LAB_004e5cf5
    LEA EAX,[EAX]                       ; 004e5ce7
    LEA EDX,[EDX]                       ; 004e5ced
    POP EBP                             ; 004e5cf0
        ;   Label: LAB_004e5cf0
    POP EDI                             ; 004e5cf1
    POP ESI                             ; 004e5cf2
    POP EBX                             ; 004e5cf3
    RET                                 ; 004e5cf4
    PUSH 0x1cd56b4                      ; 004e5cf5
        ;   Label: LAB_004e5cf5
    CALL core_gore.cpp_CBloodSplat_setupRenderState_FUN_004e4910 ; 004e5cfa
        ;   XREF to: 004e4910 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_setupRenderState_FUN_004e4910(CBloodSplat * this_ptr)
    ADD ESP,0x4                         ; 004e5cff
    TEST EBP,EBP                        ; 004e5d02
    JZ 0x004e5dbb                       ; 004e5d04
        ;   XREF to: 004e5dbb (CONDITIONAL_JUMP)  ; LAB_004e5dbb
    MOV EBX,dword ptr [0x01cd56b0]      ; 004e5d0a | DAT_01cd56b0
    XOR ESI,ESI                         ; 004e5d10
    TEST EBX,EBX                        ; 004e5d12
    JLE 0x004e5d40                      ; 004e5d14
        ;   XREF to: 004e5d40 (CONDITIONAL_JUMP)  ; LAB_004e5d40
    MOV EBX,0x1cd56b4                   ; 004e5d16
    PUSH 0x0                            ; 004e5d1b
        ;   Label: LAB_004e5d1b
    PUSH EBX                            ; 004e5d1d
    INC ESI                             ; 004e5d1e
    CALL core_gore.cpp_CBloodSplat_render_FUN_004e49a0 ; 004e5d1f
        ;   XREF to: 004e49a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat * this_ptr, int expire_flag)
    MOV ECX,dword ptr [0x01cd56b0]      ; 004e5d24 | DAT_01cd56b0
    ADD ESP,0x8                         ; 004e5d2a
    ADD EBX,0x44                        ; 004e5d2d
    CMP ESI,ECX                         ; 004e5d30
    JL 0x004e5d1b                       ; 004e5d32
        ;   XREF to: 004e5d1b (CONDITIONAL_JUMP)  ; LAB_004e5d1b
    LEA EAX,[EAX]                       ; 004e5d34
    LEA EDX,[EDX]                       ; 004e5d3a
    PUSH 0x1cf69fc                      ; 004e5d40
        ;   Label: LAB_004e5d40
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0 ; 004e5d45
        ;   XREF to: 004e50e0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool * this_ptr)
    ADD ESP,0x4                         ; 004e5d4a
    TEST EBP,EBP                        ; 004e5d4d
    JZ 0x004e5dfc                       ; 004e5d4f
        ;   XREF to: 004e5dfc (CONDITIONAL_JUMP)  ; LAB_004e5dfc
    MOV ESI,dword ptr [0x01cf69f8]      ; 004e5d55 | DAT_01cf69f8
    XOR EBX,EBX                         ; 004e5d5b
    TEST ESI,ESI                        ; 004e5d5d
    JLE 0x004e5d80                      ; 004e5d5f
        ;   XREF to: 004e5d80 (CONDITIONAL_JUMP)  ; LAB_004e5d80
    MOV ESI,0x1cf69fc                   ; 004e5d61
    PUSH 0x0                            ; 004e5d66
        ;   Label: LAB_004e5d66
    PUSH ESI                            ; 004e5d68
    INC EBX                             ; 004e5d69
    CALL core_gore.cpp_CBloodPool_render_FUN_004e5180 ; 004e5d6a
        ;   XREF to: 004e5180 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_render_FUN_004e5180(CBloodPool * this_ptr, int expire_flag)
    MOV ECX,dword ptr [0x01cf69f8]      ; 004e5d6f | DAT_01cf69f8
    ADD ESP,0x8                         ; 004e5d75
    ADD ESI,0x28                        ; 004e5d78
    CMP EBX,ECX                         ; 004e5d7b
    JL 0x004e5d66                       ; 004e5d7d
        ;   XREF to: 004e5d66 (CONDITIONAL_JUMP)  ; LAB_004e5d66
    NOP                                 ; 004e5d7f
    TEST EBP,EBP                        ; 004e5d80
        ;   Label: LAB_004e5d80
    JZ 0x004e5e3d                       ; 004e5d82
        ;   XREF to: 004e5e3d (CONDITIONAL_JUMP)  ; LAB_004e5e3d
    MOV ESI,dword ptr [0x01cf6f00]      ; 004e5d88 | DAT_01cf6f00
    XOR EBX,EBX                         ; 004e5d8e
    TEST ESI,ESI                        ; 004e5d90
    JLE 0x004e5cf0                      ; 004e5d92
        ;   XREF to: 004e5cf0 (CONDITIONAL_JUMP)  ; LAB_004e5cf0
    MOV ESI,0x1cf6f04                   ; 004e5d98
    PUSH 0x0                            ; 004e5d9d
        ;   Label: LAB_004e5d9d
    PUSH ESI                            ; 004e5d9f
    INC EBX                             ; 004e5da0
    CALL core_gore.cpp_CFootstep_render_FUN_004e5860 ; 004e5da1
        ;   XREF to: 004e5860 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_render_FUN_004e5860(CFootstep * this_ptr, int expire_flag)
    MOV EDX,dword ptr [0x01cf6f00]      ; 004e5da6 | DAT_01cf6f00
    ADD ESP,0x8                         ; 004e5dac
    ADD ESI,0x40                        ; 004e5daf
    CMP EBX,EDX                         ; 004e5db2
    JL 0x004e5d9d                       ; 004e5db4
        ;   XREF to: 004e5d9d (CONDITIONAL_JUMP)  ; LAB_004e5d9d
    POP EBP                             ; 004e5db6
    POP EDI                             ; 004e5db7
    POP ESI                             ; 004e5db8
    POP EBX                             ; 004e5db9
    RET                                 ; 004e5dba
    MOV ECX,dword ptr [0x01cd56b0]      ; 004e5dbb | DAT_01cd56b0
        ;   Label: LAB_004e5dbb
    XOR ESI,ESI                         ; 004e5dc1
    TEST ECX,ECX                        ; 004e5dc3
    JLE 0x004e5d40                      ; 004e5dc5
        ;   XREF to: 004e5d40 (CONDITIONAL_JUMP)  ; LAB_004e5d40
    XOR EBX,EBX                         ; 004e5dcb
    CMP dword ptr [EBX + 0x1cd56b4],0x0 ; 004e5dcd
        ;   Label: LAB_004e5dcd
    JZ 0x004e5de9                       ; 004e5dd4
        ;   XREF to: 004e5de9 (CONDITIONAL_JUMP)  ; LAB_004e5de9
    MOV EAX,[0x01cd56b0]                ; 004e5dd6 | DAT_01cd56b0
        ;   Label: LAB_004e5dd6
    INC ESI                             ; 004e5ddb
    ADD EBX,0x44                        ; 004e5ddc
    CMP ESI,EAX                         ; 004e5ddf
    JGE 0x004e5d40                      ; 004e5de1
        ;   XREF to: 004e5d40 (CONDITIONAL_JUMP)  ; LAB_004e5d40
    JMP 0x004e5dcd                      ; 004e5de7
        ;   XREF to: 004e5dcd (UNCONDITIONAL_JUMP)  ; LAB_004e5dcd
    MOV EAX,0x1cd56b4                   ; 004e5de9
        ;   Label: LAB_004e5de9
    PUSH EDI                            ; 004e5dee
    ADD EAX,EBX                         ; 004e5def
    PUSH EAX                            ; 004e5df1
    CALL core_gore.cpp_CBloodSplat_render_FUN_004e49a0 ; 004e5df2
        ;   XREF to: 004e49a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004e5df7
    JMP 0x004e5dd6                      ; 004e5dfa
        ;   XREF to: 004e5dd6 (UNCONDITIONAL_JUMP)  ; LAB_004e5dd6
    MOV EBX,dword ptr [0x01cf69f8]      ; 004e5dfc | DAT_01cf69f8
        ;   Label: LAB_004e5dfc
    XOR ESI,ESI                         ; 004e5e02
    TEST EBX,EBX                        ; 004e5e04
    JLE 0x004e5d80                      ; 004e5e06
        ;   XREF to: 004e5d80 (CONDITIONAL_JUMP)  ; LAB_004e5d80
    XOR EBX,EBX                         ; 004e5e0c
    CMP dword ptr [EBX + 0x1cf69fc],0x0 ; 004e5e0e
        ;   Label: LAB_004e5e0e
    JZ 0x004e5e2a                       ; 004e5e15
        ;   XREF to: 004e5e2a (CONDITIONAL_JUMP)  ; LAB_004e5e2a
    MOV EAX,[0x01cf69f8]                ; 004e5e17 | DAT_01cf69f8
        ;   Label: LAB_004e5e17
    INC ESI                             ; 004e5e1c
    ADD EBX,0x28                        ; 004e5e1d
    CMP ESI,EAX                         ; 004e5e20
    JGE 0x004e5d80                      ; 004e5e22
        ;   XREF to: 004e5d80 (CONDITIONAL_JUMP)  ; LAB_004e5d80
    JMP 0x004e5e0e                      ; 004e5e28
        ;   XREF to: 004e5e0e (UNCONDITIONAL_JUMP)  ; LAB_004e5e0e
    MOV EAX,0x1cf69fc                   ; 004e5e2a
        ;   Label: LAB_004e5e2a
    PUSH EDI                            ; 004e5e2f
    ADD EAX,EBX                         ; 004e5e30
    PUSH EAX                            ; 004e5e32
    CALL core_gore.cpp_CBloodPool_render_FUN_004e5180 ; 004e5e33
        ;   XREF to: 004e5180 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_render_FUN_004e5180(CBloodPool * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004e5e38
    JMP 0x004e5e17                      ; 004e5e3b
        ;   XREF to: 004e5e17 (UNCONDITIONAL_JUMP)  ; LAB_004e5e17
    MOV EBX,dword ptr [0x01cf6f00]      ; 004e5e3d | DAT_01cf6f00
        ;   Label: LAB_004e5e3d
    XOR ESI,ESI                         ; 004e5e43
    TEST EBX,EBX                        ; 004e5e45
    JLE 0x004e5cf0                      ; 004e5e47
        ;   XREF to: 004e5cf0 (CONDITIONAL_JUMP)  ; LAB_004e5cf0
    XOR EBX,EBX                         ; 004e5e4d
    CMP dword ptr [EBX + 0x1cf6f04],0x0 ; 004e5e4f
        ;   Label: LAB_004e5e4f
    JZ 0x004e5e6c                       ; 004e5e56
        ;   XREF to: 004e5e6c (CONDITIONAL_JUMP)  ; LAB_004e5e6c
    MOV EBP,dword ptr [0x01cf6f00]      ; 004e5e58 | DAT_01cf6f00
        ;   Label: LAB_004e5e58
    INC ESI                             ; 004e5e5e
    ADD EBX,0x40                        ; 004e5e5f
    CMP ESI,EBP                         ; 004e5e62
    JGE 0x004e5cf0                      ; 004e5e64
        ;   XREF to: 004e5cf0 (CONDITIONAL_JUMP)  ; LAB_004e5cf0
    JMP 0x004e5e4f                      ; 004e5e6a
        ;   XREF to: 004e5e4f (UNCONDITIONAL_JUMP)  ; LAB_004e5e4f
    MOV EAX,0x1cf6f04                   ; 004e5e6c
        ;   Label: LAB_004e5e6c
    PUSH EDI                            ; 004e5e71
    ADD EAX,EBX                         ; 004e5e72
    PUSH EAX                            ; 004e5e74
    CALL core_gore.cpp_CFootstep_render_FUN_004e5860 ; 004e5e75
        ;   XREF to: 004e5860 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_render_FUN_004e5860(CFootstep * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004e5e7a
    JMP 0x004e5e58                      ; 004e5e7d
        ;   XREF to: 004e5e58 (UNCONDITIONAL_JUMP)  ; LAB_004e5e58

