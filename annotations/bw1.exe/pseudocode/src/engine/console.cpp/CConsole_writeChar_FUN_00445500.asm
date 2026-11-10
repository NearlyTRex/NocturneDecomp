; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00445500(CConsole *this_ptr,char character)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; XREF[1]:
;   engine_console.cpp_FUN_00445430 at 00445493
;
; Called Functions:
;   engine_console.cpp_CConsole_scrollUp_FUN_00445610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445500
        ;   Label: engine_console.cpp_CConsole_writeChar_FUN_00445500
    PUSH EDI                            ; 00445501
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445502
    MOV BL,byte ptr [ESP + 0x10]        ; 00445506
    CMP BL,0xa                          ; 0044550a
    JZ 0x00445573                       ; 0044550d
        ;   XREF to: 00445573 (CONDITIONAL_JUMP)  ; LAB_00445573
    TEST BL,BL                          ; 0044550f
    JZ 0x004455a7                       ; 00445511
        ;   XREF to: 004455a7 (CONDITIONAL_JUMP)  ; LAB_004455a7
    MOV ECX,dword ptr [EAX + 0xfac]     ; 00445517
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044551d
    ADD EDX,ECX                         ; 00445524
    SHL EDX,0x4                         ; 00445526
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00445529
    ADD EDX,EAX                         ; 0044552f
    ADD EDX,ECX                         ; 00445531
    MOV byte ptr [EDX + 0x8],BL         ; 00445533
    MOV EBX,dword ptr [EAX + 0xfa8]     ; 00445536
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 0044553c
    INC EBX                             ; 00445542
    DEC EDX                             ; 00445543
    MOV dword ptr [EAX + 0xfa8],EBX     ; 00445544
    CMP EDX,EBX                         ; 0044554a
    JGE 0x00445570                      ; 0044554c
        ;   XREF to: 00445570 (CONDITIONAL_JUMP)  ; LAB_00445570
    MOV EDI,dword ptr [EAX + 0xfac]     ; 0044554e
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00445554
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0044555a
    INC EDI                             ; 00445564
    DEC EDX                             ; 00445565
    MOV dword ptr [EAX + 0xfac],EDI     ; 00445566
    CMP EDX,EDI                         ; 0044556c
    JL 0x00445595                       ; 0044556e
        ;   XREF to: 00445595 (CONDITIONAL_JUMP)  ; LAB_00445595
    POP EDI                             ; 00445570
        ;   Label: LAB_00445570
    POP EBX                             ; 00445571
    RET                                 ; 00445572
    MOV EBX,dword ptr [EAX + 0xfac]     ; 00445573
        ;   Label: LAB_00445573
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00445579
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0044557f
    INC EBX                             ; 00445589
    DEC EDX                             ; 0044558a
    MOV dword ptr [EAX + 0xfac],EBX     ; 0044558b
    CMP EDX,EBX                         ; 00445591
    JGE 0x00445570                      ; 00445593
        ;   XREF to: 00445570 (CONDITIONAL_JUMP)  ; LAB_00445570
    PUSH EAX                            ; 00445595
        ;   Label: LAB_00445595
    MOV dword ptr [EAX + 0xfac],EDX     ; 00445596
    CALL engine_console.cpp_CConsole_scrollUp_FUN_00445610 ; 0044559c
        ;   XREF to: 00445610 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_scrollUp_FUN_00445610(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004455a1
    POP EDI                             ; 004455a4
    POP EBX                             ; 004455a5
    RET                                 ; 004455a6
    MOV ECX,dword ptr [EAX + 0xfac]     ; 004455a7
        ;   Label: LAB_004455a7
    LEA EDX,[ECX*0x4 + 0x0]             ; 004455ad
    ADD EDX,ECX                         ; 004455b4
    SHL EDX,0x4                         ; 004455b6
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 004455b9
    ADD EDX,EAX                         ; 004455bf
    ADD EDX,ECX                         ; 004455c1
    MOV byte ptr [EDX + 0x8],BL         ; 004455c3
    POP EDI                             ; 004455c6
    POP EBX                             ; 004455c7
    RET                                 ; 004455c8

