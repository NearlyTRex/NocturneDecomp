; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_FUN_0053aef0(CPlatform *this_ptr)
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
;   core_platfrm.cpp_FUN_00539810 at 0053a326
;
; Called Functions:
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053aef0
        ;   Label: core_platfrm.cpp_FUN_0053aef0
    PUSH ESI                            ; 0053aef1
    PUSH EDI                            ; 0053aef2
    PUSH EBP                            ; 0053aef3
    SUB ESP,0xcc                        ; 0053aef4
    MOV EBP,dword ptr [ESP + 0xe0]      ; 0053aefa
    LEA EAX,[EBP + 0x30]                ; 0053af01
    PUSH EAX                            ; 0053af04
    LEA EAX,[EBP + 0x20]                ; 0053af05
    PUSH EAX                            ; 0053af08
    LEA EAX,[ESP + 0x8]                 ; 0053af09
    PUSH EAX                            ; 0053af0d
    CALL core_xform.cpp_FUN_005b5760    ; 0053af0e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0053af13
    LEA EAX,[EBP + 0x51c]               ; 0053af16
    XOR EBX,EBX                         ; 0053af1c
    MOV dword ptr [ESP + 0xc8],EAX      ; 0053af1e
    IMUL EAX,EBX,0x34                   ; 0053af25
        ;   Label: LAB_0053af25
    CMP dword ptr [EBP + 0x51c],0x0     ; 0053af28
    JNZ 0x0053af45                      ; 0053af2f
        ;   XREF to: 0053af45 (CONDITIONAL_JUMP)  ; LAB_0053af45
    INC EBX                             ; 0053af31
        ;   Label: LAB_0053af31
    ADD EBP,0x34                        ; 0053af32
    CMP EBX,0xa                         ; 0053af35
    JL 0x0053af25                       ; 0053af38
        ;   XREF to: 0053af25 (CONDITIONAL_JUMP)  ; LAB_0053af25
    ADD ESP,0xcc                        ; 0053af3a
    POP EBP                             ; 0053af40
    POP EDI                             ; 0053af41
    POP ESI                             ; 0053af42
    POP EBX                             ; 0053af43
    RET                                 ; 0053af44
    MOV ESI,ESP                         ; 0053af45
        ;   Label: LAB_0053af45
    PUSH ESI                            ; 0053af47
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0053af48
    ADD ESI,EAX                         ; 0053af4f
    ADD ESI,0x4                         ; 0053af51
    PUSH ESI                            ; 0053af54
    LEA ESI,[ESP + 0x38]                ; 0053af55
    LEA EDI,[ESP + 0x68]                ; 0053af59
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0053af5d
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0053af62
    LEA ESI,[ESP + 0x38]                ; 0053af67
    ADD ESP,0x8                         ; 0053af6b
    MOVSD.REP ES:EDI,ESI                ; 0053af6e
    LEA ESI,[ESP + 0x60]                ; 0053af70
    MOV EAX,dword ptr [EBP + 0x51c]     ; 0053af74
    LEA EDI,[ESP + 0xa8]                ; 0053af7a
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053af81
    PUSH ESI                            ; 0053af88
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053af89
    LEA ESI,[ESP + 0xa0]                ; 0053af8f
    MOV dword ptr [ESP + 0xc8],EAX      ; 0053af96
    CALL core_xform.cpp_FUN_005b5930    ; 0053af9d
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    LEA ESI,[ESP + 0xa0]                ; 0053afa2
    ADD ESP,0x4                         ; 0053afa9
    MOVSD ES:EDI,ESI                    ; 0053afac
    MOVSD ES:EDI,ESI                    ; 0053afad
    MOVSD ES:EDI,ESI                    ; 0053afae
    LEA ESI,[ESP + 0xa8]                ; 0053afaf
    PUSH ESI                            ; 0053afb6
    LEA ESI,[ESP + 0x64]                ; 0053afb7
    PUSH ESI                            ; 0053afbb
    LEA ESI,[ESP + 0x98]                ; 0053afbc
    LEA EDI,[ESP + 0xbc]                ; 0053afc3
    CALL core_xform.cpp_FUN_005b6270    ; 0053afca
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x98]                ; 0053afcf
    ADD ESP,0x4                         ; 0053afd6
    MOVSD ES:EDI,ESI                    ; 0053afd9
    MOVSD ES:EDI,ESI                    ; 0053afda
    MOVSD ES:EDI,ESI                    ; 0053afdb
    LEA ESI,[ESP + 0xb8]                ; 0053afdc
    PUSH ESI                            ; 0053afe3
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0053afe4
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0053afeb
    PUSH ECX                            ; 0053aff2
    CALL dword ptr [EAX + 0x68]         ; 0053aff3
    ADD ESP,0xc                         ; 0053aff6
    JMP 0x0053af31                      ; 0053aff9
        ;   XREF to: 0053af31 (UNCONDITIONAL_JUMP)  ; LAB_0053af31

