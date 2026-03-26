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
    JMP 0x03fc46c7                      ; 0042d349
        ;   XREF to: 03fc46c7 (UNCONDITIONAL_JUMP)  ; LAB_03fc46c7
    MOV EAX,EBX                         ; 0042d357
        ;   Label: LAB_0042d357
    ADD ESP,0x30                        ; 0042d359
    POP EDI                             ; 0042d35c
    POP EBX                             ; 0042d35d
    RET                                 ; 0042d35e
    MOV ECX,0xc                         ; 03fc46c7
        ;   Label: LAB_03fc46c7
    LEA ESI,[ESP + 0x8]                 ; 03fc46cc
    ADD ESP,0x8                         ; 03fc46d0
    MOV ECX,dword ptr [ESI]             ; 03fc46d3
    MOV dword ptr [EDI],ECX             ; 03fc46d5
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc46d7
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc46da
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc46dd
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc46e0
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc46e3
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc46e6
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc46e9
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc46ec
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc46ef
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc46f2
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc46f5
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc46f8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc46fb
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc46fe
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4701
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4704
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4707
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc470a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc470d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4710
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4713
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4716
    ADD ESI,0x30                        ; 03fc4719
    ADD EDI,0x30                        ; 03fc471c
    XOR ECX,ECX                         ; 03fc471f
    JMP 0x0042d357                      ; 03fc4721
        ;   XREF to: 0042d357 (UNCONDITIONAL_JUMP)  ; LAB_0042d357

