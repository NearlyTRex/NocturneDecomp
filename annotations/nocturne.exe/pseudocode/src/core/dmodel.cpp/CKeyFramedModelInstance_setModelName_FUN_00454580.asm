; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(int param_1,char *param_2)
;
;
; XREF[66]:
;   FUN_0040f040 at 0040f07a
;   FUN_0040f560 at 0040f59f
;   FUN_0040fed0 at 0040ff08
;   FUN_00411a10 at 00411aad
;   FUN_00414d80 at 00414db8
;   FUN_0041f6e0 at 0041f72e
;   FUN_0043c810 at 0043c848
;   FUN_00477710 at 00477732
;   FUN_004a8a10 at 004a8a48
;   FUN_004b2760 at 004b2782
;   ... and 56 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00454580
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
    PUSH EDI                            ; 00454581
    MOV EDX,dword ptr [ESP + 0xc]       ; 00454582
    MOV ESI,dword ptr [ESP + 0x10]      ; 00454586
    LEA EDI,[EDX + 0x78]                ; 0045458a
    PUSH EDI                            ; 0045458d
    MOV AL,byte ptr [ESI]               ; 0045458e
        ;   Label: LAB_0045458e
    MOV byte ptr [EDI],AL               ; 00454590
    CMP AL,0x0                          ; 00454592
    JZ 0x004545a6                       ; 00454594
        ;   XREF to: 004545a6 (CONDITIONAL_JUMP)  ; LAB_004545a6
    MOV AL,byte ptr [ESI + 0x1]         ; 00454596
    ADD ESI,0x2                         ; 00454599
    MOV byte ptr [EDI + 0x1],AL         ; 0045459c
    ADD EDI,0x2                         ; 0045459f
    CMP AL,0x0                          ; 004545a2
    JNZ 0x0045458e                      ; 004545a4
        ;   XREF to: 0045458e (CONDITIONAL_JUMP)  ; LAB_0045458e
    POP EDI                             ; 004545a6
        ;   Label: LAB_004545a6
    PUSH EDX                            ; 004545a7
    MOV dword ptr [EDX + 0x178],0x0     ; 004545a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0 ; 004545b2
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0()
    ADD ESP,0x4                         ; 004545b7
    POP EDI                             ; 004545ba
    POP ESI                             ; 004545bb
    RET                                 ; 004545bc

