; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_004328f0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x2c8]:1  local_2c8
; undefined        Stack[-0x298]:1  local_298
; undefined        Stack[-0x268]:1  local_268
; undefined        Stack[-0x238]:1  local_238
; undefined        Stack[-0x208]:1  local_208
; undefined        Stack[-0x1d8]:1  local_1d8
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_charactr.cpp_FUN_00433e80 at 00433eb4
;   core_gabriela.cpp_FUN_004c91b0 at 004c91cf
;   core_mobster.cpp_FUN_0051ce40 at 0051ce89
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_FUN_005b6380
;   core_xform.cpp_FUN_005b72c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004328f0
        ;   Label: core_charactr.cpp_FUN_004328f0
    PUSH ESI                            ; 004328f1
    PUSH EDI                            ; 004328f2
    PUSH EBP                            ; 004328f3
    MOV EBP,ESP                         ; 004328f4
    SUB ESP,0x2b4                       ; 004328f6
    AND ESP,0xfffffff8                  ; 004328fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004328ff
    ADD EAX,0x30                        ; 00432902
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00432905
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043290c
    ADD EAX,0x20                        ; 0043290f
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00432912
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432919
    ADD EAX,0xfd8                       ; 0043291c
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00432921
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432928
    XOR EDX,EDX                         ; 0043292b
    ADD EAX,0x25a8                      ; 0043292d
    MOV dword ptr [ESP + 0x2ac],EDX     ; 00432932
    MOV dword ptr [ESP + 0x2b0],EAX     ; 00432939
    MOV EBX,dword ptr [ESP + 0x2b0]     ; 00432940
        ;   Label: LAB_00432940
    CMP dword ptr [EBX + 0x8],0x0       ; 00432947
    JNZ 0x00432979                      ; 0043294b
        ;   XREF to: 00432979 (CONDITIONAL_JUMP)  ; LAB_00432979
    MOV EBX,dword ptr [ESP + 0x2ac]     ; 0043294d
        ;   Label: LAB_0043294d
    MOV ECX,dword ptr [ESP + 0x2b0]     ; 00432954
    INC EBX                             ; 0043295b
    ADD ECX,0x78                        ; 0043295c
    MOV dword ptr [ESP + 0x2ac],EBX     ; 0043295f
    MOV dword ptr [ESP + 0x2b0],ECX     ; 00432966
    CMP EBX,0x2                         ; 0043296d
    JL 0x00432940                       ; 00432970
        ;   XREF to: 00432940 (CONDITIONAL_JUMP)  ; LAB_00432940
    MOV ESP,EBP                         ; 00432972
    POP EBP                             ; 00432974
    POP EDI                             ; 00432975
    POP ESI                             ; 00432976
    POP EBX                             ; 00432977
    RET                                 ; 00432978
    CMP dword ptr [EBX + 0x44],0x0      ; 00432979
        ;   Label: LAB_00432979
    JZ 0x00432ae6                       ; 0043297d
        ;   XREF to: 00432ae6 (CONDITIONAL_JUMP)  ; LAB_00432ae6
    IMUL EAX,dword ptr [EBX],0x30       ; 00432983
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00432986
    PUSH EAX                            ; 0043298d
    LEA EAX,[EBX + 0x48]                ; 0043298e
    PUSH EAX                            ; 00432991
    LEA ESI,[ESP + 0x188]               ; 00432992
    LEA EDI,[ESP + 0x1b8]               ; 00432999
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004329a0
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004329a5
    LEA ESI,[ESP + 0x188]               ; 004329aa
    ADD ESP,0x8                         ; 004329b1
        ;   Label: LAB_004329b1
    MOVSD.REP ES:EDI,ESI                ; 004329b4
    FLD float ptr [EBX + 0x40]          ; 004329b6
    FLD1                                ; 004329b9
    FCOMPP                              ; 004329bb
    FNSTSW AX                           ; 004329bd
    SAHF                                ; 004329bf
    JBE 0x004329e2                      ; 004329c0
        ;   XREF to: 004329e2 (CONDITIONAL_JUMP)  ; LAB_004329e2
    FLD float ptr [EBX + 0x3c]          ; 004329c2
    FMUL float ptr [EBP + 0x18]         ; 004329c5
    FADD float ptr [EBX + 0x40]         ; 004329c8
    FST float ptr [EBX + 0x40]          ; 004329cb
    FLD1                                ; 004329ce
    FCOMPP                              ; 004329d0
    FNSTSW AX                           ; 004329d2
    SAHF                                ; 004329d4
    JNC 0x00432b20                      ; 004329d5
        ;   XREF to: 00432b20 (CONDITIONAL_JUMP)  ; LAB_00432b20
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 004329db
    MOV EDI,dword ptr [ESP + 0x2a4]     ; 004329e2
        ;   Label: LAB_004329e2
    PUSH EDI                            ; 004329e9
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 004329ea
    PUSH EAX                            ; 004329f1
    LEA EAX,[ESP + 0x1e8]               ; 004329f2
    PUSH EAX                            ; 004329f9
    CALL core_xform.cpp_FUN_005b5760    ; 004329fa
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004329ff
    LEA EAX,[ESP + 0x1e0]               ; 00432a02
    PUSH EAX                            ; 00432a09
    LEA EAX,[ESP + 0x1b4]               ; 00432a0a
    PUSH EAX                            ; 00432a11
    LEA ESI,[ESP + 0x218]               ; 00432a12
    LEA EDI,[ESP + 0x128]               ; 00432a19
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432a20
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00432a25
    LEA ESI,[ESP + 0x218]               ; 00432a2a
    ADD ESP,0x8                         ; 00432a31
    LEA EAX,[ESP + 0x120]               ; 00432a34
    MOVSD.REP ES:EDI,ESI                ; 00432a3b
    PUSH EAX                            ; 00432a3d
    LEA ESI,[ESP + 0x28c]               ; 00432a3e
    LEA EDI,[ESP + 0x274]               ; 00432a45
    CALL core_xform.cpp_FUN_005b6270    ; 00432a4c
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x28c]               ; 00432a51
    ADD ESP,0x4                         ; 00432a58
    MOVSD ES:EDI,ESI                    ; 00432a5b
    MOVSD ES:EDI,ESI                    ; 00432a5c
    MOVSD ES:EDI,ESI                    ; 00432a5d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00432a5e
    MOV EAX,dword ptr [ESP + 0x270]     ; 00432a61
    MOV dword ptr [EDX + 0x20],EAX      ; 00432a68
    MOV EAX,dword ptr [ESP + 0x274]     ; 00432a6b
    MOV dword ptr [EDX + 0x24],EAX      ; 00432a72
    MOV EAX,dword ptr [ESP + 0x278]     ; 00432a75
    MOV dword ptr [EDX + 0x28],EAX      ; 00432a7c
    LEA EAX,[ESP + 0x120]               ; 00432a7f
    PUSH EAX                            ; 00432a86
    LEA ESI,[ESP + 0x298]               ; 00432a87
    LEA EDI,[ESP + 0x280]               ; 00432a8e
    CALL core_xform.cpp_FUN_005b5930    ; 00432a95
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    LEA ESI,[ESP + 0x298]               ; 00432a9a
    ADD ESP,0x4                         ; 00432aa1
    MOVSD ES:EDI,ESI                    ; 00432aa4
    MOVSD ES:EDI,ESI                    ; 00432aa5
    MOVSD ES:EDI,ESI                    ; 00432aa6
    MOV EDX,dword ptr [EBX + 0x8]       ; 00432aa7
    LEA EAX,[ESP + 0x27c]               ; 00432aaa
    ADD EDX,0x30                        ; 00432ab1
    CMP EDX,EAX                         ; 00432ab4
    JZ 0x00432ad5                       ; 00432ab6
        ;   XREF to: 00432ad5 (CONDITIONAL_JUMP)  ; LAB_00432ad5
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00432ab8
    MOV dword ptr [EDX],EAX             ; 00432abf
    MOV EAX,dword ptr [ESP + 0x280]     ; 00432ac1
    MOV dword ptr [EDX + 0x4],EAX       ; 00432ac8
    MOV EAX,dword ptr [ESP + 0x284]     ; 00432acb
    MOV dword ptr [EDX + 0x8],EAX       ; 00432ad2
    MOV EDX,dword ptr [EBX + 0x8]       ; 00432ad5
        ;   Label: LAB_00432ad5
    PUSH EDX                            ; 00432ad8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00432ad9
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00432ade
    JMP 0x0043294d                      ; 00432ae1
        ;   XREF to: 0043294d (UNCONDITIONAL_JUMP)  ; LAB_0043294d
    MOV EDI,dword ptr [ESP + 0x2ac]     ; 00432ae6
        ;   Label: LAB_00432ae6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432aed
    PUSH EDI                            ; 00432af0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432af1
    MOV EAX,dword ptr [EAX + 0x154]     ; 00432af4
    PUSH EDX                            ; 00432afa
    LEA ESI,[ESP + 0x158]               ; 00432afb
    LEA EDI,[ESP + 0x1b8]               ; 00432b02
    CALL dword ptr [EAX + 0x12c]        ; 00432b09
    MOV ECX,0xc                         ; 00432b0f
    LEA ESI,[ESP + 0x158]               ; 00432b14
    JMP 0x004329b1                      ; 00432b1b
        ;   XREF to: 004329b1 (UNCONDITIONAL_JUMP)  ; LAB_004329b1
    IMUL EAX,dword ptr [EBX],0x30       ; 00432b20
        ;   Label: LAB_00432b20
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00432b23
    PUSH EAX                            ; 00432b2a
    LEA ESI,[ESP + 0xf4]                ; 00432b2b
    LEA EDI,[ESP + 0x64]                ; 00432b32
    CALL core_xform.cpp_FUN_005b6380    ; 00432b36
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6380()
    MOV ECX,0xc                         ; 00432b3b
    ADD ESP,0x4                         ; 00432b40
    LEA EAX,[ESP + 0x60]                ; 00432b43
    LEA ESI,[ESP + 0xf0]                ; 00432b47
    PUSH EAX                            ; 00432b4e
    LEA EAX,[ESP + 0x1b4]               ; 00432b4f
    MOVSD.REP ES:EDI,ESI                ; 00432b56
    PUSH EAX                            ; 00432b58
    LEA ESI,[ESP + 0x8]                 ; 00432b59
    LEA EDI,[ESP + 0x38]                ; 00432b5d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432b61
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00432b66
    LEA ESI,[ESP + 0x8]                 ; 00432b6b
    ADD ESP,0x8                         ; 00432b6f
    MOVSD.REP ES:EDI,ESI                ; 00432b72
    LEA EAX,[ESP + 0x30]                ; 00432b74
    PUSH dword ptr [EBX + 0x40]         ; 00432b78
    PUSH EAX                            ; 00432b7b
    LEA EAX,[EBX + 0xc]                 ; 00432b7c
    PUSH EAX                            ; 00432b7f
    LEA ESI,[ESP + 0x24c]               ; 00432b80
    LEA EDI,[ESP + 0x9c]                ; 00432b87
    CALL core_xform.cpp_FUN_005b72c0    ; 00432b8e
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b72c0()
    MOV ECX,0xc                         ; 00432b93
    LEA ESI,[ESP + 0x24c]               ; 00432b98
    ADD ESP,0xc                         ; 00432b9f
    MOVSD.REP ES:EDI,ESI                ; 00432ba2
    IMUL EAX,dword ptr [EBX],0x30       ; 00432ba4
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00432ba7
    PUSH EAX                            ; 00432bae
    LEA EAX,[ESP + 0x94]                ; 00432baf
    PUSH EAX                            ; 00432bb6
    LEA ESI,[ESP + 0xc8]                ; 00432bb7
    LEA EDI,[ESP + 0x1b8]               ; 00432bbe
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432bc5
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00432bca
    LEA ESI,[ESP + 0xc8]                ; 00432bcf
    ADD ESP,0x8                         ; 00432bd6
    MOVSD.REP ES:EDI,ESI                ; 00432bd9
    JMP 0x004329e2                      ; 00432bdb
        ;   XREF to: 004329e2 (UNCONDITIONAL_JUMP)  ; LAB_004329e2

