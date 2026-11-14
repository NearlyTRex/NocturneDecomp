; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_0051e2f0(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 g_CElephantGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e2f0
        ;   Label: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_0051e2f0
    PUSH EDI                            ; 0051e2f1
    PUSH EBP                            ; 0051e2f2
    SUB ESP,0xe4                        ; 0051e2f3
    MOV EBX,ESI                         ; 0051e2f9
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0051e2fb
    LEA EAX,[ESI*0x8 + 0x0]             ; 0051e302
    MOV EDX,EAX                         ; 0051e309
    SHL EAX,0x4                         ; 0051e30b
    SUB EAX,EDX                         ; 0051e30e
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0051e310
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 0051e317
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 0051e31d
    CMP ESI,0x1                         ; 0051e323
    JZ 0x0051e41e                       ; 0051e326
        ;   XREF to: 0051e41e (CONDITIONAL_JUMP)  ; LAB_0051e41e
    MOV ESI,0xbe0f5c29                  ; 0051e32c
    MOV EDI,0xbe333333                  ; 0051e331
    MOV ECX,0xbe7df3b6                  ; 0051e336
    LEA EAX,[ESP + 0xa8]                ; 0051e33b
    LEA EDX,[ESP + 0x84]                ; 0051e342
    MOV dword ptr [ESP + 0xac],ESI      ; 0051e349
    MOV dword ptr [ESP + 0xb0],EDI      ; 0051e350
    MOV dword ptr [ESP + 0xa8],ECX      ; 0051e357
    CMP EDX,EAX                         ; 0051e35e
    JNZ 0x0051e5ab                      ; 0051e360
        ;   XREF to: 0051e5ab (CONDITIONAL_JUMP)  ; LAB_0051e5ab
    MOV EDI,0xbfdac083                  ; 0051e366
        ;   Label: LAB_0051e366
    MOV ESI,0xbee978d5                  ; 0051e36b
    MOV EAX,0xbfbbe76d                  ; 0051e370
    LEA EDX,[ESP + 0x9c]                ; 0051e375
    MOV dword ptr [ESP + 0x68],EDI      ; 0051e37c
    MOV dword ptr [ESP + 0x60],ESI      ; 0051e380
    LEA EDI,[ESP + 0x6c]                ; 0051e384
    LEA ESI,[ESP + 0x60]                ; 0051e388
    MOV dword ptr [ESP + 0x64],EAX      ; 0051e38c
    LEA EAX,[ESP + 0x6c]                ; 0051e390
    MOVSD ES:EDI,ESI                    ; 0051e394
    MOVSD ES:EDI,ESI                    ; 0051e395
    MOVSD ES:EDI,ESI                    ; 0051e396
    CMP EDX,EAX                         ; 0051e397
    JZ 0x0051e3bc                       ; 0051e399
        ;   XREF to: 0051e3bc (CONDITIONAL_JUMP)  ; LAB_0051e3bc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051e39b
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051e39f
    MOV EAX,dword ptr [ESP + 0x70]      ; 0051e3a6
    MOV dword ptr [ESP + 0xa0],EAX      ; 0051e3aa
    MOV EAX,dword ptr [ESP + 0x74]      ; 0051e3b1
    MOV dword ptr [ESP + 0xa4],EAX      ; 0051e3b5
        ;   Label: LAB_0051e3b5
    LEA EAX,[ESP + 0x9c]                ; 0051e3bc
        ;   Label: LAB_0051e3bc
    PUSH EAX                            ; 0051e3c3
    LEA EAX,[ESP + 0x88]                ; 0051e3c4
    PUSH EAX                            ; 0051e3cb
    LEA EAX,[ESP + 0x38]                ; 0051e3cc
    PUSH EAX                            ; 0051e3d0
    CALL core_xform.cpp_FUN_005b5760    ; 0051e3d1
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EDX,[EBP*0x4 + 0x0]             ; 0051e3d6
    ADD ESP,0xc                         ; 0051e3dd
    SUB EDX,EBP                         ; 0051e3e0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0051e3e2
    SHL EDX,0x4                         ; 0051e3e9
    ADD EAX,0xfd8                       ; 0051e3ec
    ADD EAX,EDX                         ; 0051e3f1
    PUSH EAX                            ; 0051e3f3
    LEA EAX,[ESP + 0x34]                ; 0051e3f4
    PUSH EAX                            ; 0051e3f8
    LEA ESI,[ESP + 0x8]                 ; 0051e3f9
    MOV EDI,EBX                         ; 0051e3fd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0051e3ff
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051e404
    LEA ESI,[ESP + 0x8]                 ; 0051e409
    ADD ESP,0x8                         ; 0051e40d
    MOVSD.REP ES:EDI,ESI                ; 0051e410
    MOV EAX,EBX                         ; 0051e412
    ADD ESP,0xe4                        ; 0051e414
    POP EBP                             ; 0051e41a
    POP EDI                             ; 0051e41b
    POP EBX                             ; 0051e41c
    RET                                 ; 0051e41d
    MOV ECX,dword ptr [0x01c3f628]      ; 0051e41e | g_CElephantGunClassInfo.name_hash
        ;   Label: LAB_0051e41e
    PUSH ECX                            ; 0051e424
    PUSH EDX                            ; 0051e425
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051e426
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051e42b
    TEST EAX,EAX                        ; 0051e42e
    JZ 0x0051e4f4                       ; 0051e430
        ;   XREF to: 0051e4f4 (CONDITIONAL_JUMP)  ; LAB_0051e4f4
    MOV ESI,0xbdcccccd                  ; 0051e436
    MOV EDI,0x3e9e353f                  ; 0051e43b
    MOV ECX,0x3ec18937                  ; 0051e440
    LEA EAX,[ESP + 0xc0]                ; 0051e445
    LEA EDX,[ESP + 0x84]                ; 0051e44c
    MOV dword ptr [ESP + 0xc4],ESI      ; 0051e453
    MOV dword ptr [ESP + 0xc8],EDI      ; 0051e45a
    MOV dword ptr [ESP + 0xc0],ECX      ; 0051e461
    CMP EDX,EAX                         ; 0051e468
    JZ 0x0051e481                       ; 0051e46a
        ;   XREF to: 0051e481 (CONDITIONAL_JUMP)  ; LAB_0051e481
    MOV dword ptr [ESP + 0x88],ESI      ; 0051e46c
    MOV dword ptr [ESP + 0x8c],EDI      ; 0051e473
    MOV dword ptr [ESP + 0x84],ECX      ; 0051e47a
    MOV EDI,0x3fbf3b64                  ; 0051e481
        ;   Label: LAB_0051e481
    MOV ESI,0xbe810625                  ; 0051e486
    MOV EAX,0x3fcb4396                  ; 0051e48b
    LEA EDX,[ESP + 0xd8]                ; 0051e490
    MOV dword ptr [ESP + 0xbc],EDI      ; 0051e497
    MOV dword ptr [ESP + 0xb4],ESI      ; 0051e49e
    LEA EDI,[ESP + 0xd8]                ; 0051e4a5
    LEA ESI,[ESP + 0xb4]                ; 0051e4ac
    MOV dword ptr [ESP + 0xb8],EAX      ; 0051e4b3
    LEA EAX,[ESP + 0x9c]                ; 0051e4ba
    MOVSD ES:EDI,ESI                    ; 0051e4c1
    MOVSD ES:EDI,ESI                    ; 0051e4c2
    MOVSD ES:EDI,ESI                    ; 0051e4c3
    CMP EAX,EDX                         ; 0051e4c4
    JZ 0x0051e3bc                       ; 0051e4c6
        ;   XREF to: 0051e3bc (CONDITIONAL_JUMP)  ; LAB_0051e3bc
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0051e4cc
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051e4d3
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0051e4da
    MOV dword ptr [ESP + 0xa0],EAX      ; 0051e4e1
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0051e4e8
    JMP 0x0051e3b5                      ; 0051e4ef
        ;   XREF to: 0051e3b5 (UNCONDITIONAL_JUMP)  ; LAB_0051e3b5
    MOV EDI,0xbe0d3d86                  ; 0051e4f4
        ;   Label: LAB_0051e4f4
    MOV EAX,0xbde5c704                  ; 0051e4f9
    MOV ESI,0x3e698e54                  ; 0051e4fe
    LEA EDX,[ESP + 0x84]                ; 0051e503
    MOV dword ptr [ESP + 0xd0],EDI      ; 0051e50a
    MOV dword ptr [ESP + 0xd4],EAX      ; 0051e511
    LEA EAX,[ESP + 0xcc]                ; 0051e518
    MOV dword ptr [ESP + 0xcc],ESI      ; 0051e51f
    CMP EDX,EAX                         ; 0051e526
    JZ 0x0051e544                       ; 0051e528
        ;   XREF to: 0051e544 (CONDITIONAL_JUMP)  ; LAB_0051e544
    MOV dword ptr [ESP + 0x84],ESI      ; 0051e52a
    MOV ESI,0xbde5c704                  ; 0051e531
    MOV dword ptr [ESP + 0x88],EDI      ; 0051e536
    MOV dword ptr [ESP + 0x8c],ESI      ; 0051e53d
    MOV EDI,0xbe8ed8b2                  ; 0051e544
        ;   Label: LAB_0051e544
    MOV EAX,0x3fc66a55                  ; 0051e549
    MOV EDX,0x3fcad9be                  ; 0051e54e
    LEA ESI,[ESP + 0x90]                ; 0051e553
    MOV dword ptr [ESP + 0x90],EDI      ; 0051e55a
    MOV dword ptr [ESP + 0x98],EAX      ; 0051e561
    MOV dword ptr [ESP + 0x94],EDX      ; 0051e568
    LEA EDI,[ESP + 0x78]                ; 0051e56f
    LEA EDX,[ESP + 0x78]                ; 0051e573
    LEA EAX,[ESP + 0x9c]                ; 0051e577
    MOVSD ES:EDI,ESI                    ; 0051e57e
    MOVSD ES:EDI,ESI                    ; 0051e57f
    MOVSD ES:EDI,ESI                    ; 0051e580
    CMP EAX,EDX                         ; 0051e581
    JZ 0x0051e3bc                       ; 0051e583
        ;   XREF to: 0051e3bc (CONDITIONAL_JUMP)  ; LAB_0051e3bc
    MOV EAX,dword ptr [ESP + 0x78]      ; 0051e589
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051e58d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0051e594
    MOV dword ptr [ESP + 0xa0],EAX      ; 0051e598
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051e59f
    JMP 0x0051e3b5                      ; 0051e5a6
        ;   XREF to: 0051e3b5 (UNCONDITIONAL_JUMP)  ; LAB_0051e3b5
    MOV dword ptr [ESP + 0x88],ESI      ; 0051e5ab
        ;   Label: LAB_0051e5ab
    MOV dword ptr [ESP + 0x8c],EDI      ; 0051e5b2
    MOV dword ptr [ESP + 0x84],ECX      ; 0051e5b9
    JMP 0x0051e366                      ; 0051e5c0
        ;   XREF to: 0051e366 (UNCONDITIONAL_JUMP)  ; LAB_0051e366

