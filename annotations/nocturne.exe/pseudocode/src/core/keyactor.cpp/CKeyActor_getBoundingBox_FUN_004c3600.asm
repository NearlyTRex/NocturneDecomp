; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_keyactor_cpp_CKeyActor_getBoundingBox_FUN_004c3600(int param_1,float *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3600
        ;   Label: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_004c3600
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c3601
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3605
    ADD EAX,0x150                       ; 004c3609
    PUSH EAX                            ; 004c360e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c360f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 004c3614
    MOV EDX,dword ptr [EAX]             ; 004c361a
    LEA ECX,[EAX + 0x4]                 ; 004c361c
    MOV dword ptr [EBX],EDX             ; 004c361f
    LEA EDX,[EBX + 0x4]                 ; 004c3621
    MOV ECX,dword ptr [ECX]             ; 004c3624
    MOV dword ptr [EDX],ECX             ; 004c3626
    LEA ECX,[EAX + 0x8]                 ; 004c3628
    MOV ECX,dword ptr [ECX]             ; 004c362b
    MOV dword ptr [EDX + 0x4],ECX       ; 004c362d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004c3630
    ADD EAX,0xc                         ; 004c3633
    MOV dword ptr [EDX + 0x8],ECX       ; 004c3636
    LEA ECX,[EAX + 0x4]                 ; 004c3639
    MOV ECX,dword ptr [ECX]             ; 004c363c
    MOV dword ptr [EDX + 0xc],ECX       ; 004c363e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004c3641
    ADD ESP,0x4                         ; 004c3644
    MOV dword ptr [EDX + 0x10],EAX      ; 004c3647
    MOV EAX,EBX                         ; 004c364a
    POP EBX                             ; 004c364c
    RET                                 ; 004c364d

