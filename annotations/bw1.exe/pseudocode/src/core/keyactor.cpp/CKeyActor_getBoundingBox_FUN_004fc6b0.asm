; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_keyactor_cpp_CKeyActor_getBoundingBox_FUN_004fc6b0(CKeyActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc6b0
        ;   Label: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_004fc6b0
    PUSH EDI                            ; 004fc6b1
    SUB ESP,0x18                        ; 004fc6b2
    MOV EBX,ESI                         ; 004fc6b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fc6b7
    ADD EAX,0x158                       ; 004fc6bb
    PUSH EAX                            ; 004fc6c0
    LEA EDI,[ESP + 0x4]                 ; 004fc6c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004fc6c5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004fc6ca
    MOV ESI,dword ptr [EAX + 0x350]     ; 004fc6cf
    ADD ESP,0x4                         ; 004fc6d5
    MOVSD.REP ES:EDI,ESI                ; 004fc6d8
    MOV ECX,0x6                         ; 004fc6da
    MOV ESI,ESP                         ; 004fc6df
    MOV EDI,EBX                         ; 004fc6e1
    MOVSD.REP ES:EDI,ESI                ; 004fc6e3
    MOV EAX,EBX                         ; 004fc6e5
    ADD ESP,0x18                        ; 004fc6e7
    POP EDI                             ; 004fc6ea
    POP EBX                             ; 004fc6eb
    RET                                 ; 004fc6ec

