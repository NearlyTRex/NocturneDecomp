; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_initFly_FUN_0048f8f0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flies.cpp_CFlies_process_FUN_0048f090 at 0048f2d7
;   core_flies.cpp_CFlies_setup_FUN_0048efb0 at 0048efcd
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f8f0
        ;   Label: core_flies.cpp_CFlies_initFly_FUN_0048f8f0
    PUSH ESI                            ; 0048f8f1
    PUSH EDI                            ; 0048f8f2
    PUSH EBP                            ; 0048f8f3
    SUB ESP,0x20                        ; 0048f8f4
    MOV EBP,dword ptr [ESP + 0x34]      ; 0048f8f7
    MOV EBX,dword ptr [ESP + 0x38]      ; 0048f8fb
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048f8ff
    SUB EAX,EBX                         ; 0048f906
    SHL EAX,0x2                         ; 0048f908
    ADD EAX,EBX                         ; 0048f90b
    SHL EAX,0x2                         ; 0048f90d
    LEA EBX,[EBP + 0x160]               ; 0048f910
    PUSH 0x0                            ; 0048f916
    ADD EBX,EAX                         ; 0048f918
    LEA EAX,[ESP + 0x4]                 ; 0048f91a
    PUSH EAX                            ; 0048f91e
    PUSH EBP                            ; 0048f91f
    MOV dword ptr [ESP + 0x24],EBX      ; 0048f920
    ADD EBX,0x4                         ; 0048f924
    CALL core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0 ; 0048f927
        ;   XREF to: 0048f9b0 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0()
    ADD ESP,0xc                         ; 0048f92c
    CMP EBX,EAX                         ; 0048f92f
    JNZ 0x0048f998                      ; 0048f931
        ;   XREF to: 0048f998 (CONDITIONAL_JUMP)  ; LAB_0048f998
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048f933
        ;   Label: LAB_0048f933
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048f937
    ADD EDI,0x4                         ; 0048f93b
    ADD EBX,0x10                        ; 0048f93e
    MOV ESI,EDI                         ; 0048f941
    ADD EDI,0x24                        ; 0048f943
    PUSH ESI                            ; 0048f946
        ;   Label: LAB_0048f946
    LEA EAX,[ESP + 0x10]                ; 0048f947
    PUSH EAX                            ; 0048f94b
    PUSH EBP                            ; 0048f94c
    CALL core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0 ; 0048f94d
        ;   XREF to: 0048f9b0 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0()
    ADD ESP,0xc                         ; 0048f952
    CMP EBX,EAX                         ; 0048f955
    JZ 0x0048f969                       ; 0048f957
        ;   XREF to: 0048f969 (CONDITIONAL_JUMP)  ; LAB_0048f969
    MOV EDX,dword ptr [EAX]             ; 0048f959
    MOV dword ptr [EBX],EDX             ; 0048f95b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048f95d
    MOV dword ptr [EBX + 0x4],EDX       ; 0048f960
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048f963
    MOV dword ptr [EBX + 0x8],EDX       ; 0048f966
    ADD ESI,0xc                         ; 0048f969
        ;   Label: LAB_0048f969
    ADD EBX,0xc                         ; 0048f96c
    CMP ESI,EDI                         ; 0048f96f
    JNZ 0x0048f946                      ; 0048f971
        ;   XREF to: 0048f946 (CONDITIONAL_JUMP)  ; LAB_0048f946
    PUSH 0x3f800000                     ; 0048f973
    PUSH 0x0                            ; 0048f978
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048f97a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x24],EAX      ; 0048f97f
    FLD float ptr [ESP + 0x24]          ; 0048f983
    ADD ESP,0x8                         ; 0048f987
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048f98a
    FSTP float ptr [EAX]                ; 0048f98e
    ADD ESP,0x20                        ; 0048f990
    POP EBP                             ; 0048f993
    POP EDI                             ; 0048f994
    POP ESI                             ; 0048f995
    POP EBX                             ; 0048f996
    RET                                 ; 0048f997
    MOV EDX,dword ptr [EAX]             ; 0048f998
        ;   Label: LAB_0048f998
    MOV dword ptr [EBX],EDX             ; 0048f99a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048f99c
    MOV dword ptr [EBX + 0x4],EDX       ; 0048f99f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048f9a2
    MOV dword ptr [EBX + 0x8],EDX       ; 0048f9a5
    JMP 0x0048f933                      ; 0048f9a8
        ;   XREF to: 0048f933 (UNCONDITIONAL_JUMP)  ; LAB_0048f933

