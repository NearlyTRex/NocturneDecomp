; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_skeleton_cpp_FUN_0056ae70(CDeformableModelInstance *param_1)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 at 00432eab
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a5b3f
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_CBoundingBox3D_reset_FUN_00421570
;   core_box.cpp_FUN_00420570
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ae70
        ;   Label: core_skeleton.cpp_FUN_0056ae70
    PUSH EDI                            ; 0056ae71
    PUSH EBP                            ; 0056ae72
    SUB ESP,0x64                        ; 0056ae73
    MOV dword ptr [ESP + 0x48],ESI      ; 0056ae76
    MOV ESI,dword ptr [ESP + 0x74]      ; 0056ae7a
    PUSH ESI                            ; 0056ae7e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056ae7f
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056ae84
    PUSH EAX                            ; 0056ae87
    MOV EBX,EAX                         ; 0056ae88
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40 ; 0056ae8a
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0056ae8f
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0056ae92
    MOV dword ptr [ESP + 0x4c],EAX      ; 0056ae98
    MOV EAX,ESP                         ; 0056ae9c
    PUSH EAX                            ; 0056ae9e
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00421570 ; 0056ae9f
        ;   XREF to: 00421570 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0056aea4
    XOR EDX,EDX                         ; 0056aea7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0056aea9
    MOV dword ptr [ESP + 0x5c],EDX      ; 0056aead
    TEST ECX,ECX                        ; 0056aeb1
    JLE 0x0056af0c                      ; 0056aeb3
        ;   XREF to: 0056af0c (CONDITIONAL_JUMP)  ; LAB_0056af0c
    LEA EAX,[EBX + 0x274c]              ; 0056aeb5
    ADD ESI,0xe80                       ; 0056aebb
    MOV dword ptr [ESP + 0x50],EBX      ; 0056aec1
    MOV dword ptr [ESP + 0x58],EAX      ; 0056aec5
    MOV dword ptr [ESP + 0x54],ESI      ; 0056aec9
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056aecd
        ;   Label: LAB_0056aecd
    CMP dword ptr [EAX + 0x30ac],0x2    ; 0056aed1
    JZ 0x0056af24                       ; 0056aed8
        ;   XREF to: 0056af24 (CONDITIONAL_JUMP)  ; LAB_0056af24
    MOV EBX,dword ptr [ESP + 0x50]      ; 0056aeda
        ;   Label: LAB_0056aeda
    MOV ESI,dword ptr [ESP + 0x58]      ; 0056aede
    MOV EDI,dword ptr [ESP + 0x54]      ; 0056aee2
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0056aee6
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0056aeea
    ADD EBX,0x4                         ; 0056aeee
    ADD ESI,0x18                        ; 0056aef1
    ADD EDI,0x30                        ; 0056aef4
    INC EBP                             ; 0056aef7
    MOV dword ptr [ESP + 0x50],EBX      ; 0056aef8
    MOV dword ptr [ESP + 0x58],ESI      ; 0056aefc
    MOV dword ptr [ESP + 0x54],EDI      ; 0056af00
    MOV dword ptr [ESP + 0x5c],EBP      ; 0056af04
    CMP EBP,EDX                         ; 0056af08
    JL 0x0056aecd                       ; 0056af0a
        ;   XREF to: 0056aecd (CONDITIONAL_JUMP)  ; LAB_0056aecd
    MOV ECX,0x6                         ; 0056af0c
        ;   Label: LAB_0056af0c
    MOV EDI,dword ptr [ESP + 0x48]      ; 0056af11
    MOV ESI,ESP                         ; 0056af15
    MOVSD.REP ES:EDI,ESI                ; 0056af17
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056af19
    ADD ESP,0x64                        ; 0056af1d
    POP EBP                             ; 0056af20
    POP EDI                             ; 0056af21
    POP EBX                             ; 0056af22
    RET                                 ; 0056af23
    MOV EBP,dword ptr [ESP + 0x54]      ; 0056af24
        ;   Label: LAB_0056af24
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056af28
    XOR EBX,EBX                         ; 0056af2c
    MOV dword ptr [ESP + 0x60],EAX      ; 0056af2e
    PUSH EBP                            ; 0056af32
        ;   Label: LAB_0056af32
    PUSH EBX                            ; 0056af33
    MOV ESI,dword ptr [ESP + 0x68]      ; 0056af34
    PUSH ESI                            ; 0056af38
    LEA ESI,[ESP + 0x30]                ; 0056af39
    LEA EDI,[ESP + 0x3c]                ; 0056af3d
    CALL core_box.cpp_FUN_00420570      ; 0056af41
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x30]                ; 0056af46
    ADD ESP,0x8                         ; 0056af4a
    MOVSD ES:EDI,ESI                    ; 0056af4d
    MOVSD ES:EDI,ESI                    ; 0056af4e
    MOVSD ES:EDI,ESI                    ; 0056af4f
    LEA ESI,[ESP + 0x34]                ; 0056af50
    PUSH ESI                            ; 0056af54
    LEA ESI,[ESP + 0x44]                ; 0056af55
    LEA EDI,[ESP + 0x20]                ; 0056af59
    CALL core_xform.cpp_FUN_005b5080    ; 0056af5d
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x44]                ; 0056af62
    ADD ESP,0x8                         ; 0056af66
    MOVSD ES:EDI,ESI                    ; 0056af69
    MOVSD ES:EDI,ESI                    ; 0056af6a
    MOVSD ES:EDI,ESI                    ; 0056af6b
    LEA ESI,[ESP + 0x18]                ; 0056af6c
    PUSH ESI                            ; 0056af70
    LEA ESI,[ESP + 0x4]                 ; 0056af71
    PUSH ESI                            ; 0056af75
    INC EBX                             ; 0056af76
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 0056af77
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0056af7c
    CMP EBX,0x8                         ; 0056af7f
    JGE 0x0056aeda                      ; 0056af82
        ;   XREF to: 0056aeda (CONDITIONAL_JUMP)  ; LAB_0056aeda
    JMP 0x0056af32                      ; 0056af88
        ;   XREF to: 0056af32 (UNCONDITIONAL_JUMP)  ; LAB_0056af32

