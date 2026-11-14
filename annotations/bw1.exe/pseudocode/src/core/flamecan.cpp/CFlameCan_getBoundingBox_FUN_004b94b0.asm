; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_flamecan_cpp_CFlameCan_getBoundingBox_FUN_004b94b0(CFlameCan *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b94b0
        ;   Label: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_004b94b0
    PUSH EDI                            ; 004b94b1
    SUB ESP,0x18                        ; 004b94b2
    MOV EBX,ESI                         ; 004b94b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b94b7
    ADD EAX,0x158                       ; 004b94bb
    PUSH EAX                            ; 004b94c0
    LEA EDI,[ESP + 0x4]                 ; 004b94c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004b94c5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004b94ca
    MOV ESI,dword ptr [EAX + 0x350]     ; 004b94cf
    ADD ESP,0x4                         ; 004b94d5
    MOVSD.REP ES:EDI,ESI                ; 004b94d8
    MOV ECX,0x6                         ; 004b94da
    MOV ESI,ESP                         ; 004b94df
    MOV EDI,EBX                         ; 004b94e1
    MOVSD.REP ES:EDI,ESI                ; 004b94e3
    MOV EAX,EBX                         ; 004b94e5
    ADD ESP,0x18                        ; 004b94e7
    POP EDI                             ; 004b94ea
    POP EBX                             ; 004b94eb
    RET                                 ; 004b94ec

