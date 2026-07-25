; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00494020(uint param_1,uint param_2,uint param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494020
        ;   Label: FUN_00494020
    PUSH ESI                            ; 00494021
    PUSH EDI                            ; 00494022
    MOV EDI,dword ptr [ESP + 0x10]      ; 00494023
    MOV EBX,dword ptr [ESP + 0x14]      ; 00494027
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049402b
    MOV ECX,dword ptr [0x01c00628]      ; 0049402f | DAT_01c00628
    MOV EAX,EDI                         ; 00494035
    XOR EDX,EDX                         ; 00494037
    DIV ECX                             ; 00494039
    MOV EDI,EAX                         ; 0049403b
    XOR EDX,EDX                         ; 0049403d
    MOV EAX,EBX                         ; 0049403f
    MOV EBX,dword ptr [0x01c00634]      ; 00494041 | DAT_01c00634
    DIV EBX                             ; 00494047
    MOV EBX,EAX                         ; 00494049
    XOR EDX,EDX                         ; 0049404b
    MOV EAX,ESI                         ; 0049404d
    DIV dword ptr [0x01c00640]          ; 0049404f | DAT_01c00640
    MOV CL,byte ptr [0x01c00624]        ; 00494055 | DAT_01c00624
    SHL EDI,CL                          ; 0049405b
    MOV CL,byte ptr [0x01c00630]        ; 0049405d | DAT_01c00630
    SHL EBX,CL                          ; 00494063
    MOV CL,byte ptr [0x01c0063c]        ; 00494065 | DAT_01c0063c
    OR EBX,EDI                          ; 0049406b
    SHL EAX,CL                          ; 0049406d
    OR EAX,EBX                          ; 0049406f
    POP EDI                             ; 00494071
    POP ESI                             ; 00494072
    POP EBX                             ; 00494073
    RET                                 ; 00494074

