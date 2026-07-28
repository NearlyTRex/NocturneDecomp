; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CCharacter *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0 at 004bb33b
;
; Referenced Globals:
;   TerminatedCString s_icepick_punch_wav_00586242
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;   undefined4 DAT_01fa5f40
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb3c0
        ;   Label: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0
    PUSH ESI                            ; 004bb3c1
    PUSH EDI                            ; 004bb3c2
    PUSH EBP                            ; 004bb3c3
    SUB ESP,0x5c                        ; 004bb3c4
    MOV ESI,dword ptr [ESP + 0x70]      ; 004bb3c7
    MOV EDX,dword ptr [ESP + 0x74]      ; 004bb3cb
    PUSH EDX                            ; 004bb3cf
    LEA EAX,[ESP + 0x4c]                ; 004bb3d0
    PUSH EAX                            ; 004bb3d4
    LEA EAX,[ESI + 0x150]               ; 004bb3d5
    PUSH EAX                            ; 004bb3db
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bb3dc
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004bb3e1
    PUSH EAX                            ; 004bb3e4
    LEA EAX,[ESP + 0x40]                ; 004bb3e5
    PUSH EAX                            ; 004bb3e9
    PUSH ESI                            ; 004bb3ea
    XOR EDI,EDI                         ; 004bb3eb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bb3ed
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004bb3f2
    XOR ECX,ECX                         ; 004bb3f5
    XOR EBP,EBP                         ; 004bb3f7
    MOV dword ptr [ESP + 0x54],ECX      ; 004bb3f9
    MOV EAX,[0x005be368]                ; 004bb3fd | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_004bb3fd
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 004bb402 | DAT_01fa5f34
    JGE 0x004bb494                      ; 004bb408
        ;   XREF to: 004bb494 (CONDITIONAL_JUMP)  ; LAB_004bb494
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14ecb4] ; 004bb40e | DAT_01fa5f38 | DAT_01fa5f3c | DAT_01fa5f40
    CMP EBX,ESI                         ; 004bb415
    JNZ 0x004bb41f                      ; 004bb417
        ;   XREF to: 004bb41f (CONDITIONAL_JUMP)  ; LAB_004bb41f
    INC EDI                             ; 004bb419
        ;   Label: LAB_004bb419
    ADD EBP,0x4                         ; 004bb41a
    JMP 0x004bb3fd                      ; 004bb41d
        ;   XREF to: 004bb3fd (UNCONDITIONAL_JUMP)  ; LAB_004bb3fd
    MOV EAX,ESP                         ; 004bb41f
        ;   Label: LAB_004bb41f
    PUSH EAX                            ; 004bb421
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004bb422
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004bb427
    PUSH 0x43020000                     ; 004bb42a
    PUSH 0x42b40000                     ; 004bb42f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bb434
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x60],EAX      ; 004bb439
    MOV EDX,0x3f000000                  ; 004bb43d
    FLD float ptr [ESP + 0x60]          ; 004bb442
    ADD ESP,0x8                         ; 004bb446
    MOV dword ptr [ESP + 0x2c],EDX      ; 004bb449
    MOV EDX,ESP                         ; 004bb44d
    MOV EAX,0xffffffff                  ; 004bb44f
    PUSH EDX                            ; 004bb454
    MOV dword ptr [ESP + 0x4],EAX       ; 004bb455
    MOV dword ptr [ESP + 0x38],ESI      ; 004bb459
    PUSH 0x3f800000                     ; 004bb45d
    LEA EDX,[ESP + 0x44]                ; 004bb462
    MOV dword ptr [ESP + 0x40],ESI      ; 004bb466
    PUSH EDX                            ; 004bb46a
    FSTP float ptr [ESP + 0x10]         ; 004bb46b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bb46f
    PUSH EBX                            ; 004bb475
    CALL dword ptr [EAX + 0xf8]         ; 004bb476
    ADD ESP,0x10                        ; 004bb47c
    TEST EAX,EAX                        ; 004bb47f
    JZ 0x004bb419                       ; 004bb481
        ;   XREF to: 004bb419 (CONDITIONAL_JUMP)  ; LAB_004bb419
    MOV dword ptr [ESP + 0x54],0x1      ; 004bb483
    INC EDI                             ; 004bb48b
    ADD EBP,0x4                         ; 004bb48c
    JMP 0x004bb3fd                      ; 004bb48f
        ;   XREF to: 004bb3fd (UNCONDITIONAL_JUMP)  ; LAB_004bb3fd
    CMP dword ptr [ESP + 0x54],0x0      ; 004bb494
        ;   Label: LAB_004bb494
    JNZ 0x004bb4a3                      ; 004bb499
        ;   XREF to: 004bb4a3 (CONDITIONAL_JUMP)  ; LAB_004bb4a3
    ADD ESP,0x5c                        ; 004bb49b
    POP EBP                             ; 004bb49e
    POP EDI                             ; 004bb49f
    POP ESI                             ; 004bb4a0
    POP EBX                             ; 004bb4a1
    RET                                 ; 004bb4a2
    PUSH 0x586242                       ; 004bb4a3 | = "icepick-punch?.wav"
        ;   Label: LAB_004bb4a3
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004bb4a8
    PUSH ESI                            ; 004bb4ae
    CALL dword ptr [EAX + 0x24]         ; 004bb4af
    ADD ESP,0x8                         ; 004bb4b2
    ADD ESP,0x5c                        ; 004bb4b5
    POP EBP                             ; 004bb4b8
    POP EDI                             ; 004bb4b9
    POP ESI                             ; 004bb4ba
    POP EBX                             ; 004bb4bb
    RET                                 ; 004bb4bc

