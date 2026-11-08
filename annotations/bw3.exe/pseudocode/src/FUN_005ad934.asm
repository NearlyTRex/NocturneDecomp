; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad934(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_005ad8d0 at 005ad915
;   FUN_005adc24 at 005adc7e
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_005b35f4 = 001b403c
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad934
        ;   Label: FUN_005ad934
    PUSH ESI                            ; 005ad935
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ad936
    MOV EDX,dword ptr [EAX + 0xc]       ; 005ad93a
    TEST EDX,EDX                        ; 005ad93d
    JBE 0x005ad958                      ; 005ad93f
        ;   XREF to: 005ad958 (CONDITIONAL_JUMP)  ; LAB_005ad958
    LEA EBX,[EDX + -0x1]                ; 005ad941
    MOV dword ptr [EAX + 0xc],EBX       ; 005ad944
    TEST EBX,EBX                        ; 005ad947
    JNZ 0x005ad958                      ; 005ad949
        ;   XREF to: 005ad958 (CONDITIONAL_JUMP)  ; LAB_005ad958
    MOV ESI,dword ptr [EAX]             ; 005ad94b
    PUSH ESI                            ; 005ad94d
    MOV dword ptr [EAX + 0x8],EBX       ; 005ad94e
    CALL dword ptr CS:[0x5b35f4]        ; 005ad951 | PTR_LeaveCriticalSection_005b35f4
    POP ESI                             ; 005ad958
        ;   Label: LAB_005ad958
    POP EBX                             ; 005ad959
    RET                                 ; 005ad95a

