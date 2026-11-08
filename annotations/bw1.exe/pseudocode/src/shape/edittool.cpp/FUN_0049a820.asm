; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a820(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_0050d640 at 0050e66e
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc64c
;   TerminatedCString s_CPickList_setCancelButto_005dc662
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049a820
        ;   Label: FUN_0049a820
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049a821
    TEST ESI,ESI                        ; 0049a825
    JNZ 0x0049a836                      ; 0049a827
        ;   XREF to: 0049a836 (CONDITIONAL_JUMP)  ; LAB_0049a836
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049a829
    MOV byte ptr [ECX + 0xc0],0x0       ; 0049a82d
    POP ESI                             ; 0049a834
    RET                                 ; 0049a835
    PUSH EDI                            ; 0049a836
        ;   Label: LAB_0049a836
    MOV EDI,ESI                         ; 0049a837
    SUB ECX,ECX                         ; 0049a839
    DEC ECX                             ; 0049a83b
    XOR EAX,EAX                         ; 0049a83c
    SCASB.REPNE ES:EDI                  ; 0049a83e
    NOT ECX                             ; 0049a840
    DEC ECX                             ; 0049a842
    CMP ECX,0x64                        ; 0049a843
    JC 0x0049a86b                       ; 0049a846
        ;   XREF to: 0049a86b (CONDITIONAL_JUMP)  ; LAB_0049a86b
    MOV EDX,0x5dc64c                    ; 0049a848 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xec4                       ; 0049a84d
    PUSH 0x5dc662                       ; 0049a852 | = "CPickList::setCancelButtonText - too ..."
    MOV dword ptr [0x01d1d400],EDX      ; 0049a857 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0049a85d | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049a863
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049a868
    MOV EDI,dword ptr [ESP + 0xc]       ; 0049a86b
        ;   Label: LAB_0049a86b
    ADD EDI,0xc0                        ; 0049a86f
    PUSH EDI                            ; 0049a875
    MOV AL,byte ptr [ESI]               ; 0049a876
        ;   Label: LAB_0049a876
    MOV byte ptr [EDI],AL               ; 0049a878
    CMP AL,0x0                          ; 0049a87a
    JZ 0x0049a88e                       ; 0049a87c
        ;   XREF to: 0049a88e (CONDITIONAL_JUMP)  ; LAB_0049a88e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a87e
    ADD ESI,0x2                         ; 0049a881
    MOV byte ptr [EDI + 0x1],AL         ; 0049a884
    ADD EDI,0x2                         ; 0049a887
    CMP AL,0x0                          ; 0049a88a
    JNZ 0x0049a876                      ; 0049a88c
        ;   XREF to: 0049a876 (CONDITIONAL_JUMP)  ; LAB_0049a876
    POP EDI                             ; 0049a88e
        ;   Label: LAB_0049a88e
    POP EDI                             ; 0049a88f
    POP ESI                             ; 0049a890
    RET                                 ; 0049a891

