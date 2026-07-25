; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045d070(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   FUN_0045cde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d070
        ;   Label: FUN_0045d070
    PUSH ESI                            ; 0045d071
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045d072
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045d076
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045d07a
    ADD EDX,ECX                         ; 0045d07e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045d080
    INC EDX                             ; 0045d084
    SUB EDX,ECX                         ; 0045d085
    MOV EAX,EDX                         ; 0045d087
    SAR EDX,0x1f                        ; 0045d089
    SUB EAX,EDX                         ; 0045d08c
    SAR EAX,0x1                         ; 0045d08e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045d090
    ADD EDX,EBX                         ; 0045d094
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045d096
    INC EDX                             ; 0045d09a
    SUB EDX,EBX                         ; 0045d09b
    MOV ECX,EAX                         ; 0045d09d
    MOV EAX,EDX                         ; 0045d09f
    SAR EDX,0x1f                        ; 0045d0a1
    SUB EAX,EDX                         ; 0045d0a4
    SAR EAX,0x1                         ; 0045d0a6
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 0045d0a8
    PUSH EDX                            ; 0045d0ac
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045d0ad
    ADD EDX,ECX                         ; 0045d0b1
    DEC EDX                             ; 0045d0b3
    PUSH EDX                            ; 0045d0b4
    PUSH EAX                            ; 0045d0b5
    PUSH ECX                            ; 0045d0b6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045d0b7
    PUSH ESI                            ; 0045d0bb
    CALL FUN_0045cde0                   ; 0045d0bc
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045cde0()
    ADD ESP,0x14                        ; 0045d0c1
    POP ESI                             ; 0045d0c4
    POP EBX                             ; 0045d0c5
    RET                                 ; 0045d0c6

