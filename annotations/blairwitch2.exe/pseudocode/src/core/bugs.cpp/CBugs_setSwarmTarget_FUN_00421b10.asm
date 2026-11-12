; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00421b10(CBugs *this_ptr,CDemonActor *target)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00420000 at 004200c8
;
; Referenced Globals:
;   undefined4 s_s_swarming_on_s_at_LOD_d_005cca88+1
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_007bcf48
;   undefined4 DAT_007bcf4c
;   undefined4 DAT_007bcf50
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_0041f940
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421b10
        ;   Label: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00421b10
    PUSH ESI                            ; 00421b11
    PUSH EDI                            ; 00421b12
    PUSH EBP                            ; 00421b13
    SUB ESP,0x8                         ; 00421b14
    MOV EBX,dword ptr [ESP + 0x20]      ; 00421b17
    MOV EDX,dword ptr [0x01cedf50]      ; 00421b1b | g_CHeroClassInfo.name_hash
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421b21
    PUSH EDX                            ; 00421b25
    MOV dword ptr [EAX + 0x17738],0x0   ; 00421b26
    PUSH EBX                            ; 00421b30
    MOV dword ptr [EAX + 0x17734],0x0   ; 00421b31
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00421b3b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00421b40
    TEST EAX,EAX                        ; 00421b43
    JZ 0x00421b56                       ; 00421b45
        ;   XREF to: 00421b56 (CONDITIONAL_JUMP)  ; LAB_00421b56
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421b47
    ADD EAX,0x2b4                       ; 00421b4b
    MOV dword ptr [EDX + 0x17738],EAX   ; 00421b50
    MOV ECX,dword ptr [0x01c264e0]      ; 00421b56 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00421b56
    PUSH ECX                            ; 00421b5c
    PUSH EBX                            ; 00421b5d
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00421b5e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00421b63
    TEST EAX,EAX                        ; 00421b66
    JZ 0x00421b84                       ; 00421b68
        ;   XREF to: 00421b84 (CONDITIONAL_JUMP)  ; LAB_00421b84
    MOV CL,byte ptr [EAX + 0x2514]      ; 00421b6a
    LEA EDX,[EAX + 0x2b4]               ; 00421b70
    TEST CL,CL                          ; 00421b76
    JZ 0x00421b84                       ; 00421b78
        ;   XREF to: 00421b84 (CONDITIONAL_JUMP)  ; LAB_00421b84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421b7a
    MOV dword ptr [EAX + 0x17738],EDX   ; 00421b7e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421b84
        ;   Label: LAB_00421b84
    CMP dword ptr [EAX + 0x17738],0x0   ; 00421b88
    JZ 0x00421d7a                       ; 00421b8f
        ;   XREF to: 00421d7a (CONDITIONAL_JUMP)  ; LAB_00421d7a
    MOV dword ptr [EAX + 0x10af8],0x1   ; 00421b95
    MOV dword ptr [EAX + 0x17734],EBX   ; 00421b9f
    MOV EAX,dword ptr [EAX + 0x17734]   ; 00421ba5
    MOV EAX,dword ptr [EAX + 0x64]      ; 00421bab
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421bae
    INC EAX                             ; 00421bb2
    MOV dword ptr [EDX + 0x1776c],0x0   ; 00421bb3
    MOV dword ptr [EDX + 0x64],EAX      ; 00421bbd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421bc0
        ;   Label: LAB_00421bc0
    MOV EDI,dword ptr [EAX + 0x17738]   ; 00421bc4
    PUSH EDI                            ; 00421bca
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00421bcb
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00421bd0
    MOV EDX,EAX                         ; 00421bd3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421bd5
    MOV EAX,dword ptr [EAX + 0x1776c]   ; 00421bd9
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c] ; 00421bdf
    CMP EDX,0x2bc                       ; 00421be3
    JG 0x00421d82                       ; 00421be9
        ;   XREF to: 00421d82 (CONDITIONAL_JUMP)  ; LAB_00421d82
    PUSH EAX                            ; 00421bef
    PUSH EBX                            ; 00421bf0
    MOV EBP,dword ptr [ESP + 0x24]      ; 00421bf1
    PUSH EBP                            ; 00421bf5
    PUSH 0x5cca89                       ; 00421bf6 | s_s_swarming_on_s_at_LOD_d_005cca88+1
    MOV EAX,[0x00609ed0]                ; 00421bfb | g_CConsolePtr
    PUSH EAX                            ; 00421c00 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00421c01
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 00421c06
    MOV EDX,dword ptr [EBP + 0x17738]   ; 00421c09
    PUSH EDX                            ; 00421c0f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00421c10
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBP + 0x1776c]   ; 00421c15
    ADD ESP,0x4                         ; 00421c1b
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c] ; 00421c1e
    PUSH ECX                            ; 00421c22
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x54] ; 00421c23
    PUSH EBX                            ; 00421c27
    PUSH EBP                            ; 00421c28
    CALL core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_0041f940 ; 00421c29
        ;   XREF to: 0041f940 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_0041f940(CBugs * this_ptr, int tri_count, SInputFace * triangles)
    ADD ESP,0xc                         ; 00421c2e
    MOV EDI,dword ptr [EBP + 0x1776c]   ; 00421c31
    PUSH EDI                            ; 00421c37
    MOV ESI,EBP                         ; 00421c38
    MOV EBP,dword ptr [EBP + 0x17738]   ; 00421c3a
    PUSH EBP                            ; 00421c40
    MOV EBX,ESI                         ; 00421c41
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 00421c43
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00421c48
    MOV EDX,ESI                         ; 00421c4b
    MOV EBX,dword ptr [EBX + 0x17738]   ; 00421c4d
    XOR EAX,EAX                         ; 00421c53
    MOV ECX,dword ptr [EDX + 0x17770]   ; 00421c55
    MOV EBX,dword ptr [EBX + 0x2234]    ; 00421c5b
    TEST ECX,ECX                        ; 00421c61
    JLE 0x00421c80                      ; 00421c63
        ;   XREF to: 00421c80 (CONDITIONAL_JUMP)  ; LAB_00421c80
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00421c65
    XOR EDX,EDX                         ; 00421c69
    MOV dword ptr [EDX + 0x7bcf48],EAX  ; 00421c6b | DAT_007bcf48 | DAT_007bcf4c
        ;   Label: LAB_00421c6b
    INC EAX                             ; 00421c71
    MOV EBP,dword ptr [ECX + 0x17770]   ; 00421c72
    ADD EDX,0x4                         ; 00421c78
    CMP EAX,EBP                         ; 00421c7b
    JL 0x00421c6b                       ; 00421c7d
        ;   XREF to: 00421c6b (CONDITIONAL_JUMP)  ; LAB_00421c6b
    NOP                                 ; 00421c7f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421c80
        ;   Label: LAB_00421c80
    MOV EAX,dword ptr [EAX + 0x17770]   ; 00421c84
    SUB EAX,0x2                         ; 00421c8a
    MOV dword ptr [ESP + 0x4],EAX       ; 00421c8d
    TEST EAX,EAX                        ; 00421c91
    JL 0x00421ce6                       ; 00421c93
        ;   XREF to: 00421ce6 (CONDITIONAL_JUMP)  ; LAB_00421ce6
    MOV EBP,dword ptr [ESP + 0x4]       ; 00421c95
        ;   Label: LAB_00421c95
    TEST EBP,EBP                        ; 00421c99
    JL 0x00421cd9                       ; 00421c9b
        ;   XREF to: 00421cd9 (CONDITIONAL_JUMP)  ; LAB_00421cd9
    SHL EBP,0x2                         ; 00421c9d
    XOR EAX,EAX                         ; 00421ca0
    IMUL EDX,dword ptr [EAX + 0x7bcf48],0xc ; 00421ca2 | DAT_007bcf48 | DAT_007bcf4c
        ;   Label: LAB_00421ca2
    IMUL ECX,dword ptr [EAX + 0x7bcf4c],0xc ; 00421ca9 | DAT_007bcf4c | DAT_007bcf50
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00421cb0
    CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4] ; 00421cb4
    JLE 0x00421cd2                      ; 00421cb8
        ;   XREF to: 00421cd2 (CONDITIONAL_JUMP)  ; LAB_00421cd2
    LEA ECX,[EAX + 0x4]                 ; 00421cba
    ADD ECX,0x7bcf48                    ; 00421cbd | DAT_007bcf48
    MOV EDX,0x7bcf48                    ; 00421cc3 | DAT_007bcf48
    MOV ESI,dword ptr [ECX]             ; 00421cc8 | DAT_007bcf4c
    MOV EDI,dword ptr [EDX + EAX*0x1]   ; 00421cca | DAT_007bcf48
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 00421ccd | DAT_007bcf48
    MOV dword ptr [ECX],EDI             ; 00421cd0 | DAT_007bcf4c
    ADD EAX,0x4                         ; 00421cd2
        ;   Label: LAB_00421cd2
    CMP EAX,EBP                         ; 00421cd5
    JLE 0x00421ca2                      ; 00421cd7
        ;   XREF to: 00421ca2 (CONDITIONAL_JUMP)  ; LAB_00421ca2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00421cd9
        ;   Label: LAB_00421cd9
    DEC EDX                             ; 00421cdd
    MOV dword ptr [ESP + 0x4],EDX       ; 00421cde
    TEST EDX,EDX                        ; 00421ce2
    JGE 0x00421c95                      ; 00421ce4
        ;   XREF to: 00421c95 (CONDITIONAL_JUMP)  ; LAB_00421c95
    MOV EDX,dword ptr [0x007bcf48]      ; 00421ce6 | DAT_007bcf48
        ;   Label: LAB_00421ce6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00421cec
    SUB EAX,EDX                         ; 00421cf3
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00421cf5
    ADD EAX,0x2a                        ; 00421cf9
    MOV dword ptr [ESP],EAX             ; 00421cfc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421cff
    XOR ESI,ESI                         ; 00421d03
    MOV EDI,dword ptr [EAX + 0x10afc]   ; 00421d05
    XOR EBP,EBP                         ; 00421d0b
    TEST EDI,EDI                        ; 00421d0d
    JLE 0x00421d7a                      ; 00421d0f
        ;   XREF to: 00421d7a (CONDITIONAL_JUMP)  ; LAB_00421d7a
    MOV EDI,EAX                         ; 00421d11
    MOV dword ptr [EDI + 0x10b2c],0xffffffff ; 00421d13
        ;   Label: LAB_00421d13
    MOV EAX,dword ptr [ESI*0x4 + 0x7bcf48] ; 00421d1d | DAT_007bcf48
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421d24
    MOV dword ptr [EDI + 0x10b30],EAX   ; 00421d28
    MOV ECX,0xf                         ; 00421d2e
    MOV EDX,dword ptr [EDX + 0x17770]   ; 00421d33
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421d39
    SAR EDX,0x1f                        ; 00421d3d
    MOV EAX,dword ptr [EAX + 0x17770]   ; 00421d40
    IDIV ECX                            ; 00421d46
    PUSH EAX                            ; 00421d48
    PUSH 0x0                            ; 00421d49
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00421d4b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00421d50
    MOV dword ptr [EDI + 0x10b3c],EAX   ; 00421d53
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421d59
    INC ESI                             ; 00421d5d
    CMP ESI,dword ptr [EAX + 0x17770]   ; 00421d5e
    JL 0x00421dba                       ; 00421d64
        ;   XREF to: 00421dba (CONDITIONAL_JUMP)  ; LAB_00421dba
    XOR ESI,ESI                         ; 00421d66
        ;   Label: LAB_00421d66
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00421d68
        ;   Label: LAB_00421d68
    INC EBP                             ; 00421d6c
    MOV EDX,dword ptr [EAX + 0x10afc]   ; 00421d6d
    ADD EDI,0x40                        ; 00421d73
    CMP EBP,EDX                         ; 00421d76
    JL 0x00421d13                       ; 00421d78
        ;   XREF to: 00421d13 (CONDITIONAL_JUMP)  ; LAB_00421d13
    ADD ESP,0x8                         ; 00421d7a
        ;   Label: LAB_00421d7a
    POP EBP                             ; 00421d7d
    POP EDI                             ; 00421d7e
    POP ESI                             ; 00421d7f
    POP EBX                             ; 00421d80
    RET                                 ; 00421d81
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421d82
        ;   Label: LAB_00421d82
    MOV ESI,dword ptr [EDX + 0x17738]   ; 00421d86
    INC EAX                             ; 00421d8c
    PUSH ESI                            ; 00421d8d
    MOV dword ptr [EDX + 0x1776c],EAX   ; 00421d8e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00421d94
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00421d99
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421d9c
    MOV EAX,dword ptr [EAX]             ; 00421da0
    CMP EAX,dword ptr [EDX + 0x1776c]   ; 00421da2
    JG 0x00421bc0                       ; 00421da8
        ;   XREF to: 00421bc0 (CONDITIONAL_JUMP)  ; LAB_00421bc0
    MOV dword ptr [EDX + 0x17738],0x0   ; 00421dae
    JMP 0x00421d7a                      ; 00421db8
        ;   XREF to: 00421d7a (UNCONDITIONAL_JUMP)  ; LAB_00421d7a
    IMUL EAX,dword ptr [ESI*0x4 + 0x7bcf48],0xc ; 00421dba | DAT_007bcf4c
        ;   Label: LAB_00421dba
    MOV ECX,dword ptr [ESP]             ; 00421dc2
    CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00421dc5
    JL 0x00421d66                       ; 00421dc9
        ;   XREF to: 00421d66 (CONDITIONAL_JUMP)  ; LAB_00421d66
    JMP 0x00421d68                      ; 00421dcb
        ;   XREF to: 00421d68 (UNCONDITIONAL_JUMP)  ; LAB_00421d68

