; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900 at 00484912
;   shape_edittool.cpp_FUN_00484440 at 0048444d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2abe
;   TerminatedCString s_CEdScrollBar_computeThum_005d2ad4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004847e0
        ;   Label: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0
    PUSH ESI                            ; 004847e1
    PUSH EDI                            ; 004847e2
    PUSH EBP                            ; 004847e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004847e4
    MOV EDX,dword ptr [EBX + 0x4]       ; 004847e8
    CMP EDX,dword ptr [EBX + 0x8]       ; 004847eb
    JLE 0x00484899                      ; 004847ee
        ;   XREF to: 00484899 (CONDITIONAL_JUMP)  ; LAB_00484899
    CMP EDX,0x1                         ; 004847f4
    JL 0x00484899                       ; 004847f7
        ;   XREF to: 00484899 (CONDITIONAL_JUMP)  ; LAB_00484899
    MOV EDI,dword ptr [EBX + 0x24]      ; 004847fd
    MOV ESI,dword ptr [EBX + 0x28]      ; 00484800
    SUB ESI,EDI                         ; 00484803
    CMP ESI,0x1                         ; 00484805
    JL 0x004848aa                       ; 00484808
        ;   XREF to: 004848aa (CONDITIONAL_JUMP)  ; LAB_004848aa
    MOV EDX,dword ptr [EBX + 0x8]       ; 0048480e
        ;   Label: LAB_0048480e
    IMUL EDX,ESI                        ; 00484811
    MOV ECX,dword ptr [EBX + 0x4]       ; 00484814
    MOV EAX,EDX                         ; 00484817
    SAR EDX,0x1f                        ; 00484819
    IDIV ECX                            ; 0048481c
    MOV EDI,dword ptr [EBX + 0x10]      ; 0048481e
    MOV ECX,EAX                         ; 00484821
    TEST EDI,EDI                        ; 00484823
    JZ 0x004848d1                       ; 00484825
        ;   XREF to: 004848d1 (CONDITIONAL_JUMP)  ; LAB_004848d1
    MOV EAX,dword ptr [EBX + 0x18]      ; 0048482b
    MOV EDX,dword ptr [EBX + 0x20]      ; 0048482e
    SUB EDX,EAX                         ; 00484831
    CMP ECX,EDX                         ; 00484833
    JGE 0x00484839                      ; 00484835
        ;   XREF to: 00484839 (CONDITIONAL_JUMP)  ; LAB_00484839
        ;   Label: LAB_00484835
    MOV ECX,EDX                         ; 00484837
    CMP ECX,ESI                         ; 00484839
        ;   Label: LAB_00484839
    JLE 0x0048483f                      ; 0048483b
        ;   XREF to: 0048483f (CONDITIONAL_JUMP)  ; LAB_0048483f
    MOV ECX,ESI                         ; 0048483d
    MOV EDI,dword ptr [EBX + 0x8]       ; 0048483f
        ;   Label: LAB_0048483f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00484842
    SUB EDX,EDI                         ; 00484845
    MOV EDI,EDX                         ; 00484847
    MOV EDX,ESI                         ; 00484849
    MOV EBP,dword ptr [EBX]             ; 0048484b
    SUB EDX,ECX                         ; 0048484d
    IMUL EDX,EBP                        ; 0048484f
    MOV EAX,EDX                         ; 00484852
    SAR EDX,0x1f                        ; 00484854
    IDIV EDI                            ; 00484857
    MOV EDX,dword ptr [EBX + 0x24]      ; 00484859
    ADD EDX,EAX                         ; 0048485c
    MOV dword ptr [EBX + 0x2c],EDX      ; 0048485e
    MOV EAX,EDX                         ; 00484861
    MOV EDX,dword ptr [EBX + 0x24]      ; 00484863
    CMP EAX,EDX                         ; 00484866
    JGE 0x0048486d                      ; 00484868
        ;   XREF to: 0048486d (CONDITIONAL_JUMP)  ; LAB_0048486d
    MOV dword ptr [EBX + 0x2c],EDX      ; 0048486a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0048486d
        ;   Label: LAB_0048486d
    ADD EDX,ECX                         ; 00484870
    MOV ECX,dword ptr [EBX + 0x28]      ; 00484872
    MOV dword ptr [EBX + 0x30],EDX      ; 00484875
    CMP EDX,ECX                         ; 00484878
    JLE 0x0048488c                      ; 0048487a
        ;   XREF to: 0048488c (CONDITIONAL_JUMP)  ; LAB_0048488c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0048487c
    SUB EDX,ECX                         ; 0048487f
    MOV EAX,dword ptr [EBX + 0x28]      ; 00484881
    SUB EDI,EDX                         ; 00484884
    MOV dword ptr [EBX + 0x30],EAX      ; 00484886
    MOV dword ptr [EBX + 0x2c],EDI      ; 00484889
    MOV EBP,dword ptr [EBX + 0x24]      ; 0048488c
        ;   Label: LAB_0048488c
    CMP EBP,dword ptr [EBX + 0x2c]      ; 0048488f
    JG 0x004848e0                       ; 00484892
        ;   XREF to: 004848e0 (CONDITIONAL_JUMP)  ; LAB_004848e0
    POP EBP                             ; 00484894
    POP EDI                             ; 00484895
    POP ESI                             ; 00484896
    POP EBX                             ; 00484897
    RET                                 ; 00484898
    MOV EAX,dword ptr [EBX + 0x24]      ; 00484899
        ;   Label: LAB_00484899
    MOV dword ptr [EBX + 0x2c],EAX      ; 0048489c
    MOV EAX,dword ptr [EBX + 0x28]      ; 0048489f
    MOV dword ptr [EBX + 0x30],EAX      ; 004848a2
    POP EBP                             ; 004848a5
    POP EDI                             ; 004848a6
    POP ESI                             ; 004848a7
    POP EBX                             ; 004848a8
    RET                                 ; 004848a9
    MOV EBP,0x5d2abe                    ; 004848aa | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004848aa
    MOV EAX,0x124a                      ; 004848af
    PUSH 0x5d2ad4                       ; 004848b4 | = "CEdScrollBar::computeThumb - invalid ..."
    MOV dword ptr [0x01d046a0],EBP      ; 004848b9 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004848bf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004848c4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004848c9
    JMP 0x0048480e                      ; 004848cc
        ;   XREF to: 0048480e (UNCONDITIONAL_JUMP)  ; LAB_0048480e
    MOV EBP,dword ptr [EBX + 0x14]      ; 004848d1
        ;   Label: LAB_004848d1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004848d4
    SUB EDX,EBP                         ; 004848d7
    CMP EAX,EDX                         ; 004848d9
    JMP 0x00484835                      ; 004848db
        ;   XREF to: 00484835 (UNCONDITIONAL_JUMP)  ; LAB_00484835
    MOV dword ptr [EBX + 0x2c],EBP      ; 004848e0
        ;   Label: LAB_004848e0
    POP EBP                             ; 004848e3
    POP EDI                             ; 004848e4
    POP ESI                             ; 004848e5
    POP EBX                             ; 004848e6
    RET                                 ; 004848e7

