; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi void __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined1       Stack[-0xc0]:1  local_c0
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da370
        ;   Label: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370
    PUSH EDI                            ; 005da371
    PUSH EBP                            ; 005da372
    SUB ESP,0xb4                        ; 005da373
    MOV ECX,dword ptr [ESP + 0xc8]      ; 005da379
    MOV EBX,ESI                         ; 005da380
    MOV EAX,ECX                         ; 005da382
    SHL EAX,0x4                         ; 005da384
    ADD EAX,ECX                         ; 005da387
    MOV EDX,dword ptr [ESP + 0xc4]      ; 005da389
    SHL EAX,0x2                         ; 005da390
    ADD EAX,EDX                         ; 005da393
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 005da395
    TEST ECX,ECX                        ; 005da39b
    JNZ 0x005da48f                      ; 005da39d
        ;   XREF to: 005da48f (CONDITIONAL_JUMP)  ; LAB_005da48f
    MOV EAX,0xbde353f8                  ; 005da3a3
    MOV EDX,0xbe322d0e                  ; 005da3a8
    MOV EBP,0x3f228f5c                  ; 005da3ad
    MOV dword ptr [ESP + 0x64],EAX      ; 005da3b2
    MOV dword ptr [ESP + 0x68],EDX      ; 005da3b6
    LEA EDX,[ESP + 0x60]                ; 005da3ba
    LEA EAX,[ESP + 0xa8]                ; 005da3be
    MOV dword ptr [ESP + 0x60],EBP      ; 005da3c5
    CMP EAX,EDX                         ; 005da3c9
    JZ 0x005da3ec                       ; 005da3cb
        ;   XREF to: 005da3ec (CONDITIONAL_JUMP)  ; LAB_005da3ec
    MOV EDI,0xbde353f8                  ; 005da3cd
    MOV dword ptr [ESP + 0xa8],EBP      ; 005da3d2
    MOV EBP,0xbe322d0e                  ; 005da3d9
    MOV dword ptr [ESP + 0xac],EDI      ; 005da3de
    MOV dword ptr [ESP + 0xb0],EBP      ; 005da3e5
    XOR EAX,EAX                         ; 005da3ec
        ;   Label: LAB_005da3ec
    LEA EDX,[ESP + 0x84]                ; 005da3ee
    MOV dword ptr [ESP + 0x98],EAX      ; 005da3f5
    MOV dword ptr [ESP + 0x94],EAX      ; 005da3fc
    MOV dword ptr [ESP + 0x90],EAX      ; 005da403
    LEA EAX,[ESP + 0x90]                ; 005da40a
    CMP EDX,EAX                         ; 005da411
    JZ 0x005da42c                       ; 005da413
        ;   XREF to: 005da42c (CONDITIONAL_JUMP)  ; LAB_005da42c
    XOR EDI,EDI                         ; 005da415
    MOV dword ptr [ESP + 0x88],EDI      ; 005da417
        ;   Label: LAB_005da417
    MOV dword ptr [ESP + 0x8c],EDI      ; 005da41e
    MOV dword ptr [ESP + 0x84],EDI      ; 005da425
    LEA EAX,[ESP + 0x84]                ; 005da42c
        ;   Label: LAB_005da42c
    PUSH EAX                            ; 005da433
    LEA EAX,[ESP + 0xac]                ; 005da434
    PUSH EAX                            ; 005da43b
    LEA EAX,[ESP + 0x38]                ; 005da43c
    PUSH EAX                            ; 005da440
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005da441
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 005da446
    ADD ESP,0xc                         ; 005da44d
    SUB EAX,ESI                         ; 005da450
    MOV EDX,dword ptr [ESP + 0xc4]      ; 005da452
    SHL EAX,0x4                         ; 005da459
    ADD EDX,0xfd8                       ; 005da45c
    ADD EAX,EDX                         ; 005da462
    PUSH EAX                            ; 005da464
    LEA EAX,[ESP + 0x34]                ; 005da465
    PUSH EAX                            ; 005da469
    LEA ESI,[ESP + 0x8]                 ; 005da46a
    MOV EDI,EBX                         ; 005da46e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005da470
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005da475
    LEA ESI,[ESP + 0x8]                 ; 005da47a
    ADD ESP,0x8                         ; 005da47e
    MOVSD.REP ES:EDI,ESI                ; 005da481
    MOV EAX,EBX                         ; 005da483
    ADD ESP,0xb4                        ; 005da485
    POP EBP                             ; 005da48b
    POP EDI                             ; 005da48c
    POP EBX                             ; 005da48d
    RET                                 ; 005da48e
    MOV EDI,0xbde353f8                  ; 005da48f
        ;   Label: LAB_005da48f
    MOV EBP,0xbe322d0e                  ; 005da494
    MOV ECX,0xbf228f5c                  ; 005da499
    LEA EAX,[ESP + 0x9c]                ; 005da49e
    LEA EDX,[ESP + 0xa8]                ; 005da4a5
    MOV dword ptr [ESP + 0xa0],EDI      ; 005da4ac
    MOV dword ptr [ESP + 0xa4],EBP      ; 005da4b3
    MOV dword ptr [ESP + 0x9c],ECX      ; 005da4ba
    CMP EDX,EAX                         ; 005da4c1
    JZ 0x005da4da                       ; 005da4c3
        ;   XREF to: 005da4da (CONDITIONAL_JUMP)  ; LAB_005da4da
    MOV dword ptr [ESP + 0xac],EDI      ; 005da4c5
    MOV dword ptr [ESP + 0xb0],EBP      ; 005da4cc
    MOV dword ptr [ESP + 0xa8],ECX      ; 005da4d3
    LEA EAX,[ESP + 0x78]                ; 005da4da
        ;   Label: LAB_005da4da
    XOR EDI,EDI                         ; 005da4de
    LEA EDX,[ESP + 0x84]                ; 005da4e0
    MOV dword ptr [ESP + 0x80],EDI      ; 005da4e7
    MOV dword ptr [ESP + 0x7c],EDI      ; 005da4ee
    MOV dword ptr [ESP + 0x78],EDI      ; 005da4f2
    CMP EDX,EAX                         ; 005da4f6
    JZ 0x005da42c                       ; 005da4f8
        ;   XREF to: 005da42c (CONDITIONAL_JUMP)  ; LAB_005da42c
    JMP 0x005da417                      ; 005da4fe
        ;   XREF to: 005da417 (UNCONDITIONAL_JUMP)  ; LAB_005da417

