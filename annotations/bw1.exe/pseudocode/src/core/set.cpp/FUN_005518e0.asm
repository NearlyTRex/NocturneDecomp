; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005518e0(undefined4 param_1,int param_2)
;
;
; XREF[7]:
;   FUN_00422f90 at 004231c1
;   FUN_0049e090 at 0049e183
;   FUN_00500d20 at 00500e84
;   FUN_00502480 at 005025e4
;   FUN_00550580 at 005505bf
;   FUN_00561650 at 00561743
;   FUN_005ad770 at 005ad8a0
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f094e
;   TerminatedCString s_Too_many_dynamic_lights_005f095e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fe55bc
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005518e0
        ;   Label: FUN_005518e0
    PUSH ESI                            ; 005518e1
    MOV ESI,dword ptr [0x01fe55bc]      ; 005518e2 | DAT_01fe55bc
    MOV EBX,dword ptr [ESP + 0x10]      ; 005518e8
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 005518ec
    JZ 0x0055192a                       ; 005518f3
        ;   XREF to: 0055192a (CONDITIONAL_JUMP)  ; LAB_0055192a
    TEST ESI,ESI                        ; 005518f5
    JLE 0x00551911                      ; 005518f7
        ;   XREF to: 00551911 (CONDITIONAL_JUMP)  ; LAB_00551911
    LEA EDX,[ESI*0x4 + 0x0]             ; 005518f9
    XOR EAX,EAX                         ; 00551900
    CMP EBX,dword ptr [EAX + 0x1fe55c0] ; 00551902
        ;   Label: LAB_00551902
    JZ 0x0055192a                       ; 00551908
        ;   XREF to: 0055192a (CONDITIONAL_JUMP)  ; LAB_0055192a
    ADD EAX,0x4                         ; 0055190a
    CMP EAX,EDX                         ; 0055190d
    JL 0x00551902                       ; 0055190f
        ;   XREF to: 00551902 (CONDITIONAL_JUMP)  ; LAB_00551902
    MOV dword ptr [0x01fe55bc],ESI      ; 00551911 | DAT_01fe55bc
        ;   Label: LAB_00551911
    CMP ESI,0x4                         ; 00551917
    JGE 0x00551933                      ; 0055191a
        ;   XREF to: 00551933 (CONDITIONAL_JUMP)  ; LAB_00551933
    MOV ESI,dword ptr [0x01fe55bc]      ; 0055191c | DAT_01fe55bc
        ;   Label: LAB_0055191c
    INC ESI                             ; 00551922
    MOV dword ptr [ESI*0x4 + 0x1fe55bc],EBX ; 00551923 | DAT_01fe55bc
    MOV dword ptr [0x01fe55bc],ESI      ; 0055192a | DAT_01fe55bc
        ;   Label: LAB_0055192a
    POP ESI                             ; 00551930
    POP EBX                             ; 00551931
    RET                                 ; 00551932
    PUSH EDI                            ; 00551933
        ;   Label: LAB_00551933
    MOV ECX,0x5f094e                    ; 00551934 | = "..\\core\\set.cpp"
    MOV EDI,0x9ad                       ; 00551939
    PUSH 0x5f095e                       ; 0055193e | = "Too many dynamic lights!"
    MOV dword ptr [0x01d1d400],ECX      ; 00551943 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00551949 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0055194f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00551954
    POP EDI                             ; 00551957
    JMP 0x0055191c                      ; 00551958
        ;   XREF to: 0055191c (UNCONDITIONAL_JUMP)  ; LAB_0055191c

