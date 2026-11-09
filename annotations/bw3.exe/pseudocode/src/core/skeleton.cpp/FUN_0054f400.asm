; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_skeleton_cpp_FUN_0054f400(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_004091b0 at 0040960a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054ac50
;   core_skeleton.cpp_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f400
        ;   Label: core_skeleton.cpp_FUN_0054f400
    PUSH ESI                            ; 0054f401
    PUSH EDI                            ; 0054f402
    PUSH EBP                            ; 0054f403
    SUB ESP,0x8                         ; 0054f404
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054f407
    PUSH ESI                            ; 0054f40b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054f40c
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EBX,dword ptr [EAX]             ; 0054f411
    SUB EBX,0x2                         ; 0054f413
    ADD ESP,0x4                         ; 0054f416
    TEST EBX,EBX                        ; 0054f419
    JL 0x0054f466                       ; 0054f41b
        ;   XREF to: 0054f466 (CONDITIONAL_JUMP)  ; LAB_0054f466
    CMP EBX,dword ptr [ESI + 0x2320]    ; 0054f41d
        ;   Label: LAB_0054f41d
    JNZ 0x0054f46a                      ; 0054f423
        ;   XREF to: 0054f46a (CONDITIONAL_JUMP)  ; LAB_0054f46a
    LEA EAX,[ESI + 0x2140]              ; 0054f425
        ;   Label: LAB_0054f425
    PUSH EAX                            ; 0054f42b
    MOV ECX,dword ptr [ESI + 0x2324]    ; 0054f42c
    PUSH ECX                            ; 0054f432
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054f433
    PUSH EDI                            ; 0054f437
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0054f438
    PUSH EBP                            ; 0054f43c
    PUSH EBX                            ; 0054f43d
    PUSH ESI                            ; 0054f43e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054f43f
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f444
    PUSH EAX                            ; 0054f447
    CALL core_skeleton.cpp_FUN_0054ac50 ; 0054f448
        ;   XREF to: 0054ac50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054ac50()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054f44d
    FLD float ptr [ESP + 0x1c]          ; 0054f451
    ADD ESP,0x18                        ; 0054f455
    FSTP float ptr [ESP]                ; 0054f458
    MOV EAX,dword ptr [ESP]             ; 0054f45b
    ADD ESP,0x8                         ; 0054f45e
    POP EBP                             ; 0054f461
    POP EDI                             ; 0054f462
    POP ESI                             ; 0054f463
    POP EBX                             ; 0054f464
    RET                                 ; 0054f465
    XOR EBX,EBX                         ; 0054f466
        ;   Label: LAB_0054f466
    JMP 0x0054f41d                      ; 0054f468
        ;   XREF to: 0054f41d (UNCONDITIONAL_JUMP)  ; LAB_0054f41d
    PUSH EBX                            ; 0054f46a
        ;   Label: LAB_0054f46a
    PUSH ESI                            ; 0054f46b
    CALL core_skeleton.cpp_FUN_0054e420 ; 0054f46c
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054f471
    JMP 0x0054f425                      ; 0054f474
        ;   XREF to: 0054f425 (UNCONDITIONAL_JUMP)  ; LAB_0054f425

