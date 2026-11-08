; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004811d0(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00483d80 at 00483df9
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d26f6
;   TerminatedCString s_CStrList_sort_invalid_ra_005d270c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b78b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004811d0
        ;   Label: FUN_004811d0
    PUSH ESI                            ; 004811d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004811d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004811d6
    CMP EBX,ESI                         ; 004811da
    JGE 0x00481231                      ; 004811dc
        ;   XREF to: 00481231 (CONDITIONAL_JUMP)  ; LAB_00481231
    TEST EBX,EBX                        ; 004811de
    JL 0x004811ea                       ; 004811e0
        ;   XREF to: 004811ea (CONDITIONAL_JUMP)  ; LAB_004811ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 004811e2
    CMP ESI,dword ptr [EAX]             ; 004811e6
    JL 0x0048120f                       ; 004811e8
        ;   XREF to: 0048120f (CONDITIONAL_JUMP)  ; LAB_0048120f
    PUSH EDI                            ; 004811ea
        ;   Label: LAB_004811ea
    MOV ECX,0x5d26f6                    ; 004811eb | = "..\\shape\\edittool.cpp"
    MOV EDI,0xc2a                       ; 004811f0
    PUSH 0x5d270c                       ; 004811f5 | = "CStrList::sort - invalid range!"
    MOV dword ptr [0x01d046a0],ECX      ; 004811fa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00481200 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00481206
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0048120b
    POP EDI                             ; 0048120e
    MOV EAX,ESI                         ; 0048120f
        ;   Label: LAB_0048120f
    PUSH 0x4811b0                       ; 00481211 | LAB_004811b0
    SUB EAX,EBX                         ; 00481216
    PUSH 0x4                            ; 00481218
    INC EAX                             ; 0048121a
    PUSH EAX                            ; 0048121b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048121c
    SHL EBX,0x2                         ; 00481220
    MOV EAX,dword ptr [EAX + 0x8]       ; 00481223
    ADD EAX,EBX                         ; 00481226
    PUSH EAX                            ; 00481228
    CALL FUN_005b78b8                   ; 00481229
        ;   XREF to: 005b78b8 (UNCONDITIONAL_CALL)  ; undefined FUN_005b78b8()
    ADD ESP,0x10                        ; 0048122e
    POP ESI                             ; 00481231
        ;   Label: LAB_00481231
    POP EBX                             ; 00481232
    RET                                 ; 00481233

