; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048aa40(int param_1)
;
;
; XREF[1]:
;   FUN_0048adc0 at 0048aee3
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005db786
;   TerminatedCString s_CDemonRaytrace_allocNewC_005db799
;   undefined4 DAT_005ff640
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c1268
;   FUN_005c2694
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048aa40
        ;   Label: FUN_0048aa40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048aa41
    MOV EAX,dword ptr [EBX + 0x40]      ; 0048aa45
    IMUL EAX,dword ptr [EBX + 0x44]     ; 0048aa48
    MOV EDX,dword ptr [EBX + 0x48]      ; 0048aa4c
    IMUL EDX,EAX                        ; 0048aa4f
    PUSH 0x5ff640                       ; 0048aa52 | DAT_005ff640
    PUSH EDX                            ; 0048aa57
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048aa58
    SUB EAX,EDX                         ; 0048aa5f
    SHL EAX,0x2                         ; 0048aa61
    ADD EAX,EDX                         ; 0048aa64
    SHL EAX,0x2                         ; 0048aa66
    ADD EAX,0x4                         ; 0048aa69
    PUSH EAX                            ; 0048aa6c
    CALL FUN_005c1268                   ; 0048aa6d
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    ADD ESP,0x4                         ; 0048aa72
    PUSH EAX                            ; 0048aa75
    CALL FUN_005c2694                   ; 0048aa76
        ;   XREF to: 005c2694 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2694()
    ADD ESP,0xc                         ; 0048aa7b
    MOV dword ptr [EBX + 0x50],EAX      ; 0048aa7e
    TEST EAX,EAX                        ; 0048aa81
    JZ 0x0048aa87                       ; 0048aa83
        ;   XREF to: 0048aa87 (CONDITIONAL_JUMP)  ; LAB_0048aa87
    POP EBX                             ; 0048aa85
    RET                                 ; 0048aa86
    PUSH ESI                            ; 0048aa87
        ;   Label: LAB_0048aa87
    MOV EBX,0x5db786                    ; 0048aa88 | = "..\\core\\dtrace.cpp"
    MOV ESI,0xae                        ; 0048aa8d
    PUSH 0x5db799                       ; 0048aa92 | = "CDemonRaytrace::allocNewCubeList - Ou..."
    MOV dword ptr [0x01d1d400],EBX      ; 0048aa97 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0048aa9d | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048aaa3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048aaa8
    POP ESI                             ; 0048aaab
    POP EBX                             ; 0048aaac
    RET                                 ; 0048aaad

