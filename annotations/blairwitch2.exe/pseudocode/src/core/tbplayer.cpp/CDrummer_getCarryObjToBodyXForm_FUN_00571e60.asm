; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00571e60(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571e60
        ;   Label: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00571e60
    PUSH EDI                            ; 00571e61
    PUSH EBP                            ; 00571e62
    SUB ESP,0xc0                        ; 00571e63
    MOV EBX,ESI                         ; 00571e69
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00571e6b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00571e72
    MOV EDX,EAX                         ; 00571e79
    SHL EAX,0x4                         ; 00571e7b
    SUB EAX,EDX                         ; 00571e7e
    ADD EAX,dword ptr [ESP + 0xd0]      ; 00571e80
    MOV EBP,dword ptr [EAX + 0x2618]    ; 00571e87
    TEST ESI,ESI                        ; 00571e8d
    JNZ 0x00571fa0                      ; 00571e8f
        ;   XREF to: 00571fa0 (CONDITIONAL_JUMP)  ; LAB_00571fa0
    MOV EDX,0x3f228f5c                  ; 00571e95
    MOV ECX,0xbde353f8                  ; 00571e9a
    MOV ESI,0xbe322d0e                  ; 00571e9f
    LEA EAX,[ESP + 0xb4]                ; 00571ea4
    MOV dword ptr [ESP + 0x84],EDX      ; 00571eab
    MOV dword ptr [ESP + 0x88],ECX      ; 00571eb2
    LEA EDX,[ESP + 0x84]                ; 00571eb9
    MOV dword ptr [ESP + 0x8c],ESI      ; 00571ec0
    CMP EAX,EDX                         ; 00571ec7
    JZ 0x00571ee5                       ; 00571ec9
        ;   XREF to: 00571ee5 (CONDITIONAL_JUMP)  ; LAB_00571ee5
    MOV EDI,0x3f228f5c                  ; 00571ecb
    MOV dword ptr [ESP + 0xb8],ECX      ; 00571ed0
    MOV dword ptr [ESP + 0xbc],ESI      ; 00571ed7
    MOV dword ptr [ESP + 0xb4],EDI      ; 00571ede
    LEA EDI,[ESP + 0x90]                ; 00571ee5
        ;   Label: LAB_00571ee5
    LEA ESI,[ESP + 0xa8]                ; 00571eec
    XOR ECX,ECX                         ; 00571ef3
    LEA EAX,[ESP + 0x90]                ; 00571ef5
    MOV dword ptr [ESP + 0xb0],ECX      ; 00571efc
    MOV dword ptr [ESP + 0xac],ECX      ; 00571f03
    MOV dword ptr [ESP + 0xa8],ECX      ; 00571f0a
    LEA EDX,[ESP + 0x78]                ; 00571f11
    MOVSD ES:EDI,ESI                    ; 00571f15
    MOVSD ES:EDI,ESI                    ; 00571f16
    MOVSD ES:EDI,ESI                    ; 00571f17
    CMP EDX,EAX                         ; 00571f18
    JZ 0x00571f40                       ; 00571f1a
        ;   XREF to: 00571f40 (CONDITIONAL_JUMP)  ; LAB_00571f40
    MOV EAX,dword ptr [ESP + 0x90]      ; 00571f1c
    MOV dword ptr [ESP + 0x78],EAX      ; 00571f23
    MOV EAX,dword ptr [ESP + 0x94]      ; 00571f27
    MOV dword ptr [ESP + 0x7c],EAX      ; 00571f2e
    MOV EAX,dword ptr [ESP + 0x98]      ; 00571f32
    MOV dword ptr [ESP + 0x80],EAX      ; 00571f39
        ;   Label: LAB_00571f39
    LEA EAX,[ESP + 0x78]                ; 00571f40
        ;   Label: LAB_00571f40
    PUSH EAX                            ; 00571f44
    LEA EAX,[ESP + 0xb8]                ; 00571f45
    PUSH EAX                            ; 00571f4c
    LEA EAX,[ESP + 0x8]                 ; 00571f4d
    PUSH EAX                            ; 00571f51
    CALL core_xform.cpp_FUN_00591c10    ; 00571f52
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EAX,[EBP*0x4 + 0x0]             ; 00571f57
    ADD ESP,0xc                         ; 00571f5e
    SUB EAX,EBP                         ; 00571f61
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00571f63
    SHL EAX,0x4                         ; 00571f6a
    ADD EDX,0x1134                      ; 00571f6d
    ADD EAX,EDX                         ; 00571f73
    PUSH EAX                            ; 00571f75
    LEA EAX,[ESP + 0x4]                 ; 00571f76
    PUSH EAX                            ; 00571f7a
    LEA ESI,[ESP + 0x38]                ; 00571f7b
    MOV EDI,EBX                         ; 00571f7f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00571f81
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00571f86
    LEA ESI,[ESP + 0x38]                ; 00571f8b
    ADD ESP,0x8                         ; 00571f8f
    MOVSD.REP ES:EDI,ESI                ; 00571f92
    MOV EAX,EBX                         ; 00571f94
    ADD ESP,0xc0                        ; 00571f96
    POP EBP                             ; 00571f9c
    POP EDI                             ; 00571f9d
    POP EBX                             ; 00571f9e
    RET                                 ; 00571f9f
    MOV ESI,0xbde353f8                  ; 00571fa0
        ;   Label: LAB_00571fa0
    MOV EDI,0xbe322d0e                  ; 00571fa5
    MOV ECX,0xbf228f5c                  ; 00571faa
    LEA EAX,[ESP + 0x60]                ; 00571faf
    LEA EDX,[ESP + 0xb4]                ; 00571fb3
    MOV dword ptr [ESP + 0x64],ESI      ; 00571fba
    MOV dword ptr [ESP + 0x68],EDI      ; 00571fbe
    MOV dword ptr [ESP + 0x60],ECX      ; 00571fc2
    CMP EDX,EAX                         ; 00571fc6
    JZ 0x00571fdf                       ; 00571fc8
        ;   XREF to: 00571fdf (CONDITIONAL_JUMP)  ; LAB_00571fdf
    MOV dword ptr [ESP + 0xb8],ESI      ; 00571fca
    MOV dword ptr [ESP + 0xbc],EDI      ; 00571fd1
    MOV dword ptr [ESP + 0xb4],ECX      ; 00571fd8
    XOR ESI,ESI                         ; 00571fdf
        ;   Label: LAB_00571fdf
    LEA EDI,[ESP + 0x9c]                ; 00571fe1
    MOV dword ptr [ESP + 0x74],ESI      ; 00571fe8
    MOV dword ptr [ESP + 0x70],ESI      ; 00571fec
    MOV dword ptr [ESP + 0x6c],ESI      ; 00571ff0
    LEA ESI,[ESP + 0x6c]                ; 00571ff4
    LEA EAX,[ESP + 0x9c]                ; 00571ff8
    LEA EDX,[ESP + 0x78]                ; 00571fff
    MOVSD ES:EDI,ESI                    ; 00572003
    MOVSD ES:EDI,ESI                    ; 00572004
    MOVSD ES:EDI,ESI                    ; 00572005
    CMP EDX,EAX                         ; 00572006
    JZ 0x00571f40                       ; 00572008
        ;   XREF to: 00571f40 (CONDITIONAL_JUMP)  ; LAB_00571f40
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0057200e
    MOV dword ptr [ESP + 0x78],EAX      ; 00572015
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00572019
    MOV dword ptr [ESP + 0x7c],EAX      ; 00572020
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572024
    JMP 0x00571f39                      ; 0057202b
        ;   XREF to: 00571f39 (UNCONDITIONAL_JUMP)  ; LAB_00571f39

