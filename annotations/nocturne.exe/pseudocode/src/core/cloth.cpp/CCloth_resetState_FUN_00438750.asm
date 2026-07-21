; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005402f0 at 00540564
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00438750
        ;   Label: core_cloth.cpp_CCloth_resetState_FUN_00438750
    LEA EAX,[EDX*0x8 + 0x0]             ; 00438754
    ADD EAX,EDX                         ; 0043875b
    SHL EAX,0x3                         ; 0043875d
    SUB EAX,EDX                         ; 00438760
    MOV EDX,dword ptr [ESP + 0x4]       ; 00438762
    SHL EAX,0x2                         ; 00438766
    ADD EAX,EDX                         ; 00438769
    MOV dword ptr [EAX + 0x470],0xffffffff ; 0043876b
    MOV dword ptr [EAX + 0x40c],0x0     ; 00438775
    RET                                 ; 0043877f

