; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005698d0(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00563e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005698d0
        ;   Label: core_skeleton.cpp_FUN_005698d0
    PUSH EDI                            ; 005698d1
    SUB ESP,0xc                         ; 005698d2
    MOV EBX,ESI                         ; 005698d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 005698d7
    LEA EAX,[ESI + 0xe80]               ; 005698db
    PUSH EAX                            ; 005698e1
    MOV EDX,dword ptr [ESP + 0x24]      ; 005698e2
    PUSH EDX                            ; 005698e6
    MOV ECX,dword ptr [ESP + 0x24]      ; 005698e7
    PUSH ECX                            ; 005698eb
    PUSH ESI                            ; 005698ec
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005698ed
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005698f2
    PUSH EAX                            ; 005698f5
    LEA ESI,[ESP + 0x10]                ; 005698f6
    MOV EDI,EBX                         ; 005698fa
    CALL core_skeleton.cpp_FUN_00563e90 ; 005698fc
        ;   XREF to: 00563e90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00563e90()
    LEA ESI,[ESP + 0x10]                ; 00569901
    ADD ESP,0x10                        ; 00569905
    MOVSD ES:EDI,ESI                    ; 00569908
    MOVSD ES:EDI,ESI                    ; 00569909
    MOVSD ES:EDI,ESI                    ; 0056990a
    MOV EAX,EBX                         ; 0056990b
    ADD ESP,0xc                         ; 0056990d
    POP EDI                             ; 00569910
    POP EBX                             ; 00569911
    RET                                 ; 00569912

