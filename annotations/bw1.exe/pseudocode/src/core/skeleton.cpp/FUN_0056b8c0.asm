; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0056b8c0(char *param_1)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042c7a0 at 0042c7c2
;
; Referenced Globals:
;   undefined4 g_DeformableModelPool[0].field13744_0x35b0
;   undefined4 DAT_027902bc
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b8c0
        ;   Label: core_skeleton.cpp_FUN_0056b8c0
    PUSH ESI                            ; 0056b8c1
    PUSH EDI                            ; 0056b8c2
    PUSH EBP                            ; 0056b8c3
    MOV EBP,ESP                         ; 0056b8c4
    MOV ESI,0x26b82bc                   ; 0056b8c6
    XOR EBX,EBX                         ; 0056b8cb
    ADD ESI,0x35b0                      ; 0056b8cd
    IMUL EAX,EBX,0x3600                 ; 0056b8d3
        ;   Label: LAB_0056b8d3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056b8d9
    PUSH EDX                            ; 0056b8dc
    MOV EDI,0x26b82bc                   ; 0056b8dd
    PUSH ESI                            ; 0056b8e2 | g_DeformableModelPool[0].field13744_0x35b0
    ADD EDI,EAX                         ; 0056b8e3
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056b8e5
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056b8ea
    TEST EAX,EAX                        ; 0056b8ed
    JZ 0x0056b902                       ; 0056b8ef
        ;   XREF to: 0056b902 (CONDITIONAL_JUMP)  ; LAB_0056b902
    INC EBX                             ; 0056b8f1
    ADD ESI,0x3600                      ; 0056b8f2
    CMP EBX,0x40                        ; 0056b8f8
    JL 0x0056b8d3                       ; 0056b8fb
        ;   XREF to: 0056b8d3 (CONDITIONAL_JUMP)  ; LAB_0056b8d3
    POP EBP                             ; 0056b8fd
    POP EDI                             ; 0056b8fe
    POP ESI                             ; 0056b8ff
    POP EBX                             ; 0056b900
    RET                                 ; 0056b901
    MOV ECX,0x1                         ; 0056b902
        ;   Label: LAB_0056b902
    MOV ESI,0x27903bc                   ; 0056b907
    ADD EDI,0x355c                      ; 0056b90c
    ADD ESI,0x1de28                     ; 0056b912
    MOV dword ptr [EBX*0x4 + 0x27902bc],ECX ; 0056b918 | DAT_027902bc
    XOR EBX,EBX                         ; 0056b91f
    PUSH ESI                            ; 0056b921
        ;   Label: LAB_0056b921
    PUSH EDI                            ; 0056b922
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056b923
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056b928
    TEST EAX,EAX                        ; 0056b92b
    JZ 0x0056b940                       ; 0056b92d
        ;   XREF to: 0056b940 (CONDITIONAL_JUMP)  ; LAB_0056b940
    INC EBX                             ; 0056b92f
    ADD ESI,0x1ec9c                     ; 0056b930
    CMP EBX,0x28                        ; 0056b936
    JL 0x0056b921                       ; 0056b939
        ;   XREF to: 0056b921 (CONDITIONAL_JUMP)  ; LAB_0056b921
    POP EBP                             ; 0056b93b
    POP EDI                             ; 0056b93c
    POP ESI                             ; 0056b93d
    POP EBX                             ; 0056b93e
    RET                                 ; 0056b93f
    MOV dword ptr [EBX*0x4 + 0x2c5fc1c],0x1 ; 0056b940 | DAT_02c5fc1c
        ;   Label: LAB_0056b940
    POP EBP                             ; 0056b94b
    POP EDI                             ; 0056b94c
    POP ESI                             ; 0056b94d
    POP EBX                             ; 0056b94e
    RET                                 ; 0056b94f

