; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00518130(int param_1)
;
;
; XREF[6]:
;   FUN_004359e0 at 00435cef
;   FUN_0051ad20 at 0051ad75
;   FUN_0051b280 at 0051b28c
;   FUN_0051b480 at 0051b48c
;   FUN_0051e0a0 at 0051e0ae
;   FUN_0051ef40 at 0051ef5b
;
; Referenced Globals:
;   string s_..\\core\\skeleton.cpp_00591629
;   string s_Tried_to_do_something_with_the_s_0059163e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00518130
        ;   Label: FUN_00518130
    CMP dword ptr [EAX + 0x2a6c],0x0    ; 00518134
    JZ 0x00518148                       ; 0051813b
        ;   XREF to: 00518148 (CONDITIONAL_JUMP)  ; LAB_00518148
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051813d
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 00518141
    RET                                 ; 00518147
    PUSH EBX                            ; 00518148
        ;   Label: LAB_00518148
    MOV ECX,0x591629                    ; 00518149 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2e6                       ; 0051814e
    PUSH 0x59163e                       ; 00518153 | = "Tried to do something with the skelet..."
    MOV dword ptr [0x01cc4800],ECX      ; 00518158 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0051815e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00518164
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00518169
    POP EBX                             ; 0051816c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051816d
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 00518171
    RET                                 ; 00518177

