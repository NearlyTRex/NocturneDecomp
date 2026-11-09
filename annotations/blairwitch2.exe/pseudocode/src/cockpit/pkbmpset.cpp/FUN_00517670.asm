; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00517670(int *param_1,int param_2)
;
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_005177de at 005178b6
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c___vec_new_FUN_005ba2b4
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005b8df8
;   unkafter_pkbitmap.cpp_FUN_00517640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517670
        ;   Label: cockpit_pkbmpset.cpp_FUN_00517670
    PUSH ESI                            ; 00517671
    SUB ESP,0xc8                        ; 00517672
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00517678
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0051767f
    PUSH ESI                            ; 00517686
    CALL unkafter_pkbitmap.cpp_FUN_00517640 ; 00517687
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; undefined unkafter_pkbitmap.cpp_FUN_00517640()
    ADD ESP,0x4                         ; 0051768c
    TEST EBX,EBX                        ; 0051768f
    JG 0x0051769c                       ; 00517691
        ;   XREF to: 0051769c (CONDITIONAL_JUMP)  ; LAB_0051769c
    ADD ESP,0xc8                        ; 00517693
    POP ESI                             ; 00517699
    POP EBX                             ; 0051769a
    RET                                 ; 0051769b
    PUSH EDI                            ; 0051769c
        ;   Label: LAB_0051769c
    PUSH 0x5fac10                       ; 0051769d
    PUSH EBX                            ; 005176a2
    LEA EDI,[EBX*0x8 + 0x0]             ; 005176a3
    ADD EDI,EBX                         ; 005176aa
    SHL EDI,0x2                         ; 005176ac
    LEA EAX,[EDI + 0x4]                 ; 005176af
    PUSH EAX                            ; 005176b2
    CALL crt_unknown.c_FUN_005b8df8     ; 005176b3
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 005176b8
    PUSH EAX                            ; 005176bb
    CALL crt_memory.c___vec_new_FUN_005ba2b4 ; 005176bc
        ;   XREF to: 005ba2b4 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005ba2b4()
    ADD ESP,0xc                         ; 005176c1
    MOV dword ptr [ESI + 0x4],EAX       ; 005176c4
    TEST EAX,EAX                        ; 005176c7
    JNZ 0x00517702                      ; 005176c9
        ;   XREF to: 00517702 (CONDITIONAL_JUMP)  ; LAB_00517702
    PUSH EBX                            ; 005176cb
    PUSH EDI                            ; 005176cc
    PUSH 0x5e1eb8                       ; 005176cd
    LEA EAX,[ESP + 0x10]                ; 005176d2
    PUSH EAX                            ; 005176d6
    MOV EDI,0x6c                        ; 005176d7
    CALL crt_unknown.c_FUN_005b7790     ; 005176dc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 005176e1
    LEA EAX,[ESP + 0x4]                 ; 005176e4
    MOV ECX,0x5e1f05                    ; 005176e8
    PUSH EAX                            ; 005176ed
    MOV dword ptr [0x01d046a4],EDI      ; 005176ee | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 005176f4 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 005176fa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005176ff
    MOV dword ptr [ESI],EBX             ; 00517702
        ;   Label: LAB_00517702
    POP EDI                             ; 00517704
    ADD ESP,0xc8                        ; 00517705
    POP ESI                             ; 0051770b
    POP EBX                             ; 0051770c
    RET                                 ; 0051770d

