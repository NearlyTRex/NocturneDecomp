; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4()
;
;
; XREF[1]:
;   crt_unknown.c_staticFinal_FUN_0060a4cc at 0060a506
;
; Referenced Globals:
;   DeleteCriticalSection* PTR_DeleteCriticalSection_00611520 = 00211caa
;   DWORD g_DynamicCriticalSectionCounter
;   LPCRITICAL_SECTION* g_DynamicCriticalSectionArray
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609ff4
        ;   Label: crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
    PUSH ESI                            ; 00609ff5
    PUSH EDI                            ; 00609ff6
    PUSH EBP                            ; 00609ff7
    MOV EDX,dword ptr [0x03f9c004]      ; 00609ff8 | g_DynamicCriticalSectionCounter
    XOR ESI,ESI                         ; 00609ffe
    TEST EDX,EDX                        ; 0060a000
    JLE 0x0060a035                      ; 0060a002
        ;   XREF to: 0060a035 (CONDITIONAL_JUMP)  ; LAB_0060a035
    XOR EBX,EBX                         ; 0060a004
    MOV EAX,[0x03f9c008]                ; 0060a006 | g_DynamicCriticalSectionArray
        ;   Label: LAB_0060a006
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0060a00b
    PUSH ECX                            ; 0060a00e
    CALL dword ptr CS:[0x611520]        ; 0060a00f | PTR_DeleteCriticalSection_00611520
    MOV EAX,[0x03f9c008]                ; 0060a016 | g_DynamicCriticalSectionArray
    MOV EDI,dword ptr [EBX + EAX*0x1]   ; 0060a01b
    PUSH EDI                            ; 0060a01e
    ADD EBX,0x4                         ; 0060a01f
    INC ESI                             ; 0060a022
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060a023
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EBP,dword ptr [0x03f9c004]      ; 0060a028 | g_DynamicCriticalSectionCounter
    ADD ESP,0x4                         ; 0060a02e
    CMP ESI,EBP                         ; 0060a031
    JL 0x0060a006                       ; 0060a033
        ;   XREF to: 0060a006 (CONDITIONAL_JUMP)  ; LAB_0060a006
    MOV EAX,[0x03f9c008]                ; 0060a035 | g_DynamicCriticalSectionArray
        ;   Label: LAB_0060a035
    TEST EAX,EAX                        ; 0060a03a
    JZ 0x0060a047                       ; 0060a03c
        ;   XREF to: 0060a047 (CONDITIONAL_JUMP)  ; LAB_0060a047
    PUSH EAX                            ; 0060a03e
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060a03f
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060a044
    POP EBP                             ; 0060a047
        ;   Label: LAB_0060a047
    POP EDI                             ; 0060a048
    POP ESI                             ; 0060a049
    POP EBX                             ; 0060a04a
    RET                                 ; 0060a04b

