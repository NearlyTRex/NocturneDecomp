; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_rifle_cpp_CRifle_getMuzzlePoint_FUN_00527ca0(CRifle *this_ptr,CVector3f *out_point)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   TerminatedCString s_LITEDESLILE_kfm_005cdaf4
;   undefined4 DAT_005cdb09
;   undefined4 DAT_005cdb11
;   undefined4 DAT_005cdb19
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527ca0
        ;   Label: core_rifle.cpp_CRifle_getMuzzlePoint_FUN_00527ca0
    PUSH EDI                            ; 00527ca1
    PUSH EBP                            ; 00527ca2
    MOV EBP,ESP                         ; 00527ca3
    SUB ESP,0x23c8                      ; 00527ca5
    MOV EBX,ESI                         ; 00527cab
    LEA EAX,[EBP + 0xffffdc38]          ; 00527cad
    PUSH EAX                            ; 00527cb3
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 00527cb4
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x10]      ; 00527cb9
    ADD ESP,0x4                         ; 00527cbc
    ADD EAX,0x158                       ; 00527cbf
    PUSH EAX                            ; 00527cc4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00527cc5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00527cca
    LEA ESI,[EAX + 0x338]               ; 00527ccd
    LEA EDI,[EBP + -0x24]               ; 00527cd3
    MOV EAX,dword ptr [EBP + 0x10]      ; 00527cd6
    PUSH 0x5cdaf4                       ; 00527cd9 | = "LITEDESLILE.kfm"
    ADD EAX,0x1d0                       ; 00527cde
    MOV ECX,0x6                         ; 00527ce3
    PUSH EAX                            ; 00527ce8
    MOVSD.REP ES:EDI,ESI                ; 00527ce9
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00527ceb
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00527cf0
    TEST EAX,EAX                        ; 00527cf3
    JNZ 0x00527d40                      ; 00527cf5
        ;   XREF to: 00527d40 (CONDITIONAL_JUMP)  ; LAB_00527d40
    FLD float ptr [EBP + -0x14]         ; 00527cf7
    FLD float ptr [EBP + -0x10]         ; 00527cfa
    FADD double ptr [0x005cdb11]        ; 00527cfd | DAT_005cdb11
    FXCH                                ; 00527d03
    FADD double ptr [0x005cdb09]        ; 00527d05 | DAT_005cdb09
    FXCH                                ; 00527d0b
    FSTP float ptr [EBP + -0x4]         ; 00527d0d
    FSTP float ptr [EBP + -0x8]         ; 00527d10
    FLD float ptr [EBP + -0x18]         ; 00527d13
        ;   Label: LAB_00527d13
    FMUL float ptr [0x005cdb19]         ; 00527d16 | DAT_005cdb19
    PUSH 0x0                            ; 00527d1c
    LEA EAX,[EBP + 0xffffdc38]          ; 00527d1e
    LEA ESI,[EBP + -0xc]                ; 00527d24
    MOV EDI,EBX                         ; 00527d27
    PUSH EAX                            ; 00527d29
    FSTP float ptr [EBP + -0xc]         ; 00527d2a
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00527d2d
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527d32
    MOVSD ES:EDI,ESI                    ; 00527d35
    MOVSD ES:EDI,ESI                    ; 00527d36
    MOVSD ES:EDI,ESI                    ; 00527d37
    MOV EAX,EBX                         ; 00527d38
    MOV ESP,EBP                         ; 00527d3a
    POP EBP                             ; 00527d3c
    POP EDI                             ; 00527d3d
    POP EBX                             ; 00527d3e
    RET                                 ; 00527d3f
    MOV EAX,dword ptr [EBP + -0x14]     ; 00527d40
        ;   Label: LAB_00527d40
    MOV dword ptr [EBP + -0x8],EAX      ; 00527d43
    MOV EAX,dword ptr [EBP + -0x10]     ; 00527d46
    MOV dword ptr [EBP + -0x4],EAX      ; 00527d49
    JMP 0x00527d13                      ; 00527d4c
        ;   XREF to: 00527d13 (UNCONDITIONAL_JUMP)  ; LAB_00527d13

