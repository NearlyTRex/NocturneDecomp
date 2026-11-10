; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_gasmask_cpp_CGasMask_getBoundingBox_FUN_004ddc40(CGasMask *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddc40
        ;   Label: core_gasmask.cpp_CGasMask_getBoundingBox_FUN_004ddc40
    PUSH EDI                            ; 004ddc41
    SUB ESP,0x18                        ; 004ddc42
    MOV EBX,ESI                         ; 004ddc45
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ddc47
    ADD EAX,0x158                       ; 004ddc4b
    PUSH EAX                            ; 004ddc50
    LEA EDI,[ESP + 0x4]                 ; 004ddc51
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004ddc55
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004ddc5a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004ddc5f
    ADD ESP,0x4                         ; 004ddc65
    MOVSD.REP ES:EDI,ESI                ; 004ddc68
    MOV ECX,0x6                         ; 004ddc6a
    MOV ESI,ESP                         ; 004ddc6f
    MOV EDI,EBX                         ; 004ddc71
    MOVSD.REP ES:EDI,ESI                ; 004ddc73
    MOV EAX,EBX                         ; 004ddc75
    ADD ESP,0x18                        ; 004ddc77
    POP EDI                             ; 004ddc7a
    POP EBX                             ; 004ddc7b
    RET                                 ; 004ddc7c

