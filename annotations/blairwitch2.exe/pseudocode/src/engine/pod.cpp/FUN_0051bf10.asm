; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051bf10(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0051b280 at 0051b2ff
;   FUN_0051ba20 at 0051ba97
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005e295e
;   TerminatedCString s_CPod_dismountPod_invalid_005e2970
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00519ec0
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bf10
        ;   Label: FUN_0051bf10
    PUSH ESI                            ; 0051bf11
    PUSH EBP                            ; 0051bf12
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051bf13
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051bf17
    TEST ESI,ESI                        ; 0051bf1b
    JL 0x0051bf23                       ; 0051bf1d
        ;   XREF to: 0051bf23 (CONDITIONAL_JUMP)  ; LAB_0051bf23
    CMP ESI,dword ptr [EBX]             ; 0051bf1f
    JL 0x0051bf48                       ; 0051bf21
        ;   XREF to: 0051bf48 (CONDITIONAL_JUMP)  ; LAB_0051bf48
    PUSH EDI                            ; 0051bf23
        ;   Label: LAB_0051bf23
    MOV ECX,0x5e295e                    ; 0051bf24 | = "..\\engine\\pod.cpp"
    MOV EDI,0x64e                       ; 0051bf29
    PUSH 0x5e2970                       ; 0051bf2e | = "CPod::dismountPod - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 0051bf33 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051bf39 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0051bf3f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0051bf44
    POP EDI                             ; 0051bf47
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4] ; 0051bf48
        ;   Label: LAB_0051bf48
    TEST EAX,EAX                        ; 0051bf4c
    JZ 0x0051bf64                       ; 0051bf4e
        ;   XREF to: 0051bf64 (CONDITIONAL_JUMP)  ; LAB_0051bf64
    PUSH 0x0                            ; 0051bf50
    PUSH EAX                            ; 0051bf52
    CALL FUN_00519ec0                   ; 0051bf53
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00519ec0()
    ADD ESP,0x8                         ; 0051bf58
    PUSH EAX                            ; 0051bf5b
    CALL FUN_005b7fdc                   ; 0051bf5c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0051bf61
    MOV EBP,dword ptr [EBX]             ; 0051bf64
        ;   Label: LAB_0051bf64
    DEC EBP                             ; 0051bf66
    MOV EDX,ESI                         ; 0051bf67
    MOV dword ptr [EBX],EBP             ; 0051bf69
    CMP ESI,EBP                         ; 0051bf6b
    JGE 0x0051bf90                      ; 0051bf6d
        ;   XREF to: 0051bf90 (CONDITIONAL_JUMP)  ; LAB_0051bf90
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051bf6f
    ADD EAX,EBX                         ; 0051bf76
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051bf78
        ;   Label: LAB_0051bf78
    MOV dword ptr [EAX + 0x4],ECX       ; 0051bf7b
    INC EDX                             ; 0051bf7e
    MOV ECX,dword ptr [EBX]             ; 0051bf7f
    ADD EAX,0x4                         ; 0051bf81
    CMP EDX,ECX                         ; 0051bf84
    JL 0x0051bf78                       ; 0051bf86
        ;   XREF to: 0051bf78 (CONDITIONAL_JUMP)  ; LAB_0051bf78
    LEA EAX,[EAX]                       ; 0051bf88
    MOV EDX,EDX                         ; 0051bf8e
    MOV EAX,dword ptr [EBX]             ; 0051bf90
        ;   Label: LAB_0051bf90
    MOV dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 0051bf92
    POP EBP                             ; 0051bf9a
    POP ESI                             ; 0051bf9b
    POP EBX                             ; 0051bf9c
    RET                                 ; 0051bf9d

