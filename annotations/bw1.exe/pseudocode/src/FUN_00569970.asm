; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569970(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00569810 at 00569876
;
; Called Functions:
;   FUN_00564030
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569970
        ;   Label: FUN_00569970
    PUSH ESI                            ; 00569971
    MOV EBX,dword ptr [ESP + 0xc]       ; 00569972
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569976
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056997a
    JNZ 0x005699a5                      ; 00569980
        ;   XREF to: 005699a5 (CONDITIONAL_JUMP)  ; LAB_005699a5
    MOV ECX,dword ptr [EBX + 0x2324]    ; 00569982
        ;   Label: LAB_00569982
    PUSH ECX                            ; 00569988
    MOV ESI,dword ptr [EBX + 0x2320]    ; 00569989
    PUSH ESI                            ; 0056998f
    PUSH EBX                            ; 00569990
    CALL FUN_00569eb0                   ; 00569991
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00569996
    PUSH EAX                            ; 00569999
    CALL FUN_00564030                   ; 0056999a
        ;   XREF to: 00564030 (UNCONDITIONAL_CALL)  ; undefined FUN_00564030()
    ADD ESP,0xc                         ; 0056999f
    POP ESI                             ; 005699a2
    POP EBX                             ; 005699a3
    RET                                 ; 005699a4
    PUSH EAX                            ; 005699a5
        ;   Label: LAB_005699a5
    PUSH EBX                            ; 005699a6
    CALL FUN_00569890                   ; 005699a7
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 005699ac
    JMP 0x00569982                      ; 005699af
        ;   XREF to: 00569982 (UNCONDITIONAL_JUMP)  ; LAB_00569982

