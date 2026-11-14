; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trap_cpp_CTrap_getBoundingBox_FUN_0059a100(CTrap *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a100
        ;   Label: core_trap.cpp_CTrap_getBoundingBox_FUN_0059a100
    PUSH EDI                            ; 0059a101
    SUB ESP,0x18                        ; 0059a102
    MOV EBX,ESI                         ; 0059a105
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059a107
    ADD EAX,0x158                       ; 0059a10b
    PUSH EAX                            ; 0059a110
    LEA EDI,[ESP + 0x4]                 ; 0059a111
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0059a115
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0059a11a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0059a11f
    ADD ESP,0x4                         ; 0059a125
    MOVSD.REP ES:EDI,ESI                ; 0059a128
    MOV ECX,0x6                         ; 0059a12a
    MOV ESI,ESP                         ; 0059a12f
    MOV EDI,EBX                         ; 0059a131
    MOVSD.REP ES:EDI,ESI                ; 0059a133
    MOV EAX,EBX                         ; 0059a135
    ADD ESP,0x18                        ; 0059a137
    POP EDI                             ; 0059a13a
    POP EBX                             ; 0059a13b
    RET                                 ; 0059a13c

