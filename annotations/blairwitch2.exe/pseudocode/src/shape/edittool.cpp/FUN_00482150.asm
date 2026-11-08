; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482150(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_004eed60 at 004efa6a
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2876
;   TerminatedCString s_CPickList_setOkButtonTex_005d288c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00482150
        ;   Label: FUN_00482150
    MOV ESI,dword ptr [ESP + 0xc]       ; 00482151
    TEST ESI,ESI                        ; 00482155
    JNZ 0x00482163                      ; 00482157
        ;   XREF to: 00482163 (CONDITIONAL_JUMP)  ; LAB_00482163
    MOV ECX,dword ptr [ESP + 0x8]       ; 00482159
    MOV byte ptr [ECX + 0x5c],0x0       ; 0048215d
    POP ESI                             ; 00482161
    RET                                 ; 00482162
    PUSH EDI                            ; 00482163
        ;   Label: LAB_00482163
    MOV EDI,ESI                         ; 00482164
    SUB ECX,ECX                         ; 00482166
    DEC ECX                             ; 00482168
    XOR EAX,EAX                         ; 00482169
    SCASB.REPNE ES:EDI                  ; 0048216b
    NOT ECX                             ; 0048216d
    DEC ECX                             ; 0048216f
    CMP ECX,0x64                        ; 00482170
    JC 0x00482198                       ; 00482173
        ;   XREF to: 00482198 (CONDITIONAL_JUMP)  ; LAB_00482198
    MOV EDX,0x5d2876                    ; 00482175 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xe3a                       ; 0048217a
    PUSH 0x5d288c                       ; 0048217f | = "CPickList::setOkButtonText - too long!"
    MOV dword ptr [0x01d046a0],EDX      ; 00482184 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0048218a | DAT_01d046a4
    CALL FUN_004e4500                   ; 00482190
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00482195
    MOV EDI,dword ptr [ESP + 0xc]       ; 00482198
        ;   Label: LAB_00482198
    ADD EDI,0x5c                        ; 0048219c
    PUSH EDI                            ; 0048219f
    MOV AL,byte ptr [ESI]               ; 004821a0
        ;   Label: LAB_004821a0
    MOV byte ptr [EDI],AL               ; 004821a2
    CMP AL,0x0                          ; 004821a4
    JZ 0x004821b8                       ; 004821a6
        ;   XREF to: 004821b8 (CONDITIONAL_JUMP)  ; LAB_004821b8
    MOV AL,byte ptr [ESI + 0x1]         ; 004821a8
    ADD ESI,0x2                         ; 004821ab
    MOV byte ptr [EDI + 0x1],AL         ; 004821ae
    ADD EDI,0x2                         ; 004821b1
    CMP AL,0x0                          ; 004821b4
    JNZ 0x004821a0                      ; 004821b6
        ;   XREF to: 004821a0 (CONDITIONAL_JUMP)  ; LAB_004821a0
    POP EDI                             ; 004821b8
        ;   Label: LAB_004821b8
    POP EDI                             ; 004821b9
    POP ESI                             ; 004821ba
    RET                                 ; 004821bb

