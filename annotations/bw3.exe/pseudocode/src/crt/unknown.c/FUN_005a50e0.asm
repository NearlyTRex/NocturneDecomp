; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a50e0(int param_1,undefined4 param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   crt_string.c_splitpath_FUN_005a5128 at 005a51b1
;
; Called Functions:
;   crt_unknown.c_FUN_005ac8f0
;   crt_unknown.c_FUN_005ac930
;   crt_unknown.c_FUN_005ac960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a50e0
        ;   Label: crt_unknown.c_FUN_005a50e0
    PUSH ESI                            ; 005a50e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a50e2
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a50e6
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a50ea
    TEST ESI,ESI                        ; 005a50ee
    JZ 0x005a5125                       ; 005a50f0
        ;   XREF to: 005a5125 (CONDITIONAL_JUMP)  ; LAB_005a5125
    CMP EAX,EBX                         ; 005a50f2
    JLE 0x005a50f8                      ; 005a50f4
        ;   XREF to: 005a50f8 (CONDITIONAL_JUMP)  ; LAB_005a50f8
    MOV EAX,EBX                         ; 005a50f6
    PUSH EAX                            ; 005a50f8
        ;   Label: LAB_005a50f8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a50f9
    PUSH EDX                            ; 005a50fd
    CALL crt_unknown.c_FUN_005ac8f0     ; 005a50fe
        ;   XREF to: 005ac8f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac8f0()
    ADD ESP,0x8                         ; 005a5103
    PUSH EAX                            ; 005a5106
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a5107
    PUSH ECX                            ; 005a510b
    PUSH ESI                            ; 005a510c
    MOV EBX,EAX                         ; 005a510d
    CALL crt_unknown.c_FUN_005ac930     ; 005a510f
        ;   XREF to: 005ac930 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac930()
    ADD ESP,0xc                         ; 005a5114
    PUSH EBX                            ; 005a5117
    PUSH ESI                            ; 005a5118
    CALL crt_unknown.c_FUN_005ac960     ; 005a5119
        ;   XREF to: 005ac960 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac960()
    ADD ESP,0x8                         ; 005a511e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005a5121
    POP ESI                             ; 005a5125
        ;   Label: LAB_005a5125
    POP EBX                             ; 005a5126
    RET                                 ; 005a5127

