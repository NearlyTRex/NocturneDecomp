; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_zombiepriest_cpp_CZombiePriest_getCarryObjToBodyXForm_FUN_0058ecd0(CZombiePriest *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 g_CElephantGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ecd0
        ;   Label: core_zombiepriest.cpp_CZombiePriest_getCarryObjToBodyXForm_FUN_0058ecd0
    PUSH EDI                            ; 0058ecd1
    PUSH EBP                            ; 0058ecd2
    SUB ESP,0xe4                        ; 0058ecd3
    MOV EBX,ESI                         ; 0058ecd9
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0058ecdb
    LEA EAX,[ESI*0x8 + 0x0]             ; 0058ece2
    MOV EDX,EAX                         ; 0058ece9
    SHL EAX,0x4                         ; 0058eceb
    SUB EAX,EDX                         ; 0058ecee
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0058ecf0
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 0058ecf7
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 0058ecfd
    CMP ESI,0x1                         ; 0058ed03
    JZ 0x0058edfe                       ; 0058ed06
        ;   XREF to: 0058edfe (CONDITIONAL_JUMP)  ; LAB_0058edfe
    MOV ESI,0x3e2f45e1                  ; 0058ed0c
    MOV EDI,0x3cb53b4b                  ; 0058ed11
    MOV ECX,0xbecbb03e                  ; 0058ed16
    LEA EAX,[ESP + 0xa8]                ; 0058ed1b
    LEA EDX,[ESP + 0x84]                ; 0058ed22
    MOV dword ptr [ESP + 0xac],ESI      ; 0058ed29
    MOV dword ptr [ESP + 0xb0],EDI      ; 0058ed30
    MOV dword ptr [ESP + 0xa8],ECX      ; 0058ed37
    CMP EDX,EAX                         ; 0058ed3e
    JNZ 0x0058ef8b                      ; 0058ed40
        ;   XREF to: 0058ef8b (CONDITIONAL_JUMP)  ; LAB_0058ef8b
    MOV EDI,0xbfd6540d                  ; 0058ed46
        ;   Label: LAB_0058ed46
    MOV ESI,0xbf18d23d                  ; 0058ed4b
    MOV EAX,0xbfac18e7                  ; 0058ed50
    LEA EDX,[ESP + 0x9c]                ; 0058ed55
    MOV dword ptr [ESP + 0x68],EDI      ; 0058ed5c
    MOV dword ptr [ESP + 0x60],ESI      ; 0058ed60
    LEA EDI,[ESP + 0x6c]                ; 0058ed64
    LEA ESI,[ESP + 0x60]                ; 0058ed68
    MOV dword ptr [ESP + 0x64],EAX      ; 0058ed6c
    LEA EAX,[ESP + 0x6c]                ; 0058ed70
    MOVSD ES:EDI,ESI                    ; 0058ed74
    MOVSD ES:EDI,ESI                    ; 0058ed75
    MOVSD ES:EDI,ESI                    ; 0058ed76
    CMP EDX,EAX                         ; 0058ed77
    JZ 0x0058ed9c                       ; 0058ed79
        ;   XREF to: 0058ed9c (CONDITIONAL_JUMP)  ; LAB_0058ed9c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0058ed7b
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058ed7f
    MOV EAX,dword ptr [ESP + 0x70]      ; 0058ed86
    MOV dword ptr [ESP + 0xa0],EAX      ; 0058ed8a
    MOV EAX,dword ptr [ESP + 0x74]      ; 0058ed91
    MOV dword ptr [ESP + 0xa4],EAX      ; 0058ed95
        ;   Label: LAB_0058ed95
    LEA EAX,[ESP + 0x9c]                ; 0058ed9c
        ;   Label: LAB_0058ed9c
    PUSH EAX                            ; 0058eda3
    LEA EAX,[ESP + 0x88]                ; 0058eda4
    PUSH EAX                            ; 0058edab
    LEA EAX,[ESP + 0x38]                ; 0058edac
    PUSH EAX                            ; 0058edb0
    CALL core_xform.cpp_FUN_00583940    ; 0058edb1
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EDX,[EBP*0x4 + 0x0]             ; 0058edb6
    ADD ESP,0xc                         ; 0058edbd
    SUB EDX,EBP                         ; 0058edc0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0058edc2
    SHL EDX,0x4                         ; 0058edc9
    ADD EAX,0xfd8                       ; 0058edcc
    ADD EAX,EDX                         ; 0058edd1
    PUSH EAX                            ; 0058edd3
    LEA EAX,[ESP + 0x34]                ; 0058edd4
    PUSH EAX                            ; 0058edd8
    LEA ESI,[ESP + 0x8]                 ; 0058edd9
    MOV EDI,EBX                         ; 0058eddd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0058eddf
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0058ede4
    LEA ESI,[ESP + 0x8]                 ; 0058ede9
    ADD ESP,0x8                         ; 0058eded
    MOVSD.REP ES:EDI,ESI                ; 0058edf0
    MOV EAX,EBX                         ; 0058edf2
    ADD ESP,0xe4                        ; 0058edf4
    POP EBP                             ; 0058edfa
    POP EDI                             ; 0058edfb
    POP EBX                             ; 0058edfc
    RET                                 ; 0058edfd
    MOV ECX,dword ptr [0x01c5bbd0]      ; 0058edfe | g_CElephantGunClassInfo.name_hash
        ;   Label: LAB_0058edfe
    PUSH ECX                            ; 0058ee04
    PUSH EDX                            ; 0058ee05
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058ee06
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058ee0b
    TEST EAX,EAX                        ; 0058ee0e
    JNZ 0x0058eed4                      ; 0058ee10
        ;   XREF to: 0058eed4 (CONDITIONAL_JUMP)  ; LAB_0058eed4
    MOV ESI,0xbdcccccd                  ; 0058ee16
    MOV EDI,0x3e9e353f                  ; 0058ee1b
    MOV ECX,0x3ec18937                  ; 0058ee20
    LEA EAX,[ESP + 0xc0]                ; 0058ee25
    LEA EDX,[ESP + 0x84]                ; 0058ee2c
    MOV dword ptr [ESP + 0xc4],ESI      ; 0058ee33
    MOV dword ptr [ESP + 0xc8],EDI      ; 0058ee3a
    MOV dword ptr [ESP + 0xc0],ECX      ; 0058ee41
    CMP EDX,EAX                         ; 0058ee48
    JZ 0x0058ee61                       ; 0058ee4a
        ;   XREF to: 0058ee61 (CONDITIONAL_JUMP)  ; LAB_0058ee61
    MOV dword ptr [ESP + 0x88],ESI      ; 0058ee4c
    MOV dword ptr [ESP + 0x8c],EDI      ; 0058ee53
    MOV dword ptr [ESP + 0x84],ECX      ; 0058ee5a
    MOV EDI,0x3fbf3b64                  ; 0058ee61
        ;   Label: LAB_0058ee61
    MOV ESI,0xbe810625                  ; 0058ee66
    MOV EAX,0x3fcb4396                  ; 0058ee6b
    LEA EDX,[ESP + 0xd8]                ; 0058ee70
    MOV dword ptr [ESP + 0xbc],EDI      ; 0058ee77
    MOV dword ptr [ESP + 0xb4],ESI      ; 0058ee7e
    LEA EDI,[ESP + 0xd8]                ; 0058ee85
    LEA ESI,[ESP + 0xb4]                ; 0058ee8c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0058ee93
    LEA EAX,[ESP + 0x9c]                ; 0058ee9a
    MOVSD ES:EDI,ESI                    ; 0058eea1
    MOVSD ES:EDI,ESI                    ; 0058eea2
    MOVSD ES:EDI,ESI                    ; 0058eea3
    CMP EAX,EDX                         ; 0058eea4
    JZ 0x0058ed9c                       ; 0058eea6
        ;   XREF to: 0058ed9c (CONDITIONAL_JUMP)  ; LAB_0058ed9c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0058eeac
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058eeb3
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0058eeba
    MOV dword ptr [ESP + 0xa0],EAX      ; 0058eec1
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0058eec8
    JMP 0x0058ed95                      ; 0058eecf
        ;   XREF to: 0058ed95 (UNCONDITIONAL_JUMP)  ; LAB_0058ed95
    MOV EDI,0xbe0d3d86                  ; 0058eed4
        ;   Label: LAB_0058eed4
    MOV EAX,0xbde5c704                  ; 0058eed9
    MOV ESI,0x3e698e54                  ; 0058eede
    LEA EDX,[ESP + 0x84]                ; 0058eee3
    MOV dword ptr [ESP + 0xd0],EDI      ; 0058eeea
    MOV dword ptr [ESP + 0xd4],EAX      ; 0058eef1
    LEA EAX,[ESP + 0xcc]                ; 0058eef8
    MOV dword ptr [ESP + 0xcc],ESI      ; 0058eeff
    CMP EDX,EAX                         ; 0058ef06
    JZ 0x0058ef24                       ; 0058ef08
        ;   XREF to: 0058ef24 (CONDITIONAL_JUMP)  ; LAB_0058ef24
    MOV dword ptr [ESP + 0x84],ESI      ; 0058ef0a
    MOV ESI,0xbde5c704                  ; 0058ef11
    MOV dword ptr [ESP + 0x88],EDI      ; 0058ef16
    MOV dword ptr [ESP + 0x8c],ESI      ; 0058ef1d
    MOV EDI,0xbe8ed8b2                  ; 0058ef24
        ;   Label: LAB_0058ef24
    MOV EAX,0x3fc66a55                  ; 0058ef29
    MOV EDX,0x3fcad9be                  ; 0058ef2e
    LEA ESI,[ESP + 0x90]                ; 0058ef33
    MOV dword ptr [ESP + 0x90],EDI      ; 0058ef3a
    MOV dword ptr [ESP + 0x98],EAX      ; 0058ef41
    MOV dword ptr [ESP + 0x94],EDX      ; 0058ef48
    LEA EDI,[ESP + 0x78]                ; 0058ef4f
    LEA EDX,[ESP + 0x78]                ; 0058ef53
    LEA EAX,[ESP + 0x9c]                ; 0058ef57
    MOVSD ES:EDI,ESI                    ; 0058ef5e
    MOVSD ES:EDI,ESI                    ; 0058ef5f
    MOVSD ES:EDI,ESI                    ; 0058ef60
    CMP EAX,EDX                         ; 0058ef61
    JZ 0x0058ed9c                       ; 0058ef63
        ;   XREF to: 0058ed9c (CONDITIONAL_JUMP)  ; LAB_0058ed9c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0058ef69
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058ef6d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0058ef74
    MOV dword ptr [ESP + 0xa0],EAX      ; 0058ef78
    MOV EAX,dword ptr [ESP + 0x80]      ; 0058ef7f
    JMP 0x0058ed95                      ; 0058ef86
        ;   XREF to: 0058ed95 (UNCONDITIONAL_JUMP)  ; LAB_0058ed95
    MOV dword ptr [ESP + 0x88],ESI      ; 0058ef8b
        ;   Label: LAB_0058ef8b
    MOV dword ptr [ESP + 0x8c],EDI      ; 0058ef92
    MOV dword ptr [ESP + 0x84],ECX      ; 0058ef99
    JMP 0x0058ed46                      ; 0058efa0
        ;   XREF to: 0058ed46 (UNCONDITIONAL_JUMP)  ; LAB_0058ed46

