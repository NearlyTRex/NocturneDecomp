; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trap_cpp_CTrap_getBoundingBox_FUN_00576840(CTrap *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576840
        ;   Label: core_trap.cpp_CTrap_getBoundingBox_FUN_00576840
    PUSH EDI                            ; 00576841
    SUB ESP,0x18                        ; 00576842
    MOV EBX,ESI                         ; 00576845
    MOV EAX,dword ptr [ESP + 0x24]      ; 00576847
    ADD EAX,0x2b4                       ; 0057684b
    PUSH EAX                            ; 00576850
    LEA EDI,[ESP + 0x4]                 ; 00576851
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00576855
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0057685a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0057685f
    ADD ESP,0x4                         ; 00576865
    MOVSD.REP ES:EDI,ESI                ; 00576868
    MOV ECX,0x6                         ; 0057686a
    MOV ESI,ESP                         ; 0057686f
    MOV EDI,EBX                         ; 00576871
    MOVSD.REP ES:EDI,ESI                ; 00576873
    MOV EAX,EBX                         ; 00576875
    ADD ESP,0x18                        ; 00576877
    POP EDI                             ; 0057687a
    POP EBX                             ; 0057687b
    RET                                 ; 0057687c

