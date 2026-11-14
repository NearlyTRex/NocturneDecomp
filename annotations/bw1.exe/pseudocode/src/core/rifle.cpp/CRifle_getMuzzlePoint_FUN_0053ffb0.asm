; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_rifle_cpp_CRifle_getMuzzlePoint_FUN_0053ffb0(CRifle *this_ptr,CVector3f *out_point)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   TerminatedCString s_LITEDESLILE_kfm_005edc12
;   undefined4 DAT_005edc27
;   undefined4 DAT_005edc2f
;   undefined4 DAT_005edc37
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ffb0
        ;   Label: core_rifle.cpp_CRifle_getMuzzlePoint_FUN_0053ffb0
    PUSH EDI                            ; 0053ffb1
    PUSH EBP                            ; 0053ffb2
    MOV EBP,ESP                         ; 0053ffb3
    SUB ESP,0x23c8                      ; 0053ffb5
    MOV EBX,ESI                         ; 0053ffbb
    LEA EAX,[EBP + 0xffffdc38]          ; 0053ffbd
    PUSH EAX                            ; 0053ffc3
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 0053ffc4
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053ffc9
    ADD ESP,0x4                         ; 0053ffcc
    ADD EAX,0x158                       ; 0053ffcf
    PUSH EAX                            ; 0053ffd4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053ffd5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053ffda
    LEA ESI,[EAX + 0x338]               ; 0053ffdd
    LEA EDI,[EBP + -0x24]               ; 0053ffe3
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053ffe6
    PUSH 0x5edc12                       ; 0053ffe9 | = "LITEDESLILE.kfm"
    ADD EAX,0x1d0                       ; 0053ffee
    MOV ECX,0x6                         ; 0053fff3
    PUSH EAX                            ; 0053fff8
    MOVSD.REP ES:EDI,ESI                ; 0053fff9
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0053fffb
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 00540000
    TEST EAX,EAX                        ; 00540003
    JNZ 0x00540050                      ; 00540005
        ;   XREF to: 00540050 (CONDITIONAL_JUMP)  ; LAB_00540050
    FLD float ptr [EBP + -0x14]         ; 00540007
    FLD float ptr [EBP + -0x10]         ; 0054000a
    FADD double ptr [0x005edc2f]        ; 0054000d | DAT_005edc2f
    FXCH                                ; 00540013
    FADD double ptr [0x005edc27]        ; 00540015 | DAT_005edc27
    FXCH                                ; 0054001b
    FSTP float ptr [EBP + -0x4]         ; 0054001d
    FSTP float ptr [EBP + -0x8]         ; 00540020
    FLD float ptr [EBP + -0x18]         ; 00540023
        ;   Label: LAB_00540023
    FMUL float ptr [0x005edc37]         ; 00540026 | DAT_005edc37
    PUSH 0x0                            ; 0054002c
    LEA EAX,[EBP + 0xffffdc38]          ; 0054002e
    LEA ESI,[EBP + -0xc]                ; 00540034
    MOV EDI,EBX                         ; 00540037
    PUSH EAX                            ; 00540039
    FSTP float ptr [EBP + -0xc]         ; 0054003a
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0054003d
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00540042
    MOVSD ES:EDI,ESI                    ; 00540045
    MOVSD ES:EDI,ESI                    ; 00540046
    MOVSD ES:EDI,ESI                    ; 00540047
    MOV EAX,EBX                         ; 00540048
    MOV ESP,EBP                         ; 0054004a
    POP EBP                             ; 0054004c
    POP EDI                             ; 0054004d
    POP EBX                             ; 0054004e
    RET                                 ; 0054004f
    MOV EAX,dword ptr [EBP + -0x14]     ; 00540050
        ;   Label: LAB_00540050
    MOV dword ptr [EBP + -0x8],EAX      ; 00540053
    MOV EAX,dword ptr [EBP + -0x10]     ; 00540056
    MOV dword ptr [EBP + -0x4],EAX      ; 00540059
    JMP 0x00540023                      ; 0054005c
        ;   XREF to: 00540023 (UNCONDITIONAL_JUMP)  ; LAB_00540023

