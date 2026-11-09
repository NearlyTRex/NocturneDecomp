; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00420360 at 00420365
;   core_boxactor.cpp_factoryFuncBoxActor_FUN_0041efb0 at 0041efc3
;   core_stone.cpp_CTempleStone_ctor_FUN_00568920 at 00568925
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041efe0
        ;   Label: core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041efe1
    PUSH EBX                            ; 0041efe5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0041efe6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041efeb
    ADD EAX,0x158                       ; 0041efee
    PUSH EAX                            ; 0041eff3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0041eff4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041eff9
    ADD EAX,0x23c                       ; 0041effc
    PUSH EAX                            ; 0041f001
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 0041f002
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffc6c]          ; 0041f007
    MOV dword ptr [EBX + 0x154],0x5dc994 ; 0041f00d
    MOV dword ptr [EBX + 0x390],0x0     ; 0041f017
    MOV dword ptr [EBX + 0x30c],0x41a00000 ; 0041f021
    LEA EAX,[EBX + 0x300]               ; 0041f02b
    MOV dword ptr [EBX + 0x310],0x0     ; 0041f031
    MOV dword ptr [EAX + 0x8],0x0       ; 0041f03b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041f042
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f045
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041f048
    MOV dword ptr [EAX],EDX             ; 0041f04b
    MOV byte ptr [EBX + 0x2d4],0x0      ; 0041f04d
    MOV byte ptr [EBX + 0x2e8],0x0      ; 0041f054
    MOV dword ptr [EBX + 0x2fc],0x0     ; 0041f05b
    MOV dword ptr [EBX + 0x314],0x0     ; 0041f065
    MOV dword ptr [EBX + 0x31c],0x0     ; 0041f06f
    MOV dword ptr [EBX + 0x318],0x0     ; 0041f079
    MOV dword ptr [EBX + 0x320],0x0     ; 0041f083
    MOV byte ptr [EBX + 0x32c],0x0      ; 0041f08d
    MOV dword ptr [EBX + 0x324],0x0     ; 0041f094
    LEA EAX,[EBX + 0x6d0]               ; 0041f09e
    MOV dword ptr [EBX + 0x5f0],0x0     ; 0041f0a4
    ADD ESP,0x4                         ; 0041f0ae
    MOV dword ptr [EAX + 0x8],0x0       ; 0041f0b1
    PUSH 0x5b74dd                       ; 0041f0b8
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041f0bd
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f0c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041f0c3
    MOV dword ptr [EAX],EDX             ; 0041f0c6
    LEA EAX,[EBX + 0x158]               ; 0041f0c8
    PUSH EAX                            ; 0041f0ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0041f0cf
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 0041f0d4
    MOV dword ptr [EBX + 0x5f4],0x1     ; 0041f0de
    MOV dword ptr [EBX + 0x5f8],0x1     ; 0041f0e8
    MOV dword ptr [EBX + 0x5fc],0x0     ; 0041f0f2
    MOV byte ptr [EBX + 0x600],0x0      ; 0041f0fc
    MOV byte ptr [EBX + 0x664],0x0      ; 0041f103
    MOV dword ptr [EBX + 0x6c8],0x0     ; 0041f10a
    ADD ESP,0x8                         ; 0041f114
    MOV dword ptr [EBX + 0x6cc],0x0     ; 0041f117
    MOV EAX,EBX                         ; 0041f121
    MOV dword ptr [EBX + 0x6e0],0x40000000 ; 0041f123
    POP EBX                             ; 0041f12d
    RET                                 ; 0041f12e

