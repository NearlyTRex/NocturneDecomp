; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00456f60(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004571f0 at 00457230
;
; Referenced Globals:
;   TerminatedCString s_CDemonPart_alloc_Out_of_0057d35e
;   TerminatedCString s_core_dpart_cpp_0057d38b
;   TerminatedCString s_core_dpart_cpp_0057d39d
;   TerminatedCString s_CDemonPart_alloc_Out_of_0057d3af
;   TerminatedCString s_core_dpart_cpp_0057d3d9
;   TerminatedCString s_CDemonPart_alloc_Out_of_0057d3eb
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_free_FUN_00457060
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_unknown.c_FUN_00565c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456f60
        ;   Label: core_dpart.cpp_CDemonPart_alloc_FUN_00456f60
    PUSH EDI                            ; 00456f61
    PUSH EBP                            ; 00456f62
    SUB ESP,0x100                       ; 00456f63
    MOV EBX,dword ptr [ESP + 0x110]     ; 00456f69
    PUSH EBX                            ; 00456f70
    CALL core_dpart.cpp_CDemonPart_free_FUN_00457060 ; 00456f71
        ;   XREF to: 00457060 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_free_FUN_00457060(CDemonPart * this_ptr)
    MOV EDX,dword ptr [EBX + 0x20]      ; 00456f76
    ADD ESP,0x4                         ; 00456f79
    TEST EDX,EDX                        ; 00456f7c
    JNZ 0x00456f95                      ; 00456f7e
        ;   XREF to: 00456f95 (CONDITIONAL_JUMP)  ; LAB_00456f95
    MOV EBP,dword ptr [EBX + 0x24]      ; 00456f80
        ;   Label: LAB_00456f80
    TEST EBP,EBP                        ; 00456f83
    JNZ 0x0045701c                      ; 00456f85
        ;   XREF to: 0045701c (CONDITIONAL_JUMP)  ; LAB_0045701c
    ADD ESP,0x100                       ; 00456f8b
        ;   Label: LAB_00456f8b
    POP EBP                             ; 00456f91
    POP EDI                             ; 00456f92
    POP EBX                             ; 00456f93
    RET                                 ; 00456f94
    PUSH 0xc                            ; 00456f95
        ;   Label: LAB_00456f95
    PUSH EDX                            ; 00456f97
    CALL crt_unknown.c_FUN_00565c50     ; 00456f98
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 00456f9d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00456fa0
    TEST EAX,EAX                        ; 00456fa3
    JNZ 0x00456fdd                      ; 00456fa5
        ;   XREF to: 00456fdd (CONDITIONAL_JUMP)  ; LAB_00456fdd
    MOV EDI,dword ptr [EBX + 0x20]      ; 00456fa7
    PUSH EDI                            ; 00456faa
    PUSH 0x57d35e                       ; 00456fab | = "CDemonPart::alloc - Out of vertex %d ..."
    LEA EAX,[ESP + 0x8]                 ; 00456fb0
    PUSH EAX                            ; 00456fb4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00456fb5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x8b                        ; 00456fba
    ADD ESP,0xc                         ; 00456fbf
    MOV [0x01cc4804],EAX                ; 00456fc2 | INT_01cc4804
    MOV EAX,ESP                         ; 00456fc7
    MOV EBP,0x57d38b                    ; 00456fc9 | = "..\\core\\dpart.cpp"
    PUSH EAX                            ; 00456fce
    MOV dword ptr [0x01cc4800],EBP      ; 00456fcf | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 00456fd5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00456fda
    PUSH 0xc                            ; 00456fdd
        ;   Label: LAB_00456fdd
    MOV EDX,dword ptr [EBX + 0x20]      ; 00456fdf
    PUSH EDX                            ; 00456fe2
    CALL crt_unknown.c_FUN_00565c50     ; 00456fe3
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 00456fe8
    MOV dword ptr [EBX + 0x30],EAX      ; 00456feb
    TEST EAX,EAX                        ; 00456fee
    JNZ 0x00456f80                      ; 00456ff0
        ;   XREF to: 00456f80 (CONDITIONAL_JUMP)  ; LAB_00456f80
    PUSH ESI                            ; 00456ff2
    MOV ESI,0x57d39d                    ; 00456ff3 | = "..\\core\\dpart.cpp"
    MOV EDI,0x91                        ; 00456ff8
    PUSH 0x57d3af                       ; 00456ffd | = "CDemonPart::alloc - Out of normal mem..."
    MOV dword ptr [0x01cc4800],ESI      ; 00457002 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00457008 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045700e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00457013
    POP ESI                             ; 00457016
    JMP 0x00456f80                      ; 00457017
        ;   XREF to: 00456f80 (UNCONDITIONAL_JUMP)  ; LAB_00456f80
    PUSH 0x20                           ; 0045701c
        ;   Label: LAB_0045701c
    PUSH EBP                            ; 0045701e
    CALL crt_unknown.c_FUN_00565c50     ; 0045701f
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 00457024
    MOV dword ptr [EBX + 0x34],EAX      ; 00457027
    TEST EAX,EAX                        ; 0045702a
    JNZ 0x00456f8b                      ; 0045702c
        ;   XREF to: 00456f8b (CONDITIONAL_JUMP)  ; LAB_00456f8b
    MOV ECX,0x57d3d9                    ; 00457032 | = "..\\core\\dpart.cpp"
    MOV EBX,0x99                        ; 00457037
    PUSH 0x57d3eb                       ; 0045703c | = "CDemonPart::alloc - Out of face memory!"
    MOV dword ptr [0x01cc4800],ECX      ; 00457041 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00457047 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045704d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00457052
    ADD ESP,0x100                       ; 00457055
    POP EBP                             ; 0045705b
    POP EDI                             ; 0045705c
    POP EBX                             ; 0045705d
    RET                                 ; 0045705e

