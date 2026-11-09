; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_FUN_004499f0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004499f0
        ;   Label: core_crossbow.cpp_FUN_004499f0
    PUSH EDI                            ; 004499f1
    SUB ESP,0x24                        ; 004499f2
    MOV EBX,ESI                         ; 004499f5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004499f7
    ADD EAX,0x158                       ; 004499fb
    PUSH EAX                            ; 00449a00
    LEA EDI,[ESP + 0x4]                 ; 00449a01
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00449a05
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00449a0a
    LEA ESI,[EAX + 0x338]               ; 00449a0f
    ADD ESP,0x4                         ; 00449a15
    MOVSD.REP ES:EDI,ESI                ; 00449a18
    XOR EDX,EDX                         ; 00449a1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00449a1c
    LEA ESI,[ESP + 0x18]                ; 00449a20
    MOV EDI,EBX                         ; 00449a24
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449a26
    MOV EAX,dword ptr [ESP + 0x14]      ; 00449a2a
    MOV dword ptr [ESP + 0x18],EDX      ; 00449a2e
    MOV dword ptr [ESP + 0x20],EAX      ; 00449a32
    MOVSD ES:EDI,ESI                    ; 00449a36
    MOVSD ES:EDI,ESI                    ; 00449a37
    MOVSD ES:EDI,ESI                    ; 00449a38
    MOV EAX,EBX                         ; 00449a39
    ADD ESP,0x24                        ; 00449a3b
    POP EDI                             ; 00449a3e
    POP EBX                             ; 00449a3f
    RET                                 ; 00449a40

