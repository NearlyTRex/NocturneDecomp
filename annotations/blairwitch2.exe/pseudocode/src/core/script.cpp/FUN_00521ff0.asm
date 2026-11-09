; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * core_script_cpp_FUN_00521ff0(CScript *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01e650f8
;
; Called Functions:
;   core_script.cpp_FUN_00522080
;   core_script.cpp_FUN_00522350
;   shape_edittool.cpp_FUN_00483d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521ff0
        ;   Label: core_script.cpp_FUN_00521ff0
    PUSH ESI                            ; 00521ff1
    PUSH EDI                            ; 00521ff2
    PUSH EBP                            ; 00521ff3
    SUB ESP,0x4                         ; 00521ff4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00521ff7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00521ffb
    MOV EBP,dword ptr [ESP + 0x20]      ; 00521fff
    MOV EDX,0x1                         ; 00522003
    PUSH EBX                            ; 00522008
    MOV dword ptr [0x01e650f8],EDX      ; 00522009 | DAT_01e650f8
    CALL core_script.cpp_FUN_00522080   ; 0052200f
        ;   XREF to: 00522080 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00522080(CScript * this_ptr)
    ADD ESP,0x4                         ; 00522014
    PUSH 0x1e65910                      ; 00522017
    CALL shape_edittool.cpp_FUN_00483d10 ; 0052201c
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00483d10(CPickList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x44]      ; 00522021
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00522024
    ADD ESP,0x4                         ; 00522027
    CMP EAX,ECX                         ; 0052202a
    JGE 0x00522054                      ; 0052202c
        ;   XREF to: 00522054 (CONDITIONAL_JUMP)  ; LAB_00522054
    MOV EAX,0x3e800000                  ; 0052202e
        ;   Label: LAB_0052202e
    MOV ESI,dword ptr [EBX + 0x44]      ; 00522033
    MOV dword ptr [ESP],EAX             ; 00522036
    MOV EAX,ESP                         ; 00522039
    PUSH EAX                            ; 0052203b
    PUSH EBX                            ; 0052203c
    CALL core_script.cpp_FUN_00522350   ; 0052203d
        ;   XREF to: 00522350 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00522350()
    ADD ESP,0x8                         ; 00522042
    TEST EAX,EAX                        ; 00522045
    JL 0x00522066                       ; 00522047
        ;   XREF to: 00522066 (CONDITIONAL_JUMP)  ; LAB_00522066
    INC ESI                             ; 00522049
        ;   Label: LAB_00522049
    MOV dword ptr [EBX + 0x44],ESI      ; 0052204a
    MOV EAX,ESI                         ; 0052204d
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0052204f
    JL 0x0052202e                       ; 00522052
        ;   XREF to: 0052202e (CONDITIONAL_JUMP)  ; LAB_0052202e
    XOR EDI,EDI                         ; 00522054
        ;   Label: LAB_00522054
    XOR EAX,EAX                         ; 00522056
    MOV dword ptr [0x01e650f8],EDI      ; 00522058 | DAT_01e650f8
    ADD ESP,0x4                         ; 0052205e
    POP EBP                             ; 00522061
    POP EDI                             ; 00522062
    POP ESI                             ; 00522063
    POP EBX                             ; 00522064
    RET                                 ; 00522065
    MOV EAX,dword ptr [EBX + 0x30]      ; 00522066
        ;   Label: LAB_00522066
    MOV EAX,dword ptr [EAX + ESI*0x8]   ; 00522069
    DEC EAX                             ; 0052206c
    MOV dword ptr [EDI],EAX             ; 0052206d
    CMP EBP,EAX                         ; 0052206f
    JG 0x00522049                       ; 00522071
        ;   XREF to: 00522049 (CONDITIONAL_JUMP)  ; LAB_00522049
    MOV EAX,0x1e65100                   ; 00522073
    ADD ESP,0x4                         ; 00522078
    POP EBP                             ; 0052207b
    POP EDI                             ; 0052207c
    POP ESI                             ; 0052207d
    POP EBX                             ; 0052207e
    RET                                 ; 0052207f

