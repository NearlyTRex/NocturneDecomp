; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564030(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00569970 at 0056999a
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00553440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564030
        ;   Label: FUN_00564030
    PUSH ESI                            ; 00564031
    PUSH EDI                            ; 00564032
    PUSH EBP                            ; 00564033
    PUSH 0x0                            ; 00564034
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00564036
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056403a
    PUSH -0x3                           ; 0056403e
    SHL EAX,0x2                         ; 00564040
    MOV EDX,dword ptr [ESP + 0x24]      ; 00564043
    ADD EAX,ECX                         ; 00564047
    PUSH EDX                            ; 00564049
    MOV EBX,dword ptr [EAX + 0x7c]      ; 0056404a
    PUSH EBX                            ; 0056404d
    MOV ESI,dword ptr [EAX + 0x54]      ; 0056404e
    PUSH ESI                            ; 00564051
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00564052
    PUSH EDI                            ; 00564055
    MOV EBP,dword ptr [0x00622c18]      ; 00564056 | DAT_00622c18
    PUSH EBP                            ; 0056405c | DAT_01e82168
    CALL FUN_00553440                   ; 0056405d
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 00564062
    POP EBP                             ; 00564065
    POP EDI                             ; 00564066
    POP ESI                             ; 00564067
    POP EBX                             ; 00564068
    RET                                 ; 00564069

