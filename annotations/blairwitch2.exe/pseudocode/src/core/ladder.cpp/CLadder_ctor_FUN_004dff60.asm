; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004dff60(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ladder.cpp_factoryFuncLadder_FUN_004dff30 at 004dff43
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dff60
        ;   Label: core_ladder.cpp_CLadder_ctor_FUN_004dff60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dff61
    PUSH EBX                            ; 004dff65
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004dff66
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004dff6b
    ADD EAX,0x2b4                       ; 004dff6e
    PUSH EAX                            ; 004dff73
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004dff74
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004dff79
    LEA EBX,[EAX + 0xfffffd4c]          ; 004dff7c
    PUSH 0x5dbd56                       ; 004dff82
    LEA EAX,[EBX + 0x2b4]               ; 004dff87
    PUSH EAX                            ; 004dff8d
    MOV dword ptr [EBX + 0x2b0],0x5f9194 ; 004dff8e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004dff98
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x430],0x40000000 ; 004dff9d
    MOV dword ptr [EBX + 0x434],0x41200000 ; 004dffa7
    MOV dword ptr [EBX + 0x438],0x0     ; 004dffb1
    LEA EAX,[EBX + 0x440]               ; 004dffbb
    MOV dword ptr [EBX + 0x43c],0x0     ; 004dffc1
    MOV dword ptr [EAX + 0x8],0x0       ; 004dffcb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dffd2
    MOV dword ptr [EAX + 0x4],EDX       ; 004dffd5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dffd8
    MOV dword ptr [EAX],EDX             ; 004dffdb
    LEA EAX,[EBX + 0x44c]               ; 004dffdd
    MOV dword ptr [EAX + 0x8],0x0       ; 004dffe3
    ADD ESP,0x8                         ; 004dffea
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dffed
    MOV dword ptr [EAX + 0x4],EDX       ; 004dfff0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dfff3
    MOV dword ptr [EAX],EDX             ; 004dfff6
    MOV EAX,EBX                         ; 004dfff8
    MOV dword ptr [EBX + 0x458],0x0     ; 004dfffa
    POP EBX                             ; 004e0004
    RET                                 ; 004e0005

