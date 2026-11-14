; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_0049e9c0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005dc907
;   TerminatedCString s_sh_cock_wav_005dc911
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_loadModel_FUN_00468780
;   core_fire.cpp_CFireEffect_createShell_FUN_004b7270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e9c0
        ;   Label: core_elephant.cpp_CElephantGun_onFired_FUN_0049e9c0
    PUSH ESI                            ; 0049e9c1
    PUSH EDI                            ; 0049e9c2
    PUSH EBP                            ; 0049e9c3
    SUB ESP,0x74                        ; 0049e9c4
    MOV EBX,dword ptr [ESP + 0x88]      ; 0049e9c7
    PUSH 0x3ec90fdb                     ; 0049e9ce
    MOV EDX,0x40a00000                  ; 0049e9d3
    MOV ECX,0x40c00000                  ; 0049e9d8
    MOV ESI,0xc0c00000                  ; 0049e9dd
    PUSH 0xbec90fdb                     ; 0049e9e2
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049e9e7
    MOV dword ptr [ESP + 0x40],ECX      ; 0049e9eb
    MOV dword ptr [ESP + 0x44],ESI      ; 0049e9ef
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049e9f3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 0049e9f8
    FLD float ptr [ESP + 0x78]          ; 0049e9fc
    ADD ESP,0x8                         ; 0049ea00
    PUSH 0x3ec90fdb                     ; 0049ea03
    PUSH 0xbec90fdb                     ; 0049ea08
    FSTP float ptr [ESP + 0x48]         ; 0049ea0d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049ea11
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 0049ea16
    FLD float ptr [ESP + 0x78]          ; 0049ea1a
    ADD ESP,0x8                         ; 0049ea1e
    LEA EAX,[ESP + 0x40]                ; 0049ea21
    PUSH EAX                            ; 0049ea25
    LEA EAX,[ESP + 0x4]                 ; 0049ea26
    XOR EDI,EDI                         ; 0049ea2a
    PUSH EAX                            ; 0049ea2c
    FSTP float ptr [ESP + 0x4c]         ; 0049ea2d
    MOV dword ptr [ESP + 0x50],EDI      ; 0049ea31
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0049ea35
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0049ea3a
    LEA EAX,[ESP + 0x34]                ; 0049ea3d
    PUSH EAX                            ; 0049ea41
    LEA EAX,[ESP + 0x4]                 ; 0049ea42
    PUSH EAX                            ; 0049ea46
    LEA ESI,[ESP + 0x30]                ; 0049ea47
    LEA EDI,[ESP + 0x6c]                ; 0049ea4b
    CALL core_dirmat.cpp_FUN_0045f690   ; 0049ea4f
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 0049ea54
    LEA EAX,[ESP + 0x64]                ; 0049ea57
    LEA ESI,[ESP + 0x28]                ; 0049ea5b
    PUSH EAX                            ; 0049ea5f
    MOVSD ES:EDI,ESI                    ; 0049ea60
    MOVSD ES:EDI,ESI                    ; 0049ea61
    MOVSD ES:EDI,ESI                    ; 0049ea62
    PUSH EBX                            ; 0049ea63
    LEA ESI,[ESP + 0x54]                ; 0049ea64
    LEA EDI,[ESP + 0x60]                ; 0049ea68
    CALL core_actor.cpp_FUN_00408ac0    ; 0049ea6c
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x54]                ; 0049ea71
    ADD ESP,0x8                         ; 0049ea75
    MOVSD ES:EDI,ESI                    ; 0049ea78
    MOVSD ES:EDI,ESI                    ; 0049ea79
    MOVSD ES:EDI,ESI                    ; 0049ea7a
    LEA EAX,[ESP + 0x58]                ; 0049ea7b
    LEA ESI,[ESP + 0x34]                ; 0049ea7f
    CMP ESI,EAX                         ; 0049ea83
    JZ 0x0049ea9f                       ; 0049ea85
        ;   XREF to: 0049ea9f (CONDITIONAL_JUMP)  ; LAB_0049ea9f
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049ea87
    MOV dword ptr [ESP + 0x34],EAX      ; 0049ea8b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049ea8f
    MOV dword ptr [ESP + 0x38],EAX      ; 0049ea93
    MOV EAX,dword ptr [ESP + 0x60]      ; 0049ea97
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049ea9b
    PUSH 0x5dc907                       ; 0049ea9f | = "shell.kfm"
        ;   Label: LAB_0049ea9f
    CALL core_dmodel.cpp_loadModel_FUN_00468780 ; 0049eaa4
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00468780(char * filename)
    ADD ESP,0x4                         ; 0049eaa9
    PUSH EAX                            ; 0049eaac
    LEA EAX,[ESP + 0x38]                ; 0049eaad
    PUSH EAX                            ; 0049eab1
    LEA EAX,[EBX + 0x30]                ; 0049eab2
    PUSH EAX                            ; 0049eab5
    LEA EAX,[EBX + 0x20]                ; 0049eab6
    PUSH EAX                            ; 0049eab9
    MOV EBP,dword ptr [0x0061c010]      ; 0049eaba | DAT_0061c010
    PUSH EBP                            ; 0049eac0
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004b7270 ; 0049eac1
        ;   XREF to: 004b7270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 0049eac6
    PUSH 0x5dc911                       ; 0049eac9 | = "sh-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049eace
    PUSH EBX                            ; 0049ead4
    CALL dword ptr [EAX + 0x2c]         ; 0049ead5
    ADD ESP,0x8                         ; 0049ead8
    ADD ESP,0x74                        ; 0049eadb
    POP EBP                             ; 0049eade
    POP EDI                             ; 0049eadf
    POP ESI                             ; 0049eae0
    POP EBX                             ; 0049eae1
    RET                                 ; 0049eae2

