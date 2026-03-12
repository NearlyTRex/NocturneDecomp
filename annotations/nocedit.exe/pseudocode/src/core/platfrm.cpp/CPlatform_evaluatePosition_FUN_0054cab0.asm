; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; float[1523]      Stack[-0x1844]:6092  afStackY_1844
; CQuaternion4f    Stack[-0x68]:16  local_68
; CVector3f        Stack[-0x58]:12  local_58
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; CQuaternion4f    Stack[-0x30]:16  local_30
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00 at 0054ebf0
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054ce4d
;   core_platfrm.cpp_CPlatform_propertyActionStateCallback_FUN_0054e760 at 0054e796
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cab0
        ;   Label: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
    PUSH ESI                            ; 0054cab1
    PUSH EDI                            ; 0054cab2
    PUSH EBP                            ; 0054cab3
    MOV EBP,ESP                         ; 0054cab4
    SUB ESP,0x58                        ; 0054cab6
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054cab9
    FLD float ptr [ESI + 0x2dc]         ; 0054cabc
    FLDZ                                ; 0054cac2
    FCOMPP                              ; 0054cac4
    FNSTSW AX                           ; 0054cac6
    SAHF                                ; 0054cac8
    JA 0x0054cbc1                       ; 0054cac9
        ;   XREF to: 0054cbc1 (CONDITIONAL_JUMP)  ; LAB_0054cbc1
    FLD float ptr [ESI + 0x2dc]         ; 0054cacf
        ;   Label: LAB_0054cacf
    FLD1                                ; 0054cad5
    FCOMPP                              ; 0054cad7
    FNSTSW AX                           ; 0054cad9
    SAHF                                ; 0054cadb
    JNC 0x0054cae8                      ; 0054cadc
        ;   XREF to: 0054cae8 (CONDITIONAL_JUMP)  ; LAB_0054cae8
    MOV dword ptr [ESI + 0x2dc],0x3f800000 ; 0054cade
    LEA EDI,[ESI + 0x20]                ; 0054cae8
        ;   Label: LAB_0054cae8
    MOV AH,byte ptr [ESI + 0x2f0]       ; 0054caeb
    LEA EBX,[ESI + 0x30]                ; 0054caf1
    TEST AH,AH                          ; 0054caf4
    JNZ 0x0054cbd0                      ; 0054caf6
        ;   XREF to: 0054cbd0 (CONDITIONAL_JUMP)  ; LAB_0054cbd0
    LEA EDX,[ESI + 0x328]               ; 0054cafc
    LEA EAX,[ESI + 0x2dc]               ; 0054cb02
    FLD float ptr [EDX]                 ; 0054cb08
    FMUL float ptr [EAX]                ; 0054cb0a
    FSTP float ptr [EBP + -0x38]        ; 0054cb0c
    FLD float ptr [EDX + 0x4]           ; 0054cb0f
    FMUL float ptr [EAX]                ; 0054cb12
    FSTP float ptr [EBP + -0x34]        ; 0054cb14
    FLD float ptr [EDX + 0x8]           ; 0054cb17
    FMUL float ptr [EAX]                ; 0054cb1a
    FSTP float ptr [EBP + -0x30]        ; 0054cb1c
    LEA EAX,[ESI + 0x31c]               ; 0054cb1f
    FLD float ptr [ESI + 0x2dc]         ; 0054cb25
    FLD1                                ; 0054cb2b
    FSUBRP                              ; 0054cb2d
    FLD float ptr [EAX]                 ; 0054cb2f
    FXCH                                ; 0054cb31
    FSTP float ptr [EBP + -0x8]         ; 0054cb33
    FMUL float ptr [EBP + -0x8]         ; 0054cb36
    FSTP float ptr [EBP + -0x14]        ; 0054cb39
    FLD float ptr [EAX + 0x4]           ; 0054cb3c
    FMUL float ptr [EBP + -0x8]         ; 0054cb3f
    FSTP float ptr [EBP + -0x10]        ; 0054cb42
    FLD float ptr [EAX + 0x8]           ; 0054cb45
    FMUL float ptr [EBP + -0x8]         ; 0054cb48
    FLD float ptr [EBP + -0x14]         ; 0054cb4b
    FADD float ptr [EBP + -0x38]        ; 0054cb4e
    FLD float ptr [EBP + -0x10]         ; 0054cb51
    FXCH                                ; 0054cb54
    FSTP float ptr [EBP + -0x2c]        ; 0054cb56
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0054cb59
    FADD float ptr [EBP + -0x34]        ; 0054cb5c
    FXCH                                ; 0054cb5f
    FST float ptr [EBP + -0xc]          ; 0054cb61
    FADD float ptr [EBP + -0x30]        ; 0054cb64
    FXCH                                ; 0054cb67
    FSTP float ptr [EBP + -0x28]        ; 0054cb69
    FSTP float ptr [EBP + -0x24]        ; 0054cb6c
    MOV dword ptr [EDI],EAX             ; 0054cb6f
    MOV EAX,dword ptr [EBP + -0x28]     ; 0054cb71
    MOV dword ptr [EDI + 0x4],EAX       ; 0054cb74
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054cb77
    MOV dword ptr [EDI + 0x8],EAX       ; 0054cb7a
    LEA EAX,[ESI + 0x344]               ; 0054cb7d
    PUSH dword ptr [ESI + 0x2dc]        ; 0054cb83
    PUSH EAX                            ; 0054cb89
    ADD ESI,0x334                       ; 0054cb8a
    PUSH ESI                            ; 0054cb90
    LEA ESI,[EBP + -0x58]               ; 0054cb91
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0054cb94
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0054cb99
    LEA EAX,[EBP + -0x48]               ; 0054cb9c
    LEA EDI,[EBP + -0x48]               ; 0054cb9f
    PUSH EAX                            ; 0054cba2
    LEA EAX,[EBP + -0x20]               ; 0054cba3
    LEA ESI,[EBP + -0x58]               ; 0054cba6
    PUSH EAX                            ; 0054cba9
    MOVSD ES:EDI,ESI                    ; 0054cbaa
    MOVSD ES:EDI,ESI                    ; 0054cbab
    MOVSD ES:EDI,ESI                    ; 0054cbac
    MOVSD ES:EDI,ESI                    ; 0054cbad
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054cbae
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0054cbb3
    CMP EBX,EAX                         ; 0054cbb6
    JNZ 0x0054cbf7                      ; 0054cbb8
        ;   XREF to: 0054cbf7 (CONDITIONAL_JUMP)  ; LAB_0054cbf7
    MOV ESP,EBP                         ; 0054cbba
        ;   Label: LAB_0054cbba
    POP EBP                             ; 0054cbbc
    POP EDI                             ; 0054cbbd
    POP ESI                             ; 0054cbbe
    POP EBX                             ; 0054cbbf
    RET                                 ; 0054cbc0
    MOV dword ptr [ESI + 0x2dc],0x0     ; 0054cbc1
        ;   Label: LAB_0054cbc1
    JMP 0x0054cacf                      ; 0054cbcb
        ;   XREF to: 0054cacf (UNCONDITIONAL_JUMP)  ; LAB_0054cacf
    LEA EAX,[ESI + 0x310]               ; 0054cbd0
        ;   Label: LAB_0054cbd0
    MOV EDX,dword ptr [EAX]             ; 0054cbd6
    PUSH EBX                            ; 0054cbd8
    MOV dword ptr [EBP + -0x4],EDX      ; 0054cbd9
    PUSH EDI                            ; 0054cbdc
    FILD dword ptr [EBP + -0x4]         ; 0054cbdd
    FMUL float ptr [ESI + 0x2dc]        ; 0054cbe0
    SUB ESP,0x4                         ; 0054cbe6
    FSTP float ptr [ESP]                ; 0054cbe9
    PUSH EAX                            ; 0054cbec
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 0054cbed
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 0054cbf2
    JMP 0x0054cbba                      ; 0054cbf5
        ;   XREF to: 0054cbba (UNCONDITIONAL_JUMP)  ; LAB_0054cbba
    MOV EDX,dword ptr [EAX]             ; 0054cbf7
        ;   Label: LAB_0054cbf7
    MOV dword ptr [EBX],EDX             ; 0054cbf9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054cbfb
    MOV dword ptr [EBX + 0x4],EDX       ; 0054cbfe
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054cc01
    MOV dword ptr [EBX + 0x8],EDX       ; 0054cc04
    MOV ESP,EBP                         ; 0054cc07
    POP EBP                             ; 0054cc09
    POP EDI                             ; 0054cc0a
    POP ESI                             ; 0054cc0b
    POP EBX                             ; 0054cc0c
    RET                                 ; 0054cc0d

