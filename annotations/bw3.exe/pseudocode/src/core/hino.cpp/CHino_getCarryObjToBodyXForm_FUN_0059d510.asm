; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_hino_cpp_CHino_getCarryObjToBodyXForm_FUN_0059d510(CHino *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CHino *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d510
        ;   Label: core_hino.cpp_CHino_getCarryObjToBodyXForm_FUN_0059d510
    PUSH EDI                            ; 0059d511
    PUSH EBP                            ; 0059d512
    SUB ESP,0x9c                        ; 0059d513
    MOV EBX,ESI                         ; 0059d519
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0059d51b
    LEA EAX,[ESI*0x8 + 0x0]             ; 0059d522
    MOV EDX,EAX                         ; 0059d529
    SHL EAX,0x4                         ; 0059d52b
    SUB EAX,EDX                         ; 0059d52e
    ADD EAX,dword ptr [ESP + 0xac]      ; 0059d530
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 0059d537
    TEST ESI,ESI                        ; 0059d53d
    JNZ 0x0059d5dd                      ; 0059d53f
        ;   XREF to: 0059d5dd (CONDITIONAL_JUMP)  ; LAB_0059d5dd
    MOV ESI,0xbe0d6063                  ; 0059d545
    MOV EDI,0xbcff05cf                  ; 0059d54a
    MOV ECX,0x3e0f5276                  ; 0059d54f
    LEA EDX,[ESP + 0x78]                ; 0059d554
    LEA EAX,[ESP + 0x6c]                ; 0059d558
    MOV dword ptr [ESP + 0x7c],ESI      ; 0059d55c
    MOV dword ptr [ESP + 0x80],EDI      ; 0059d560
    MOV dword ptr [ESP + 0x78],ECX      ; 0059d567
    CMP EAX,EDX                         ; 0059d56b
    JZ 0x0059d57b                       ; 0059d56d
        ;   XREF to: 0059d57b (CONDITIONAL_JUMP)  ; LAB_0059d57b
    MOV dword ptr [ESP + 0x70],ESI      ; 0059d56f
    MOV dword ptr [ESP + 0x74],EDI      ; 0059d573
    MOV dword ptr [ESP + 0x6c],ECX      ; 0059d577
    MOV EDI,0xbfc9f40a                  ; 0059d57b
        ;   Label: LAB_0059d57b
    MOV ESI,0x3e92f512                  ; 0059d580
    MOV EAX,0xbfd2646f                  ; 0059d585
    LEA EDX,[ESP + 0x60]                ; 0059d58a
    MOV dword ptr [ESP + 0x98],EDI      ; 0059d58e
    MOV dword ptr [ESP + 0x90],ESI      ; 0059d595
    LEA EDI,[ESP + 0x60]                ; 0059d59c
    LEA ESI,[ESP + 0x90]                ; 0059d5a0
    MOV dword ptr [ESP + 0x94],EAX      ; 0059d5a7
    LEA EAX,[ESP + 0x84]                ; 0059d5ae
    MOVSD ES:EDI,ESI                    ; 0059d5b5
    MOVSD ES:EDI,ESI                    ; 0059d5b6
    MOVSD ES:EDI,ESI                    ; 0059d5b7
    CMP EAX,EDX                         ; 0059d5b8
    JZ 0x0059d5dd                       ; 0059d5ba
        ;   XREF to: 0059d5dd (CONDITIONAL_JUMP)  ; LAB_0059d5dd
    MOV EAX,dword ptr [ESP + 0x60]      ; 0059d5bc
    MOV dword ptr [ESP + 0x84],EAX      ; 0059d5c0
    MOV EAX,dword ptr [ESP + 0x64]      ; 0059d5c7
    MOV dword ptr [ESP + 0x88],EAX      ; 0059d5cb
    MOV EAX,dword ptr [ESP + 0x68]      ; 0059d5d2
    MOV dword ptr [ESP + 0x8c],EAX      ; 0059d5d6
    LEA EAX,[ESP + 0x84]                ; 0059d5dd
        ;   Label: LAB_0059d5dd
    PUSH EAX                            ; 0059d5e4
    LEA EAX,[ESP + 0x70]                ; 0059d5e5
    PUSH EAX                            ; 0059d5e9
    LEA EAX,[ESP + 0x38]                ; 0059d5ea
    PUSH EAX                            ; 0059d5ee
    CALL core_xform.cpp_FUN_00583940    ; 0059d5ef
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059d5f4
    ADD ESP,0xc                         ; 0059d5fb
    SUB EAX,EBP                         ; 0059d5fe
    MOV EDX,dword ptr [ESP + 0xac]      ; 0059d600
    SHL EAX,0x4                         ; 0059d607
    ADD EDX,0xfd8                       ; 0059d60a
    ADD EAX,EDX                         ; 0059d610
    PUSH EAX                            ; 0059d612
    LEA EAX,[ESP + 0x34]                ; 0059d613
    PUSH EAX                            ; 0059d617
    LEA ESI,[ESP + 0x8]                 ; 0059d618
    MOV EDI,EBX                         ; 0059d61c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0059d61e
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0059d623
    LEA ESI,[ESP + 0x8]                 ; 0059d628
    ADD ESP,0x8                         ; 0059d62c
    MOVSD.REP ES:EDI,ESI                ; 0059d62f
    MOV EAX,EBX                         ; 0059d631
    ADD ESP,0x9c                        ; 0059d633
    POP EBP                             ; 0059d639
    POP EDI                             ; 0059d63a
    POP EBX                             ; 0059d63b
    RET                                 ; 0059d63c

