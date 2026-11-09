; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bbad0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004bb510 at 004bb52c
;   core_fldnotes.cpp_FUN_004bb6f0 at 004bb830
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bb630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbad0
        ;   Label: core_fldnotes.cpp_FUN_004bbad0
    PUSH ESI                            ; 004bbad1
    PUSH EDI                            ; 004bbad2
    PUSH EBP                            ; 004bbad3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004bbad4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bbad8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004bbadc
    MOV EDX,dword ptr [EBX + 0x20]      ; 004bbae0
        ;   Label: LAB_004bbae0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bbae3
    CMP EAX,EDX                         ; 004bbae6
    JLE 0x004bbaf3                      ; 004bbae8
        ;   XREF to: 004bbaf3 (CONDITIONAL_JUMP)  ; LAB_004bbaf3
    MOV ECX,dword ptr [EBX + 0x28]      ; 004bbaea
    ADD EAX,EDI                         ; 004bbaed
    CMP EAX,ECX                         ; 004bbaef
    JG 0x004bbb11                       ; 004bbaf1
        ;   XREF to: 004bbb11 (CONDITIONAL_JUMP)  ; LAB_004bbb11
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004bbaf3
        ;   Label: LAB_004bbaf3
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bbaf6
    CMP EAX,EBP                         ; 004bbaf9
    JZ 0x004bbb18                       ; 004bbafb
        ;   XREF to: 004bbb18 (CONDITIONAL_JUMP)  ; LAB_004bbb18
    MOV EDX,dword ptr [EBX + 0x24]      ; 004bbafd
    ADD EAX,ESI                         ; 004bbb00
    CMP EAX,EDX                         ; 004bbb02
    JLE 0x004bbb18                      ; 004bbb04
        ;   XREF to: 004bbb18 (CONDITIONAL_JUMP)  ; LAB_004bbb18
    PUSH EBX                            ; 004bbb06
    CALL core_fldnotes.cpp_FUN_004bb630 ; 004bbb07
        ;   XREF to: 004bb630 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb630()
    ADD ESP,0x4                         ; 004bbb0c
    JMP 0x004bbae0                      ; 004bbb0f
        ;   XREF to: 004bbae0 (UNCONDITIONAL_JUMP)  ; LAB_004bbae0
    XOR EAX,EAX                         ; 004bbb11
        ;   Label: LAB_004bbb11
    POP EBP                             ; 004bbb13
    POP EDI                             ; 004bbb14
    POP ESI                             ; 004bbb15
    POP EBX                             ; 004bbb16
    RET                                 ; 004bbb17
    MOV EAX,0x1                         ; 004bbb18
        ;   Label: LAB_004bbb18
    POP EBP                             ; 004bbb1d
    POP EDI                             ; 004bbb1e
    POP ESI                             ; 004bbb1f
    POP EBX                             ; 004bbb20
    RET                                 ; 004bbb21

