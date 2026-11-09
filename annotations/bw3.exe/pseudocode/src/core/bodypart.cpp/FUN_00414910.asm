; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00414910(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00414880 at 0041489b
;   core_bodypart.cpp_FUN_00414fd0 at 00415216
;   core_bodypart.cpp_FUN_00415350 at 004153ee
;   core_bodypart.cpp_FUN_004157c0 at 004157f0
;   core_bodypart.cpp_FUN_00416970 at 0041699c
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0 at 0054a8fe
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005b6a5e
;   TerminatedCString s_CBodyPart_setCounts_out_005b6a73
;   TerminatedCString s_core_bodypart_cpp_005b6ab8
;   TerminatedCString s_CBodyPart_setCounts_out_005b6acd
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414910
        ;   Label: core_bodypart.cpp_FUN_00414910
    PUSH ESI                            ; 00414911
    PUSH EDI                            ; 00414912
    PUSH EBP                            ; 00414913
    MOV EBX,dword ptr [ESP + 0x14]      ; 00414914
    MOV EAX,dword ptr [ESP + 0x18]      ; 00414918
    MOV dword ptr [EBX + 0x174],EAX     ; 0041491c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00414922
    MOV EDX,dword ptr [EBX + 0x174]     ; 00414926
    MOV dword ptr [EBX + 0x180],EAX     ; 0041492c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00414932
    SUB EAX,EDX                         ; 00414939
    SHL EAX,0x2                         ; 0041493b
    PUSH EAX                            ; 0041493e
    MOV EDX,dword ptr [EBX + 0x178]     ; 0041493f
    PUSH EDX                            ; 00414945
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00414946
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV EDX,dword ptr [EBX + 0x174]     ; 0041494b
    MOV dword ptr [EBX + 0x178],EAX     ; 00414951
    LEA EAX,[EDX*0x4 + 0x0]             ; 00414957
    SUB EAX,EDX                         ; 0041495e
    ADD ESP,0x8                         ; 00414960
    SHL EAX,0x2                         ; 00414963
    PUSH EAX                            ; 00414966
    MOV ECX,dword ptr [EBX + 0x17c]     ; 00414967
    PUSH ECX                            ; 0041496d
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 0041496e
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x17c],EAX     ; 00414973
    MOV EAX,dword ptr [EBX + 0x180]     ; 00414979
    SHL EAX,0x2                         ; 0041497f
    MOV EDX,EAX                         ; 00414982
    SHL EAX,0x4                         ; 00414984
    ADD ESP,0x8                         ; 00414987
    SUB EAX,EDX                         ; 0041498a
    PUSH EAX                            ; 0041498c
    MOV ESI,dword ptr [EBX + 0x184]     ; 0041498d
    PUSH ESI                            ; 00414993
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00414994
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x184],EAX     ; 00414999
    MOV EAX,dword ptr [EBX + 0x180]     ; 0041499f
    ADD ESP,0x8                         ; 004149a5
    SHL EAX,0x2                         ; 004149a8
    PUSH EAX                            ; 004149ab
    MOV EDI,dword ptr [EBX + 0x188]     ; 004149ac
    PUSH EDI                            ; 004149b2
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 004149b3
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004149b8
    MOV EBP,dword ptr [EBX + 0x174]     ; 004149bb
    MOV dword ptr [EBX + 0x188],EAX     ; 004149c1
    TEST EBP,EBP                        ; 004149c7
    JLE 0x00414a07                      ; 004149c9
        ;   XREF to: 00414a07 (CONDITIONAL_JUMP)  ; LAB_00414a07
    CMP dword ptr [EBX + 0x178],0x0     ; 004149cb
    JZ 0x004149dd                       ; 004149d2
        ;   XREF to: 004149dd (CONDITIONAL_JUMP)  ; LAB_004149dd
    CMP dword ptr [EBX + 0x17c],0x0     ; 004149d4
    JNZ 0x00414a07                      ; 004149db
        ;   XREF to: 00414a07 (CONDITIONAL_JUMP)  ; LAB_00414a07
    MOV EDI,dword ptr [EBX + 0x174]     ; 004149dd
        ;   Label: LAB_004149dd
    PUSH EDI                            ; 004149e3
    MOV ECX,0x5b6a5e                    ; 004149e4 | = "..\\core\\bodypart.cpp"
    MOV ESI,0xba                        ; 004149e9
    PUSH 0x5b6a73                       ; 004149ee | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004149f3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004149f9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004149ff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00414a04
    CMP dword ptr [EBX + 0x180],0x0     ; 00414a07
        ;   Label: LAB_00414a07
    JLE 0x00414a22                      ; 00414a0e
        ;   XREF to: 00414a22 (CONDITIONAL_JUMP)  ; LAB_00414a22
    CMP dword ptr [EBX + 0x184],0x0     ; 00414a10
    JZ 0x00414a27                       ; 00414a17
        ;   XREF to: 00414a27 (CONDITIONAL_JUMP)  ; LAB_00414a27
    CMP dword ptr [EBX + 0x188],0x0     ; 00414a19
    JZ 0x00414a27                       ; 00414a20
        ;   XREF to: 00414a27 (CONDITIONAL_JUMP)  ; LAB_00414a27
    POP EBP                             ; 00414a22
        ;   Label: LAB_00414a22
    POP EDI                             ; 00414a23
    POP ESI                             ; 00414a24
    POP EBX                             ; 00414a25
    RET                                 ; 00414a26
    MOV EDI,dword ptr [EBX + 0x180]     ; 00414a27
        ;   Label: LAB_00414a27
    PUSH EDI                            ; 00414a2d
    MOV ECX,0x5b6ab8                    ; 00414a2e | = "..\\core\\bodypart.cpp"
    MOV ESI,0xbf                        ; 00414a33
    PUSH 0x5b6acd                       ; 00414a38 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00414a3d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00414a43 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00414a49
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00414a4e
    POP EBP                             ; 00414a51
    POP EDI                             ; 00414a52
    POP ESI                             ; 00414a53
    POP EBX                             ; 00414a54
    RET                                 ; 00414a55

