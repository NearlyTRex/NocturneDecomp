; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,char *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508709
;
; Referenced Globals:
;   double DOUBLE_00590e61 = 65536
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515350
        ;   Label: core_setutil.cpp_C3DSLight_apply_FUN_00515350
    PUSH ESI                            ; 00515351
    PUSH EDI                            ; 00515352
    PUSH EBP                            ; 00515353
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515354
    MOV EBP,dword ptr [ESP + 0x18]      ; 00515358
    LEA EAX,[EBP + 0x104]               ; 0051535c
    LEA EDX,[EBX + 0x104]               ; 00515362
    CMP EAX,EDX                         ; 00515368
    JZ 0x0051537c                       ; 0051536a
        ;   XREF to: 0051537c (CONDITIONAL_JUMP)  ; LAB_0051537c
    MOV ECX,dword ptr [EDX]             ; 0051536c
    MOV dword ptr [EAX],ECX             ; 0051536e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00515370
    MOV dword ptr [EAX + 0x4],ECX       ; 00515373
    MOV ECX,dword ptr [EDX + 0x8]       ; 00515376
    MOV dword ptr [EAX + 0x8],ECX       ; 00515379
    LEA EAX,[EBX + 0x110]               ; 0051537c
        ;   Label: LAB_0051537c
    PUSH EAX                            ; 00515382
    LEA EAX,[EBP + 0x110]               ; 00515383
    PUSH EAX                            ; 00515389
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0051538a
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0051538f
    MOV dword ptr [EBP + 0x138],EAX     ; 00515395
    FLD float ptr [EBX + 0x120]         ; 0051539b
    FMUL double ptr [0x00590e61]        ; 005153a1 | DOUBLE_00590e61
    ADD ESP,0x8                         ; 005153a7
    CALL crt_math.c_round_FUN_00563a30  ; 005153aa
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x2fa4]      ; 005153af
    PUSH dword ptr [EBX + 0x124]        ; 005153b5
    PUSH EBP                            ; 005153bb
    LEA ESI,[EBX + 0x4]                 ; 005153bc
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 005153bf
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080()
    ADD ESP,0x8                         ; 005153c4
    MOV dword ptr [EBX + 0x11e8],0x0    ; 005153c7
    MOV EDI,EBP                         ; 005153d1
    MOV dword ptr [EBX + 0x1894],0x0    ; 005153d3
    PUSH EDI                            ; 005153dd
    MOV AL,byte ptr [ESI]               ; 005153de
        ;   Label: LAB_005153de
    MOV byte ptr [EDI],AL               ; 005153e0
    CMP AL,0x0                          ; 005153e2
    JZ 0x005153f6                       ; 005153e4
        ;   XREF to: 005153f6 (CONDITIONAL_JUMP)  ; LAB_005153f6
    MOV AL,byte ptr [ESI + 0x1]         ; 005153e6
    ADD ESI,0x2                         ; 005153e9
    MOV byte ptr [EDI + 0x1],AL         ; 005153ec
    ADD EDI,0x2                         ; 005153ef
    CMP AL,0x0                          ; 005153f2
    JNZ 0x005153de                      ; 005153f4
        ;   XREF to: 005153de (CONDITIONAL_JUMP)  ; LAB_005153de
    POP EDI                             ; 005153f6
        ;   Label: LAB_005153f6
    CMP dword ptr [EBX + 0x17f4],0x0    ; 005153f7
    JNZ 0x00515411                      ; 005153fe
        ;   XREF to: 00515411 (CONDITIONAL_JUMP)  ; LAB_00515411
    POP EBP                             ; 00515400
    POP EDI                             ; 00515401
    POP ESI                             ; 00515402
    POP EBX                             ; 00515403
    LEA EAX,[EAX]                       ; 00515404
    LEA EDX,[EDX]                       ; 0051540a
    PUSH EBP                            ; 00515411
        ;   Label: LAB_00515411
    CALL core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170 ; 00515412
        ;   XREF to: 00450170 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170()
    ADD ESP,0x4                         ; 00515417
    POP EBP                             ; 0051541a
    POP EDI                             ; 0051541b
    POP ESI                             ; 0051541c
    POP EBX                             ; 0051541d
    RET                                 ; 0051541e

