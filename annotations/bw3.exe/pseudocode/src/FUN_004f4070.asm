; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4070(int param_1)
;
;
; XREF[1]:
;   FUN_004f40b0 at 004f4c14
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046cb90
;   FUN_0046cc40
;   FUN_0046d090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4070
        ;   Label: FUN_004f4070
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4071
    LEA EAX,[EBX + 0x60]                ; 004f4075
    PUSH EAX                            ; 004f4078
    MOV EDX,dword ptr [0x005f2afc]      ; 004f4079 | DAT_005f2afc
    PUSH EDX                            ; 004f407f | DAT_01bdd7e4
    CALL FUN_0046cb90                   ; 004f4080
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cb90()
    ADD ESP,0x8                         ; 004f4085
    MOV ECX,dword ptr [0x005f2afc]      ; 004f4088 | DAT_005f2afc
    PUSH dword ptr [EBX + 0x6c]         ; 004f408e
    PUSH ECX                            ; 004f4091 | DAT_01bdd7e4
    CALL FUN_0046d090                   ; 004f4092
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d090()
    ADD ESP,0x8                         ; 004f4097
    LEA EAX,[EBX + 0x70]                ; 004f409a
    PUSH EAX                            ; 004f409d
    MOV EBX,dword ptr [0x005f2afc]      ; 004f409e | DAT_005f2afc
    PUSH EBX                            ; 004f40a4 | DAT_01bdd7e4
    CALL FUN_0046cc40                   ; 004f40a5
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cc40()
    ADD ESP,0x8                         ; 004f40aa
    POP EBX                             ; 004f40ad
    RET                                 ; 004f40ae

