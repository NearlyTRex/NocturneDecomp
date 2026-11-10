; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[3]:
;   core_grandma.cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0 at 005a7d5b
;   core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0 at 004d36c3
;   core_robin.cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0 at 005a682b
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429120
        ;   Label: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
    PUSH EDI                            ; 00429121
    SUB ESP,0x30                        ; 00429122
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00429125
    MOV EBX,ESI                         ; 00429129
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042912b
    SHL EAX,0x3                         ; 0042912f
    MOV EDX,EAX                         ; 00429132
    SHL EAX,0x4                         ; 00429134
    LEA ESI,[ECX + 0x2618]              ; 00429137
    SUB EAX,EDX                         ; 0042913d
    ADD ESI,EAX                         ; 0042913f
    MOV EDX,dword ptr [ESI]             ; 00429141
    LEA EAX,[EDX*0x4 + 0x0]             ; 00429143
    SUB EAX,EDX                         ; 0042914a
    MOV EDX,EAX                         ; 0042914c
    SHL EDX,0x4                         ; 0042914e
    LEA EAX,[ECX + 0x1134]              ; 00429151
    ADD EAX,EDX                         ; 00429157
    PUSH EAX                            ; 00429159
    ADD ESI,0xc                         ; 0042915a
    PUSH ESI                            ; 0042915d
    LEA ESI,[ESP + 0x8]                 ; 0042915e
    MOV EDI,EBX                         ; 00429162
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00429164
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00429169
    LEA ESI,[ESP + 0x8]                 ; 0042916e
    ADD ESP,0x8                         ; 00429172
    MOVSD.REP ES:EDI,ESI                ; 00429175
    MOV EAX,EBX                         ; 00429177
    ADD ESP,0x30                        ; 00429179
    POP EDI                             ; 0042917c
    POP EBX                             ; 0042917d
    RET                                 ; 0042917e

