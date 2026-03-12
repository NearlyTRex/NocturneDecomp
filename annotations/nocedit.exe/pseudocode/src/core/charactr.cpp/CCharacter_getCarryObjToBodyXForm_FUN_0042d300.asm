; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; CMatrix3x4f      Stack[-0x38]:48  local_38
;
; XREF[1]:
;   core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550 at 004f69a3
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d300
        ;   Label: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
    PUSH EDI                            ; 0042d301
    SUB ESP,0x30                        ; 0042d302
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042d305
    MOV EBX,ESI                         ; 0042d309
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042d30b
    MOV EAX,EDX                         ; 0042d30f
    SHL EAX,0x4                         ; 0042d311
    ADD EAX,EDX                         ; 0042d314
    LEA ESI,[ECX + 0x24ac]              ; 0042d316
    SHL EAX,0x2                         ; 0042d31c
    ADD ESI,EAX                         ; 0042d31f
    MOV EDX,dword ptr [ESI]             ; 0042d321
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042d323
    SUB EAX,EDX                         ; 0042d32a
    MOV EDX,EAX                         ; 0042d32c
    SHL EDX,0x4                         ; 0042d32e
    LEA EAX,[ECX + 0xfd8]               ; 0042d331
    ADD EAX,EDX                         ; 0042d337
    PUSH EAX                            ; 0042d339
    ADD ESI,0xc                         ; 0042d33a
    PUSH ESI                            ; 0042d33d
    LEA ESI,[ESP + 0x8]                 ; 0042d33e
    MOV EDI,EBX                         ; 0042d342
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d344
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042d349
    LEA ESI,[ESP + 0x8]                 ; 0042d34e
    ADD ESP,0x8                         ; 0042d352
    MOVSD.REP ES:EDI,ESI                ; 0042d355
    MOV EAX,EBX                         ; 0042d357
    ADD ESP,0x30                        ; 0042d359
    POP EDI                             ; 0042d35c
    POP EBX                             ; 0042d35d
    RET                                 ; 0042d35e

