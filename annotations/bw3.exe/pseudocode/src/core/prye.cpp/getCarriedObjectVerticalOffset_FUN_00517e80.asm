; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(CDemonActor *object)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   object
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_prye.cpp_FUN_0051c1c0 at 0051d92a
;   core_prye.cpp_FUN_00521880 at 00521be7
;
; Referenced Globals:
;   undefined4 DAT_005cca97
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517e80
        ;   Label: core_prye.cpp_getCarriedObjectVerticalOffset_FUN_00517e80
    PUSH ESI                            ; 00517e81
    PUSH EBP                            ; 00517e82
    SUB ESP,0xc                         ; 00517e83
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00517e86
    MOV EDX,dword ptr [0x007e17b4]      ; 00517e8a | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00517e90
    PUSH ESI                            ; 00517e91
    XOR EBX,EBX                         ; 00517e92
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00517e94
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00517e99
    TEST EAX,EAX                        ; 00517e9c
    JNZ 0x00517f03                      ; 00517e9e
        ;   XREF to: 00517f03 (CONDITIONAL_JUMP)  ; LAB_00517f03
    MOV ECX,dword ptr [0x02cfd944]      ; 00517ea0 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_00517ea0
    PUSH ECX                            ; 00517ea6
    PUSH ESI                            ; 00517ea7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00517ea8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00517ead
    TEST EAX,EAX                        ; 00517eb0
    JZ 0x00517ec4                       ; 00517eb2
        ;   XREF to: 00517ec4 (CONDITIONAL_JUMP)  ; LAB_00517ec4
    ADD EAX,0x158                       ; 00517eb4
    PUSH EAX                            ; 00517eb9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00517eba
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00517ebf
    MOV EBX,EAX                         ; 00517ec2
    TEST EBX,EBX                        ; 00517ec4
        ;   Label: LAB_00517ec4
    JZ 0x00517f15                       ; 00517ec6
        ;   XREF to: 00517f15 (CONDITIONAL_JUMP)  ; LAB_00517f15
    PUSH EDI                            ; 00517ec8
    XOR EDI,EDI                         ; 00517ec9
    XOR ESI,ESI                         ; 00517ecb
    XOR ECX,ECX                         ; 00517ecd
    XOR EDX,EDX                         ; 00517ecf
    MOV dword ptr [ESP + 0x8],EDI       ; 00517ed1
    MOV EAX,dword ptr [EBX + 0x104]     ; 00517ed5
        ;   Label: LAB_00517ed5
    CMP ECX,EAX                         ; 00517edb
    JGE 0x00517f26                      ; 00517edd
        ;   XREF to: 00517f26 (CONDITIONAL_JUMP)  ; LAB_00517f26
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00517edf
    ADD EAX,EDX                         ; 00517ee5
    MOV EBP,dword ptr [EAX]             ; 00517ee7
    CMP EDI,EBP                         ; 00517ee9
    JGE 0x00517ef6                      ; 00517eeb
        ;   XREF to: 00517ef6 (CONDITIONAL_JUMP)  ; LAB_00517ef6
    MOV EDI,EBP                         ; 00517eed
    MOV EBP,dword ptr [EAX + 0x4]       ; 00517eef
    MOV dword ptr [ESP + 0x8],EBP       ; 00517ef2
    MOV EBP,dword ptr [EAX + 0x4]       ; 00517ef6
        ;   Label: LAB_00517ef6
    CMP ESI,EBP                         ; 00517ef9
    JL 0x00517f22                       ; 00517efb
        ;   XREF to: 00517f22 (CONDITIONAL_JUMP)  ; LAB_00517f22
    INC ECX                             ; 00517efd
        ;   Label: LAB_00517efd
    ADD EDX,0xc                         ; 00517efe
    JMP 0x00517ed5                      ; 00517f01
        ;   XREF to: 00517ed5 (UNCONDITIONAL_JUMP)  ; LAB_00517ed5
    ADD EAX,0x158                       ; 00517f03
        ;   Label: LAB_00517f03
    PUSH EAX                            ; 00517f08
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00517f09
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00517f0e
    MOV EBX,EAX                         ; 00517f11
    JMP 0x00517ea0                      ; 00517f13
        ;   XREF to: 00517ea0 (UNCONDITIONAL_JUMP)  ; LAB_00517ea0
    MOV dword ptr [ESP],EBX             ; 00517f15
        ;   Label: LAB_00517f15
    MOV EAX,dword ptr [ESP]             ; 00517f18
    ADD ESP,0xc                         ; 00517f1b
    POP EBP                             ; 00517f1e
    POP ESI                             ; 00517f1f
    POP EBX                             ; 00517f20
    RET                                 ; 00517f21
    MOV ESI,EBP                         ; 00517f22
        ;   Label: LAB_00517f22
    JMP 0x00517efd                      ; 00517f24
        ;   XREF to: 00517efd (UNCONDITIONAL_JUMP)  ; LAB_00517efd
    MOV EBP,dword ptr [ESP + 0x8]       ; 00517f26
        ;   Label: LAB_00517f26
    SUB ESI,EBP                         ; 00517f2a
    MOV dword ptr [ESP + 0xc],ESI       ; 00517f2c
    FILD dword ptr [ESP + 0xc]          ; 00517f30
    FMUL double ptr [0x005cca97]        ; 00517f34 | DAT_005cca97
    FSTP float ptr [ESP + 0x4]          ; 00517f3a
    POP EDI                             ; 00517f3e
    MOV EAX,dword ptr [ESP]             ; 00517f3f
    ADD ESP,0xc                         ; 00517f42
    POP EBP                             ; 00517f45
    POP ESI                             ; 00517f46
    POP EBX                             ; 00517f47
    RET                                 ; 00517f48

