; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004823d0(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00484f80 at 00484ff9
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd54c
;   TerminatedCString s_CStrList_sort_invalid_ra_005bd562
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a29e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004823d0
        ;   Label: FUN_004823d0
    PUSH ESI                            ; 004823d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004823d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004823d6
    CMP EBX,ESI                         ; 004823da
    JGE 0x00482431                      ; 004823dc
        ;   XREF to: 00482431 (CONDITIONAL_JUMP)  ; LAB_00482431
    TEST EBX,EBX                        ; 004823de
    JL 0x004823ea                       ; 004823e0
        ;   XREF to: 004823ea (CONDITIONAL_JUMP)  ; LAB_004823ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 004823e2
    CMP ESI,dword ptr [EAX]             ; 004823e6
    JL 0x0048240f                       ; 004823e8
        ;   XREF to: 0048240f (CONDITIONAL_JUMP)  ; LAB_0048240f
    PUSH EDI                            ; 004823ea
        ;   Label: LAB_004823ea
    MOV ECX,0x5bd54c                    ; 004823eb | = "..\\shape\\edittool.cpp"
    MOV EDI,0xca6                       ; 004823f0
    PUSH 0x5bd562                       ; 004823f5 | = "CStrList::sort - invalid range!"
    MOV dword ptr [0x01d71de0],ECX      ; 004823fa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00482400 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00482406
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0048240b
    POP EDI                             ; 0048240e
    MOV EAX,ESI                         ; 0048240f
        ;   Label: LAB_0048240f
    PUSH 0x4823b0                       ; 00482411 | LAB_004823b0
    SUB EAX,EBX                         ; 00482416
    PUSH 0x4                            ; 00482418
    INC EAX                             ; 0048241a
    PUSH EAX                            ; 0048241b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048241c
    SHL EBX,0x2                         ; 00482420
    MOV EAX,dword ptr [EAX + 0x8]       ; 00482423
    ADD EAX,EBX                         ; 00482426
    PUSH EAX                            ; 00482428
    CALL FUN_005a29e8                   ; 00482429
        ;   XREF to: 005a29e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005a29e8()
    ADD ESP,0x10                        ; 0048242e
    POP ESI                             ; 00482431
        ;   Label: LAB_00482431
    POP EBX                             ; 00482432
    RET                                 ; 00482433

