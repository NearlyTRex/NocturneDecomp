; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e3f4(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0056e390 at 0056e3d5
;   FUN_0056e6e4 at 0056e73e
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_0057555c = 00175e92
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e3f4
        ;   Label: FUN_0056e3f4
    PUSH ESI                            ; 0056e3f5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056e3f6
    MOV EDX,dword ptr [EAX + 0xc]       ; 0056e3fa
    TEST EDX,EDX                        ; 0056e3fd
    JBE 0x0056e418                      ; 0056e3ff
        ;   XREF to: 0056e418 (CONDITIONAL_JUMP)  ; LAB_0056e418
    LEA EBX,[EDX + -0x1]                ; 0056e401
    MOV dword ptr [EAX + 0xc],EBX       ; 0056e404
    TEST EBX,EBX                        ; 0056e407
    JNZ 0x0056e418                      ; 0056e409
        ;   XREF to: 0056e418 (CONDITIONAL_JUMP)  ; LAB_0056e418
    MOV ESI,dword ptr [EAX]             ; 0056e40b
    PUSH ESI                            ; 0056e40d
    MOV dword ptr [EAX + 0x8],EBX       ; 0056e40e
    CALL dword ptr CS:[0x57555c]        ; 0056e411 | PTR_LeaveCriticalSection_0057555c
    POP ESI                             ; 0056e418
        ;   Label: LAB_0056e418
    POP EBX                             ; 0056e419
    RET                                 ; 0056e41a

