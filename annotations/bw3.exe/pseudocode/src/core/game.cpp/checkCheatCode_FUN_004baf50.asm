; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_checkCheatCode_FUN_004baf50(char *cheat_string)
;
; Parameters:
; char *           Stack[0x4]:4   cheat_string
;
; Referenced Globals:
;   undefined4 DAT_01d22c70
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baf50
        ;   Label: core_game.cpp_checkCheatCode_FUN_004baf50
    PUSH ESI                            ; 004baf51
    PUSH EDI                            ; 004baf52
    PUSH EBP                            ; 004baf53
    SUB ESP,0x8                         ; 004baf54
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004baf57
    MOV EDI,ESI                         ; 004baf5b
    SUB ECX,ECX                         ; 004baf5d
    DEC ECX                             ; 004baf5f
    XOR EAX,EAX                         ; 004baf60
    SCASB.REPNE ES:EDI                  ; 004baf62
    NOT ECX                             ; 004baf64
    DEC ECX                             ; 004baf66
    XOR EBP,EBP                         ; 004baf67
    MOV dword ptr [ESP],ECX             ; 004baf69
    TEST ECX,ECX                        ; 004baf6c
    JLE 0x004baf9f                      ; 004baf6e
        ;   XREF to: 004baf9f (CONDITIONAL_JUMP)  ; LAB_004baf9f
    MOV EAX,ECX                         ; 004baf70
    NEG EAX                             ; 004baf72
    MOV EBX,ECX                         ; 004baf74
    ADD ECX,EAX                         ; 004baf76
    MOV dword ptr [ESP + 0x4],ECX       ; 004baf78
    XOR EAX,EAX                         ; 004baf7c
        ;   Label: LAB_004baf7c
    MOV AL,byte ptr [ESI]               ; 004baf7e
    PUSH EAX                            ; 004baf80
    MOVZX EDI,byte ptr [EBX + 0x1d22c6f] ; 004baf81
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004baf88
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004baf8d
    CMP EDI,EAX                         ; 004baf90
    JNZ 0x004baf95                      ; 004baf92
        ;   XREF to: 004baf95 (CONDITIONAL_JUMP)  ; LAB_004baf95
    INC EBP                             ; 004baf94
    MOV EDX,dword ptr [ESP + 0x4]       ; 004baf95
        ;   Label: LAB_004baf95
    DEC EBX                             ; 004baf99
    INC ESI                             ; 004baf9a
    CMP EBX,EDX                         ; 004baf9b
    JG 0x004baf7c                       ; 004baf9d
        ;   XREF to: 004baf7c (CONDITIONAL_JUMP)  ; LAB_004baf7c
    CMP EBP,dword ptr [ESP]             ; 004baf9f
        ;   Label: LAB_004baf9f
    JNZ 0x004bafb9                      ; 004bafa2
        ;   XREF to: 004bafb9 (CONDITIONAL_JUMP)  ; LAB_004bafb9
    XOR AH,AH                           ; 004bafa4
    MOV byte ptr [0x01d22c70],AH        ; 004bafa6 | DAT_01d22c70
    MOV EAX,0x1                         ; 004bafac
    ADD ESP,0x8                         ; 004bafb1
    POP EBP                             ; 004bafb4
    POP EDI                             ; 004bafb5
    POP ESI                             ; 004bafb6
    POP EBX                             ; 004bafb7
    RET                                 ; 004bafb8
    XOR EAX,EAX                         ; 004bafb9
        ;   Label: LAB_004bafb9
    ADD ESP,0x8                         ; 004bafbb
    POP EBP                             ; 004bafbe
    POP EDI                             ; 004bafbf
    POP ESI                             ; 004bafc0
    POP EBX                             ; 004bafc1
    RET                                 ; 004bafc2

