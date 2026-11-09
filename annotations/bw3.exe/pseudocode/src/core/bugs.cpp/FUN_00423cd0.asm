; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_00423cd0(CBugs *this_ptr,CDemonActor *target)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_FUN_004221c0 at 00422288
;
; Referenced Globals:
;   undefined4 s_s_swarming_on_s_at_LOD_d_005b78b0+1
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_007e1c94
;   undefined4 DAT_007e1c98
;   undefined4 DAT_007e1c9c
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_bugs.cpp_FUN_00421b00
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054e420
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423cd0
        ;   Label: core_bugs.cpp_FUN_00423cd0
    PUSH ESI                            ; 00423cd1
    PUSH EDI                            ; 00423cd2
    PUSH EBP                            ; 00423cd3
    SUB ESP,0x8                         ; 00423cd4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00423cd7
    MOV EDX,dword ptr [0x01d5ba70]      ; 00423cdb | g_CHeroClassInfo.name_hash
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423ce1
    PUSH EDX                            ; 00423ce5
    MOV dword ptr [EAX + 0x13820],0x0   ; 00423ce6
    PUSH EBX                            ; 00423cf0
    MOV dword ptr [EAX + 0x1381c],0x0   ; 00423cf1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00423cfb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00423d00
    TEST EAX,EAX                        ; 00423d03
    JZ 0x00423d16                       ; 00423d05
        ;   XREF to: 00423d16 (CONDITIONAL_JUMP)  ; LAB_00423d16
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423d07
    ADD EAX,0x158                       ; 00423d0b
    MOV dword ptr [EDX + 0x13820],EAX   ; 00423d10
    MOV ECX,dword ptr [0x01c5bc48]      ; 00423d16 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00423d16
    PUSH ECX                            ; 00423d1c
    PUSH EBX                            ; 00423d1d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00423d1e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00423d23
    TEST EAX,EAX                        ; 00423d26
    JZ 0x00423d44                       ; 00423d28
        ;   XREF to: 00423d44 (CONDITIONAL_JUMP)  ; LAB_00423d44
    MOV CL,byte ptr [EAX + 0x24a8]      ; 00423d2a
    LEA EDX,[EAX + 0x158]               ; 00423d30
    TEST CL,CL                          ; 00423d36
    JZ 0x00423d44                       ; 00423d38
        ;   XREF to: 00423d44 (CONDITIONAL_JUMP)  ; LAB_00423d44
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423d3a
    MOV dword ptr [EAX + 0x13820],EDX   ; 00423d3e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423d44
        ;   Label: LAB_00423d44
    CMP dword ptr [EAX + 0x13820],0x0   ; 00423d48
    JZ 0x00423f5a                       ; 00423d4f
        ;   XREF to: 00423f5a (CONDITIONAL_JUMP)  ; LAB_00423f5a
    MOV dword ptr [EAX + 0xd054],0x1    ; 00423d55
    MOV dword ptr [EAX + 0x1381c],EBX   ; 00423d5f
    MOV EAX,dword ptr [EAX + 0x1381c]   ; 00423d65
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423d6b
    MOV EAX,dword ptr [EAX + 0x64]      ; 00423d6f
    MOV EDI,dword ptr [EDX + 0x13820]   ; 00423d72
    INC EAX                             ; 00423d78
    MOV dword ptr [EDX + 0x13854],0x0   ; 00423d79
    PUSH EDI                            ; 00423d83
    MOV dword ptr [EDX + 0x64],EAX      ; 00423d84
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00423d87
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423d8c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423d8f
        ;   Label: LAB_00423d8f
    MOV EBP,dword ptr [EAX + 0x13820]   ; 00423d93
    PUSH EBP                            ; 00423d99
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00423d9a
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423d9f
    MOV EDX,EAX                         ; 00423da2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423da4
    MOV EAX,dword ptr [EAX + 0x13854]   ; 00423da8
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c] ; 00423dae
    CMP EDX,0x352                       ; 00423db2
    JG 0x00423f62                       ; 00423db8
        ;   XREF to: 00423f62 (CONDITIONAL_JUMP)  ; LAB_00423f62
    PUSH EAX                            ; 00423dbe
    PUSH EBX                            ; 00423dbf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00423dc0
    PUSH EAX                            ; 00423dc4
    PUSH 0x5b78b1                       ; 00423dc5 | s_s_swarming_on_s_at_LOD_d_005b78b0+1
    MOV EDX,dword ptr [0x005f1690]      ; 00423dca | g_CConsolePtr
    PUSH EDX                            ; 00423dd0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00423dd1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x14                        ; 00423dd6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423dd9
    MOV ECX,dword ptr [EAX + 0x13820]   ; 00423ddd
    PUSH ECX                            ; 00423de3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00423de4
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423de9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423dec
    MOV EDX,dword ptr [EDX + 0x13854]   ; 00423df0
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x7c] ; 00423df6
    PUSH EBX                            ; 00423dfa
    MOV ESI,dword ptr [EAX + EDX*0x4 + 0x54] ; 00423dfb
    PUSH ESI                            ; 00423dff
    MOV EDI,dword ptr [ESP + 0x24]      ; 00423e00
    PUSH EDI                            ; 00423e04
    CALL core_bugs.cpp_FUN_00421b00     ; 00423e05
        ;   XREF to: 00421b00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421b00(CBugs * this_ptr, int tri_count, SInputFace * triangles)
    ADD ESP,0xc                         ; 00423e0a
    MOV EBP,dword ptr [EDI + 0x13854]   ; 00423e0d
    PUSH EBP                            ; 00423e13
    MOV EDX,dword ptr [EDI + 0x13820]   ; 00423e14
    PUSH EDX                            ; 00423e1a
    CALL core_skeleton.cpp_FUN_0054e420 ; 00423e1b
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00423e20
    MOV EBX,dword ptr [EDI + 0x13820]   ; 00423e23
    MOV ECX,dword ptr [EDI + 0x13858]   ; 00423e29
    XOR EAX,EAX                         ; 00423e2f
    MOV EBX,dword ptr [EBX + 0x2324]    ; 00423e31
    TEST ECX,ECX                        ; 00423e37
    JLE 0x00423e60                      ; 00423e39
        ;   XREF to: 00423e60 (CONDITIONAL_JUMP)  ; LAB_00423e60
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00423e3b
    XOR EDX,EDX                         ; 00423e3f
    MOV dword ptr [EDX + 0x7e1c94],EAX  ; 00423e41 | DAT_007e1c94 | DAT_007e1c98
        ;   Label: LAB_00423e41
    INC EAX                             ; 00423e47
    MOV EBP,dword ptr [ECX + 0x13858]   ; 00423e48
    ADD EDX,0x4                         ; 00423e4e
    CMP EAX,EBP                         ; 00423e51
    JL 0x00423e41                       ; 00423e53
        ;   XREF to: 00423e41 (CONDITIONAL_JUMP)  ; LAB_00423e41
    LEA EAX,[EAX]                       ; 00423e55
    LEA EDX,[EDX]                       ; 00423e5b
    MOV EBX,EBX                         ; 00423e5e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423e60
        ;   Label: LAB_00423e60
    MOV EAX,dword ptr [EAX + 0x13858]   ; 00423e64
    SUB EAX,0x2                         ; 00423e6a
    MOV dword ptr [ESP + 0x4],EAX       ; 00423e6d
    TEST EAX,EAX                        ; 00423e71
    JL 0x00423ec6                       ; 00423e73
        ;   XREF to: 00423ec6 (CONDITIONAL_JUMP)  ; LAB_00423ec6
    MOV EBP,dword ptr [ESP + 0x4]       ; 00423e75
        ;   Label: LAB_00423e75
    TEST EBP,EBP                        ; 00423e79
    JL 0x00423eb9                       ; 00423e7b
        ;   XREF to: 00423eb9 (CONDITIONAL_JUMP)  ; LAB_00423eb9
    SHL EBP,0x2                         ; 00423e7d
    XOR EAX,EAX                         ; 00423e80
    IMUL EDX,dword ptr [EAX + 0x7e1c94],0xc ; 00423e82 | DAT_007e1c94 | DAT_007e1c98
        ;   Label: LAB_00423e82
    IMUL ECX,dword ptr [EAX + 0x7e1c98],0xc ; 00423e89 | DAT_007e1c98 | DAT_007e1c9c
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00423e90
    CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4] ; 00423e94
    JLE 0x00423eb2                      ; 00423e98
        ;   XREF to: 00423eb2 (CONDITIONAL_JUMP)  ; LAB_00423eb2
    LEA ECX,[EAX + 0x4]                 ; 00423e9a
    ADD ECX,0x7e1c94                    ; 00423e9d | DAT_007e1c94
    MOV EDX,0x7e1c94                    ; 00423ea3 | DAT_007e1c94
    MOV ESI,dword ptr [ECX]             ; 00423ea8 | DAT_007e1c98
    MOV EDI,dword ptr [EDX + EAX*0x1]   ; 00423eaa | DAT_007e1c94
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 00423ead | DAT_007e1c94
    MOV dword ptr [ECX],EDI             ; 00423eb0 | DAT_007e1c98
    ADD EAX,0x4                         ; 00423eb2
        ;   Label: LAB_00423eb2
    CMP EAX,EBP                         ; 00423eb5
    JLE 0x00423e82                      ; 00423eb7
        ;   XREF to: 00423e82 (CONDITIONAL_JUMP)  ; LAB_00423e82
    MOV EDX,dword ptr [ESP + 0x4]       ; 00423eb9
        ;   Label: LAB_00423eb9
    DEC EDX                             ; 00423ebd
    MOV dword ptr [ESP + 0x4],EDX       ; 00423ebe
    TEST EDX,EDX                        ; 00423ec2
    JGE 0x00423e75                      ; 00423ec4
        ;   XREF to: 00423e75 (CONDITIONAL_JUMP)  ; LAB_00423e75
    MOV EDX,dword ptr [0x007e1c94]      ; 00423ec6 | DAT_007e1c94
        ;   Label: LAB_00423ec6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00423ecc
    SUB EAX,EDX                         ; 00423ed3
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00423ed5
    ADD EAX,0x2a                        ; 00423ed9
    MOV dword ptr [ESP],EAX             ; 00423edc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423edf
    XOR ESI,ESI                         ; 00423ee3
    MOV EDI,dword ptr [EAX + 0xd058]    ; 00423ee5
    XOR EBP,EBP                         ; 00423eeb
    TEST EDI,EDI                        ; 00423eed
    JLE 0x00423f5a                      ; 00423eef
        ;   XREF to: 00423f5a (CONDITIONAL_JUMP)  ; LAB_00423f5a
    MOV EDI,EAX                         ; 00423ef1
    MOV dword ptr [EDI + 0xd088],0xffffffff ; 00423ef3
        ;   Label: LAB_00423ef3
    MOV EAX,dword ptr [ESI*0x4 + 0x7e1c94] ; 00423efd | DAT_007e1c94
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423f04
    MOV dword ptr [EDI + 0xd08c],EAX    ; 00423f08
    MOV ECX,0xf                         ; 00423f0e
    MOV EDX,dword ptr [EDX + 0x13858]   ; 00423f13
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423f19
    SAR EDX,0x1f                        ; 00423f1d
    MOV EAX,dword ptr [EAX + 0x13858]   ; 00423f20
    IDIV ECX                            ; 00423f26
    PUSH EAX                            ; 00423f28
    PUSH 0x0                            ; 00423f29
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00423f2b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00423f30
    MOV dword ptr [EDI + 0xd098],EAX    ; 00423f33
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423f39
    INC ESI                             ; 00423f3d
    CMP ESI,dword ptr [EAX + 0x13858]   ; 00423f3e
    JL 0x00423f9a                       ; 00423f44
        ;   XREF to: 00423f9a (CONDITIONAL_JUMP)  ; LAB_00423f9a
    XOR ESI,ESI                         ; 00423f46
        ;   Label: LAB_00423f46
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00423f48
        ;   Label: LAB_00423f48
    INC EBP                             ; 00423f4c
    MOV EDX,dword ptr [EAX + 0xd058]    ; 00423f4d
    ADD EDI,0x40                        ; 00423f53
    CMP EBP,EDX                         ; 00423f56
    JL 0x00423ef3                       ; 00423f58
        ;   XREF to: 00423ef3 (CONDITIONAL_JUMP)  ; LAB_00423ef3
    ADD ESP,0x8                         ; 00423f5a
        ;   Label: LAB_00423f5a
    POP EBP                             ; 00423f5d
    POP EDI                             ; 00423f5e
    POP ESI                             ; 00423f5f
    POP EBX                             ; 00423f60
    RET                                 ; 00423f61
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423f62
        ;   Label: LAB_00423f62
    MOV ESI,dword ptr [EDX + 0x13820]   ; 00423f66
    INC EAX                             ; 00423f6c
    PUSH ESI                            ; 00423f6d
    MOV dword ptr [EDX + 0x13854],EAX   ; 00423f6e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00423f74
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423f79
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423f7c
    MOV EAX,dword ptr [EAX]             ; 00423f80
    CMP EAX,dword ptr [EDX + 0x13854]   ; 00423f82
    JG 0x00423d8f                       ; 00423f88
        ;   XREF to: 00423d8f (CONDITIONAL_JUMP)  ; LAB_00423d8f
    MOV dword ptr [EDX + 0x13820],0x0   ; 00423f8e
    JMP 0x00423f5a                      ; 00423f98
        ;   XREF to: 00423f5a (UNCONDITIONAL_JUMP)  ; LAB_00423f5a
    IMUL EAX,dword ptr [ESI*0x4 + 0x7e1c94],0xc ; 00423f9a | DAT_007e1c98
        ;   Label: LAB_00423f9a
    MOV ECX,dword ptr [ESP]             ; 00423fa2
    CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00423fa5
    JL 0x00423f46                       ; 00423fa9
        ;   XREF to: 00423f46 (CONDITIONAL_JUMP)  ; LAB_00423f46
    JMP 0x00423f48                      ; 00423fab
        ;   XREF to: 00423f48 (UNCONDITIONAL_JUMP)  ; LAB_00423f48

