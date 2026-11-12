; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004d57e0(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   TerminatedCString s_core_icepick_cpp_005da86e
;   TerminatedCString s_CIcePick_getCarryObjToBo_005da882
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d57e0
        ;   Label: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004d57e0
    PUSH EDI                            ; 004d57e1
    PUSH EBP                            ; 004d57e2
    SUB ESP,0x9c                        ; 004d57e3
    MOV EBX,ESI                         ; 004d57e9
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004d57eb
    LEA EAX,[ESI*0x8 + 0x0]             ; 004d57f2
    MOV EDX,EAX                         ; 004d57f9
    SHL EAX,0x4                         ; 004d57fb
    SUB EAX,EDX                         ; 004d57fe
    ADD EAX,dword ptr [ESP + 0xac]      ; 004d5800
    MOV EBP,dword ptr [EAX + 0x2618]    ; 004d5807
    CMP ESI,0x1                         ; 004d580d
    JNZ 0x004d5921                      ; 004d5810
        ;   XREF to: 004d5921 (CONDITIONAL_JUMP)  ; LAB_004d5921
    MOV EAX,0xbe6a7efa                  ; 004d5816
    MOV EDX,0xbca3d70a                  ; 004d581b
    MOV EDI,0x3ee66666                  ; 004d5820
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d5825
    MOV dword ptr [ESP + 0x80],EDX      ; 004d5829
    LEA EAX,[ESP + 0x78]                ; 004d5830
    LEA EDX,[ESP + 0x6c]                ; 004d5834
    MOV dword ptr [ESP + 0x78],EDI      ; 004d5838
    CMP EDX,EAX                         ; 004d583c
    JNZ 0x004d5906                      ; 004d583e
        ;   XREF to: 004d5906 (CONDITIONAL_JUMP)  ; LAB_004d5906
    MOV EAX,0xbec7ae14                  ; 004d5844
        ;   Label: LAB_004d5844
    MOV EDX,0x3fb76c8b                  ; 004d5849
    MOV ECX,0x3f96872b                  ; 004d584e
    LEA EDI,[ESP + 0x60]                ; 004d5853
    LEA ESI,[ESP + 0x90]                ; 004d5857
    MOV dword ptr [ESP + 0x90],EAX      ; 004d585e
    MOV dword ptr [ESP + 0x98],EDX      ; 004d5865
    MOV dword ptr [ESP + 0x94],ECX      ; 004d586c
    LEA EAX,[ESP + 0x60]                ; 004d5873
    LEA EDX,[ESP + 0x84]                ; 004d5877
    MOVSD ES:EDI,ESI                    ; 004d587e
    MOVSD ES:EDI,ESI                    ; 004d587f
    MOVSD ES:EDI,ESI                    ; 004d5880
    CMP EDX,EAX                         ; 004d5881
    JZ 0x004d58a6                       ; 004d5883
        ;   XREF to: 004d58a6 (CONDITIONAL_JUMP)  ; LAB_004d58a6
    MOV EAX,dword ptr [ESP + 0x60]      ; 004d5885
    MOV dword ptr [ESP + 0x84],EAX      ; 004d5889
    MOV EAX,dword ptr [ESP + 0x64]      ; 004d5890
    MOV dword ptr [ESP + 0x88],EAX      ; 004d5894
    MOV EAX,dword ptr [ESP + 0x68]      ; 004d589b
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d589f
    LEA EAX,[ESP + 0x84]                ; 004d58a6
        ;   Label: LAB_004d58a6
    PUSH EAX                            ; 004d58ad
    LEA EAX,[ESP + 0x70]                ; 004d58ae
    PUSH EAX                            ; 004d58b2
    LEA EAX,[ESP + 0x38]                ; 004d58b3
    PUSH EAX                            ; 004d58b7
    CALL core_xform.cpp_FUN_00591c10    ; 004d58b8
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EAX,[EBP*0x4 + 0x0]             ; 004d58bd
    ADD ESP,0xc                         ; 004d58c4
    SUB EAX,EBP                         ; 004d58c7
    MOV EDX,dword ptr [ESP + 0xac]      ; 004d58c9
    SHL EAX,0x4                         ; 004d58d0
    ADD EDX,0x1134                      ; 004d58d3
    ADD EAX,EDX                         ; 004d58d9
    PUSH EAX                            ; 004d58db
    LEA EAX,[ESP + 0x34]                ; 004d58dc
    PUSH EAX                            ; 004d58e0
    LEA ESI,[ESP + 0x8]                 ; 004d58e1
    MOV EDI,EBX                         ; 004d58e5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d58e7
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d58ec
    LEA ESI,[ESP + 0x8]                 ; 004d58f1
    ADD ESP,0x8                         ; 004d58f5
    MOVSD.REP ES:EDI,ESI                ; 004d58f8
    MOV EAX,EBX                         ; 004d58fa
    ADD ESP,0x9c                        ; 004d58fc
    POP EBP                             ; 004d5902
    POP EDI                             ; 004d5903
    POP EBX                             ; 004d5904
    RET                                 ; 004d5905
    MOV ESI,0xbe6a7efa                  ; 004d5906
        ;   Label: LAB_004d5906
    MOV dword ptr [ESP + 0x6c],EDI      ; 004d590b
    MOV EDI,0xbca3d70a                  ; 004d590f
    MOV dword ptr [ESP + 0x70],ESI      ; 004d5914
    MOV dword ptr [ESP + 0x74],EDI      ; 004d5918
    JMP 0x004d5844                      ; 004d591c
        ;   XREF to: 004d5844 (UNCONDITIONAL_JUMP)  ; LAB_004d5844
    MOV ECX,0x5da86e                    ; 004d5921 | = "..\\core\\icepick.cpp"
        ;   Label: LAB_004d5921
    MOV ESI,0x289                       ; 004d5926
    PUSH 0x5da882                       ; 004d592b | = "CIcePick::getCarryObjToBodyXForm - wr..."
    MOV dword ptr [0x01d046a0],ECX      ; 004d5930 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004d5936 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d593c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d5941
    JMP 0x004d58a6                      ; 004d5944
        ;   XREF to: 004d58a6 (UNCONDITIONAL_JUMP)  ; LAB_004d58a6

