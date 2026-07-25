; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID FUN_0056e52c(void)
;
;
; XREF[1]:
;   FUN_0056e6e4 at 0056e7e5
;
; Referenced Globals:
;   void* PTR_GetLastError_0057551c = 00175d70
;   void* PTR_SetLastError_005755a8 = 00176014
;   void* PTR_TlsGetValue_005755c8 = 0017609c
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   FUN_00571170
;   FUN_005711a8
;   GetLastError
;   SetLastError
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e52c
        ;   Label: FUN_0056e52c
    PUSH ESI                            ; 0056e52d
    CALL dword ptr CS:[0x57551c]        ; 0056e52e | PTR_GetLastError_0057551c
    MOV EDX,dword ptr [0x005c1ab8]      ; 0056e535 | DAT_005c1ab8
    PUSH EDX                            ; 0056e53b
    MOV ESI,EAX                         ; 0056e53c
    CALL dword ptr CS:[0x5755c8]        ; 0056e53e | PTR_TlsGetValue_005755c8
    MOV EBX,EAX                         ; 0056e545
    TEST EAX,EAX                        ; 0056e547
    JNZ 0x0056e552                      ; 0056e549
        ;   XREF to: 0056e552 (CONDITIONAL_JUMP)  ; LAB_0056e552
    CALL FUN_00571170                   ; 0056e54b
        ;   XREF to: 00571170 (UNCONDITIONAL_CALL)  ; undefined FUN_00571170()
    JMP 0x0056e55d                      ; 0056e550
        ;   XREF to: 0056e55d (UNCONDITIONAL_JUMP)  ; LAB_0056e55d
    CMP byte ptr [EAX + 0x53],0x0       ; 0056e552
        ;   Label: LAB_0056e552
    JZ 0x0056e55f                       ; 0056e556
        ;   XREF to: 0056e55f (CONDITIONAL_JUMP)  ; LAB_0056e55f
    CALL FUN_005711a8                   ; 0056e558
        ;   XREF to: 005711a8 (UNCONDITIONAL_CALL)  ; undefined FUN_005711a8()
    MOV EBX,EAX                         ; 0056e55d
        ;   Label: LAB_0056e55d
    PUSH ESI                            ; 0056e55f
        ;   Label: LAB_0056e55f
    CALL dword ptr CS:[0x5755a8]        ; 0056e560 | PTR_SetLastError_005755a8
    MOV EAX,EBX                         ; 0056e567
    POP ESI                             ; 0056e569
    POP EBX                             ; 0056e56a
    RET                                 ; 0056e56b

