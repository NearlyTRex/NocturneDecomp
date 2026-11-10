; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_simbox_cpp_CSimBox_getBoundingBox_FUN_00547620(CSimBox *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547620
        ;   Label: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00547620
    PUSH EDI                            ; 00547621
    SUB ESP,0x18                        ; 00547622
    MOV EBX,ESI                         ; 00547625
    MOV EAX,dword ptr [ESP + 0x24]      ; 00547627
    ADD EAX,0x158                       ; 0054762b
    PUSH EAX                            ; 00547630
    LEA EDI,[ESP + 0x4]                 ; 00547631
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00547635
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0054763a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0054763f
    ADD ESP,0x4                         ; 00547645
    MOVSD.REP ES:EDI,ESI                ; 00547648
    MOV ECX,0x6                         ; 0054764a
    MOV ESI,ESP                         ; 0054764f
    MOV EDI,EBX                         ; 00547651
    MOVSD.REP ES:EDI,ESI                ; 00547653
    MOV EAX,EBX                         ; 00547655
    ADD ESP,0x18                        ; 00547657
    POP EDI                             ; 0054765a
    POP EBX                             ; 0054765b
    RET                                 ; 0054765c

