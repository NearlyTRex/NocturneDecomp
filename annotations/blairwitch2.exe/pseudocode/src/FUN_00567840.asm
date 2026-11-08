; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567840(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   FUN_00422ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567840
        ;   Label: FUN_00567840
    PUSH ESI                            ; 00567841
    PUSH EDI                            ; 00567842
    SUB ESP,0xc                         ; 00567843
    MOV EDI,ESP                         ; 00567846
    MOV ESI,dword ptr [ESP + 0x24]      ; 00567848
    MOV EAX,ESP                         ; 0056784c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056784e
    PUSH EAX                            ; 00567852
    MOVSD ES:EDI,ESI                    ; 00567853
    MOVSD ES:EDI,ESI                    ; 00567854
    MOVSD ES:EDI,ESI                    ; 00567855
    PUSH EBX                            ; 00567856
    MOV ESI,dword ptr [ESP + 0x24]      ; 00567857
    XOR EDX,EDX                         ; 0056785b
    PUSH ESI                            ; 0056785d
    MOV dword ptr [ESP + 0xc],EDX       ; 0056785e
    MOV dword ptr [ESP + 0x14],EDX      ; 00567862
    CALL FUN_00422ec0                   ; 00567866
        ;   XREF to: 00422ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00422ec0()
    ADD ESP,0xc                         ; 0056786b
    ADD ESP,0xc                         ; 0056786e
    POP EDI                             ; 00567871
    POP ESI                             ; 00567872
    POP EBX                             ; 00567873
    RET                                 ; 00567874

