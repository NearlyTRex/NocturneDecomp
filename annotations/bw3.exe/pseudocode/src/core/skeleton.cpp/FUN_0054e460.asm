; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054e460(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_00548a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e460
        ;   Label: core_skeleton.cpp_FUN_0054e460
    PUSH EDI                            ; 0054e461
    SUB ESP,0xc                         ; 0054e462
    MOV EBX,ESI                         ; 0054e465
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054e467
    LEA EAX,[ESI + 0xe80]               ; 0054e46b
    PUSH EAX                            ; 0054e471
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054e472
    PUSH EDX                            ; 0054e476
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054e477
    PUSH ECX                            ; 0054e47b
    PUSH ESI                            ; 0054e47c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e47d
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e482
    PUSH EAX                            ; 0054e485
    LEA ESI,[ESP + 0x10]                ; 0054e486
    MOV EDI,EBX                         ; 0054e48a
    CALL core_skeleton.cpp_FUN_00548a30 ; 0054e48c
        ;   XREF to: 00548a30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548a30()
    LEA ESI,[ESP + 0x10]                ; 0054e491
    ADD ESP,0x10                        ; 0054e495
    MOVSD ES:EDI,ESI                    ; 0054e498
    MOVSD ES:EDI,ESI                    ; 0054e499
    MOVSD ES:EDI,ESI                    ; 0054e49a
    MOV EAX,EBX                         ; 0054e49b
    ADD ESP,0xc                         ; 0054e49d
    POP EDI                             ; 0054e4a0
    POP EBX                             ; 0054e4a1
    RET                                 ; 0054e4a2

