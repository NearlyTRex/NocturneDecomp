; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_00473530(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_004734b0 at 004734b6
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_dtor_FUN_00466290
;   crt_unknown.c_FUN_005a30c4
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00473530
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_00473530
    PUSH EBP                            ; 00473531
    MOV ESI,dword ptr [ESP + 0xc]       ; 00473532
    CMP dword ptr [ESI + 0x4c],0x0      ; 00473536
    JZ 0x004735ac                       ; 0047353a
        ;   XREF to: 004735ac (CONDITIONAL_JUMP)  ; LAB_004735ac
    PUSH EDI                            ; 00473540
    PUSH EBX                            ; 00473541
    XOR EDI,EDI                         ; 00473542
    XOR EBP,EBP                         ; 00473544
    MOV ECX,dword ptr [ESI + 0x44]      ; 00473546
        ;   Label: LAB_00473546
    MOV EBX,dword ptr [ESI + 0x40]      ; 00473549
    IMUL EBX,ECX                        ; 0047354c
    MOV EAX,dword ptr [ESI + 0x48]      ; 0047354f
    IMUL EAX,EBX                        ; 00473552
    CMP EBP,EAX                         ; 00473555
    JGE 0x0047359e                      ; 00473557
        ;   XREF to: 0047359e (CONDITIONAL_JUMP)  ; LAB_0047359e
    MOV EBX,dword ptr [ESI + 0x4c]      ; 00473559
    ADD EBX,EDI                         ; 0047355c
    MOV dword ptr [EBX],0x0             ; 0047355e
    MOV dword ptr [EBX + 0x4],0x0       ; 00473564
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047356b
    MOV dword ptr [EBX + 0x54],0x0      ; 0047356e
    TEST EAX,EAX                        ; 00473575
    JNZ 0x00473586                      ; 00473577
        ;   XREF to: 00473586 (CONDITIONAL_JUMP)  ; LAB_00473586
    ADD EDI,0x58                        ; 00473579
        ;   Label: LAB_00473579
    INC EBP                             ; 0047357c
    MOV dword ptr [EBX + 0xc],0x0       ; 0047357d
    JMP 0x00473546                      ; 00473584
        ;   XREF to: 00473546 (UNCONDITIONAL_JUMP)  ; LAB_00473546
    JZ 0x00473579                       ; 00473586
        ;   XREF to: 00473579 (CONDITIONAL_JUMP)  ; LAB_00473579
        ;   Label: LAB_00473586
    PUSH 0x0                            ; 00473588
    PUSH EAX                            ; 0047358a
    CALL core_dpart.cpp_CDemonPart_dtor_FUN_00466290 ; 0047358b
        ;   XREF to: 00466290 (UNCONDITIONAL_CALL)  ; CDemonPart * core_dpart.cpp_CDemonPart_dtor_FUN_00466290(CDemonPart * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00473590
    PUSH EAX                            ; 00473593
    CALL crt_unknown.c_FUN_005a30c4     ; 00473594
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00473599
    JMP 0x00473579                      ; 0047359c
        ;   XREF to: 00473579 (UNCONDITIONAL_JUMP)  ; LAB_00473579
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0047359e
        ;   Label: LAB_0047359e
    PUSH EBX                            ; 004735a1
    CALL crt_unknown.c_FUN_005a3770     ; 004735a2
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004735a7
    POP EBX                             ; 004735aa
    POP EDI                             ; 004735ab
    MOV dword ptr [ESI + 0x4c],0x0      ; 004735ac
        ;   Label: LAB_004735ac
    POP EBP                             ; 004735b3
    POP ESI                             ; 004735b4
    RET                                 ; 004735b5

