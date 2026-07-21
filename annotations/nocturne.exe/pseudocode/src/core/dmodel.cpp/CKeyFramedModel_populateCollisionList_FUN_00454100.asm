; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0 at 004540d5
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00 at 00453f63
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10 at 00453e4e
;
; Referenced Globals:
;   undefined4 DAT_0059c064
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454100
        ;   Label: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
    PUSH ESI                            ; 00454101
    PUSH EDI                            ; 00454102
    PUSH EBP                            ; 00454103
    SUB ESP,0x68                        ; 00454104
    MOV EDX,dword ptr [ESP + 0x80]      ; 00454107
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045410e
    ADD EAX,0x364                       ; 00454112
    CMP EAX,EDX                         ; 00454117
    JZ 0x0045412b                       ; 00454119
        ;   XREF to: 0045412b (CONDITIONAL_JUMP)  ; LAB_0045412b
    MOV ECX,dword ptr [EDX]             ; 0045411b
    MOV dword ptr [EAX],ECX             ; 0045411d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045411f
    MOV dword ptr [EAX + 0x4],ECX       ; 00454122
    MOV ECX,dword ptr [EDX + 0x8]       ; 00454125
    MOV dword ptr [EAX + 0x8],ECX       ; 00454128
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045412b
        ;   Label: LAB_0045412b
    ADD EAX,0x364                       ; 0045412f
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00454134
    PUSH EAX                            ; 00454138
    ADD EBX,0x370                       ; 00454139
    PUSH EBX                            ; 0045413f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00454140
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 00454145
    XOR EDX,EDX                         ; 00454148
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045414a
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0045414e
    MOV dword ptr [ESP + 0x48],EDX      ; 00454152
    MOV ECX,dword ptr [EAX + 0x100]     ; 00454156
    MOV EBP,dword ptr [EBP + 0x358]     ; 0045415c
    TEST ECX,ECX                        ; 00454162
    JLE 0x004543a2                      ; 00454164
        ;   XREF to: 004543a2 (CONDITIONAL_JUMP)  ; LAB_004543a2
    MOV dword ptr [ESP + 0x4c],EBX      ; 0045416a
    MOV dword ptr [ESP + 0x50],EBX      ; 0045416e
    MOV dword ptr [ESP + 0x5c],EBX      ; 00454172
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00454176
        ;   Label: LAB_00454176
    MOV EDI,dword ptr [ESP + 0x48]      ; 0045417a
    MOV EAX,dword ptr [EAX + 0x104]     ; 0045417e
    IMUL EAX,EDI                        ; 00454184
    IMUL EDX,EAX,0xc                    ; 00454187
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045418a
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0045418e
    ADD EAX,EDX                         ; 00454194
    MOV dword ptr [ESP + 0x60],EAX      ; 00454196
    XOR EAX,EAX                         ; 0045419a
    MOV dword ptr [ESP + 0x58],EAX      ; 0045419c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004541a0
    CMP dword ptr [EAX + 0x110],0x0     ; 004541a4
    JLE 0x00454387                      ; 004541ab
        ;   XREF to: 00454387 (CONDITIONAL_JUMP)  ; LAB_00454387
    XOR EDI,EDI                         ; 004541b1
    MOV dword ptr [ESP + 0x54],EDI      ; 004541b3
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004541b7
        ;   Label: LAB_004541b7
    MOV EDX,dword ptr [ESP + 0x54]      ; 004541bb
    MOV EAX,dword ptr [EAX + 0x114]     ; 004541bf
    ADD EDX,EAX                         ; 004541c5
    MOV dword ptr [ESP + 0x64],EDX      ; 004541c7
    IMUL EAX,dword ptr [EDX + 0x18],0xc ; 004541cb
    MOV ECX,dword ptr [ESP + 0x60]      ; 004541cf
    LEA EBX,[ESP + 0x30]                ; 004541d3
    ADD EAX,ECX                         ; 004541d7
    FILD dword ptr [EAX]                ; 004541d9
    FMUL float ptr [0x0059c064]         ; 004541db | DAT_0059c064
    FSTP float ptr [EBX]                ; 004541e1
    FILD dword ptr [EAX + 0x4]          ; 004541e3
    FMUL float ptr [0x0059c064]         ; 004541e6 | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 004541ec
    FILD dword ptr [EAX + 0x8]          ; 004541ef
    FMUL float ptr [0x0059c064]         ; 004541f2 | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 004541f8
    MOV EAX,dword ptr [ESP + 0x64]      ; 004541fb
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 004541ff
    LEA EBX,[ESP + 0x24]                ; 00454203
    ADD EAX,ECX                         ; 00454207
    FILD dword ptr [EAX]                ; 00454209
    FMUL float ptr [0x0059c064]         ; 0045420b | DAT_0059c064
    FSTP float ptr [EBX]                ; 00454211
    FILD dword ptr [EAX + 0x4]          ; 00454213
    FMUL float ptr [0x0059c064]         ; 00454216 | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 0045421c
    FILD dword ptr [EAX + 0x8]          ; 0045421f
    FMUL float ptr [0x0059c064]         ; 00454222 | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 00454228
    LEA EAX,[ESP + 0x30]                ; 0045422b
    PUSH EAX                            ; 0045422f
    LEA EAX,[ESP + 0x40]                ; 00454230
    PUSH EAX                            ; 00454234
    MOV EDI,dword ptr [ESP + 0x58]      ; 00454235
    PUSH EDI                            ; 00454239
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0045423a
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    MOV EDX,EAX                         ; 0045423f
    LEA EAX,[ESP + 0x3c]                ; 00454241
    ADD ESP,0xc                         ; 00454245
    CMP EAX,EDX                         ; 00454248
    JZ 0x00454260                       ; 0045424a
        ;   XREF to: 00454260 (CONDITIONAL_JUMP)  ; LAB_00454260
    MOV EAX,dword ptr [EDX]             ; 0045424c
    MOV dword ptr [ESP + 0x30],EAX      ; 0045424e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454252
    MOV dword ptr [ESP + 0x34],EAX      ; 00454255
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454259
    MOV dword ptr [ESP + 0x38],EAX      ; 0045425c
    LEA EAX,[ESP + 0x24]                ; 00454260
        ;   Label: LAB_00454260
    PUSH EAX                            ; 00454264
    LEA EAX,[ESP + 0x4]                 ; 00454265
    PUSH EAX                            ; 00454269
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045426a
    PUSH EAX                            ; 0045426e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0045426f
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    MOV EDX,EAX                         ; 00454274
    LEA EAX,[ESP + 0x30]                ; 00454276
    ADD ESP,0xc                         ; 0045427a
    CMP EAX,EDX                         ; 0045427d
    JZ 0x00454295                       ; 0045427f
        ;   XREF to: 00454295 (CONDITIONAL_JUMP)  ; LAB_00454295
    MOV EAX,dword ptr [EDX]             ; 00454281
    MOV dword ptr [ESP + 0x24],EAX      ; 00454283
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454287
    MOV dword ptr [ESP + 0x28],EAX      ; 0045428a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045428e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00454291
    MOV EAX,dword ptr [ESP + 0x64]      ; 00454295
        ;   Label: LAB_00454295
    MOV EDI,0x2                         ; 00454299
    CMP EDI,dword ptr [EAX + 0x4]       ; 0045429e
    JGE 0x00454361                      ; 004542a1
        ;   XREF to: 00454361 (CONDITIONAL_JUMP)  ; LAB_00454361
    LEA ESI,[EAX + 0x18]                ; 004542a7
    IMUL EAX,dword ptr [ESI + 0x18],0xc ; 004542aa
        ;   Label: LAB_004542aa
    MOV EDX,dword ptr [ESP + 0x60]      ; 004542ae
    LEA EBX,[ESP + 0x18]                ; 004542b2
    ADD EAX,EDX                         ; 004542b6
    FILD dword ptr [EAX]                ; 004542b8
    FMUL float ptr [0x0059c064]         ; 004542ba | DAT_0059c064
    FSTP float ptr [EBX]                ; 004542c0
    FILD dword ptr [EAX + 0x4]          ; 004542c2
    FMUL float ptr [0x0059c064]         ; 004542c5 | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 004542cb
    FILD dword ptr [EAX + 0x8]          ; 004542ce
    FMUL float ptr [0x0059c064]         ; 004542d1 | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 004542d7
    LEA EAX,[ESP + 0x18]                ; 004542da
    PUSH EAX                            ; 004542de
    LEA EAX,[ESP + 0x10]                ; 004542df
    PUSH EAX                            ; 004542e3
    MOV ECX,dword ptr [ESP + 0x64]      ; 004542e4
    PUSH ECX                            ; 004542e8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004542e9
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    MOV EDX,EAX                         ; 004542ee
    LEA EAX,[ESP + 0x24]                ; 004542f0
    ADD ESP,0xc                         ; 004542f4
    CMP EAX,EDX                         ; 004542f7
    JZ 0x0045430f                       ; 004542f9
        ;   XREF to: 0045430f (CONDITIONAL_JUMP)  ; LAB_0045430f
    MOV EAX,dword ptr [EDX]             ; 004542fb
    MOV dword ptr [ESP + 0x18],EAX      ; 004542fd
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454301
    MOV dword ptr [ESP + 0x1c],EAX      ; 00454304
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454308
    MOV dword ptr [ESP + 0x20],EAX      ; 0045430b
    LEA EAX,[ESP + 0x18]                ; 0045430f
        ;   Label: LAB_0045430f
    PUSH EAX                            ; 00454313
    LEA EAX,[ESP + 0x28]                ; 00454314
    PUSH EAX                            ; 00454318
    LEA EAX,[ESP + 0x38]                ; 00454319
    PUSH EAX                            ; 0045431d
    PUSH EBP                            ; 0045431e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0045431f
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0()
    LEA EAX,[ESP + 0x28]                ; 00454324
    LEA EDX,[ESP + 0x34]                ; 00454328
    ADD ESP,0x10                        ; 0045432c
    ADD EBP,0x38                        ; 0045432f
    CMP EDX,EAX                         ; 00454332
    JZ 0x0045434e                       ; 00454334
        ;   XREF to: 0045434e (CONDITIONAL_JUMP)  ; LAB_0045434e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00454336
    MOV dword ptr [ESP + 0x24],EAX      ; 0045433a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045433e
    MOV dword ptr [ESP + 0x28],EAX      ; 00454342
    MOV EAX,dword ptr [ESP + 0x20]      ; 00454346
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045434a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045434e
        ;   Label: LAB_0045434e
    INC EDI                             ; 00454352
    MOV ECX,dword ptr [EAX + 0x4]       ; 00454353
    ADD ESI,0xc                         ; 00454356
    CMP EDI,ECX                         ; 00454359
    JL 0x004542aa                       ; 0045435b
        ;   XREF to: 004542aa (CONDITIONAL_JUMP)  ; LAB_004542aa
    MOV ECX,dword ptr [ESP + 0x54]      ; 00454361
        ;   Label: LAB_00454361
    MOV EBX,dword ptr [ESP + 0x58]      ; 00454365
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00454369
    ADD ECX,0x48                        ; 0045436d
    INC EBX                             ; 00454370
    MOV ESI,dword ptr [EDX + 0x110]     ; 00454371
    MOV dword ptr [ESP + 0x54],ECX      ; 00454377
    MOV dword ptr [ESP + 0x58],EBX      ; 0045437b
    CMP EBX,ESI                         ; 0045437f
    JL 0x004541b7                       ; 00454381
        ;   XREF to: 004541b7 (CONDITIONAL_JUMP)  ; LAB_004541b7
    MOV EBX,dword ptr [ESP + 0x48]      ; 00454387
        ;   Label: LAB_00454387
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0045438b
    INC EBX                             ; 0045438f
    MOV ESI,dword ptr [EDX + 0x100]     ; 00454390
    MOV dword ptr [ESP + 0x48],EBX      ; 00454396
    CMP EBX,ESI                         ; 0045439a
    JL 0x00454176                       ; 0045439c
        ;   XREF to: 00454176 (CONDITIONAL_JUMP)  ; LAB_00454176
    ADD ESP,0x68                        ; 004543a2
        ;   Label: LAB_004543a2
    POP EBP                             ; 004543a5
    POP EDI                             ; 004543a6
    POP ESI                             ; 004543a7
    POP EBX                             ; 004543a8
    RET                                 ; 004543a9

