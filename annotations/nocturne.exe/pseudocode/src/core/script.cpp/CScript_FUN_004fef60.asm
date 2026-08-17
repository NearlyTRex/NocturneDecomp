; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_CScript_FUN_004fef60(CScript *this_ptr,int *error_line_out)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   error_line_out
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_004febd0 at 004fed20
;
; Referenced Globals:
;   undefined4 DAT_01e56418
;
; Called Functions:
;   core_script.cpp_CScript_FUN_004feff0
;   core_script.cpp_CScript_step_FUN_004ff2c0
;   shape_edittool.cpp_CPickList_clear_FUN_00476160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fef60
        ;   Label: core_script.cpp_CScript_FUN_004fef60
    PUSH ESI                            ; 004fef61
    PUSH EBP                            ; 004fef62
    SUB ESP,0x4                         ; 004fef63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fef66
    MOV EDX,0x1                         ; 004fef6a
    PUSH EBX                            ; 004fef6f
    MOV dword ptr [0x01e56418],EDX      ; 004fef70 | DAT_01e56418
    CALL core_script.cpp_CScript_FUN_004feff0 ; 004fef76
        ;   XREF to: 004feff0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004feff0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fef7b
    PUSH 0x1e56c30                      ; 004fef7e
    CALL shape_edittool.cpp_CPickList_clear_FUN_00476160 ; 004fef83
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00476160(CPickList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x40]      ; 004fef88
    MOV ECX,dword ptr [EBX + 0x28]      ; 004fef8b
    ADD ESP,0x4                         ; 004fef8e
    CMP EAX,ECX                         ; 004fef91
    JGE 0x004fefbc                      ; 004fef93
        ;   XREF to: 004fefbc (CONDITIONAL_JUMP)  ; LAB_004fefbc
    MOV EBP,0x3e800000                  ; 004fef95
    MOV EAX,ESP                         ; 004fef9a
        ;   Label: LAB_004fef9a
    PUSH EAX                            ; 004fef9c
    PUSH EBX                            ; 004fef9d
    MOV ESI,dword ptr [EBX + 0x40]      ; 004fef9e
    MOV dword ptr [ESP + 0x8],EBP       ; 004fefa1
    CALL core_script.cpp_CScript_step_FUN_004ff2c0 ; 004fefa5
        ;   XREF to: 004ff2c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_004ff2c0(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 004fefaa
    TEST EAX,EAX                        ; 004fefad
    JL 0x004fefcf                       ; 004fefaf
        ;   XREF to: 004fefcf (CONDITIONAL_JUMP)  ; LAB_004fefcf
    INC ESI                             ; 004fefb1
    MOV dword ptr [EBX + 0x40],ESI      ; 004fefb2
    MOV EAX,ESI                         ; 004fefb5
    CMP EAX,dword ptr [EBX + 0x28]      ; 004fefb7
    JL 0x004fef9a                       ; 004fefba
        ;   XREF to: 004fef9a (CONDITIONAL_JUMP)  ; LAB_004fef9a
    PUSH EDI                            ; 004fefbc
        ;   Label: LAB_004fefbc
    XOR EDI,EDI                         ; 004fefbd
    XOR EAX,EAX                         ; 004fefbf
    MOV dword ptr [0x01e56418],EDI      ; 004fefc1 | DAT_01e56418
    POP EDI                             ; 004fefc7
    ADD ESP,0x4                         ; 004fefc8
    POP EBP                             ; 004fefcb
    POP ESI                             ; 004fefcc
    POP EBX                             ; 004fefcd
    RET                                 ; 004fefce
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fefcf
        ;   Label: LAB_004fefcf
    MOV EAX,dword ptr [EAX + ESI*0x8]   ; 004fefd2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fefd5
    DEC EAX                             ; 004fefd9
    MOV dword ptr [EBX],EAX             ; 004fefda
    MOV EAX,0x1e56420                   ; 004fefdc
    ADD ESP,0x4                         ; 004fefe1
    POP EBP                             ; 004fefe4
    POP ESI                             ; 004fefe5
    POP EBX                             ; 004fefe6
    RET                                 ; 004fefe7

