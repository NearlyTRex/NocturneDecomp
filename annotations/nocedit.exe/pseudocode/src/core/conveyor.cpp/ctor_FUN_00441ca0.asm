; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CConveyor * core_conveyor.cpp_ctor_FUN_00441ca0(CConveyor * this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_conveyor.cpp_FUN_00441c60 at 00441c7a
;
; Referenced Globals:
;   TerminatedCString s_none_00618e3a
;   undefined4 s_one_00618e3b
;   undefined4 s_ne_00618e3c
;   undefined4 s_e_00618e3d
;   TerminatedCString s_none_00618e3f
;   undefined4 s_one_00618e40
;   undefined4 s_ne_00618e41
;   undefined4 s_e_00618e42
;   CDemonActor_vtable PTR_core_conveyor.cpp_FUN_0065bf34
;
; Called Functions:
;   core_platfrm.cpp_FUN_0054c850
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00441ca0
        ;   Label: core_conveyor.cpp_ctor_FUN_00441ca0
    PUSH EDI                            ; 00441ca1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441ca2
    PUSH EDX                            ; 00441ca6
    CALL core_platfrm.cpp_FUN_0054c850  ; 00441ca7 | CPlatform * core_platfrm.cpp_FUN_0054c850(CPlatform * this_ptr)
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)
    MOV dword ptr [EAX + 0x154],0x65bf34 ; 00441cac | CDemonActor_vtable PTR_core_conveyor.cpp_FUN_0065bf34
    MOV ESI,0x618e3a                    ; 00441cb6 | = "none" | s_none_00618e3a = none
    MOV dword ptr [EAX + 0x72c],0x3f800000 ; 00441cbb
    MOV EDX,EAX                         ; 00441cc5
    MOV dword ptr [EAX + 0x734],0x3f800000 ; 00441cc7
    ADD ESP,0x4                         ; 00441cd1
    MOV dword ptr [EAX + 0x730],0x3dcccccd ; 00441cd4
    LEA EDI,[EAX + 0x744]               ; 00441cde
    MOV dword ptr [EAX + 0x80c],0x0     ; 00441ce4
    PUSH EDI                            ; 00441cee
    MOV AL,byte ptr [ESI]               ; 00441cef | = "none" | s_none_00618e3a = none
        ;   Label: LAB_00441cef
    MOV byte ptr [EDI],AL               ; 00441cf1
    CMP AL,0x0                          ; 00441cf3
    JZ 0x00441d07                       ; 00441cf5 | LAB_00441d07
        ;   XREF to: 00441d07 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00441cf7 | s_one_00618e3b
    ADD ESI,0x2                         ; 00441cfa
    MOV byte ptr [EDI + 0x1],AL         ; 00441cfd
    ADD EDI,0x2                         ; 00441d00
    CMP AL,0x0                          ; 00441d03
    JNZ 0x00441cef                      ; 00441d05 | LAB_00441cef
        ;   XREF to: 00441cef (CONDITIONAL_JUMP)
    POP EDI                             ; 00441d07
        ;   Label: LAB_00441d07
    MOV ESI,0x618e3f                    ; 00441d08 | = "none" | s_none_00618e3f = none
    LEA EDI,[EDX + 0x7a8]               ; 00441d0d
    PUSH EDI                            ; 00441d13
    MOV AL,byte ptr [ESI]               ; 00441d14 | = "none" | s_none_00618e3f = none
        ;   Label: LAB_00441d14
    MOV byte ptr [EDI],AL               ; 00441d16
    CMP AL,0x0                          ; 00441d18
    JZ 0x00441d2c                       ; 00441d1a | LAB_00441d2c
        ;   XREF to: 00441d2c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00441d1c | s_one_00618e40
    ADD ESI,0x2                         ; 00441d1f
    MOV byte ptr [EDI + 0x1],AL         ; 00441d22
    ADD EDI,0x2                         ; 00441d25
    CMP AL,0x0                          ; 00441d28
    JNZ 0x00441d14                      ; 00441d2a | LAB_00441d14
        ;   XREF to: 00441d14 (CONDITIONAL_JUMP)
    POP EDI                             ; 00441d2c
        ;   Label: LAB_00441d2c
    MOV dword ptr [EDX + 0x738],0x0     ; 00441d2d
    MOV dword ptr [EDX + 0x73c],0x0     ; 00441d37
    MOV dword ptr [EDX + 0x740],0x3f800000 ; 00441d41
    MOV EAX,EDX                         ; 00441d4b
    MOV byte ptr [EDX + 0x810],0x0      ; 00441d4d
    POP EDI                             ; 00441d54
    POP ESI                             ; 00441d55
    RET                                 ; 00441d56

