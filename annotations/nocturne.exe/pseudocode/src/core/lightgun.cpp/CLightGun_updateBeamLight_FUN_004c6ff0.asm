; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(int param_1)
;
;
; XREF[2]:
;   core_lightgun.cpp_FUN_004c71a0 at 004c73df
;   core_lightgun.cpp_FUN_004c79a0 at 004c7b22
;
; Referenced Globals:
;   float FLOAT_0059fd64 = 112
;   undefined4 DAT_01c74640
;   undefined4 DAT_01c74740
;   undefined4 DAT_01c74744
;   undefined4 DAT_01c74748
;   undefined4 DAT_01c7474c
;   undefined4 DAT_01c74750
;   undefined4 DAT_01c74778
;   undefined4 DAT_01c762f4
;   undefined4 DAT_01c762fc
;   undefined4 DAT_01c76310
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6ff0
        ;   Label: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
    PUSH ESI                            ; 004c6ff1
    SUB ESP,0x18                        ; 004c6ff2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c6ff5
    MOV EDX,ESP                         ; 004c6ff9
    PUSH EDX                            ; 004c6ffb
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c6ffc
    PUSH EBX                            ; 004c7002
    CALL dword ptr [EAX + 0xd8]         ; 004c7003
    ADD ESP,0x8                         ; 004c7009
    PUSH EAX                            ; 004c700c
    LEA EAX,[ESP + 0x10]                ; 004c700d
    PUSH EAX                            ; 004c7011
    PUSH EBX                            ; 004c7012
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c7013
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,0x1                         ; 004c7018
    LEA EAX,[ESP + 0x18]                ; 004c701d
    ADD ESP,0xc                         ; 004c7021
    XOR ECX,ECX                         ; 004c7024
    MOV dword ptr [0x01c762f4],EDX      ; 004c7026 | DAT_01c762f4
    MOV dword ptr [0x01c762fc],ECX      ; 004c702c | DAT_01c762fc
    CMP EAX,0x1c74744                   ; 004c7032
    JZ 0x004c7054                       ; 004c7037
        ;   XREF to: 004c7054 (CONDITIONAL_JUMP)  ; LAB_004c7054
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c7039
    MOV [0x01c74744],EAX                ; 004c703d | DAT_01c74744
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c7042
    MOV [0x01c74748],EAX                ; 004c7046 | DAT_01c74748
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c704b
    MOV [0x01c7474c],EAX                ; 004c704f | DAT_01c7474c
    ADD EBX,0x30                        ; 004c7054
        ;   Label: LAB_004c7054
    PUSH EBX                            ; 004c7057
    PUSH 0x1c74750                      ; 004c7058 | DAT_01c74750
    MOV ESI,0x1                         ; 004c705d
    MOV EBX,0x42000000                  ; 004c7062
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c7067
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 004c706c
    FLD float ptr [0x0059fd64]          ; 004c706f | FLOAT_0059fd64
    PUSH 0x3f800000                     ; 004c7075
    MOV dword ptr [0x01c74740],EBX      ; 004c707a | DAT_01c74740
    PUSH 0x1c74640                      ; 004c7080 | DAT_01c74640
    FSTP float ptr [0x01c74778]         ; 004c7085 | DAT_01c74778
    MOV dword ptr [0x01c76310],ESI      ; 004c708b | DAT_01c76310
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 004c7091
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080()
    ADD ESP,0x8                         ; 004c7096
    ADD ESP,0x18                        ; 004c7099
    POP ESI                             ; 004c709c
    POP EBX                             ; 004c709d
    RET                                 ; 004c709e

