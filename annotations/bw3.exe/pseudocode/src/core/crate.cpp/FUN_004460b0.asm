; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_FUN_004460b0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004460b0
        ;   Label: core_crate.cpp_FUN_004460b0
    PUSH EDI                            ; 004460b1
    SUB ESP,0x18                        ; 004460b2
    MOV EBX,ESI                         ; 004460b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004460b7
    ADD EAX,0x158                       ; 004460bb
    PUSH EAX                            ; 004460c0
    LEA EDI,[ESP + 0x4]                 ; 004460c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004460c5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004460ca
    MOV ESI,dword ptr [EAX + 0x350]     ; 004460cf
    ADD ESP,0x4                         ; 004460d5
    MOVSD.REP ES:EDI,ESI                ; 004460d8
    MOV ECX,0x6                         ; 004460da
    MOV ESI,ESP                         ; 004460df
    MOV EDI,EBX                         ; 004460e1
    MOVSD.REP ES:EDI,ESI                ; 004460e3
    MOV EAX,EBX                         ; 004460e5
    ADD ESP,0x18                        ; 004460e7
    POP EDI                             ; 004460ea
    POP EBX                             ; 004460eb
    RET                                 ; 004460ec

