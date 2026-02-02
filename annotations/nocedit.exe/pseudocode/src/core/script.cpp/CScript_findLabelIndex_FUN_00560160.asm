; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00560160(CScript *this_ptr,char *param_2)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[3]:
;   core_script.cpp_CScript_FUN_0055a6c0 at 0055a702
;   core_script.cpp_CScript_FUN_00565d00 at 00565deb
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055a9b5
;
; Called Functions:
;   core_script.cpp_skipWhitespaceFUN_005593d0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560160
        ;   Label: core_script.cpp_CScript_findLabelIndex_FUN_00560160
    PUSH ESI                            ; 00560161
    PUSH EDI                            ; 00560162
    PUSH EBP                            ; 00560163
    MOV EDI,dword ptr [ESP + 0x14]      ; 00560164
    MOV EBP,dword ptr [ESP + 0x18]      ; 00560168
    MOV EDX,dword ptr [EDI + 0x30]      ; 0056016c
    XOR EBX,EBX                         ; 0056016f
    TEST EDX,EDX                        ; 00560171
    JLE 0x0056018e                      ; 00560173
        ;   XREF to: 0056018e (CONDITIONAL_JUMP)  ; LAB_0056018e
    XOR ESI,ESI                         ; 00560175
    MOV EAX,dword ptr [EDI + 0x34]      ; 00560177
        ;   Label: LAB_00560177
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0056017a
    CMP byte ptr [EAX],0x3a             ; 0056017e
    JZ 0x00560198                       ; 00560181
        ;   XREF to: 00560198 (CONDITIONAL_JUMP)  ; LAB_00560198
    INC EBX                             ; 00560183
        ;   Label: LAB_00560183
    MOV ECX,dword ptr [EDI + 0x30]      ; 00560184
    ADD ESI,0x8                         ; 00560187
    CMP EBX,ECX                         ; 0056018a
    JL 0x00560177                       ; 0056018c
        ;   XREF to: 00560177 (CONDITIONAL_JUMP)  ; LAB_00560177
    MOV EAX,0xffffffff                  ; 0056018e
        ;   Label: LAB_0056018e
    POP EBP                             ; 00560193
    POP EDI                             ; 00560194
    POP ESI                             ; 00560195
    POP EBX                             ; 00560196
    RET                                 ; 00560197
    PUSH EBP                            ; 00560198
        ;   Label: LAB_00560198
    INC EAX                             ; 00560199
    PUSH EAX                            ; 0056019a
    CALL core_script.cpp_skipWhitespaceFUN_005593d0 ; 0056019b
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespaceFUN_005593d0(char * str)
    ADD ESP,0x4                         ; 005601a0
    PUSH EAX                            ; 005601a3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005601a4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005601a9
    TEST EAX,EAX                        ; 005601ac
    JNZ 0x00560183                      ; 005601ae
        ;   XREF to: 00560183 (CONDITIONAL_JUMP)  ; LAB_00560183
    MOV EAX,EBX                         ; 005601b0
    POP EBP                             ; 005601b2
    POP EDI                             ; 005601b3
    POP ESI                             ; 005601b4
    POP EBX                             ; 005601b5
    RET                                 ; 005601b6

