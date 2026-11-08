; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c27c4(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_005c2760 at 005c27a5
;   FUN_005c2ab4 at 005c2b0e
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_005c85e0 = 001c8ffa
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c27c4
        ;   Label: FUN_005c27c4
    PUSH ESI                            ; 005c27c5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c27c6
    MOV EDX,dword ptr [EAX + 0xc]       ; 005c27ca
    TEST EDX,EDX                        ; 005c27cd
    JBE 0x005c27e8                      ; 005c27cf
        ;   XREF to: 005c27e8 (CONDITIONAL_JUMP)  ; LAB_005c27e8
    LEA EBX,[EDX + -0x1]                ; 005c27d1
    MOV dword ptr [EAX + 0xc],EBX       ; 005c27d4
    TEST EBX,EBX                        ; 005c27d7
    JNZ 0x005c27e8                      ; 005c27d9
        ;   XREF to: 005c27e8 (CONDITIONAL_JUMP)  ; LAB_005c27e8
    MOV ESI,dword ptr [EAX]             ; 005c27db
    PUSH ESI                            ; 005c27dd
    MOV dword ptr [EAX + 0x8],EBX       ; 005c27de
    CALL dword ptr CS:[0x5c85e0]        ; 005c27e1 | PTR_LeaveCriticalSection_005c85e0
    POP ESI                             ; 005c27e8
        ;   Label: LAB_005c27e8
    POP EBX                             ; 005c27e9
    RET                                 ; 005c27ea

