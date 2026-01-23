; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043a2b0()
;
; Local Variables:
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined1       Stack[-0x108]:1  local_108
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043d50e
;   core_cloth.cpp_FUN_0043abb0 at 0043ad8d
;
; Called Functions:
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a2b0
        ;   Label: core_cloth.cpp_FUN_0043a2b0
    PUSH ESI                            ; 0043a2b1
    PUSH EDI                            ; 0043a2b2
    SUB ESP,0x12c                       ; 0043a2b3
    IMUL EBX,dword ptr [ESP + 0x140],0xac ; 0043a2b9
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043a2c4
    ADD EAX,0x3ce90                     ; 0043a2cb
    ADD EBX,EAX                         ; 0043a2d0
    MOV ESI,dword ptr [EBX + 0x40]      ; 0043a2d2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043a2d5
    SUB EAX,ESI                         ; 0043a2dc
    MOV ESI,EAX                         ; 0043a2de
    MOV EAX,dword ptr [ESP + 0x144]     ; 0043a2e0
    SHL ESI,0x4                         ; 0043a2e7
    ADD EAX,0xe80                       ; 0043a2ea
    ADD EAX,ESI                         ; 0043a2ef
    PUSH EAX                            ; 0043a2f1
    LEA ESI,[ESP + 0xf4]                ; 0043a2f2
    LEA EDI,[ESP + 0xc4]                ; 0043a2f9
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0043a300
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0043a305
    ADD ESP,0x4                         ; 0043a30a
    LEA EAX,[EBX + 0x48]                ; 0043a30d
    LEA ESI,[ESP + 0xf0]                ; 0043a310
    PUSH EAX                            ; 0043a317
    LEA EAX,[ESP + 0xc4]                ; 0043a318
    MOVSD.REP ES:EDI,ESI                ; 0043a31f
    PUSH EAX                            ; 0043a321
    LEA ESI,[ESP + 0x68]                ; 0043a322
    LEA EDI,[ESP + 0x8]                 ; 0043a326
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0043a32a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0043a32f
    LEA ESI,[ESP + 0x68]                ; 0043a334
    ADD ESP,0x8                         ; 0043a338
    MOVSD.REP ES:EDI,ESI                ; 0043a33b
    MOV EAX,dword ptr [ESP]             ; 0043a33d
    MOV dword ptr [EBX + 0x78],EAX      ; 0043a340
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043a343
    MOV dword ptr [EBX + 0x7c],EAX      ; 0043a347
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043a34a
    MOV dword ptr [EBX + 0x80],EAX      ; 0043a34e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a354
    MOV dword ptr [EBX + 0x84],EAX      ; 0043a358
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043a35e
    MOV dword ptr [EBX + 0x88],EAX      ; 0043a362
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043a368
    MOV dword ptr [EBX + 0x8c],EAX      ; 0043a36c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043a372
    MOV dword ptr [EBX + 0x90],EAX      ; 0043a376
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043a37c
    MOV dword ptr [EBX + 0x94],EAX      ; 0043a380
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043a386
    MOV dword ptr [EBX + 0x98],EAX      ; 0043a38a
    MOV EAX,ESP                         ; 0043a390
    PUSH EAX                            ; 0043a392
    LEA ESI,[ESP + 0x34]                ; 0043a393
    LEA EDI,[ESP + 0x94]                ; 0043a397
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0043a39e
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0043a3a3
    LEA ESI,[ESP + 0x34]                ; 0043a3a8
    ADD ESP,0x4                         ; 0043a3ac
    MOVSD.REP ES:EDI,ESI                ; 0043a3af
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043a3b1
    MOV dword ptr [ESP + 0x120],EAX     ; 0043a3b8
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043a3bf
    MOV dword ptr [ESP + 0x124],EAX     ; 0043a3c6
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043a3cd
    ADD EBX,0xa0                        ; 0043a3d4
    MOV dword ptr [ESP + 0x128],EAX     ; 0043a3da
    LEA EAX,[ESP + 0x120]               ; 0043a3e1
    CMP EBX,EAX                         ; 0043a3e8
    JNZ 0x0043a3f6                      ; 0043a3ea
        ;   XREF to: 0043a3f6 (CONDITIONAL_JUMP)  ; LAB_0043a3f6
    ADD ESP,0x12c                       ; 0043a3ec
    POP EDI                             ; 0043a3f2
    POP ESI                             ; 0043a3f3
    POP EBX                             ; 0043a3f4
    RET                                 ; 0043a3f5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043a3f6
        ;   Label: LAB_0043a3f6
    MOV dword ptr [EBX],EAX             ; 0043a3fd
    MOV EAX,dword ptr [ESP + 0x124]     ; 0043a3ff
    MOV dword ptr [EBX + 0x4],EAX       ; 0043a406
    MOV EAX,dword ptr [ESP + 0x128]     ; 0043a409
    MOV dword ptr [EBX + 0x8],EAX       ; 0043a410
    ADD ESP,0x12c                       ; 0043a413
    POP EDI                             ; 0043a419
    POP ESI                             ; 0043a41a
    POP EBX                             ; 0043a41b
    RET                                 ; 0043a41c

