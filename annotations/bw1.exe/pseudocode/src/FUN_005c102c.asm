; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c102c(int *param_1)
;
;
; XREF[1]:
;   FUN_005c1066 at 005c1083
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c102c
        ;   Label: FUN_005c102c
    PUSH ESI                            ; 005c102d
    PUSH EDI                            ; 005c102e
    PUSH EBP                            ; 005c102f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c1030
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c1034
    MOV ESI,dword ptr [EBX]             ; 005c1037
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c1039
    IMUL ESI,EDI                        ; 005c103c
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c103f
    MOV EBP,dword ptr [EBP + 0xc]       ; 005c1042
    ADD ESI,EAX                         ; 005c1045
    MOV EDX,dword ptr [EBX]             ; 005c1047
        ;   Label: LAB_005c1047
    TEST EDX,EDX                        ; 005c1049
    JA 0x005c1055                       ; 005c104b
        ;   XREF to: 005c1055 (CONDITIONAL_JUMP)  ; LAB_005c1055
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c104d
    POP EBP                             ; 005c1050
    POP EDI                             ; 005c1051
    POP ESI                             ; 005c1052
    POP EBX                             ; 005c1053
    RET                                 ; 005c1054
    PUSH 0x0                            ; 005c1055
        ;   Label: LAB_005c1055
    SUB ESI,EDI                         ; 005c1057
    LEA ECX,[EDX + -0x1]                ; 005c1059
    PUSH ESI                            ; 005c105c
    MOV dword ptr [EBX],ECX             ; 005c105d
    CALL EBP                            ; 005c105f
    ADD ESP,0x8                         ; 005c1061
    JMP 0x005c1047                      ; 005c1064
        ;   XREF to: 005c1047 (UNCONDITIONAL_JUMP)  ; LAB_005c1047

