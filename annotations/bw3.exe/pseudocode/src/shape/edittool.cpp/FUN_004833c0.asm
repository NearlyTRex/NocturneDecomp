; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004833c0(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_004eae80 at 004ebdac
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd709
;   TerminatedCString s_CPickList_setCancelButto_005bd71f
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004833c0
        ;   Label: FUN_004833c0
    MOV ESI,dword ptr [ESP + 0xc]       ; 004833c1
    TEST ESI,ESI                        ; 004833c5
    JNZ 0x004833d6                      ; 004833c7
        ;   XREF to: 004833d6 (CONDITIONAL_JUMP)  ; LAB_004833d6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004833c9
    MOV byte ptr [ECX + 0xc0],0x0       ; 004833cd
    POP ESI                             ; 004833d4
    RET                                 ; 004833d5
    PUSH EDI                            ; 004833d6
        ;   Label: LAB_004833d6
    MOV EDI,ESI                         ; 004833d7
    SUB ECX,ECX                         ; 004833d9
    DEC ECX                             ; 004833db
    XOR EAX,EAX                         ; 004833dc
    SCASB.REPNE ES:EDI                  ; 004833de
    NOT ECX                             ; 004833e0
    DEC ECX                             ; 004833e2
    CMP ECX,0x64                        ; 004833e3
    JC 0x0048340b                       ; 004833e6
        ;   XREF to: 0048340b (CONDITIONAL_JUMP)  ; LAB_0048340b
    MOV EDX,0x5bd709                    ; 004833e8 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xec7                       ; 004833ed
    PUSH 0x5bd71f                       ; 004833f2 | = "CPickList::setCancelButtonText - too ..."
    MOV dword ptr [0x01d71de0],EDX      ; 004833f7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004833fd | DAT_01d71de4
    CALL FUN_004e4330                   ; 00483403
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00483408
    MOV EDI,dword ptr [ESP + 0xc]       ; 0048340b
        ;   Label: LAB_0048340b
    ADD EDI,0xc0                        ; 0048340f
    PUSH EDI                            ; 00483415
    MOV AL,byte ptr [ESI]               ; 00483416
        ;   Label: LAB_00483416
    MOV byte ptr [EDI],AL               ; 00483418
    CMP AL,0x0                          ; 0048341a
    JZ 0x0048342e                       ; 0048341c
        ;   XREF to: 0048342e (CONDITIONAL_JUMP)  ; LAB_0048342e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048341e
    ADD ESI,0x2                         ; 00483421
    MOV byte ptr [EDI + 0x1],AL         ; 00483424
    ADD EDI,0x2                         ; 00483427
    CMP AL,0x0                          ; 0048342a
    JNZ 0x00483416                      ; 0048342c
        ;   XREF to: 00483416 (CONDITIONAL_JUMP)  ; LAB_00483416
    POP EDI                             ; 0048342e
        ;   Label: LAB_0048342e
    POP EDI                             ; 0048342f
    POP ESI                             ; 00483430
    RET                                 ; 00483431

