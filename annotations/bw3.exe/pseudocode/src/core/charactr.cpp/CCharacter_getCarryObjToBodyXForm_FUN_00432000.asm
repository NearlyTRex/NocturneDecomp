; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432000(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432000
        ;   Label: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432000
    PUSH EDI                            ; 00432001
    SUB ESP,0x30                        ; 00432002
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00432005
    MOV EBX,ESI                         ; 00432009
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043200b
    SHL EAX,0x3                         ; 0043200f
    MOV EDX,EAX                         ; 00432012
    SHL EAX,0x4                         ; 00432014
    LEA ESI,[ECX + 0x25a8]              ; 00432017
    SUB EAX,EDX                         ; 0043201d
    ADD ESI,EAX                         ; 0043201f
    MOV EDX,dword ptr [ESI]             ; 00432021
    LEA EAX,[EDX*0x4 + 0x0]             ; 00432023
    SUB EAX,EDX                         ; 0043202a
    MOV EDX,EAX                         ; 0043202c
    SHL EDX,0x4                         ; 0043202e
    LEA EAX,[ECX + 0xfd8]               ; 00432031
    ADD EAX,EDX                         ; 00432037
    PUSH EAX                            ; 00432039
    ADD ESI,0xc                         ; 0043203a
    PUSH ESI                            ; 0043203d
    LEA ESI,[ESP + 0x8]                 ; 0043203e
    MOV EDI,EBX                         ; 00432042
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00432044
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00432049
    LEA ESI,[ESP + 0x8]                 ; 0043204e
    ADD ESP,0x8                         ; 00432052
    MOVSD.REP ES:EDI,ESI                ; 00432055
    MOV EAX,EBX                         ; 00432057
    ADD ESP,0x30                        ; 00432059
    POP EDI                             ; 0043205c
    POP EBX                             ; 0043205d
    RET                                 ; 0043205e

