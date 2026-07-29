; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_00543450(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x90]:1  local_90
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
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543450
        ;   Label: core_tbplayer.cpp_FUN_00543450
    PUSH EDI                            ; 00543451
    PUSH EBP                            ; 00543452
    SUB ESP,0xb4                        ; 00543453
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00543459
    MOV EBX,ESI                         ; 00543460
    MOV EAX,ECX                         ; 00543462
    SHL EAX,0x4                         ; 00543464
    ADD EAX,ECX                         ; 00543467
    MOV EDX,dword ptr [ESP + 0xc4]      ; 00543469
    SHL EAX,0x2                         ; 00543470
    ADD EAX,EDX                         ; 00543473
    MOV ESI,dword ptr [EAX + 0x24a4]    ; 00543475
    TEST ECX,ECX                        ; 0054347b
    JNZ 0x0054356f                      ; 0054347d
        ;   XREF to: 0054356f (CONDITIONAL_JUMP)  ; LAB_0054356f
    MOV EAX,0xbde353f8                  ; 00543483
    MOV EDX,0xbe322d0e                  ; 00543488
    MOV EBP,0x3f228f5c                  ; 0054348d
    MOV dword ptr [ESP + 0x64],EAX      ; 00543492
    MOV dword ptr [ESP + 0x68],EDX      ; 00543496
    LEA EDX,[ESP + 0x60]                ; 0054349a
    LEA EAX,[ESP + 0xa8]                ; 0054349e
    MOV dword ptr [ESP + 0x60],EBP      ; 005434a5
    CMP EAX,EDX                         ; 005434a9
    JZ 0x005434cc                       ; 005434ab
        ;   XREF to: 005434cc (CONDITIONAL_JUMP)  ; LAB_005434cc
    MOV EDI,0xbde353f8                  ; 005434ad
    MOV dword ptr [ESP + 0xa8],EBP      ; 005434b2
    MOV EBP,0xbe322d0e                  ; 005434b9
    MOV dword ptr [ESP + 0xac],EDI      ; 005434be
    MOV dword ptr [ESP + 0xb0],EBP      ; 005434c5
    XOR EAX,EAX                         ; 005434cc
        ;   Label: LAB_005434cc
    LEA EDX,[ESP + 0x84]                ; 005434ce
    MOV dword ptr [ESP + 0x98],EAX      ; 005434d5
    MOV dword ptr [ESP + 0x94],EAX      ; 005434dc
    MOV dword ptr [ESP + 0x90],EAX      ; 005434e3
    LEA EAX,[ESP + 0x90]                ; 005434ea
    CMP EDX,EAX                         ; 005434f1
    JZ 0x0054350c                       ; 005434f3
        ;   XREF to: 0054350c (CONDITIONAL_JUMP)  ; LAB_0054350c
    XOR EDI,EDI                         ; 005434f5
    MOV dword ptr [ESP + 0x88],EDI      ; 005434f7
        ;   Label: LAB_005434f7
    MOV dword ptr [ESP + 0x8c],EDI      ; 005434fe
    MOV dword ptr [ESP + 0x84],EDI      ; 00543505
    LEA EAX,[ESP + 0x84]                ; 0054350c
        ;   Label: LAB_0054350c
    PUSH EAX                            ; 00543513
    LEA EAX,[ESP + 0xac]                ; 00543514
    PUSH EAX                            ; 0054351b
    LEA EAX,[ESP + 0x38]                ; 0054351c
    PUSH EAX                            ; 00543520
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00543521
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 00543526
    ADD ESP,0xc                         ; 0054352d
    SUB EAX,ESI                         ; 00543530
    MOV EDX,dword ptr [ESP + 0xc4]      ; 00543532
    SHL EAX,0x4                         ; 00543539
    ADD EDX,0xfd0                       ; 0054353c
    ADD EAX,EDX                         ; 00543542
    PUSH EAX                            ; 00543544
    LEA EAX,[ESP + 0x34]                ; 00543545
    PUSH EAX                            ; 00543549
    LEA ESI,[ESP + 0x8]                 ; 0054354a
    MOV EDI,EBX                         ; 0054354e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00543550
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 00543555
    LEA ESI,[ESP + 0x8]                 ; 0054355a
    ADD ESP,0x8                         ; 0054355e
    MOVSD.REP ES:EDI,ESI                ; 00543561
    MOV EAX,EBX                         ; 00543563
    ADD ESP,0xb4                        ; 00543565
    POP EBP                             ; 0054356b
    POP EDI                             ; 0054356c
    POP EBX                             ; 0054356d
    RET                                 ; 0054356e
    MOV EDI,0xbde353f8                  ; 0054356f
        ;   Label: LAB_0054356f
    MOV EBP,0xbe322d0e                  ; 00543574
    MOV ECX,0xbf228f5c                  ; 00543579
    LEA EAX,[ESP + 0x9c]                ; 0054357e
    LEA EDX,[ESP + 0xa8]                ; 00543585
    MOV dword ptr [ESP + 0xa0],EDI      ; 0054358c
    MOV dword ptr [ESP + 0xa4],EBP      ; 00543593
    MOV dword ptr [ESP + 0x9c],ECX      ; 0054359a
    CMP EDX,EAX                         ; 005435a1
    JZ 0x005435ba                       ; 005435a3
        ;   XREF to: 005435ba (CONDITIONAL_JUMP)  ; LAB_005435ba
    MOV dword ptr [ESP + 0xac],EDI      ; 005435a5
    MOV dword ptr [ESP + 0xb0],EBP      ; 005435ac
    MOV dword ptr [ESP + 0xa8],ECX      ; 005435b3
    LEA EAX,[ESP + 0x78]                ; 005435ba
        ;   Label: LAB_005435ba
    XOR EDI,EDI                         ; 005435be
    LEA EDX,[ESP + 0x84]                ; 005435c0
    MOV dword ptr [ESP + 0x80],EDI      ; 005435c7
    MOV dword ptr [ESP + 0x7c],EDI      ; 005435ce
    MOV dword ptr [ESP + 0x78],EDI      ; 005435d2
    CMP EDX,EAX                         ; 005435d6
    JZ 0x0054350c                       ; 005435d8
        ;   XREF to: 0054350c (CONDITIONAL_JUMP)  ; LAB_0054350c
    JMP 0x005434f7                      ; 005435de
        ;   XREF to: 005434f7 (UNCONDITIONAL_JUMP)  ; LAB_005434f7

