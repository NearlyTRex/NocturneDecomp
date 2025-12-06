; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   mask
;
; XREF[2]:
;   shape_superopt.cpp_COptimize_FUN_005d7290 at 005d72cb
;   shape_superopt.cpp_COptimize_FUN_005d7350 at 005d7361
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d35e0
        ;   Label: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
    PUSH ESI                            ; 005d35e1
    PUSH EDI                            ; 005d35e2
    PUSH EBP                            ; 005d35e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d35e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005d35e8
    MOV EDX,dword ptr [EDI]             ; 005d35ec
    MOV EBX,dword ptr [EDI + 0x4]       ; 005d35ee
    XOR ESI,ESI                         ; 005d35f1
    TEST EDX,EDX                        ; 005d35f3
    JBE 0x005d3610                      ; 005d35f5 | LAB_005d3610
        ;   XREF to: 005d3610 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 005d35f7
        ;   Label: LAB_005d35f7
    MOV ECX,dword ptr [EBX + 0x34]      ; 005d35f9
    NOT EAX                             ; 005d35fc
    AND ECX,EAX                         ; 005d35fe
    MOV dword ptr [EBX + 0x34],ECX      ; 005d3600
    INC ESI                             ; 005d3603
    MOV EAX,dword ptr [EDI]             ; 005d3604
    ADD EBX,0x38                        ; 005d3606
    CMP ESI,EAX                         ; 005d3609
    JC 0x005d35f7                       ; 005d360b | LAB_005d35f7
        ;   XREF to: 005d35f7 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005d360d
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d3610
        ;   Label: LAB_005d3610
    MOV EBX,dword ptr [EDI + 0xc]       ; 005d3613
    XOR ESI,ESI                         ; 005d3616
    TEST EDX,EDX                        ; 005d3618
    JBE 0x005d3640                      ; 005d361a | LAB_005d3640
        ;   XREF to: 005d3640 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005d361c
        ;   Label: LAB_005d361c
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d361d
    PUSH EBX                            ; 005d3620
    INC ESI                             ; 005d3621
    CALL dword ptr [EAX + 0x2c]         ; 005d3622
    ADD ESP,0x8                         ; 005d3625
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d3628
    ADD EBX,0x68                        ; 005d362b
    CMP ESI,ECX                         ; 005d362e
    JC 0x005d361c                       ; 005d3630 | LAB_005d361c
        ;   XREF to: 005d361c (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005d3632
    LEA EDX,[EDX]                       ; 005d3638
    MOV EAX,EAX                         ; 005d363e
    NOT EBP                             ; 005d3640
        ;   Label: LAB_005d3640
    AND dword ptr [EDI + 0x10],EBP      ; 005d3642
    POP EBP                             ; 005d3645
    POP EDI                             ; 005d3646
    POP ESI                             ; 005d3647
    POP EBX                             ; 005d3648
    RET                                 ; 005d3649

