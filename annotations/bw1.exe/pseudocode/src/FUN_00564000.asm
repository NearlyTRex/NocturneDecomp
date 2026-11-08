; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564000(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00569920 at 0056994a
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00553140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564000
        ;   Label: FUN_00564000
    PUSH ESI                            ; 00564001
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564002
    MOV ECX,dword ptr [ESP + 0xc]       ; 00564006
    SHL EAX,0x2                         ; 0056400a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056400d
    ADD EAX,ECX                         ; 00564011
    PUSH EDX                            ; 00564013
    MOV EBX,dword ptr [EAX + 0x2c]      ; 00564014
    PUSH EBX                            ; 00564017
    MOV ESI,dword ptr [0x00622c18]      ; 00564018 | DAT_00622c18
    PUSH ESI                            ; 0056401e | DAT_01e82168
    CALL FUN_00553140                   ; 0056401f
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; undefined FUN_00553140()
    ADD ESP,0xc                         ; 00564024
    POP ESI                             ; 00564027
    POP EBX                             ; 00564028
    RET                                 ; 00564029

