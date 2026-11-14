; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trap_cpp_CTrap_getBoundingBox_FUN_0056d0f0(CTrap *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d0f0
        ;   Label: core_trap.cpp_CTrap_getBoundingBox_FUN_0056d0f0
    PUSH EDI                            ; 0056d0f1
    SUB ESP,0x18                        ; 0056d0f2
    MOV EBX,ESI                         ; 0056d0f5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056d0f7
    ADD EAX,0x158                       ; 0056d0fb
    PUSH EAX                            ; 0056d100
    LEA EDI,[ESP + 0x4]                 ; 0056d101
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0056d105
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0056d10a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0056d10f
    ADD ESP,0x4                         ; 0056d115
    MOVSD.REP ES:EDI,ESI                ; 0056d118
    MOV ECX,0x6                         ; 0056d11a
    MOV ESI,ESP                         ; 0056d11f
    MOV EDI,EBX                         ; 0056d121
    MOVSD.REP ES:EDI,ESI                ; 0056d123
    MOV EAX,EBX                         ; 0056d125
    ADD ESP,0x18                        ; 0056d127
    POP EDI                             ; 0056d12a
    POP EBX                             ; 0056d12b
    RET                                 ; 0056d12c

