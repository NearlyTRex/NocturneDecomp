; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_FUN_004e0770(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_prye.cpp_FUN_0051c1c0 at 0051cdff
;
; Referenced Globals:
;   undefined4 DAT_005e23b8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0770
        ;   Label: core_lever.cpp_FUN_004e0770
    PUSH EDI                            ; 004e0771
    PUSH EBP                            ; 004e0772
    SUB ESP,0x20                        ; 004e0773
    MOV EBP,ESI                         ; 004e0776
    MOV ESI,dword ptr [ESP + 0x30]      ; 004e0778
    LEA EBX,[ESI + 0x158]               ; 004e077c
    PUSH EBX                            ; 004e0782
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004e0783
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e0788
    PUSH EBX                            ; 004e078b
    MOV EDI,dword ptr [EAX + 0x10c]     ; 004e078c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004e0792
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e0797
    ADD ESP,0x4                         ; 004e079d
    DEC EAX                             ; 004e07a0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e07a1
    FILD dword ptr [ESP + 0x1c]         ; 004e07a5
    FMUL float ptr [ESI + 0x2dc]        ; 004e07a9
    PUSH EBX                            ; 004e07af
    CALL crt_math.c_round_FUN_005a3120  ; 004e07b0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 004e07b5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004e07b9
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e07be
    MOV EAX,dword ptr [EAX + 0x104]     ; 004e07c1
    IMUL EAX,dword ptr [ESP + 0x18]     ; 004e07c7
    MOV EBX,dword ptr [ESI + 0x414]     ; 004e07cc
    ADD EBX,EAX                         ; 004e07d2
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e07d4
    SUB EAX,EBX                         ; 004e07db
    SHL EAX,0x2                         ; 004e07dd
    MOV EBX,ESP                         ; 004e07e0
    ADD EAX,EDI                         ; 004e07e2
    FILD dword ptr [EAX]                ; 004e07e4
    FMUL float ptr [0x005e23b8]         ; 004e07e6 | DAT_005e23b8
    FSTP float ptr [EBX]                ; 004e07ec
    FILD dword ptr [EAX + 0x4]          ; 004e07ee
    FMUL float ptr [0x005e23b8]         ; 004e07f1 | DAT_005e23b8
    FSTP float ptr [EBX + 0x4]          ; 004e07f7
    FILD dword ptr [EAX + 0x8]          ; 004e07fa
    FMUL float ptr [0x005e23b8]         ; 004e07fd | DAT_005e23b8
    FSTP float ptr [EBX + 0x8]          ; 004e0803
    MOV EAX,ESP                         ; 004e0806
    PUSH EAX                            ; 004e0808
    PUSH ESI                            ; 004e0809
    LEA ESI,[ESP + 0x14]                ; 004e080a
    MOV EDI,EBP                         ; 004e080e
    CALL core_actor.cpp_FUN_00408b80    ; 004e0810
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 004e0815
    ADD ESP,0x8                         ; 004e0819
    MOVSD ES:EDI,ESI                    ; 004e081c
    MOVSD ES:EDI,ESI                    ; 004e081d
    MOVSD ES:EDI,ESI                    ; 004e081e
    MOV EAX,EBP                         ; 004e081f
    ADD ESP,0x20                        ; 004e0821
    POP EBP                             ; 004e0824
    POP EDI                             ; 004e0825
    POP EBX                             ; 004e0826
    RET                                 ; 004e0827

