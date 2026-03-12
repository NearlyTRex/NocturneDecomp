; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0xfc]:48  local_fc
; CMatrix3x4f      Stack[-0xcc]:48  local_cc
; CMatrix3x4f      Stack[-0x9c]:48  local_9c
; CMatrix3x4f      Stack[-0x6c]:48  local_6c
; CMatrix3x4f      Stack[-0x3c]:48  local_3c
;
; XREF[2]:
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db204
;   core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0 at 005dba57
;
; Referenced Globals:
;   int INT_03f6cd08
;   int INT_03f6cd0c
;   int INT_03f6cd10
;   int INT_03f6cd14
;
; Called Functions:
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbb70
        ;   Label: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
    PUSH EDI                            ; 005dbb71
    PUSH EBP                            ; 005dbb72
    SUB ESP,0xf0                        ; 005dbb73
    MOV EBX,ESI                         ; 005dbb79
    MOV EBP,dword ptr [0x03f6cd0c]      ; 005dbb7b | INT_03f6cd0c
    LEA EAX,[EBP*0x4 + 0x0]             ; 005dbb81
    SUB EAX,EBP                         ; 005dbb88
    MOV EBP,dword ptr [ESP + 0x100]     ; 005dbb8a
    SHL EAX,0x4                         ; 005dbb91
    ADD EBP,0xfd8                       ; 005dbb94
    PUSH 0x3f000000                     ; 005dbb9a
    ADD EAX,EBP                         ; 005dbb9f
    MOV ESI,dword ptr [0x03f6cd08]      ; 005dbba1 | INT_03f6cd08
    PUSH EAX                            ; 005dbba7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbba8
    SUB EAX,ESI                         ; 005dbbaf
    SHL EAX,0x4                         ; 005dbbb1
    ADD EAX,EBP                         ; 005dbbb4
    PUSH EAX                            ; 005dbbb6
    LEA ESI,[ESP + 0x9c]                ; 005dbbb7
    LEA EDI,[ESP + 0x3c]                ; 005dbbbe
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbbc2
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005dbbc7
    LEA ESI,[ESP + 0x9c]                ; 005dbbcc
    ADD ESP,0xc                         ; 005dbbd3
    MOVSD.REP ES:EDI,ESI                ; 005dbbd6
    MOV ESI,dword ptr [0x03f6cd14]      ; 005dbbd8 | INT_03f6cd14
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbbde
    SUB EAX,ESI                         ; 005dbbe5
    SHL EAX,0x4                         ; 005dbbe7
    PUSH 0x3f000000                     ; 005dbbea
    ADD EAX,EBP                         ; 005dbbef
    MOV ESI,dword ptr [0x03f6cd10]      ; 005dbbf1 | INT_03f6cd10
    PUSH EAX                            ; 005dbbf7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbbf8
    SUB EAX,ESI                         ; 005dbbff
    SHL EAX,0x4                         ; 005dbc01
    ADD EAX,EBP                         ; 005dbc04
    PUSH EAX                            ; 005dbc06
    LEA ESI,[ESP + 0xc]                 ; 005dbc07
    LEA EDI,[ESP + 0x6c]                ; 005dbc0b
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbc0f
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    ADD ESP,0xc                         ; 005dbc14
    MOV ECX,0xc                         ; 005dbc17
    LEA EAX,[ESP + 0x60]                ; 005dbc1c
    PUSH 0x3f000000                     ; 005dbc20
    LEA ESI,[ESP + 0x4]                 ; 005dbc25
    PUSH EAX                            ; 005dbc29
    LEA EAX,[ESP + 0x38]                ; 005dbc2a
    MOVSD.REP ES:EDI,ESI                ; 005dbc2e
    PUSH EAX                            ; 005dbc30
    LEA ESI,[ESP + 0xcc]                ; 005dbc31
    MOV EDI,EBX                         ; 005dbc38
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbc3a
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005dbc3f
    LEA ESI,[ESP + 0xcc]                ; 005dbc44
    ADD ESP,0xc                         ; 005dbc4b
    MOVSD.REP ES:EDI,ESI                ; 005dbc4e
    MOV EAX,EBX                         ; 005dbc50
    ADD ESP,0xf0                        ; 005dbc52
    POP EBP                             ; 005dbc58
    POP EDI                             ; 005dbc59
    POP EBX                             ; 005dbc5a
    RET                                 ; 005dbc5b

