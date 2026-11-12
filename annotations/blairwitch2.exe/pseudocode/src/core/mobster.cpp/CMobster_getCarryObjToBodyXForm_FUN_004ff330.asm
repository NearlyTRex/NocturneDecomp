; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004ff330(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 g_CElephantGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff330
        ;   Label: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_004ff330
    PUSH EDI                            ; 004ff331
    PUSH EBP                            ; 004ff332
    SUB ESP,0xe4                        ; 004ff333
    MOV EBX,ESI                         ; 004ff339
    MOV ESI,dword ptr [ESP + 0xf8]      ; 004ff33b
    LEA EAX,[ESI*0x8 + 0x0]             ; 004ff342
    MOV EDX,EAX                         ; 004ff349
    SHL EAX,0x4                         ; 004ff34b
    SUB EAX,EDX                         ; 004ff34e
    ADD EAX,dword ptr [ESP + 0xf4]      ; 004ff350
    MOV EDX,dword ptr [EAX + 0x2620]    ; 004ff357
    MOV EBP,dword ptr [EAX + 0x2618]    ; 004ff35d
    CMP ESI,0x1                         ; 004ff363
    JZ 0x004ff45e                       ; 004ff366
        ;   XREF to: 004ff45e (CONDITIONAL_JUMP)  ; LAB_004ff45e
    MOV ESI,0xbe0f5c29                  ; 004ff36c
    MOV EDI,0xbe333333                  ; 004ff371
    MOV ECX,0xbe7df3b6                  ; 004ff376
    LEA EAX,[ESP + 0xa8]                ; 004ff37b
    LEA EDX,[ESP + 0x84]                ; 004ff382
    MOV dword ptr [ESP + 0xac],ESI      ; 004ff389
    MOV dword ptr [ESP + 0xb0],EDI      ; 004ff390
    MOV dword ptr [ESP + 0xa8],ECX      ; 004ff397
    CMP EDX,EAX                         ; 004ff39e
    JNZ 0x004ff5eb                      ; 004ff3a0
        ;   XREF to: 004ff5eb (CONDITIONAL_JUMP)  ; LAB_004ff5eb
    MOV EDI,0xbfdac083                  ; 004ff3a6
        ;   Label: LAB_004ff3a6
    MOV ESI,0xbee978d5                  ; 004ff3ab
    MOV EAX,0xbfbbe76d                  ; 004ff3b0
    LEA EDX,[ESP + 0x9c]                ; 004ff3b5
    MOV dword ptr [ESP + 0x68],EDI      ; 004ff3bc
    MOV dword ptr [ESP + 0x60],ESI      ; 004ff3c0
    LEA EDI,[ESP + 0x6c]                ; 004ff3c4
    LEA ESI,[ESP + 0x60]                ; 004ff3c8
    MOV dword ptr [ESP + 0x64],EAX      ; 004ff3cc
    LEA EAX,[ESP + 0x6c]                ; 004ff3d0
    MOVSD ES:EDI,ESI                    ; 004ff3d4
    MOVSD ES:EDI,ESI                    ; 004ff3d5
    MOVSD ES:EDI,ESI                    ; 004ff3d6
    CMP EDX,EAX                         ; 004ff3d7
    JZ 0x004ff3fc                       ; 004ff3d9
        ;   XREF to: 004ff3fc (CONDITIONAL_JUMP)  ; LAB_004ff3fc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004ff3db
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ff3df
    MOV EAX,dword ptr [ESP + 0x70]      ; 004ff3e6
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ff3ea
    MOV EAX,dword ptr [ESP + 0x74]      ; 004ff3f1
    MOV dword ptr [ESP + 0xa4],EAX      ; 004ff3f5
        ;   Label: LAB_004ff3f5
    LEA EAX,[ESP + 0x9c]                ; 004ff3fc
        ;   Label: LAB_004ff3fc
    PUSH EAX                            ; 004ff403
    LEA EAX,[ESP + 0x88]                ; 004ff404
    PUSH EAX                            ; 004ff40b
    LEA EAX,[ESP + 0x38]                ; 004ff40c
    PUSH EAX                            ; 004ff410
    CALL core_xform.cpp_FUN_00591c10    ; 004ff411
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EDX,[EBP*0x4 + 0x0]             ; 004ff416
    ADD ESP,0xc                         ; 004ff41d
    SUB EDX,EBP                         ; 004ff420
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004ff422
    SHL EDX,0x4                         ; 004ff429
    ADD EAX,0x1134                      ; 004ff42c
    ADD EAX,EDX                         ; 004ff431
    PUSH EAX                            ; 004ff433
    LEA EAX,[ESP + 0x34]                ; 004ff434
    PUSH EAX                            ; 004ff438
    LEA ESI,[ESP + 0x8]                 ; 004ff439
    MOV EDI,EBX                         ; 004ff43d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004ff43f
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004ff444
    LEA ESI,[ESP + 0x8]                 ; 004ff449
    ADD ESP,0x8                         ; 004ff44d
    MOVSD.REP ES:EDI,ESI                ; 004ff450
    MOV EAX,EBX                         ; 004ff452
    ADD ESP,0xe4                        ; 004ff454
    POP EBP                             ; 004ff45a
    POP EDI                             ; 004ff45b
    POP EBX                             ; 004ff45c
    RET                                 ; 004ff45d
    MOV ECX,dword ptr [0x01c26468]      ; 004ff45e | g_CElephantGunClassInfo.name_hash
        ;   Label: LAB_004ff45e
    PUSH ECX                            ; 004ff464
    PUSH EDX                            ; 004ff465
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ff466
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ff46b
    TEST EAX,EAX                        ; 004ff46e
    JZ 0x004ff534                       ; 004ff470
        ;   XREF to: 004ff534 (CONDITIONAL_JUMP)  ; LAB_004ff534
    MOV ESI,0xbdcccccd                  ; 004ff476
    MOV EDI,0x3e9e353f                  ; 004ff47b
    MOV ECX,0x3ec18937                  ; 004ff480
    LEA EAX,[ESP + 0xc0]                ; 004ff485
    LEA EDX,[ESP + 0x84]                ; 004ff48c
    MOV dword ptr [ESP + 0xc4],ESI      ; 004ff493
    MOV dword ptr [ESP + 0xc8],EDI      ; 004ff49a
    MOV dword ptr [ESP + 0xc0],ECX      ; 004ff4a1
    CMP EDX,EAX                         ; 004ff4a8
    JZ 0x004ff4c1                       ; 004ff4aa
        ;   XREF to: 004ff4c1 (CONDITIONAL_JUMP)  ; LAB_004ff4c1
    MOV dword ptr [ESP + 0x88],ESI      ; 004ff4ac
    MOV dword ptr [ESP + 0x8c],EDI      ; 004ff4b3
    MOV dword ptr [ESP + 0x84],ECX      ; 004ff4ba
    MOV EDI,0x3fbf3b64                  ; 004ff4c1
        ;   Label: LAB_004ff4c1
    MOV ESI,0xbe810625                  ; 004ff4c6
    MOV EAX,0x3fcb4396                  ; 004ff4cb
    LEA EDX,[ESP + 0xd8]                ; 004ff4d0
    MOV dword ptr [ESP + 0xbc],EDI      ; 004ff4d7
    MOV dword ptr [ESP + 0xb4],ESI      ; 004ff4de
    LEA EDI,[ESP + 0xd8]                ; 004ff4e5
    LEA ESI,[ESP + 0xb4]                ; 004ff4ec
    MOV dword ptr [ESP + 0xb8],EAX      ; 004ff4f3
    LEA EAX,[ESP + 0x9c]                ; 004ff4fa
    MOVSD ES:EDI,ESI                    ; 004ff501
    MOVSD ES:EDI,ESI                    ; 004ff502
    MOVSD ES:EDI,ESI                    ; 004ff503
    CMP EAX,EDX                         ; 004ff504
    JZ 0x004ff3fc                       ; 004ff506
        ;   XREF to: 004ff3fc (CONDITIONAL_JUMP)  ; LAB_004ff3fc
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ff50c
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ff513
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ff51a
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ff521
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ff528
    JMP 0x004ff3f5                      ; 004ff52f
        ;   XREF to: 004ff3f5 (UNCONDITIONAL_JUMP)  ; LAB_004ff3f5
    MOV EDI,0xbe0d3d86                  ; 004ff534
        ;   Label: LAB_004ff534
    MOV EAX,0xbde5c704                  ; 004ff539
    MOV ESI,0x3e698e54                  ; 004ff53e
    LEA EDX,[ESP + 0x84]                ; 004ff543
    MOV dword ptr [ESP + 0xd0],EDI      ; 004ff54a
    MOV dword ptr [ESP + 0xd4],EAX      ; 004ff551
    LEA EAX,[ESP + 0xcc]                ; 004ff558
    MOV dword ptr [ESP + 0xcc],ESI      ; 004ff55f
    CMP EDX,EAX                         ; 004ff566
    JZ 0x004ff584                       ; 004ff568
        ;   XREF to: 004ff584 (CONDITIONAL_JUMP)  ; LAB_004ff584
    MOV dword ptr [ESP + 0x84],ESI      ; 004ff56a
    MOV ESI,0xbde5c704                  ; 004ff571
    MOV dword ptr [ESP + 0x88],EDI      ; 004ff576
    MOV dword ptr [ESP + 0x8c],ESI      ; 004ff57d
    MOV EDI,0xbe8ed8b2                  ; 004ff584
        ;   Label: LAB_004ff584
    MOV EAX,0x3fc66a55                  ; 004ff589
    MOV EDX,0x3fcad9be                  ; 004ff58e
    LEA ESI,[ESP + 0x90]                ; 004ff593
    MOV dword ptr [ESP + 0x90],EDI      ; 004ff59a
    MOV dword ptr [ESP + 0x98],EAX      ; 004ff5a1
    MOV dword ptr [ESP + 0x94],EDX      ; 004ff5a8
    LEA EDI,[ESP + 0x78]                ; 004ff5af
    LEA EDX,[ESP + 0x78]                ; 004ff5b3
    LEA EAX,[ESP + 0x9c]                ; 004ff5b7
    MOVSD ES:EDI,ESI                    ; 004ff5be
    MOVSD ES:EDI,ESI                    ; 004ff5bf
    MOVSD ES:EDI,ESI                    ; 004ff5c0
    CMP EAX,EDX                         ; 004ff5c1
    JZ 0x004ff3fc                       ; 004ff5c3
        ;   XREF to: 004ff3fc (CONDITIONAL_JUMP)  ; LAB_004ff3fc
    MOV EAX,dword ptr [ESP + 0x78]      ; 004ff5c9
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ff5cd
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff5d4
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ff5d8
    MOV EAX,dword ptr [ESP + 0x80]      ; 004ff5df
    JMP 0x004ff3f5                      ; 004ff5e6
        ;   XREF to: 004ff3f5 (UNCONDITIONAL_JUMP)  ; LAB_004ff3f5
    MOV dword ptr [ESP + 0x88],ESI      ; 004ff5eb
        ;   Label: LAB_004ff5eb
    MOV dword ptr [ESP + 0x8c],EDI      ; 004ff5f2
    MOV dword ptr [ESP + 0x84],ECX      ; 004ff5f9
    JMP 0x004ff3a6                      ; 004ff600
        ;   XREF to: 004ff3a6 (UNCONDITIONAL_JUMP)  ; LAB_004ff3a6

