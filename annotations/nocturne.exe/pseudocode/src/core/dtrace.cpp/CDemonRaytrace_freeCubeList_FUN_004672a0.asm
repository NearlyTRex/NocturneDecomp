; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(int param_1)
;
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220 at 00467226
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_dtor_FUN_00456f40
;   crt_unknown.c_FUN_005638d0
;   crt_unknown.c_FUN_00564494
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004672a0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
    PUSH EBP                            ; 004672a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004672a2
    CMP dword ptr [ESI + 0x4c],0x0      ; 004672a6
    JZ 0x0046731c                       ; 004672aa
        ;   XREF to: 0046731c (CONDITIONAL_JUMP)  ; LAB_0046731c
    PUSH EDI                            ; 004672b0
    PUSH EBX                            ; 004672b1
    XOR EDI,EDI                         ; 004672b2
    XOR EBP,EBP                         ; 004672b4
    MOV ECX,dword ptr [ESI + 0x44]      ; 004672b6
        ;   Label: LAB_004672b6
    MOV EBX,dword ptr [ESI + 0x40]      ; 004672b9
    IMUL EBX,ECX                        ; 004672bc
    MOV EAX,dword ptr [ESI + 0x48]      ; 004672bf
    IMUL EAX,EBX                        ; 004672c2
    CMP EBP,EAX                         ; 004672c5
    JGE 0x0046730e                      ; 004672c7
        ;   XREF to: 0046730e (CONDITIONAL_JUMP)  ; LAB_0046730e
    MOV EBX,dword ptr [ESI + 0x4c]      ; 004672c9
    ADD EBX,EDI                         ; 004672cc
    MOV dword ptr [EBX],0x0             ; 004672ce
    MOV dword ptr [EBX + 0x4],0x0       ; 004672d4
    MOV EAX,dword ptr [EBX + 0xc]       ; 004672db
    MOV dword ptr [EBX + 0x54],0x0      ; 004672de
    TEST EAX,EAX                        ; 004672e5
    JNZ 0x004672f6                      ; 004672e7
        ;   XREF to: 004672f6 (CONDITIONAL_JUMP)  ; LAB_004672f6
    ADD EDI,0x58                        ; 004672e9
        ;   Label: LAB_004672e9
    INC EBP                             ; 004672ec
    MOV dword ptr [EBX + 0xc],0x0       ; 004672ed
    JMP 0x004672b6                      ; 004672f4
        ;   XREF to: 004672b6 (UNCONDITIONAL_JUMP)  ; LAB_004672b6
    JZ 0x004672e9                       ; 004672f6
        ;   XREF to: 004672e9 (CONDITIONAL_JUMP)  ; LAB_004672e9
        ;   Label: LAB_004672f6
    PUSH 0x0                            ; 004672f8
    PUSH EAX                            ; 004672fa
    CALL core_dpart.cpp_CDemonPart_dtor_FUN_00456f40 ; 004672fb
        ;   XREF to: 00456f40 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_CDemonPart_dtor_FUN_00456f40()
    ADD ESP,0x8                         ; 00467300
    PUSH EAX                            ; 00467303
    CALL crt_unknown.c_FUN_00564494     ; 00467304
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00467309
    JMP 0x004672e9                      ; 0046730c
        ;   XREF to: 004672e9 (UNCONDITIONAL_JUMP)  ; LAB_004672e9
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0046730e
        ;   Label: LAB_0046730e
    PUSH EBX                            ; 00467311
    CALL crt_unknown.c_FUN_005638d0     ; 00467312
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00467317
    POP EBX                             ; 0046731a
    POP EDI                             ; 0046731b
    MOV dword ptr [ESI + 0x4c],0x0      ; 0046731c
        ;   Label: LAB_0046731c
    POP EBP                             ; 00467323
    POP ESI                             ; 00467324
    RET                                 ; 00467325

