; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_FUN_00512be0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_platfrm.cpp_CPlatform_process_FUN_005114f0 at 00512006
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512be0
        ;   Label: core_platfrm.cpp_FUN_00512be0
    PUSH ESI                            ; 00512be1
    PUSH EDI                            ; 00512be2
    PUSH EBP                            ; 00512be3
    SUB ESP,0xcc                        ; 00512be4
    MOV EBP,dword ptr [ESP + 0xe0]      ; 00512bea
    LEA EAX,[EBP + 0x30]                ; 00512bf1
    PUSH EAX                            ; 00512bf4
    LEA EAX,[EBP + 0x20]                ; 00512bf5
    PUSH EAX                            ; 00512bf8
    LEA EAX,[ESP + 0x8]                 ; 00512bf9
    PUSH EAX                            ; 00512bfd
    CALL core_xform.cpp_FUN_00583940    ; 00512bfe
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00512c03
    LEA EAX,[EBP + 0x51c]               ; 00512c06
    XOR EBX,EBX                         ; 00512c0c
    MOV dword ptr [ESP + 0xc8],EAX      ; 00512c0e
    IMUL EAX,EBX,0x34                   ; 00512c15
        ;   Label: LAB_00512c15
    CMP dword ptr [EBP + 0x51c],0x0     ; 00512c18
    JNZ 0x00512c35                      ; 00512c1f
        ;   XREF to: 00512c35 (CONDITIONAL_JUMP)  ; LAB_00512c35
    INC EBX                             ; 00512c21
        ;   Label: LAB_00512c21
    ADD EBP,0x34                        ; 00512c22
    CMP EBX,0xa                         ; 00512c25
    JL 0x00512c15                       ; 00512c28
        ;   XREF to: 00512c15 (CONDITIONAL_JUMP)  ; LAB_00512c15
    ADD ESP,0xcc                        ; 00512c2a
    POP EBP                             ; 00512c30
    POP EDI                             ; 00512c31
    POP ESI                             ; 00512c32
    POP EBX                             ; 00512c33
    RET                                 ; 00512c34
    MOV ESI,ESP                         ; 00512c35
        ;   Label: LAB_00512c35
    PUSH ESI                            ; 00512c37
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00512c38
    ADD ESI,EAX                         ; 00512c3f
    ADD ESI,0x4                         ; 00512c41
    PUSH ESI                            ; 00512c44
    LEA ESI,[ESP + 0x38]                ; 00512c45
    LEA EDI,[ESP + 0x68]                ; 00512c49
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00512c4d
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00512c52
    LEA ESI,[ESP + 0x38]                ; 00512c57
    ADD ESP,0x8                         ; 00512c5b
    MOVSD.REP ES:EDI,ESI                ; 00512c5e
    LEA ESI,[ESP + 0x60]                ; 00512c60
    MOV EAX,dword ptr [EBP + 0x51c]     ; 00512c64
    LEA EDI,[ESP + 0xa8]                ; 00512c6a
    MOV dword ptr [ESP + 0xc0],EAX      ; 00512c71
    PUSH ESI                            ; 00512c78
    MOV EAX,dword ptr [EAX + 0x154]     ; 00512c79
    LEA ESI,[ESP + 0xa0]                ; 00512c7f
    MOV dword ptr [ESP + 0xc8],EAX      ; 00512c86
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 00512c8d
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[ESP + 0xa0]                ; 00512c92
    ADD ESP,0x4                         ; 00512c99
    MOVSD ES:EDI,ESI                    ; 00512c9c
    MOVSD ES:EDI,ESI                    ; 00512c9d
    MOVSD ES:EDI,ESI                    ; 00512c9e
    LEA ESI,[ESP + 0xa8]                ; 00512c9f
    PUSH ESI                            ; 00512ca6
    LEA ESI,[ESP + 0x64]                ; 00512ca7
    PUSH ESI                            ; 00512cab
    LEA ESI,[ESP + 0x98]                ; 00512cac
    LEA EDI,[ESP + 0xbc]                ; 00512cb3
    CALL core_xform.cpp_FUN_00584450    ; 00512cba
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x98]                ; 00512cbf
    ADD ESP,0x4                         ; 00512cc6
    MOVSD ES:EDI,ESI                    ; 00512cc9
    MOVSD ES:EDI,ESI                    ; 00512cca
    MOVSD ES:EDI,ESI                    ; 00512ccb
    LEA ESI,[ESP + 0xb8]                ; 00512ccc
    PUSH ESI                            ; 00512cd3
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00512cd4
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00512cdb
    PUSH ECX                            ; 00512ce2
    CALL dword ptr [EAX + 0x68]         ; 00512ce3
    ADD ESP,0xc                         ; 00512ce6
    JMP 0x00512c21                      ; 00512ce9
        ;   XREF to: 00512c21 (UNCONDITIONAL_JUMP)  ; LAB_00512c21

