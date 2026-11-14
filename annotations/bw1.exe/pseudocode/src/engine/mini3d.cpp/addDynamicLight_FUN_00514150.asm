; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_addDynamicLight_FUN_00514150(CVector3f *position,CVector3f *rotation,float range,float cone_scale,uint arg5,uint arg6,uint arg7)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; CVector3f *      Stack[0x8]:4   rotation
; float            Stack[0xc]:4   range
; float            Stack[0x10]:4   cone_scale
; uint             Stack[0x14]:4   arg5
; uint             Stack[0x18]:4   arg6
; uint             Stack[0x1c]:4   arg7
;
; Referenced Globals:
;   undefined4 DAT_005e8e8b
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25004
;   undefined4 DAT_02c834a4
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   engine_mini3d.cpp_setFrameTranslation_FUN_005116e0
;   engine_mini3d.cpp_updateTransform_FUN_005124f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514150
        ;   Label: engine_mini3d.cpp_addDynamicLight_FUN_00514150
    PUSH ESI                            ; 00514151
    PUSH EDI                            ; 00514152
    SUB ESP,0x1c                        ; 00514153
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00514156
    MOV EDX,dword ptr [0x01d25004]      ; 0051415a | DAT_01d25004
    CMP EDX,0x32                        ; 00514160
    JGE 0x00514237                      ; 00514163
        ;   XREF to: 00514237 (CONDITIONAL_JUMP)  ; LAB_00514237
    LEA EAX,[EDX*0x4 + 0x0]             ; 00514169
    ADD EAX,EDX                         ; 00514170
    SHL EAX,0x2                         ; 00514172
    SUB EAX,EDX                         ; 00514175
    MOV EBX,0x1d25008                   ; 00514177
    SHL EAX,0x2                         ; 0051417c
    ADD EBX,EAX                         ; 0051417f
    MOV EAX,EDX                         ; 00514181
    INC EAX                             ; 00514183
    MOV DL,0x1                          ; 00514184
    MOV [0x01d25004],EAX                ; 00514186 | DAT_01d25004
    MOV byte ptr [EAX + 0x1d25edf],DL   ; 0051418b
    CMP EBX,ESI                         ; 00514191
    JZ 0x005141a5                       ; 00514193
        ;   XREF to: 005141a5 (CONDITIONAL_JUMP)  ; LAB_005141a5
    MOV EAX,dword ptr [ESI]             ; 00514195
    MOV dword ptr [EBX],EAX             ; 00514197
    MOV EAX,dword ptr [ESI + 0x4]       ; 00514199
    MOV dword ptr [EBX + 0x4],EAX       ; 0051419c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051419f
    MOV dword ptr [EBX + 0x8],EAX       ; 005141a2
    MOV ECX,dword ptr [ESP + 0x30]      ; 005141a5
        ;   Label: LAB_005141a5
    PUSH ECX                            ; 005141a9
    LEA EAX,[EBX + 0xc]                 ; 005141aa
    PUSH EAX                            ; 005141ad
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 005141ae
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005141b3
    FLD1                                ; 005141b6
    FDIV float ptr [ESP + 0x34]         ; 005141b8
    FLD float ptr [EBX + 0xc]           ; 005141bc
    FMUL float ptr [ESP + 0x38]         ; 005141bf
    FLD float ptr [EBX + 0x18]          ; 005141c3
    FMUL float ptr [ESP + 0x38]         ; 005141c6
    FLD float ptr [EBX + 0x24]          ; 005141ca
    FMUL float ptr [ESP + 0x38]         ; 005141cd
    FLD float ptr [EBX + 0x10]          ; 005141d1
    FMUL float ptr [ESP + 0x38]         ; 005141d4
    FLD float ptr [EBX + 0x1c]          ; 005141d8
    FMUL float ptr [ESP + 0x38]         ; 005141db
    FLD float ptr [EBX + 0x28]          ; 005141df
    MOV EAX,dword ptr [ESP + 0x34]      ; 005141e2
    FMUL float ptr [ESP + 0x38]         ; 005141e6
    MOV dword ptr [EBX + 0x34],EAX      ; 005141ea
    MOV EAX,dword ptr [ESP + 0x38]      ; 005141ed
    MOV dword ptr [EBX + 0x3c],EAX      ; 005141f1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005141f4
    MOV dword ptr [EBX + 0x40],EAX      ; 005141f8
    MOV EAX,dword ptr [ESP + 0x40]      ; 005141fb
    MOV dword ptr [EBX + 0x44],EAX      ; 005141ff
    MOV EAX,dword ptr [ESP + 0x44]      ; 00514202
    MOV dword ptr [EBX + 0x48],EAX      ; 00514206
    MOV EDI,dword ptr [0x02c834a4]      ; 00514209 | DAT_02c834a4
    FXCH ST5                            ; 0051420f
    FSTP float ptr [EBX + 0xc]          ; 00514211
    FXCH ST3                            ; 00514214
    FSTP float ptr [EBX + 0x18]         ; 00514216
    FXCH                                ; 00514219
    FSTP float ptr [EBX + 0x24]         ; 0051421b
    FSTP float ptr [EBX + 0x10]         ; 0051421e
    FSTP float ptr [EBX + 0x1c]         ; 00514221
    FSTP float ptr [EBX + 0x28]         ; 00514224
    FSTP float ptr [EBX + 0x38]         ; 00514227
    TEST EDI,EDI                        ; 0051422a
    JZ 0x00514237                       ; 0051422c
        ;   XREF to: 00514237 (CONDITIONAL_JUMP)  ; LAB_00514237
    CMP dword ptr [0x01c50948],0x0      ; 0051422e | DAT_01c50948
    JNZ 0x0051423e                      ; 00514235
        ;   XREF to: 0051423e (CONDITIONAL_JUMP)  ; LAB_0051423e
    ADD ESP,0x1c                        ; 00514237
        ;   Label: LAB_00514237
    POP EDI                             ; 0051423a
    POP ESI                             ; 0051423b
    POP EBX                             ; 0051423c
    RET                                 ; 0051423d
    PUSH 0x2c8af28                      ; 0051423e
        ;   Label: LAB_0051423e
    CALL engine_mini3d.cpp_setFrameTranslation_FUN_005116e0 ; 00514243
        ;   XREF to: 005116e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setFrameTranslation_FUN_005116e0(CVector3f * position)
    ADD ESP,0x4                         ; 00514248
    CALL engine_mini3d.cpp_updateTransform_FUN_005124f0 ; 0051424b
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_005124f0()
    FLD1                                ; 00514250
    FDIV float ptr [ESP + 0x38]         ; 00514252
    MOV EAX,dword ptr [EBX + 0x14]      ; 00514256
    MOV dword ptr [ESP],EAX             ; 00514259
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051425c
    MOV dword ptr [ESP + 0x4],EAX       ; 0051425f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00514263
    MOV dword ptr [ESP + 0x8],EAX       ; 00514266
    MOV EAX,dword ptr [ESI]             ; 0051426a
    MOV dword ptr [ESP + 0xc],EAX       ; 0051426c
    MOV EAX,dword ptr [ESI + 0x4]       ; 00514270
    MOV dword ptr [ESP + 0x10],EAX      ; 00514273
    MOV EAX,dword ptr [ESI + 0x8]       ; 00514277
    MOV dword ptr [ESP + 0x14],EAX      ; 0051427a
    FLD1                                ; 0051427e
    FPATAN                              ; 00514280
    FMUL double ptr [0x005e8e8b]        ; 00514282 | DAT_005e8e8b
    PUSH dword ptr [EBX + 0x48]         ; 00514288
    PUSH dword ptr [EBX + 0x44]         ; 0051428b
    PUSH dword ptr [EBX + 0x40]         ; 0051428e
    FSTP float ptr [ESP + 0x24]         ; 00514291
    PUSH dword ptr [ESP + 0x24]         ; 00514295
    LEA EAX,[ESP + 0x10]                ; 00514299
    PUSH dword ptr [ESP + 0x44]         ; 0051429d
    PUSH EAX                            ; 005142a1
    LEA EAX,[ESP + 0x24]                ; 005142a2
    PUSH EAX                            ; 005142a6
    CALL dword ptr [0x02c834a4]         ; 005142a7 | DAT_02c834a4
    ADD ESP,0x1c                        ; 005142ad
    ADD ESP,0x1c                        ; 005142b0
    POP EDI                             ; 005142b3
    POP ESI                             ; 005142b4
    POP EBX                             ; 005142b5
    RET                                 ; 005142b6

