; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_FUN_00537210(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537210
        ;   Label: core_pendulum.cpp_FUN_00537210
    PUSH EDI                            ; 00537211
    SUB ESP,0x18                        ; 00537212
    MOV EBX,ESI                         ; 00537215
    MOV EAX,dword ptr [ESP + 0x24]      ; 00537217
    ADD EAX,0x158                       ; 0053721b
    PUSH EAX                            ; 00537220
    LEA EDI,[ESP + 0x4]                 ; 00537221
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00537225
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0053722a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0053722f
    ADD ESP,0x4                         ; 00537235
    MOVSD.REP ES:EDI,ESI                ; 00537238
    MOV ECX,0x6                         ; 0053723a
    MOV ESI,ESP                         ; 0053723f
    MOV EDI,EBX                         ; 00537241
    MOVSD.REP ES:EDI,ESI                ; 00537243
    MOV EAX,EBX                         ; 00537245
    ADD ESP,0x18                        ; 00537247
    POP EDI                             ; 0053724a
    POP EBX                             ; 0053724b
    RET                                 ; 0053724c

