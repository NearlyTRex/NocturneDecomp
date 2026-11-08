; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422ed0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00421ca0
;   FUN_00462470
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422ed0
        ;   Label: FUN_00422ed0
    PUSH EAX                            ; 00422ed4
    CALL FUN_00421ca0                   ; 00422ed5
        ;   XREF to: 00421ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ca0()
    ADD ESP,0x4                         ; 00422eda
    PUSH 0x100                          ; 00422edd
    PUSH 0x100                          ; 00422ee2
    ADD EAX,0x67c                       ; 00422ee7
    PUSH EAX                            ; 00422eec
    CALL FUN_00462470                   ; 00422eed
        ;   XREF to: 00462470 (UNCONDITIONAL_CALL)  ; undefined FUN_00462470()
    SUB EAX,0x67c                       ; 00422ef2
    MOV dword ptr [EAX + 0x154],0x5fcf34 ; 00422ef7
    LEA EDX,[EAX + 0x3628]              ; 00422f01
    MOV dword ptr [EAX + 0x2330],0x1    ; 00422f07
    MOV dword ptr [EDX + 0x8],0x0       ; 00422f11
    MOV ECX,dword ptr [EDX + 0x8]       ; 00422f18
    MOV dword ptr [EDX + 0x4],ECX       ; 00422f1b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00422f1e
    MOV dword ptr [EDX],ECX             ; 00422f21
    LEA EDX,[EAX + 0x3634]              ; 00422f23
    MOV dword ptr [EDX + 0x8],0x0       ; 00422f29
    MOV ECX,dword ptr [EDX + 0x8]       ; 00422f30
    MOV dword ptr [EDX + 0x4],ECX       ; 00422f33
    MOV ECX,dword ptr [EDX + 0x4]       ; 00422f36
    MOV dword ptr [EDX],ECX             ; 00422f39
    MOV dword ptr [EAX + 0x3640],0x0    ; 00422f3b
    ADD ESP,0xc                         ; 00422f45
    MOV dword ptr [EAX + 0x678],0x1     ; 00422f48
    RET                                 ; 00422f52

