; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc900(int param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc900
        ;   Label: FUN_004cc900
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cc901
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc905
    LEA EDX,[ECX + 0x17c]               ; 004cc909
    CMP EAX,EDX                         ; 004cc90f
    JNZ 0x004cc922                      ; 004cc911
        ;   XREF to: 004cc922 (CONDITIONAL_JUMP)  ; LAB_004cc922
    ADD ECX,0x188                       ; 004cc913
    LEA EDX,[EAX + 0xc]                 ; 004cc919
    CMP EDX,ECX                         ; 004cc91c
    JNZ 0x004cc941                      ; 004cc91e
        ;   XREF to: 004cc941 (CONDITIONAL_JUMP)  ; LAB_004cc941
    POP EBX                             ; 004cc920
    RET                                 ; 004cc921
    MOV EBX,dword ptr [EDX]             ; 004cc922
        ;   Label: LAB_004cc922
    MOV dword ptr [EAX],EBX             ; 004cc924
    MOV EBX,dword ptr [EDX + 0x4]       ; 004cc926
    MOV dword ptr [EAX + 0x4],EBX       ; 004cc929
    MOV EBX,dword ptr [EDX + 0x8]       ; 004cc92c
    MOV dword ptr [EAX + 0x8],EBX       ; 004cc92f
    ADD ECX,0x188                       ; 004cc932
    LEA EDX,[EAX + 0xc]                 ; 004cc938
    CMP EDX,ECX                         ; 004cc93b
    JNZ 0x004cc941                      ; 004cc93d
        ;   XREF to: 004cc941 (CONDITIONAL_JUMP)  ; LAB_004cc941
    POP EBX                             ; 004cc93f
    RET                                 ; 004cc940
    MOV EBX,dword ptr [ECX]             ; 004cc941
        ;   Label: LAB_004cc941
    MOV dword ptr [EDX],EBX             ; 004cc943
    MOV EBX,dword ptr [ECX + 0x4]       ; 004cc945
    MOV dword ptr [EDX + 0x4],EBX       ; 004cc948
    MOV EBX,dword ptr [ECX + 0x8]       ; 004cc94b
    MOV dword ptr [EDX + 0x8],EBX       ; 004cc94e
    POP EBX                             ; 004cc951
    RET                                 ; 004cc952

