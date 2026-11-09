; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_FUN_0040e8b0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e8b0
        ;   Label: core_ammobox.cpp_FUN_0040e8b0
    PUSH EDI                            ; 0040e8b1
    SUB ESP,0x18                        ; 0040e8b2
    MOV EBX,ESI                         ; 0040e8b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e8b7
    ADD EAX,0x158                       ; 0040e8bb
    PUSH EAX                            ; 0040e8c0
    LEA EDI,[ESP + 0x4]                 ; 0040e8c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040e8c5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040e8ca
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040e8cf
    ADD ESP,0x4                         ; 0040e8d5
    MOVSD.REP ES:EDI,ESI                ; 0040e8d8
    MOV ECX,0x6                         ; 0040e8da
    MOV ESI,ESP                         ; 0040e8df
    MOV EDI,EBX                         ; 0040e8e1
    MOVSD.REP ES:EDI,ESI                ; 0040e8e3
    MOV EAX,EBX                         ; 0040e8e5
    ADD ESP,0x18                        ; 0040e8e7
    POP EDI                             ; 0040e8ea
    POP EBX                             ; 0040e8eb
    RET                                 ; 0040e8ec

