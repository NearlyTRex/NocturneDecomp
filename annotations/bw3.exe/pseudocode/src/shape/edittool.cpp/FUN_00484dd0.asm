; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00484dd0(int *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00484e30 at 00484e6e
;   FUN_00484eb0 at 00484ef4
;   FUN_00485010 at 0048505d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd88f
;   TerminatedCString s_CPickList_getItemHotKey_005bd8a5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484dd0
        ;   Label: FUN_00484dd0
    PUSH ESI                            ; 00484dd1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00484dd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00484dd6
    TEST EBX,EBX                        ; 00484dda
    JL 0x00484de2                       ; 00484ddc
        ;   XREF to: 00484de2 (CONDITIONAL_JUMP)  ; LAB_00484de2
    CMP EBX,dword ptr [ESI]             ; 00484dde
    JL 0x00484e07                       ; 00484de0
        ;   XREF to: 00484e07 (CONDITIONAL_JUMP)  ; LAB_00484e07
    PUSH EDI                            ; 00484de2
        ;   Label: LAB_00484de2
    MOV ECX,0x5bd88f                    ; 00484de3 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x11b2                      ; 00484de8
    PUSH 0x5bd8a5                       ; 00484ded | = "CPickList::getItemHotKey - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 00484df2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00484df8 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00484dfe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00484e03
    POP EDI                             ; 00484e06
    CMP EBX,dword ptr [ESI + 0x1b4]     ; 00484e07
        ;   Label: LAB_00484e07
    JL 0x00484e17                       ; 00484e0d
        ;   XREF to: 00484e17 (CONDITIONAL_JUMP)  ; LAB_00484e17
    MOV EAX,0xffffffff                  ; 00484e0f
    POP ESI                             ; 00484e14
    POP EBX                             ; 00484e15
    RET                                 ; 00484e16
    LEA EAX,[EBX*0x4 + 0x0]             ; 00484e17
        ;   Label: LAB_00484e17
    MOV EBX,dword ptr [ESI + 0x1b8]     ; 00484e1e
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00484e24
    POP ESI                             ; 00484e27
    POP EBX                             ; 00484e28
    RET                                 ; 00484e29

