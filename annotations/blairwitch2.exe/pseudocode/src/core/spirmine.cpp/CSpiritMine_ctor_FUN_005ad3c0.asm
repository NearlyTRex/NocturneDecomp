; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritMine * core_spirmine_cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine *this_ptr)
;
; Parameters:
; CSpiritMine *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spirmine.cpp_factoryFuncSpiritMine_FUN_005ad390 at 005ad3a3
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad3c0
        ;   Label: core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ad3c1
    PUSH EDX                            ; 005ad3c5
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 ; 005ad3c6
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor * this_ptr)
    MOV EBX,EAX                         ; 005ad3cb
    ADD EAX,0x2b4                       ; 005ad3cd
    MOV dword ptr [EAX + -0x4],0x600f64 ; 005ad3d2
    MOV dword ptr [EAX + 0x528],0x40a00000 ; 005ad3d9
    MOV dword ptr [EAX + 0x52c],0x40a00000 ; 005ad3e3
    MOV dword ptr [EAX + 0x530],0x41c80000 ; 005ad3ed
    MOV dword ptr [EAX + 0x534],0x0     ; 005ad3f7
    MOV dword ptr [EAX + 0x538],0x0     ; 005ad401
    MOV dword ptr [EAX + 0x53c],0x0     ; 005ad40b
    ADD ESP,0x4                         ; 005ad415
    MOV dword ptr [EAX + 0xfffffe48],0x0 ; 005ad418
    PUSH 0x5f0edf                       ; 005ad422
    MOV dword ptr [EAX + 0x524],0x3f800000 ; 005ad427
    PUSH EAX                            ; 005ad431
    MOV dword ptr [EAX + 0x520],0x3f800000 ; 005ad432
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 005ad43c
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005ad441
    MOV EAX,EBX                         ; 005ad444
    MOV dword ptr [EBX + 0x834],0x0     ; 005ad446
    POP EBX                             ; 005ad450
    RET                                 ; 005ad451

