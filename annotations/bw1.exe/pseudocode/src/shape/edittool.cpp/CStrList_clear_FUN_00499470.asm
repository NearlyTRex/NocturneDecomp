; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00499470(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_FUN_00543740 at 00543749
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0 at 004993b4
;   shape_edittool.cpp_FUN_0049c370 at 0049c39f
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00499470
        ;   Label: shape_edittool.cpp_CStrList_clear_FUN_00499470
    PUSH EBP                            ; 00499471
    MOV EDI,dword ptr [ESP + 0xc]       ; 00499472
    CMP dword ptr [EDI + 0x8],0x0       ; 00499476
    JZ 0x004994b4                       ; 0049947a
        ;   XREF to: 004994b4 (CONDITIONAL_JUMP)  ; LAB_004994b4
    PUSH ESI                            ; 0049947c
    PUSH EBX                            ; 0049947d
    MOV ECX,dword ptr [EDI]             ; 0049947e
    XOR EBX,EBX                         ; 00499480
    TEST ECX,ECX                        ; 00499482
    JLE 0x004994a6                      ; 00499484
        ;   XREF to: 004994a6 (CONDITIONAL_JUMP)  ; LAB_004994a6
    XOR ESI,ESI                         ; 00499486
    MOV EAX,dword ptr [EDI + 0x8]       ; 00499488
        ;   Label: LAB_00499488
    ADD EAX,ESI                         ; 0049948b
    MOV EDX,dword ptr [EAX]             ; 0049948d
    TEST EDX,EDX                        ; 0049948f
    JZ 0x0049949c                       ; 00499491
        ;   XREF to: 0049949c (CONDITIONAL_JUMP)  ; LAB_0049949c
    PUSH EDX                            ; 00499493
    CALL crt_unknown.c_FUN_005c09f0     ; 00499494
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00499499
    INC EBX                             ; 0049949c
        ;   Label: LAB_0049949c
    MOV EBP,dword ptr [EDI]             ; 0049949d
    ADD ESI,0x4                         ; 0049949f
    CMP EBX,EBP                         ; 004994a2
    JL 0x00499488                       ; 004994a4
        ;   XREF to: 00499488 (CONDITIONAL_JUMP)  ; LAB_00499488
    MOV EAX,dword ptr [EDI + 0x8]       ; 004994a6
        ;   Label: LAB_004994a6
    PUSH EAX                            ; 004994a9
    CALL crt_unknown.c_FUN_005c09f0     ; 004994aa
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004994af
    POP EBX                             ; 004994b2
    POP ESI                             ; 004994b3
    MOV dword ptr [EDI + 0x8],0x0       ; 004994b4
        ;   Label: LAB_004994b4
    MOV dword ptr [EDI + 0x4],0x0       ; 004994bb
    MOV dword ptr [EDI],0x0             ; 004994c2
    POP EBP                             ; 004994c8
    POP EDI                             ; 004994c9
    RET                                 ; 004994ca

