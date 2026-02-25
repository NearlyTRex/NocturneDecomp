; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0(CDemonSet *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b20f2
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fac0
        ;   Label: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0
    PUSH ESI                            ; 0056fac1
    PUSH EDI                            ; 0056fac2
    PUSH EBP                            ; 0056fac3
    MOV EBP,ESP                         ; 0056fac4
    SUB ESP,0x1c                        ; 0056fac6
    AND ESP,0xfffffff8                  ; 0056fac9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056facc
    MOV EDX,dword ptr [EAX + 0x15aebc]  ; 0056facf
    XOR ESI,ESI                         ; 0056fad5
    TEST EDX,EDX                        ; 0056fad7
    JLE 0x0056fb46                      ; 0056fad9
        ;   XREF to: 0056fb46 (CONDITIONAL_JUMP)  ; LAB_0056fb46
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056fadb
    ADD EAX,0x15aec0                    ; 0056fade
    ADD EDI,0x15aed8                    ; 0056fae3
    MOV dword ptr [ESP + 0x18],EAX      ; 0056fae9
    IMUL EBX,ESI,0x44                   ; 0056faed
        ;   Label: LAB_0056faed
    ADD EBX,dword ptr [ESP + 0x18]      ; 0056faf0
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056faf4
    FLD float ptr [EAX]                 ; 0056faf7
    FSUB float ptr [EBX]                ; 0056faf9
    FSTP float ptr [ESP + 0xc]          ; 0056fafb
    FLD float ptr [EAX + 0x4]           ; 0056faff
    FSUB float ptr [EBX + 0x4]          ; 0056fb02
    FSTP float ptr [ESP + 0x10]         ; 0056fb05
    FLD float ptr [EAX + 0x8]           ; 0056fb09
    LEA EAX,[ESP + 0xc]                 ; 0056fb0c
    PUSH EAX                            ; 0056fb10
    LEA EAX,[ESP + 0x4]                 ; 0056fb11
    PUSH EAX                            ; 0056fb15
    FSUB float ptr [EBX + 0x8]          ; 0056fb16
    PUSH EDI                            ; 0056fb19
    FSTP float ptr [ESP + 0x20]         ; 0056fb1a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0056fb1e
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0056fb23
    FLD float ptr [EBX + 0xc]           ; 0056fb26
    FLD float ptr [ESP]                 ; 0056fb29
    FABS                                ; 0056fb2c
    FCOMPP                              ; 0056fb2e
    FNSTSW AX                           ; 0056fb30
    SAHF                                ; 0056fb32
    JBE 0x0056fb56                      ; 0056fb33
        ;   XREF to: 0056fb56 (CONDITIONAL_JUMP)  ; LAB_0056fb56
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056fb35
        ;   Label: LAB_0056fb35
    INC ESI                             ; 0056fb38
    MOV ECX,dword ptr [EAX + 0x15aebc]  ; 0056fb39
    ADD EDI,0x44                        ; 0056fb3f
    CMP ESI,ECX                         ; 0056fb42
    JL 0x0056faed                       ; 0056fb44
        ;   XREF to: 0056faed (CONDITIONAL_JUMP)  ; LAB_0056faed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056fb46
        ;   Label: LAB_0056fb46
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0056fb49
    MOV ESP,EBP                         ; 0056fb4f
    POP EBP                             ; 0056fb51
    POP EDI                             ; 0056fb52
    POP ESI                             ; 0056fb53
    POP EBX                             ; 0056fb54
    RET                                 ; 0056fb55
    FLD float ptr [ESP + 0x4]           ; 0056fb56
        ;   Label: LAB_0056fb56
    FABS                                ; 0056fb5a
    FLD float ptr [EBX + 0x10]          ; 0056fb5c
    FCOMPP                              ; 0056fb5f
    FNSTSW AX                           ; 0056fb61
    SAHF                                ; 0056fb63
    JC 0x0056fb35                       ; 0056fb64
        ;   XREF to: 0056fb35 (CONDITIONAL_JUMP)  ; LAB_0056fb35
    FLD float ptr [ESP + 0x8]           ; 0056fb66
    FABS                                ; 0056fb6a
    FLD float ptr [EBX + 0x14]          ; 0056fb6c
    FCOMPP                              ; 0056fb6f
    FNSTSW AX                           ; 0056fb71
    SAHF                                ; 0056fb73
    JC 0x0056fb35                       ; 0056fb74
        ;   XREF to: 0056fb35 (CONDITIONAL_JUMP)  ; LAB_0056fb35
    MOV EAX,dword ptr [EBX + 0x40]      ; 0056fb76
    MOV ESP,EBP                         ; 0056fb79
    POP EBP                             ; 0056fb7b
    POP EDI                             ; 0056fb7c
    POP ESI                             ; 0056fb7d
    POP EBX                             ; 0056fb7e
    RET                                 ; 0056fb7f

