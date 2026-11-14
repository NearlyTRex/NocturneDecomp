; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_00465270(CDraculaBride *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01ba5778
;   undefined4 DAT_01ba578c
;   undefined4 DAT_01ba5794
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465270
        ;   Label: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_00465270
    PUSH EBP                            ; 00465271
    SUB ESP,0x4c                        ; 00465272
    MOV EBP,dword ptr [ESP + 0x58]      ; 00465275
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00465279
    CMP dword ptr [EBP + 0x10b84],0x0   ; 0046527d
    JZ 0x0046528e                       ; 00465284
        ;   XREF to: 0046528e (CONDITIONAL_JUMP)  ; LAB_0046528e
    XOR EAX,EAX                         ; 00465286
    ADD ESP,0x4c                        ; 00465288
    POP EBP                             ; 0046528b
    POP EBX                             ; 0046528c
    RET                                 ; 0046528d
    PUSH EDI                            ; 0046528e
        ;   Label: LAB_0046528e
    PUSH ESI                            ; 0046528f
    MOV ESI,dword ptr [0x01ba5778]      ; 00465290 | DAT_01ba5778
    MOV ECX,0x3                         ; 00465296
    PUSH ESI                            ; 0046529b
    LEA EAX,[EBP + 0x2b4]               ; 0046529c
    LEA EDI,[ESP + 0xc]                 ; 004652a2
    PUSH EAX                            ; 004652a6
    LEA ESI,[ESP + 0x34]                ; 004652a7
    MOV dword ptr [ESP + 0x58],ECX      ; 004652ab
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004652af
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x34]                ; 004652b4
    ADD ESP,0x8                         ; 004652b8
    LEA EAX,[ESP + 0x8]                 ; 004652bb
    MOVSD ES:EDI,ESI                    ; 004652bf
    MOVSD ES:EDI,ESI                    ; 004652c0
    MOVSD ES:EDI,ESI                    ; 004652c1
    CMP EBX,EAX                         ; 004652c2
    JZ 0x004652da                       ; 004652c4
        ;   XREF to: 004652da (CONDITIONAL_JUMP)  ; LAB_004652da
    MOV EAX,dword ptr [ESP + 0x8]       ; 004652c6
    MOV dword ptr [EBX],EAX             ; 004652ca
    MOV EAX,dword ptr [ESP + 0xc]       ; 004652cc
    MOV dword ptr [EBX + 0x4],EAX       ; 004652d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004652d3
    MOV dword ptr [EBX + 0x8],EAX       ; 004652d7
    MOV EDI,dword ptr [0x01ba578c]      ; 004652da | DAT_01ba578c
        ;   Label: LAB_004652da
    PUSH EDI                            ; 004652e0
    LEA EAX,[EBP + 0x2b4]               ; 004652e1
    PUSH EAX                            ; 004652e7
    LEA ESI,[ESP + 0x40]                ; 004652e8
    LEA EDI,[ESP + 0x4c]                ; 004652ec
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004652f0
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x40]                ; 004652f5
    LEA EAX,[ESP + 0x4c]                ; 004652f9
    ADD ESP,0x8                         ; 004652fd
    LEA EDX,[EBX + 0xc]                 ; 00465300
    MOVSD ES:EDI,ESI                    ; 00465303
    MOVSD ES:EDI,ESI                    ; 00465304
    MOVSD ES:EDI,ESI                    ; 00465305
    CMP EDX,EAX                         ; 00465306
    JZ 0x0046531e                       ; 00465308
        ;   XREF to: 0046531e (CONDITIONAL_JUMP)  ; LAB_0046531e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046530a
    MOV dword ptr [EDX],EAX             ; 0046530e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00465310
    MOV dword ptr [EDX + 0x4],EAX       ; 00465314
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00465317
    MOV dword ptr [EDX + 0x8],EAX       ; 0046531b
    MOV EAX,[0x01ba5794]                ; 0046531e | DAT_01ba5794
        ;   Label: LAB_0046531e
    PUSH EAX                            ; 00465323
    ADD EBP,0x2b4                       ; 00465324
    LEA ESI,[ESP + 0x24]                ; 0046532a
    PUSH EBP                            ; 0046532e
    LEA EDI,[ESP + 0x1c]                ; 0046532f
    ADD EBX,0x18                        ; 00465333
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00465336
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x28]                ; 0046533b
    ADD ESP,0x8                         ; 0046533f
    LEA EAX,[ESP + 0x14]                ; 00465342
    MOVSD ES:EDI,ESI                    ; 00465346
    MOVSD ES:EDI,ESI                    ; 00465347
    MOVSD ES:EDI,ESI                    ; 00465348
    CMP EBX,EAX                         ; 00465349
    JZ 0x00465361                       ; 0046534b
        ;   XREF to: 00465361 (CONDITIONAL_JUMP)  ; LAB_00465361
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046534d
    MOV dword ptr [EBX],EAX             ; 00465351
    MOV EAX,dword ptr [ESP + 0x18]      ; 00465353
    MOV dword ptr [EBX + 0x4],EAX       ; 00465357
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046535a
    MOV dword ptr [EBX + 0x8],EAX       ; 0046535e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00465361
        ;   Label: LAB_00465361
    POP ESI                             ; 00465365
    POP EDI                             ; 00465366
    ADD ESP,0x4c                        ; 00465367
    POP EBP                             ; 0046536a
    POP EBX                             ; 0046536b
    RET                                 ; 0046536c

