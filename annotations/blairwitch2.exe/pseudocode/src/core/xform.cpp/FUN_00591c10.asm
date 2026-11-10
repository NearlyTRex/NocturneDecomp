; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00591c10(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[41]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70 at 004171bf
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0 at 004192fc
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d1be
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0 at 0042049c
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10 at 00426c6e
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 at 00428f3a
;   core_charactr.cpp_FUN_00428bd0 at 00428c34
;   core_cross.cpp_CCross_process_FUN_005a6ed0 at 005a7065
;   core_doc.cpp_FUN_00455d10 at 004560a8
;   core_doc.cpp_FUN_004567c0 at 00456837
;   ... and 31 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591c10
        ;   Label: core_xform.cpp_FUN_00591c10
    PUSH ESI                            ; 00591c11
    PUSH EDI                            ; 00591c12
    SUB ESP,0x18                        ; 00591c13
    MOV EBX,dword ptr [ESP + 0x28]      ; 00591c16
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00591c1a
    MOV ESI,dword ptr [ESP + 0x30]      ; 00591c1e
    PUSH ESI                            ; 00591c22
    LEA EAX,[ESP + 0x8]                 ; 00591c23
    PUSH EAX                            ; 00591c27
    LEA EAX,[ESP + 0x8]                 ; 00591c28
    PUSH EAX                            ; 00591c2c
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591c2d
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591c32
    LEA EAX,[ESI + 0x8]                 ; 00591c35
    PUSH EAX                            ; 00591c38
    LEA EAX,[ESP + 0x14]                ; 00591c39
    PUSH EAX                            ; 00591c3d
    LEA EAX,[ESP + 0x10]                ; 00591c3e
    PUSH EAX                            ; 00591c42
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591c43
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591c48
    ADD ESI,0x4                         ; 00591c4b
    PUSH ESI                            ; 00591c4e
    LEA EAX,[ESP + 0x10]                ; 00591c4f
    PUSH EAX                            ; 00591c53
    LEA EAX,[ESP + 0x1c]                ; 00591c54
    PUSH EAX                            ; 00591c58
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591c59
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591c5e
    FLD float ptr [ESP + 0x14]          ; 00591c61
    FMUL float ptr [ESP]                ; 00591c65
    FMUL float ptr [ESP + 0x8]          ; 00591c68
    FLD float ptr [ESP + 0xc]           ; 00591c6c
    FMUL float ptr [ESP + 0x10]         ; 00591c70
    FADDP                               ; 00591c74
    FSTP float ptr [EBX]                ; 00591c76
    FLD float ptr [ESP + 0x14]          ; 00591c78
    FMUL float ptr [ESP]                ; 00591c7c
    FMUL float ptr [ESP + 0x10]         ; 00591c7f
    FLD float ptr [ESP + 0xc]           ; 00591c83
    FCHS                                ; 00591c87
    FMUL float ptr [ESP + 0x8]          ; 00591c89
    FADDP                               ; 00591c8d
    FSTP float ptr [EBX + 0x4]          ; 00591c8f
    FLD float ptr [ESP + 0x14]          ; 00591c92
    FMUL float ptr [ESP + 0x4]          ; 00591c96
    FSTP float ptr [EBX + 0x8]          ; 00591c9a
    FLD float ptr [ESP + 0x8]           ; 00591c9d
    FMUL float ptr [ESP + 0x4]          ; 00591ca1
    FSTP float ptr [EBX + 0x10]         ; 00591ca5
    FLD float ptr [ESP + 0x10]          ; 00591ca8
    FMUL float ptr [ESP + 0x4]          ; 00591cac
    FSTP float ptr [EBX + 0x14]         ; 00591cb0
    FLD float ptr [ESP]                 ; 00591cb3
    FCHS                                ; 00591cb6
    FSTP float ptr [EBX + 0x18]         ; 00591cb8
    FLD float ptr [ESP + 0xc]           ; 00591cbb
    FMUL float ptr [ESP]                ; 00591cbf
    FMUL float ptr [ESP + 0x8]          ; 00591cc2
    FLD float ptr [ESP + 0x14]          ; 00591cc6
    FCHS                                ; 00591cca
    FMUL float ptr [ESP + 0x10]         ; 00591ccc
    FADDP                               ; 00591cd0
    FSTP float ptr [EBX + 0x20]         ; 00591cd2
    FLD float ptr [ESP + 0xc]           ; 00591cd5
    FMUL float ptr [ESP]                ; 00591cd9
    FMUL float ptr [ESP + 0x10]         ; 00591cdc
    FLD float ptr [ESP + 0x8]           ; 00591ce0
    FMUL float ptr [ESP + 0x14]         ; 00591ce4
    FADDP                               ; 00591ce8
    FSTP float ptr [EBX + 0x24]         ; 00591cea
    FLD float ptr [ESP + 0xc]           ; 00591ced
    FMUL float ptr [ESP + 0x4]          ; 00591cf1
    FSTP float ptr [EBX + 0x28]         ; 00591cf5
    MOV EAX,dword ptr [EDI]             ; 00591cf8
    MOV dword ptr [EBX + 0xc],EAX       ; 00591cfa
    MOV EAX,dword ptr [EDI + 0x4]       ; 00591cfd
    MOV dword ptr [EBX + 0x1c],EAX      ; 00591d00
    MOV EAX,dword ptr [EDI + 0x8]       ; 00591d03
    MOV dword ptr [EBX + 0x2c],EAX      ; 00591d06
    ADD ESP,0x18                        ; 00591d09
    POP EDI                             ; 00591d0c
    POP ESI                             ; 00591d0d
    POP EBX                             ; 00591d0e
    RET                                 ; 00591d0f

