; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054cf80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_02026358
;
; Called Functions:
;   FUN_00555770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cf80
        ;   Label: FUN_0054cf80
    PUSH ESI                            ; 0054cf81
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054cf82
    MOV EDX,dword ptr [0x02026358]      ; 0054cf86 | DAT_02026358
    MOV EBX,dword ptr [EAX + 0x10c]     ; 0054cf8c
    MOV ECX,dword ptr [EAX + 0x110]     ; 0054cf92
    MOV ESI,dword ptr [EAX + 0x108]     ; 0054cf98
    CMP EAX,EDX                         ; 0054cf9e
    JNZ 0x0054cfde                      ; 0054cfa0
        ;   XREF to: 0054cfde (CONDITIONAL_JUMP)  ; LAB_0054cfde
    LEA EDX,[ESI*0x4 + 0x0]             ; 0054cfa2
    SUB EDX,ESI                         ; 0054cfa9
    MOV EAX,EDX                         ; 0054cfab
    SAR EDX,0x1f                        ; 0054cfad
    SUB EAX,EDX                         ; 0054cfb0
    SAR EAX,0x1                         ; 0054cfb2
    LEA EDX,[EBX*0x4 + 0x0]             ; 0054cfb4
    SUB EDX,EBX                         ; 0054cfbb
    MOV ESI,EAX                         ; 0054cfbd
    MOV EAX,EDX                         ; 0054cfbf
    SAR EDX,0x1f                        ; 0054cfc1
    SUB EAX,EDX                         ; 0054cfc4
    SAR EAX,0x1                         ; 0054cfc6
    LEA EDX,[ECX*0x4 + 0x0]             ; 0054cfc8
    SUB EDX,ECX                         ; 0054cfcf
    MOV EBX,EAX                         ; 0054cfd1
    MOV EAX,EDX                         ; 0054cfd3
    SAR EDX,0x1f                        ; 0054cfd5
    SUB EAX,EDX                         ; 0054cfd8
    SAR EAX,0x1                         ; 0054cfda
    MOV ECX,EAX                         ; 0054cfdc
    PUSH ECX                            ; 0054cfde
        ;   Label: LAB_0054cfde
    PUSH EBX                            ; 0054cfdf
    PUSH ESI                            ; 0054cfe0
    MOV ECX,dword ptr [0x00622c18]      ; 0054cfe1 | DAT_00622c18
    PUSH ECX                            ; 0054cfe7
    CALL FUN_00555770                   ; 0054cfe8
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0054cfed
    POP ESI                             ; 0054cff0
    POP EBX                             ; 0054cff1
    RET                                 ; 0054cff2

