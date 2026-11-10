; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432be0(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[1]:
;   core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004ef400 at 004ef8f3
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432be0
        ;   Label: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432be0
    PUSH EDI                            ; 00432be1
    SUB ESP,0x30                        ; 00432be2
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00432be5
    MOV EBX,ESI                         ; 00432be9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00432beb
    SHL EAX,0x3                         ; 00432bef
    MOV EDX,EAX                         ; 00432bf2
    SHL EAX,0x4                         ; 00432bf4
    LEA ESI,[ECX + 0x25a8]              ; 00432bf7
    SUB EAX,EDX                         ; 00432bfd
    ADD ESI,EAX                         ; 00432bff
    MOV EDX,dword ptr [ESI]             ; 00432c01
    LEA EAX,[EDX*0x4 + 0x0]             ; 00432c03
    SUB EAX,EDX                         ; 00432c0a
    MOV EDX,EAX                         ; 00432c0c
    SHL EDX,0x4                         ; 00432c0e
    LEA EAX,[ECX + 0xfd8]               ; 00432c11
    ADD EAX,EDX                         ; 00432c17
    PUSH EAX                            ; 00432c19
    ADD ESI,0xc                         ; 00432c1a
    PUSH ESI                            ; 00432c1d
    LEA ESI,[ESP + 0x8]                 ; 00432c1e
    MOV EDI,EBX                         ; 00432c22
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432c24
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00432c29
    LEA ESI,[ESP + 0x8]                 ; 00432c2e
    ADD ESP,0x8                         ; 00432c32
    MOVSD.REP ES:EDI,ESI                ; 00432c35
    MOV EAX,EBX                         ; 00432c37
    ADD ESP,0x30                        ; 00432c39
    POP EDI                             ; 00432c3c
    POP EBX                             ; 00432c3d
    RET                                 ; 00432c3e

