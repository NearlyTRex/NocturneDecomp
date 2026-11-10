; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_styldemo_cpp_CStylerDemon_getCarryObjToBodyXForm_FUN_005a07c0(CStylerDemon *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a07c0
        ;   Label: core_styldemo.cpp_CStylerDemon_getCarryObjToBodyXForm_FUN_005a07c0
    PUSH EDI                            ; 005a07c1
    PUSH EBP                            ; 005a07c2
    SUB ESP,0x9c                        ; 005a07c3
    MOV EBX,ESI                         ; 005a07c9
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005a07cb
    LEA EAX,[ESI*0x8 + 0x0]             ; 005a07d2
    MOV EDX,EAX                         ; 005a07d9
    SHL EAX,0x4                         ; 005a07db
    SUB EAX,EDX                         ; 005a07de
    ADD EAX,dword ptr [ESP + 0xac]      ; 005a07e0
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 005a07e7
    TEST ESI,ESI                        ; 005a07ed
    JNZ 0x005a088d                      ; 005a07ef
        ;   XREF to: 005a088d (CONDITIONAL_JUMP)  ; LAB_005a088d
    MOV ESI,0xbf4a875d                  ; 005a07f5
    MOV EDI,0x3f153598                  ; 005a07fa
    MOV ECX,0x3f32424a                  ; 005a07ff
    LEA EDX,[ESP + 0x78]                ; 005a0804
    LEA EAX,[ESP + 0x6c]                ; 005a0808
    MOV dword ptr [ESP + 0x7c],ESI      ; 005a080c
    MOV dword ptr [ESP + 0x80],EDI      ; 005a0810
    MOV dword ptr [ESP + 0x78],ECX      ; 005a0817
    CMP EAX,EDX                         ; 005a081b
    JZ 0x005a082b                       ; 005a081d
        ;   XREF to: 005a082b (CONDITIONAL_JUMP)  ; LAB_005a082b
    MOV dword ptr [ESP + 0x70],ESI      ; 005a081f
    MOV dword ptr [ESP + 0x74],EDI      ; 005a0823
    MOV dword ptr [ESP + 0x6c],ECX      ; 005a0827
    MOV EDI,0xbff539eb                  ; 005a082b
        ;   Label: LAB_005a082b
    MOV ESI,0x3f2e9521                  ; 005a0830
    MOV EAX,0x402af473                  ; 005a0835
    LEA EDX,[ESP + 0x60]                ; 005a083a
    MOV dword ptr [ESP + 0x98],EDI      ; 005a083e
    MOV dword ptr [ESP + 0x90],ESI      ; 005a0845
    LEA EDI,[ESP + 0x60]                ; 005a084c
    LEA ESI,[ESP + 0x90]                ; 005a0850
    MOV dword ptr [ESP + 0x94],EAX      ; 005a0857
    LEA EAX,[ESP + 0x84]                ; 005a085e
    MOVSD ES:EDI,ESI                    ; 005a0865
    MOVSD ES:EDI,ESI                    ; 005a0866
    MOVSD ES:EDI,ESI                    ; 005a0867
    CMP EAX,EDX                         ; 005a0868
    JZ 0x005a088d                       ; 005a086a
        ;   XREF to: 005a088d (CONDITIONAL_JUMP)  ; LAB_005a088d
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a086c
    MOV dword ptr [ESP + 0x84],EAX      ; 005a0870
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a0877
    MOV dword ptr [ESP + 0x88],EAX      ; 005a087b
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a0882
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a0886
    LEA EAX,[ESP + 0x84]                ; 005a088d
        ;   Label: LAB_005a088d
    PUSH EAX                            ; 005a0894
    LEA EAX,[ESP + 0x70]                ; 005a0895
    PUSH EAX                            ; 005a0899
    LEA EAX,[ESP + 0x38]                ; 005a089a
    PUSH EAX                            ; 005a089e
    CALL core_xform.cpp_FUN_00583940    ; 005a089f
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 005a08a4
    ADD ESP,0xc                         ; 005a08ab
    SUB EAX,EBP                         ; 005a08ae
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a08b0
    SHL EAX,0x4                         ; 005a08b7
    ADD EDX,0xfd8                       ; 005a08ba
    ADD EAX,EDX                         ; 005a08c0
    PUSH EAX                            ; 005a08c2
    LEA EAX,[ESP + 0x34]                ; 005a08c3
    PUSH EAX                            ; 005a08c7
    LEA ESI,[ESP + 0x8]                 ; 005a08c8
    MOV EDI,EBX                         ; 005a08cc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 005a08ce
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 005a08d3
    LEA ESI,[ESP + 0x8]                 ; 005a08d8
    ADD ESP,0x8                         ; 005a08dc
    MOVSD.REP ES:EDI,ESI                ; 005a08df
    MOV EAX,EBX                         ; 005a08e1
    ADD ESP,0x9c                        ; 005a08e3
    POP EBP                             ; 005a08e9
    POP EDI                             ; 005a08ea
    POP EBX                             ; 005a08eb
    RET                                 ; 005a08ec

