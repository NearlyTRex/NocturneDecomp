; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005396d0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1ae0]:4  local_1ae0
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_005384d0 at 0053857e
;
; Referenced Globals:
;   double DOUBLE_005958b7 = 40
;   undefined4 DAT_02dc9f50
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
;   core_xform.cpp_FUN_0055d4e0
;   core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005396d0
        ;   Label: FUN_005396d0
    PUSH ESI                            ; 005396d1
    PUSH EDI                            ; 005396d2
    SUB ESP,0x1acc                      ; 005396d3
    MOV ESI,dword ptr [ESP + 0x1adc]    ; 005396d9
    MOV EAX,ESP                         ; 005396e0
    PUSH EAX                            ; 005396e2
    LEA EBX,[ESI + 0x150]               ; 005396e3
    PUSH EBX                            ; 005396e9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90 ; 005396ea
        ;   XREF to: 0051ed90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90()
    ADD ESP,0x8                         ; 005396ef
    FLD float ptr [ESI + 0x1fabc]       ; 005396f2
    PUSH -0x1                           ; 005396f8
    FMUL double ptr [0x005958b7]        ; 005396fa | DOUBLE_005958b7
    SUB ESP,0x4                         ; 00539700
    FSTP float ptr [ESP]                ; 00539703
    MOV EDX,dword ptr [ESI + 0x1faec]   ; 00539706
    PUSH EDX                            ; 0053970c
    PUSH EBX                            ; 0053970d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 0053970e
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920()
    MOV EAX,[0x02dc9f50]                ; 00539713 | DAT_02dc9f50
    ADD ESI,0x800                       ; 00539718
    SHL EAX,0x4                         ; 0053971e
    ADD ESP,0x10                        ; 00539721
    ADD EAX,ESI                         ; 00539724
    PUSH EAX                            ; 00539726
    LEA EAX,[ESP + 0x1ac0]              ; 00539727
    PUSH EAX                            ; 0053972e
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0 ; 0053972f
        ;   XREF to: 0055d5b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0()
    ADD ESP,0x8                         ; 00539734
    LEA ESI,[ESP + 0x1aac]              ; 00539737
    PUSH 0x51b650                       ; 0053973e | LAB_0051b650
    FLD float ptr [EAX + 0x4]           ; 00539743
    PUSH -0x1                           ; 00539746
    FCHS                                ; 00539748
    PUSH 0x3f800000                     ; 0053974a
    FSTP float ptr [ESP + 0x1ad4]       ; 0053974f
    PUSH dword ptr [ESP + 0x1ad4]       ; 00539756
    CALL core_xform.cpp_FUN_0055d4e0    ; 0053975d
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    ADD ESP,0x4                         ; 00539762
    LEA EAX,[ESP + 0x1aa8]              ; 00539765
    PUSH EAX                            ; 0053976c
    LEA EDI,[ESP + 0x1aac]              ; 0053976d
    LEA ESI,[ESP + 0x1abc]              ; 00539774
    PUSH EBX                            ; 0053977b
    MOVSD ES:EDI,ESI                    ; 0053977c
    MOVSD ES:EDI,ESI                    ; 0053977d
    MOVSD ES:EDI,ESI                    ; 0053977e
    MOVSD ES:EDI,ESI                    ; 0053977f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 00539780
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 00539785
    MOV ECX,dword ptr [ESP + 0x1ae0]    ; 00539788
    PUSH ECX                            ; 0053978f
    PUSH EBX                            ; 00539790
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90 ; 00539791
        ;   XREF to: 0051ed90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90()
    ADD ESP,0x8                         ; 00539796
    MOV EAX,ESP                         ; 00539799
    PUSH EAX                            ; 0053979b
    PUSH EBX                            ; 0053979c
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60 ; 0053979d
        ;   XREF to: 0051ee60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60()
    ADD ESP,0x8                         ; 005397a2
    ADD ESP,0x1acc                      ; 005397a5
    POP EDI                             ; 005397ab
    POP ESI                             ; 005397ac
    POP EBX                             ; 005397ad
    RET                                 ; 005397ae

