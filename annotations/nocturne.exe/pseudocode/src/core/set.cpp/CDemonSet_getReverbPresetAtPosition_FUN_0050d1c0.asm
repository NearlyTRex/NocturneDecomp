; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(CDemonSet *this_ptr,CVector3f *position)
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
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d242
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d1c0
        ;   Label: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0
    PUSH ESI                            ; 0050d1c1
    PUSH EDI                            ; 0050d1c2
    PUSH EBP                            ; 0050d1c3
    MOV EBP,ESP                         ; 0050d1c4
    SUB ESP,0x1c                        ; 0050d1c6
    AND ESP,0xfffffff8                  ; 0050d1c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d1cc
    MOV EDX,dword ptr [EAX + 0x15aad4]  ; 0050d1cf
    XOR ESI,ESI                         ; 0050d1d5
    TEST EDX,EDX                        ; 0050d1d7
    JLE 0x0050d246                      ; 0050d1d9
        ;   XREF to: 0050d246 (CONDITIONAL_JUMP)  ; LAB_0050d246
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050d1db
    ADD EAX,0x15aad8                    ; 0050d1de
    ADD EDI,0x15aaf0                    ; 0050d1e3
    MOV dword ptr [ESP + 0x18],EAX      ; 0050d1e9
    IMUL EBX,ESI,0x44                   ; 0050d1ed
        ;   Label: LAB_0050d1ed
    ADD EBX,dword ptr [ESP + 0x18]      ; 0050d1f0
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050d1f4
    FLD float ptr [EAX]                 ; 0050d1f7
    FSUB float ptr [EBX]                ; 0050d1f9
    FSTP float ptr [ESP + 0xc]          ; 0050d1fb
    FLD float ptr [EAX + 0x4]           ; 0050d1ff
    FSUB float ptr [EBX + 0x4]          ; 0050d202
    FSTP float ptr [ESP + 0x10]         ; 0050d205
    FLD float ptr [EAX + 0x8]           ; 0050d209
    LEA EAX,[ESP + 0xc]                 ; 0050d20c
    PUSH EAX                            ; 0050d210
    LEA EAX,[ESP + 0x4]                 ; 0050d211
    PUSH EAX                            ; 0050d215
    FSUB float ptr [EBX + 0x8]          ; 0050d216
    PUSH EDI                            ; 0050d219
    FSTP float ptr [ESP + 0x20]         ; 0050d21a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0050d21e
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050d223
    FLD float ptr [EBX + 0xc]           ; 0050d226
    FLD float ptr [ESP]                 ; 0050d229
    FABS                                ; 0050d22c
    FCOMPP                              ; 0050d22e
    FNSTSW AX                           ; 0050d230
    SAHF                                ; 0050d232
    JBE 0x0050d256                      ; 0050d233
        ;   XREF to: 0050d256 (CONDITIONAL_JUMP)  ; LAB_0050d256
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d235
        ;   Label: LAB_0050d235
    INC ESI                             ; 0050d238
    MOV ECX,dword ptr [EAX + 0x15aad4]  ; 0050d239
    ADD EDI,0x44                        ; 0050d23f
    CMP ESI,ECX                         ; 0050d242
    JL 0x0050d1ed                       ; 0050d244
        ;   XREF to: 0050d1ed (CONDITIONAL_JUMP)  ; LAB_0050d1ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d246
        ;   Label: LAB_0050d246
    MOV EAX,dword ptr [EAX + 0x15aad0]  ; 0050d249
    MOV ESP,EBP                         ; 0050d24f
    POP EBP                             ; 0050d251
    POP EDI                             ; 0050d252
    POP ESI                             ; 0050d253
    POP EBX                             ; 0050d254
    RET                                 ; 0050d255
    FLD float ptr [ESP + 0x4]           ; 0050d256
        ;   Label: LAB_0050d256
    FABS                                ; 0050d25a
    FLD float ptr [EBX + 0x10]          ; 0050d25c
    FCOMPP                              ; 0050d25f
    FNSTSW AX                           ; 0050d261
    SAHF                                ; 0050d263
    JC 0x0050d235                       ; 0050d264
        ;   XREF to: 0050d235 (CONDITIONAL_JUMP)  ; LAB_0050d235
    FLD float ptr [ESP + 0x8]           ; 0050d266
    FABS                                ; 0050d26a
    FLD float ptr [EBX + 0x14]          ; 0050d26c
    FCOMPP                              ; 0050d26f
    FNSTSW AX                           ; 0050d271
    SAHF                                ; 0050d273
    JC 0x0050d235                       ; 0050d274
        ;   XREF to: 0050d235 (CONDITIONAL_JUMP)  ; LAB_0050d235
    MOV EAX,dword ptr [EBX + 0x40]      ; 0050d276
    MOV ESP,EBP                         ; 0050d279
    POP EBP                             ; 0050d27b
    POP EDI                             ; 0050d27c
    POP ESI                             ; 0050d27d
    POP EBX                             ; 0050d27e
    RET                                 ; 0050d27f

