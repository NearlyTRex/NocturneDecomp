; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00476040(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00475230 at 0047525a
;   FUN_004759d0 at 00475c53
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057eebb
;   string s_CPickList::isItemEnabled_-_inval_0057eed1
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476040
        ;   Label: FUN_00476040
    PUSH ESI                            ; 00476041
    MOV ESI,dword ptr [ESP + 0xc]       ; 00476042
    MOV EBX,dword ptr [ESP + 0x10]      ; 00476046
    TEST EBX,EBX                        ; 0047604a
    JL 0x00476052                       ; 0047604c
        ;   XREF to: 00476052 (CONDITIONAL_JUMP)  ; LAB_00476052
    CMP EBX,dword ptr [ESI]             ; 0047604e
    JL 0x00476077                       ; 00476050
        ;   XREF to: 00476077 (CONDITIONAL_JUMP)  ; LAB_00476077
    PUSH EDI                            ; 00476052
        ;   Label: LAB_00476052
    MOV ECX,0x57eebb                    ; 00476053 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xe12                       ; 00476058
    PUSH 0x57eed1                       ; 0047605d | = "CPickList::isItemEnabled - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 00476062 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00476068 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0047606e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00476073
    POP EDI                             ; 00476076
    CMP EBX,dword ptr [ESI + 0x130]     ; 00476077
        ;   Label: LAB_00476077
    JL 0x00476087                       ; 0047607d
        ;   XREF to: 00476087 (CONDITIONAL_JUMP)  ; LAB_00476087
    MOV EAX,0x1                         ; 0047607f
    POP ESI                             ; 00476084
    POP EBX                             ; 00476085
    RET                                 ; 00476086
    MOV EAX,dword ptr [ESI + 0x134]     ; 00476087
        ;   Label: LAB_00476087
    CMP dword ptr [EAX + EBX*0x4],0x0   ; 0047608d
    SETNZ AL                            ; 00476091
    AND EAX,0xff                        ; 00476094
    POP ESI                             ; 00476099
    POP EBX                             ; 0047609a
    RET                                 ; 0047609b

