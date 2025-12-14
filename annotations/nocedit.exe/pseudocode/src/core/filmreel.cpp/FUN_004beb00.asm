; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004beb00()
;
;
; Called Functions:
;   core_dest.cpp_FUN_0046f970
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beb00
        ;   Label: core_filmreel.cpp_FUN_004beb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004beb01
    PUSH EBX                            ; 004beb05
    CALL core_dest.cpp_FUN_0046f970     ; 004beb06
        ;   XREF to: 0046f970 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_FUN_0046f970()
    ADD ESP,0x4                         ; 004beb0b
    LEA EAX,[EBX + 0x1f4]               ; 004beb0e
    PUSH EAX                            ; 004beb14
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004beb15
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xf8],0x1      ; 004beb1a
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004beb24
    ADD ESP,0x4                         ; 004beb2e
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004beb31
    POP EBX                             ; 004beb3b
    RET                                 ; 004beb3c

