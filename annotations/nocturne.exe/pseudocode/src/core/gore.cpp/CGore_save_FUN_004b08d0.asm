; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_mission.cpp_FUN_004d8720 at 004d8a4c
;
; Referenced Globals:
;   TerminatedCString s_Gore_005851e0
;   TerminatedCString s_d_005851ee
;   TerminatedCString s_d_005851f2
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c9e038
;
; Called Functions:
;   core_gore.cpp_CBloodPool_save_FUN_004af820
;   core_gore.cpp_CBloodSplat_save_FUN_004af1f0
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b08d0
        ;   Label: core_gore.cpp_CGore_save_FUN_004b08d0
    PUSH ESI                            ; 004b08d1
    PUSH EDI                            ; 004b08d2
    PUSH EBP                            ; 004b08d3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b08d4
    PUSH 0x5851e0                       ; 004b08d8 | = "--- Gore ---\n"
    PUSH EDI                            ; 004b08dd
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004b08de
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004b08e3
    MOV EDX,dword ptr [0x01c9e038]      ; 004b08e6 | DAT_01c9e038
    PUSH EDX                            ; 004b08ec
    PUSH 0x5851ee                       ; 004b08ed | = "%d\n"
    PUSH EDI                            ; 004b08f2
    XOR ESI,ESI                         ; 004b08f3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004b08f5
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [0x01c9e038]      ; 004b08fa | DAT_01c9e038
    ADD ESP,0xc                         ; 004b0900
    TEST ECX,ECX                        ; 004b0903
    JLE 0x004b0930                      ; 004b0905
        ;   XREF to: 004b0930 (CONDITIONAL_JUMP)  ; LAB_004b0930
    MOV EBX,0x1c9e03c                   ; 004b0907
    PUSH EDI                            ; 004b090c
        ;   Label: LAB_004b090c
    PUSH EBX                            ; 004b090d
    INC ESI                             ; 004b090e
    CALL core_gore.cpp_CBloodPool_save_FUN_004af820 ; 004b090f
        ;   XREF to: 004af820 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodPool_save_FUN_004af820()
    MOV EBP,dword ptr [0x01c9e038]      ; 004b0914 | DAT_01c9e038
    ADD ESP,0x8                         ; 004b091a
    ADD EBX,0x28                        ; 004b091d
    CMP ESI,EBP                         ; 004b0920
    JL 0x004b090c                       ; 004b0922
        ;   XREF to: 004b090c (CONDITIONAL_JUMP)  ; LAB_004b090c
    LEA EAX,[EAX]                       ; 004b0924
    LEA EDX,[EDX]                       ; 004b092a
    MOV EAX,[0x01c7ccf0]                ; 004b0930 | DAT_01c7ccf0
        ;   Label: LAB_004b0930
    PUSH EAX                            ; 004b0935
    PUSH 0x5851f2                       ; 004b0936 | = "%d\n"
    PUSH EDI                            ; 004b093b
    XOR EBX,EBX                         ; 004b093c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004b093e
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [0x01c7ccf0]      ; 004b0943 | DAT_01c7ccf0
    ADD ESP,0xc                         ; 004b0949
    TEST EDX,EDX                        ; 004b094c
    JLE 0x004b0970                      ; 004b094e
        ;   XREF to: 004b0970 (CONDITIONAL_JUMP)  ; LAB_004b0970
    MOV ESI,0x1c7ccf4                   ; 004b0950
    PUSH EDI                            ; 004b0955
        ;   Label: LAB_004b0955
    PUSH ESI                            ; 004b0956
    INC EBX                             ; 004b0957
    CALL core_gore.cpp_CBloodSplat_save_FUN_004af1f0 ; 004b0958
        ;   XREF to: 004af1f0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodSplat_save_FUN_004af1f0()
    MOV ECX,dword ptr [0x01c7ccf0]      ; 004b095d | DAT_01c7ccf0
    ADD ESP,0x8                         ; 004b0963
    ADD ESI,0x44                        ; 004b0966
    CMP EBX,ECX                         ; 004b0969
    JL 0x004b0955                       ; 004b096b
        ;   XREF to: 004b0955 (CONDITIONAL_JUMP)  ; LAB_004b0955
    LEA EAX,[EAX]                       ; 004b096d
    POP EBP                             ; 004b0970
        ;   Label: LAB_004b0970
    POP EDI                             ; 004b0971
    POP ESI                             ; 004b0972
    POP EBX                             ; 004b0973
    RET                                 ; 004b0974

