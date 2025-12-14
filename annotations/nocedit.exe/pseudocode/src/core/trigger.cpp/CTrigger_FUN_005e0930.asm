; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_trigger.cpp_CTrigger_FUN_005e0930(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0930
        ;   Label: core_trigger.cpp_CTrigger_FUN_005e0930
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e0931
    MOV EDX,dword ptr [ESP + 0xc]       ; 005e0935
    MOV ECX,dword ptr [EDX]             ; 005e0939
    CMP ECX,0x1                         ; 005e093b
    JNZ 0x005e0950                      ; 005e093e
        ;   XREF to: 005e0950 (CONDITIONAL_JUMP)  ; LAB_005e0950
    MOV EBX,dword ptr [EAX + 0x174]     ; 005e0940
    CMP EBX,0x4                         ; 005e0946
    JZ 0x005e0970                       ; 005e0949
        ;   XREF to: 005e0970 (CONDITIONAL_JUMP)  ; LAB_005e0970
    CMP EBX,0x7                         ; 005e094b
    JZ 0x005e0970                       ; 005e094e
        ;   XREF to: 005e0970 (CONDITIONAL_JUMP)  ; LAB_005e0970
    CMP dword ptr [EDX],0x3             ; 005e0950
        ;   Label: LAB_005e0950
    JNZ 0x005e0974                      ; 005e0953
        ;   XREF to: 005e0974 (CONDITIONAL_JUMP)  ; LAB_005e0974
    CMP dword ptr [EAX + 0x174],0x5     ; 005e0955
    JNZ 0x005e0974                      ; 005e095c
        ;   XREF to: 005e0974 (CONDITIONAL_JUMP)  ; LAB_005e0974
    MOV ECX,dword ptr [EAX + 0x2f4]     ; 005e095e
    CMP ECX,dword ptr [EDX + 0x4]       ; 005e0964
    JNZ 0x005e0974                      ; 005e0967
        ;   XREF to: 005e0974 (CONDITIONAL_JUMP)  ; LAB_005e0974
    MOV EAX,0x1                         ; 005e0969
    POP EBX                             ; 005e096e
    RET                                 ; 005e096f
    MOV EAX,ECX                         ; 005e0970
        ;   Label: LAB_005e0970
    POP EBX                             ; 005e0972
    RET                                 ; 005e0973
    XOR EAX,EAX                         ; 005e0974
        ;   Label: LAB_005e0974
    POP EBX                             ; 005e0976
    RET                                 ; 005e0977

