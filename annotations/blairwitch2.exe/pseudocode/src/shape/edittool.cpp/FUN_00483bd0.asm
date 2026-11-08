; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00483bd0(int *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00483c30 at 00483c6e
;   FUN_00483cb0 at 00483cf4
;   FUN_00483e10 at 00483e5d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2a39
;   TerminatedCString s_CPickList_getItemHotKey_005d2a4f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483bd0
        ;   Label: FUN_00483bd0
    PUSH ESI                            ; 00483bd1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483bd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00483bd6
    TEST EBX,EBX                        ; 00483bda
    JL 0x00483be2                       ; 00483bdc
        ;   XREF to: 00483be2 (CONDITIONAL_JUMP)  ; LAB_00483be2
    CMP EBX,dword ptr [ESI]             ; 00483bde
    JL 0x00483c07                       ; 00483be0
        ;   XREF to: 00483c07 (CONDITIONAL_JUMP)  ; LAB_00483c07
    PUSH EDI                            ; 00483be2
        ;   Label: LAB_00483be2
    MOV ECX,0x5d2a39                    ; 00483be3 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x112e                      ; 00483be8
    PUSH 0x5d2a4f                       ; 00483bed | = "CPickList::getItemHotKey - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 00483bf2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00483bf8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00483bfe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00483c03
    POP EDI                             ; 00483c06
    CMP EBX,dword ptr [ESI + 0x1b4]     ; 00483c07
        ;   Label: LAB_00483c07
    JL 0x00483c17                       ; 00483c0d
        ;   XREF to: 00483c17 (CONDITIONAL_JUMP)  ; LAB_00483c17
    MOV EAX,0xffffffff                  ; 00483c0f
    POP ESI                             ; 00483c14
    POP EBX                             ; 00483c15
    RET                                 ; 00483c16
    LEA EAX,[EBX*0x4 + 0x0]             ; 00483c17
        ;   Label: LAB_00483c17
    MOV EBX,dword ptr [ESI + 0x1b8]     ; 00483c1e
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00483c24
    POP ESI                             ; 00483c27
    POP EBX                             ; 00483c28
    RET                                 ; 00483c29

