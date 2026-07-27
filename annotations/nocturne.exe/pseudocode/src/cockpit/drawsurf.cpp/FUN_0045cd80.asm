; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045cd80(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cd80
        ;   Label: cockpit_drawsurf.cpp_FUN_0045cd80
    PUSH ESI                            ; 0045cd81
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045cd82
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045cd86
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045cd8a
    ADD EDX,ECX                         ; 0045cd8e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cd90
    INC EDX                             ; 0045cd94
    SUB EDX,ECX                         ; 0045cd95
    MOV EAX,EDX                         ; 0045cd97
    SAR EDX,0x1f                        ; 0045cd99
    SUB EAX,EDX                         ; 0045cd9c
    SAR EAX,0x1                         ; 0045cd9e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045cda0
    ADD EDX,EBX                         ; 0045cda4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045cda6
    INC EDX                             ; 0045cdaa
    SUB EDX,EBX                         ; 0045cdab
    MOV ECX,EAX                         ; 0045cdad
    MOV EAX,EDX                         ; 0045cdaf
    SAR EDX,0x1f                        ; 0045cdb1
    SUB EAX,EDX                         ; 0045cdb4
    SAR EAX,0x1                         ; 0045cdb6
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 0045cdb8
    PUSH EDX                            ; 0045cdbc
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045cdbd
    ADD EDX,ECX                         ; 0045cdc1
    DEC EDX                             ; 0045cdc3
    PUSH EDX                            ; 0045cdc4
    PUSH EAX                            ; 0045cdc5
    PUSH ECX                            ; 0045cdc6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045cdc7
    PUSH ESI                            ; 0045cdcb
    CALL cockpit_drawsurf.cpp_FUN_0045cc70 ; 0045cdcc
        ;   XREF to: 0045cc70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045cc70()
    ADD ESP,0x14                        ; 0045cdd1
    POP ESI                             ; 0045cdd4
    POP EBX                             ; 0045cdd5
    RET                                 ; 0045cdd6

