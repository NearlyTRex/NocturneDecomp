; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e510(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e4e0 at 0040e4f3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e510
        ;   Label: core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510
    PUSH ESI                            ; 0040e511
    PUSH EDI                            ; 0040e512
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e513
    PUSH EBX                            ; 0040e517
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0040e518
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e51d
    ADD EAX,0x2b4                       ; 0040e520
    PUSH EAX                            ; 0040e525
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0040e526
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e52b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040e52e
    PUSH 0x5cb251                       ; 0040e534
    LEA EAX,[EBX + 0x2b4]               ; 0040e539
    PUSH EAX                            ; 0040e53f
    MOV dword ptr [EBX + 0x2b0],0x5f2424 ; 0040e540
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e54a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e54f
    MOV ESI,0x5cb25d                    ; 0040e552
    LEA EDI,[EBX + 0x430]               ; 0040e557
    PUSH EDI                            ; 0040e55d
    MOV AL,byte ptr [ESI]               ; 0040e55e
        ;   Label: LAB_0040e55e
    MOV byte ptr [EDI],AL               ; 0040e560
    CMP AL,0x0                          ; 0040e562
    JZ 0x0040e576                       ; 0040e564
        ;   XREF to: 0040e576 (CONDITIONAL_JUMP)  ; LAB_0040e576
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e566
    ADD ESI,0x2                         ; 0040e569
    MOV byte ptr [EDI + 0x1],AL         ; 0040e56c
    ADD EDI,0x2                         ; 0040e56f
    CMP AL,0x0                          ; 0040e572
    JNZ 0x0040e55e                      ; 0040e574
        ;   XREF to: 0040e55e (CONDITIONAL_JUMP)  ; LAB_0040e55e
    POP EDI                             ; 0040e576
        ;   Label: LAB_0040e576
    MOV dword ptr [EBX + 0x470],0x14    ; 0040e577
    MOV dword ptr [EBX + 0x474],0x0     ; 0040e581
    MOV dword ptr [EBX + 0x478],0x0     ; 0040e58b
    MOV dword ptr [EBX + 0x47c],0x0     ; 0040e595
    MOV dword ptr [EBX + 0x480],0x0     ; 0040e59f
    MOV byte ptr [EBX + 0x484],0x0      ; 0040e5a9
    MOV EAX,EBX                         ; 0040e5b0
    MOV dword ptr [EBX + 0x4a4],0x0     ; 0040e5b2
    POP EDI                             ; 0040e5bc
    POP ESI                             ; 0040e5bd
    POP EBX                             ; 0040e5be
    RET                                 ; 0040e5bf

