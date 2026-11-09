; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_demnfolk_cpp_FUN_00458140(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_demnfolk.cpp_FUN_00457740 at 00457984
;
; Called Functions:
;   unkafter_demnfolk.cpp_FUN_004580a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458140
        ;   Label: unkafter_demnfolk.cpp_FUN_00458140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00458141
    MOV EDX,dword ptr [ESP + 0xc]       ; 00458145
    PUSH EDX                            ; 00458149
    PUSH EBX                            ; 0045814a
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 0045814b
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 00458150
    TEST EAX,EAX                        ; 00458153
    JL 0x00458175                       ; 00458155
        ;   XREF to: 00458175 (CONDITIONAL_JUMP)  ; LAB_00458175
    SHL EAX,0x3                         ; 00458157
    MOV EDX,EAX                         ; 0045815a
    SHL EAX,0x4                         ; 0045815c
    SUB EAX,EDX                         ; 0045815f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 00458161
    TEST EAX,EAX                        ; 00458168
    JL 0x00458175                       ; 0045816a
        ;   XREF to: 00458175 (CONDITIONAL_JUMP)  ; LAB_00458175
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045816c
    POP EBX                             ; 00458173
    RET                                 ; 00458174
    XOR EAX,EAX                         ; 00458175
        ;   Label: LAB_00458175
    POP EBX                             ; 00458177
    RET                                 ; 00458178

