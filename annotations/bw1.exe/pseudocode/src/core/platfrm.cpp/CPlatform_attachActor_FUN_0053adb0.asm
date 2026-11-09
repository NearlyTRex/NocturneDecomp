; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_setup_FUN_005395d0 at 0053964a
;   core_script.cpp_CScript_step_FUN_00544460 at 0054609e
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_005ed627
;   TerminatedCString s_CPlatform_attachActor_to_005ed63b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053adb0
        ;   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0
    PUSH ESI                            ; 0053adb1
    PUSH EDI                            ; 0053adb2
    PUSH EBP                            ; 0053adb3
    SUB ESP,0x90                        ; 0053adb4
    MOV ESI,dword ptr [ESP + 0xa4]      ; 0053adba
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0053adc1
    TEST EBX,EBX                        ; 0053adc8
    JZ 0x0053adeb                       ; 0053adca
        ;   XREF to: 0053adeb (CONDITIONAL_JUMP)  ; LAB_0053adeb
    MOV EDI,ESI                         ; 0053adcc
    MOV EDX,dword ptr [ESI + 0x51c]     ; 0053adce
    XOR EAX,EAX                         ; 0053add4
    CMP EBX,EDX                         ; 0053add6
    JZ 0x0053adeb                       ; 0053add8
        ;   XREF to: 0053adeb (CONDITIONAL_JUMP)  ; LAB_0053adeb
    INC EAX                             ; 0053adda
        ;   Label: LAB_0053adda
    ADD EDI,0x34                        ; 0053addb
    CMP EAX,0xa                         ; 0053adde
    JGE 0x0053adf6                      ; 0053ade1
        ;   XREF to: 0053adf6 (CONDITIONAL_JUMP)  ; LAB_0053adf6
    CMP EBX,dword ptr [EDI + 0x51c]     ; 0053ade3
    JNZ 0x0053adda                      ; 0053ade9
        ;   XREF to: 0053adda (CONDITIONAL_JUMP)  ; LAB_0053adda
    ADD ESP,0x90                        ; 0053adeb
        ;   Label: LAB_0053adeb
    POP EBP                             ; 0053adf1
    POP EDI                             ; 0053adf2
    POP ESI                             ; 0053adf3
    POP EBX                             ; 0053adf4
    RET                                 ; 0053adf5
    MOV EDI,ESI                         ; 0053adf6
        ;   Label: LAB_0053adf6
    MOV EBP,dword ptr [ESI + 0x51c]     ; 0053adf8
    XOR EAX,EAX                         ; 0053adfe
    TEST EBP,EBP                        ; 0053ae00
    JZ 0x0053ae16                       ; 0053ae02
        ;   XREF to: 0053ae16 (CONDITIONAL_JUMP)  ; LAB_0053ae16
    INC EAX                             ; 0053ae04
        ;   Label: LAB_0053ae04
    ADD EDI,0x34                        ; 0053ae05
    CMP EAX,0xa                         ; 0053ae08
    JGE 0x0053ae78                      ; 0053ae0b
        ;   XREF to: 0053ae78 (CONDITIONAL_JUMP)  ; LAB_0053ae78
    CMP dword ptr [EDI + 0x51c],0x0     ; 0053ae0d
    JNZ 0x0053ae04                      ; 0053ae14
        ;   XREF to: 0053ae04 (CONDITIONAL_JUMP)  ; LAB_0053ae04
    LEA EAX,[EBX + 0x30]                ; 0053ae16
        ;   Label: LAB_0053ae16
    PUSH EAX                            ; 0053ae19
    LEA EAX,[EBX + 0x20]                ; 0053ae1a
    PUSH EAX                            ; 0053ae1d
    LEA EAX,[ESP + 0x8]                 ; 0053ae1e
    PUSH EAX                            ; 0053ae22
    CALL core_xform.cpp_FUN_005b5760    ; 0053ae23
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0053ae28
    LEA EAX,[ESI + 0x30]                ; 0053ae2b
    PUSH EAX                            ; 0053ae2e
    ADD ESI,0x20                        ; 0053ae2f
    PUSH ESI                            ; 0053ae32
    LEA EAX,[ESP + 0x68]                ; 0053ae33
    PUSH EAX                            ; 0053ae37
    CALL core_xform.cpp_FUN_005b5620    ; 0053ae38
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0053ae3d
    LEA EAX,[ESP + 0x60]                ; 0053ae40
    PUSH EAX                            ; 0053ae44
    LEA EAX,[ESP + 0x4]                 ; 0053ae45
    PUSH EAX                            ; 0053ae49
    LEA ESI,[ESP + 0x38]                ; 0053ae4a
    MOV dword ptr [EDI + 0x51c],EBX     ; 0053ae4e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0053ae54
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0053ae59
    LEA ESI,[ESP + 0x38]                ; 0053ae5e
    LEA EDI,[EDI + 0x520]               ; 0053ae62
    ADD ESP,0x8                         ; 0053ae68
    MOVSD.REP ES:EDI,ESI                ; 0053ae6b
    ADD ESP,0x90                        ; 0053ae6d
    POP EBP                             ; 0053ae73
    POP EDI                             ; 0053ae74
    POP ESI                             ; 0053ae75
    POP EBX                             ; 0053ae76
    RET                                 ; 0053ae77
    MOV ECX,0x5ed627                    ; 0053ae78 | = "..\\core\\platfrm.cpp"
        ;   Label: LAB_0053ae78
    MOV EBX,0x3d0                       ; 0053ae7d
    PUSH 0x5ed63b                       ; 0053ae82 | = "CPlatform::attachActor - too many!"
    MOV dword ptr [0x01d1d400],ECX      ; 0053ae87 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0053ae8d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053ae93
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053ae98
    ADD ESP,0x90                        ; 0053ae9b
    POP EBP                             ; 0053aea1
    POP EDI                             ; 0053aea2
    POP ESI                             ; 0053aea3
    POP EBX                             ; 0053aea4
    RET                                 ; 0053aea5

