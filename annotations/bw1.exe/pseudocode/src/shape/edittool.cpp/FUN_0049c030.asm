; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049c030(int *param_1,int param_2,int param_3)
;
;
; XREF[4]:
;   FUN_0049c290 at 0049c2c4
;   FUN_0049c310 at 0049c34a
;   FUN_0049c470 at 0049c4a8
;   FUN_004cf5e0 at 004cfffa
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc6d0
;   TerminatedCString s_CPickList_enableItem_inv_005dc6e6
;   TerminatedCString s_shape_edittool_cpp_005dc70c
;   TerminatedCString s_Out_of_memory_005dc722
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c030
        ;   Label: FUN_0049c030
    PUSH ESI                            ; 0049c031
    PUSH EDI                            ; 0049c032
    PUSH EBP                            ; 0049c033
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049c034
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049c038
    TEST ESI,ESI                        ; 0049c03c
    JL 0x0049c044                       ; 0049c03e
        ;   XREF to: 0049c044 (CONDITIONAL_JUMP)  ; LAB_0049c044
    CMP ESI,dword ptr [EBX]             ; 0049c040
    JL 0x0049c067                       ; 0049c042
        ;   XREF to: 0049c067 (CONDITIONAL_JUMP)  ; LAB_0049c067
    MOV ECX,0x5dc6d0                    ; 0049c044 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049c044
    MOV EDI,0x116c                      ; 0049c049
    PUSH 0x5dc6e6                       ; 0049c04e | = "CPickList::enableItem - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 0049c053 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0049c059 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049c05f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049c064
    CMP ESI,dword ptr [EBX + 0x1ac]     ; 0049c067
        ;   Label: LAB_0049c067
    JL 0x0049c0e3                       ; 0049c06d
        ;   XREF to: 0049c0e3 (CONDITIONAL_JUMP)  ; LAB_0049c0e3
    CMP dword ptr [ESP + 0x1c],0x0      ; 0049c073
    JNZ 0x0049c0f9                      ; 0049c078
        ;   XREF to: 0049c0f9 (CONDITIONAL_JUMP)  ; LAB_0049c0f9
    MOV EAX,dword ptr [EBX]             ; 0049c07e
    SHL EAX,0x2                         ; 0049c080
    PUSH EAX                            ; 0049c083
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 0049c084
    PUSH EDX                            ; 0049c08a
    CALL FUN_005c10d0                   ; 0049c08b
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0049c090
    MOV dword ptr [EBX + 0x1b0],EAX     ; 0049c093
    TEST EAX,EAX                        ; 0049c099
    JZ 0x0049c0be                       ; 0049c09b
        ;   XREF to: 0049c0be (CONDITIONAL_JUMP)  ; LAB_0049c0be
    MOV EDX,dword ptr [EBX]             ; 0049c09d
        ;   Label: LAB_0049c09d
    MOV EAX,dword ptr [EBX + 0x1ac]     ; 0049c09f
    CMP EAX,EDX                         ; 0049c0a5
    JGE 0x0049c0e3                      ; 0049c0a7
        ;   XREF to: 0049c0e3 (CONDITIONAL_JUMP)  ; LAB_0049c0e3
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 0049c0a9
    MOV dword ptr [EDX + EAX*0x4],0x1   ; 0049c0af
    INC dword ptr [EBX + 0x1ac]         ; 0049c0b6
    JMP 0x0049c09d                      ; 0049c0bc
        ;   XREF to: 0049c09d (UNCONDITIONAL_JUMP)  ; LAB_0049c09d
    MOV EDI,0x5dc70c                    ; 0049c0be | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049c0be
    MOV EBP,0x1174                      ; 0049c0c3
    PUSH 0x5dc722                       ; 0049c0c8 | = "Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 0049c0cd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0049c0d3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049c0d9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049c0de
    JMP 0x0049c09d                      ; 0049c0e1
        ;   XREF to: 0049c09d (UNCONDITIONAL_JUMP)  ; LAB_0049c09d
    CMP dword ptr [ESP + 0x1c],0x0      ; 0049c0e3
        ;   Label: LAB_0049c0e3
    SETNZ AL                            ; 0049c0e8
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 0049c0eb
    AND EAX,0xff                        ; 0049c0f1
    MOV dword ptr [EDX + ESI*0x4],EAX   ; 0049c0f6
    POP EBP                             ; 0049c0f9
        ;   Label: LAB_0049c0f9
    POP EDI                             ; 0049c0fa
    POP ESI                             ; 0049c0fb
    POP EBX                             ; 0049c0fc
    RET                                 ; 0049c0fd

