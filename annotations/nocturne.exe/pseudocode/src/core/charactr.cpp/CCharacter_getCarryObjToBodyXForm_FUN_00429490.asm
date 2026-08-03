; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[1]:
;   core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700 at 004b8b53
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429490
        ;   Label: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490
    PUSH EDI                            ; 00429491
    SUB ESP,0x30                        ; 00429492
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00429495
    MOV EBX,ESI                         ; 00429499
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042949b
    MOV EAX,EDX                         ; 0042949f
    SHL EAX,0x4                         ; 004294a1
    ADD EAX,EDX                         ; 004294a4
    LEA ESI,[ECX + 0x24a4]              ; 004294a6
    SHL EAX,0x2                         ; 004294ac
    ADD ESI,EAX                         ; 004294af
    MOV EDX,dword ptr [ESI]             ; 004294b1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004294b3
    SUB EAX,EDX                         ; 004294ba
    MOV EDX,EAX                         ; 004294bc
    SHL EDX,0x4                         ; 004294be
    LEA EAX,[ECX + 0xfd0]               ; 004294c1
    ADD EAX,EDX                         ; 004294c7
    PUSH EAX                            ; 004294c9
    ADD ESI,0xc                         ; 004294ca
    PUSH ESI                            ; 004294cd
    LEA ESI,[ESP + 0x8]                 ; 004294ce
    MOV EDI,EBX                         ; 004294d2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004294d4
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004294d9
    LEA ESI,[ESP + 0x8]                 ; 004294de
    ADD ESP,0x8                         ; 004294e2
    MOVSD.REP ES:EDI,ESI                ; 004294e5
    MOV EAX,EBX                         ; 004294e7
    ADD ESP,0x30                        ; 004294e9
    POP EDI                             ; 004294ec
    POP EBX                             ; 004294ed
    RET                                 ; 004294ee

