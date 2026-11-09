; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004c1340(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gasmask.cpp_factoryFuncGasMask_FUN_004c1310 at 004c1323
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1340
        ;   Label: core_gasmask.cpp_CGasMask_ctor_FUN_004c1340
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c1341
    PUSH EBX                            ; 004c1345
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004c1346
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c134b
    ADD EAX,0x2b4                       ; 004c134e
    PUSH EAX                            ; 004c1353
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004c1354
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c1359
    LEA EBX,[EAX + 0xfffffd4c]          ; 004c135c
    PUSH 0x5d8e6b                       ; 004c1362
    LEA EAX,[EBX + 0x2b4]               ; 004c1367
    PUSH EAX                            ; 004c136d
    MOV dword ptr [EBX + 0x2b0],0x5f7794 ; 004c136e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004c1378
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c137d
    MOV EAX,EBX                         ; 004c1380
    MOV dword ptr [EBX + 0x430],0x0     ; 004c1382
    POP EBX                             ; 004c138c
    RET                                 ; 004c138d

