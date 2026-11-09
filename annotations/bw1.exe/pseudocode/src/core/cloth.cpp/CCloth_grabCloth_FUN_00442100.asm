; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_00442100(CCloth *this_ptr,char *bone_name,int vertex_index)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   bone_name
; int              Stack[0xc]:4   vertex_index
;
; XREF[1]:
;   core_stranger.cpp_FUN_005917b0 at 0059190a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d6a1c
;   TerminatedCString s_CCloth_grabCloth_Can_t_f_005d6a2e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442100
        ;   Label: core_cloth.cpp_CCloth_grabCloth_FUN_00442100
    PUSH ESI                            ; 00442101
    PUSH EDI                            ; 00442102
    PUSH EBP                            ; 00442103
    MOV EDI,dword ptr [ESP + 0x14]      ; 00442104
    MOV EBP,dword ptr [ESP + 0x18]      ; 00442108
    MOV EDX,dword ptr [EDI + 0x37b4c]   ; 0044210c
    XOR EBX,EBX                         ; 00442112
    TEST EDX,EDX                        ; 00442114
    JLE 0x0044212c                      ; 00442116
        ;   XREF to: 0044212c (CONDITIONAL_JUMP)  ; LAB_0044212c
    LEA ESI,[EDI + 0x37b50]             ; 00442118
    PUSH ESI                            ; 0044211e
        ;   Label: LAB_0044211e
    PUSH EBP                            ; 0044211f
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 00442120
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 00442125
    TEST EAX,EAX                        ; 00442128
    JNZ 0x0044215d                      ; 0044212a
        ;   XREF to: 0044215d (CONDITIONAL_JUMP)  ; LAB_0044215d
    CMP EBX,dword ptr [EDI + 0x37b4c]   ; 0044212c
        ;   Label: LAB_0044212c
    JZ 0x00442170                       ; 00442132
        ;   XREF to: 00442170 (CONDITIONAL_JUMP)  ; LAB_00442170
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00442134
        ;   Label: LAB_00442134
    LEA EAX,[ESI*0x8 + 0x0]             ; 00442138
    ADD EAX,ESI                         ; 0044213f
    SHL EAX,0x3                         ; 00442141
    SUB EAX,ESI                         ; 00442144
    MOV dword ptr [EDI + EAX*0x4 + 0x40c],0x1 ; 00442146
    MOV dword ptr [EDI + EAX*0x4 + 0x470],EBX ; 00442151
    POP EBP                             ; 00442158
    POP EDI                             ; 00442159
    POP ESI                             ; 0044215a
    POP EBX                             ; 0044215b
    RET                                 ; 0044215c
    INC EBX                             ; 0044215d
        ;   Label: LAB_0044215d
    MOV ECX,dword ptr [EDI + 0x37b4c]   ; 0044215e
    ADD ESI,0xac                        ; 00442164
    CMP EBX,ECX                         ; 0044216a
    JL 0x0044211e                       ; 0044216c
        ;   XREF to: 0044211e (CONDITIONAL_JUMP)  ; LAB_0044211e
    JMP 0x0044212c                      ; 0044216e
        ;   XREF to: 0044212c (UNCONDITIONAL_JUMP)  ; LAB_0044212c
    PUSH EBP                            ; 00442170
        ;   Label: LAB_00442170
    MOV EAX,0x5d6a1c                    ; 00442171 | = "..\\core\\cloth.cpp"
    MOV EDX,0xab4                       ; 00442176
    PUSH 0x5d6a2e                       ; 0044217b | = "CCloth::grabCloth - Can't find bone %s"
    MOV [0x01d1d400],EAX                ; 00442180 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00442185 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044218b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00442190
    JMP 0x00442134                      ; 00442193
        ;   XREF to: 00442134 (UNCONDITIONAL_JUMP)  ; LAB_00442134

