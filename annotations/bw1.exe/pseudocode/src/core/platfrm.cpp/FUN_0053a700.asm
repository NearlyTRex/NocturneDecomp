; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_FUN_0053a700(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a700
        ;   Label: core_platfrm.cpp_FUN_0053a700
    PUSH EDI                            ; 0053a701
    SUB ESP,0x18                        ; 0053a702
    MOV EBX,ESI                         ; 0053a705
    MOV EAX,dword ptr [ESP + 0x24]      ; 0053a707
    ADD EAX,0x158                       ; 0053a70b
    PUSH EAX                            ; 0053a710
    LEA EDI,[ESP + 0x4]                 ; 0053a711
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053a715
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0053a71a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0053a71f
    ADD ESP,0x4                         ; 0053a725
    MOVSD.REP ES:EDI,ESI                ; 0053a728
    MOV ECX,0x6                         ; 0053a72a
    MOV ESI,ESP                         ; 0053a72f
    MOV EDI,EBX                         ; 0053a731
    MOVSD.REP ES:EDI,ESI                ; 0053a733
    MOV EAX,EBX                         ; 0053a735
    ADD ESP,0x18                        ; 0053a737
    POP EDI                             ; 0053a73a
    POP EBX                             ; 0053a73b
    RET                                 ; 0053a73c

