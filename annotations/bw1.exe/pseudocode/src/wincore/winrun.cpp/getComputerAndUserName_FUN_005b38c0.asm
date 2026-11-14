; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005b38c0(char *buffer)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
;
; Called Functions:
;   crt_env.c_getenv_FUN_005c3050
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b38c0
        ;   Label: wincore_winrun.cpp_getComputerAndUserName_FUN_005b38c0
    PUSH ESI                            ; 005b38c1
    PUSH EDI                            ; 005b38c2
    SUB ESP,0x4                         ; 005b38c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b38c6
    PUSH 0x200                          ; 005b38ca
    PUSH 0x0                            ; 005b38cf
    PUSH EBX                            ; 005b38d1
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005b38d2
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b38d7
    MOV EAX,ESP                         ; 005b38da
    MOV EDX,0x100                       ; 005b38dc
    PUSH EAX                            ; 005b38e1
    LEA EDI,[EBX + EDX*0x1]             ; 005b38e2
    PUSH EDI                            ; 005b38e5
    MOV dword ptr [ESP + 0x8],EDX       ; 005b38e6
    CALL dword ptr CS:[0x5d057c]        ; 005b38ea
    MOV EAX,ESP                         ; 005b38f1
    PUSH EAX                            ; 005b38f3
    MOV ECX,0x100                       ; 005b38f4
    PUSH EBX                            ; 005b38f9
    MOV dword ptr [ESP + 0x8],ECX       ; 005b38fa
    CALL dword ptr CS:[0x5d03e4]        ; 005b38fe
    CMP byte ptr [EBX + 0x100],0x0      ; 005b3905
    JZ 0x005b391a                       ; 005b390c
        ;   XREF to: 005b391a (CONDITIONAL_JUMP)  ; LAB_005b391a
    CMP byte ptr [EBX],0x0              ; 005b390e
        ;   Label: LAB_005b390e
    JZ 0x005b3953                       ; 005b3911
        ;   XREF to: 005b3953 (CONDITIONAL_JUMP)  ; LAB_005b3953
    ADD ESP,0x4                         ; 005b3913
        ;   Label: LAB_005b3913
    POP EDI                             ; 005b3916
    POP ESI                             ; 005b3917
    POP EBX                             ; 005b3918
    RET                                 ; 005b3919
    PUSH 0x5f9e82                       ; 005b391a
        ;   Label: LAB_005b391a
    CALL crt_env.c_getenv_FUN_005c3050  ; 005b391f
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 005b3924
    TEST EAX,EAX                        ; 005b3927
    JZ 0x005b390e                       ; 005b3929
        ;   XREF to: 005b390e (CONDITIONAL_JUMP)  ; LAB_005b390e
    MOV ESI,EAX                         ; 005b392b
    PUSH EDI                            ; 005b392d
    MOV AL,byte ptr [ESI]               ; 005b392e
        ;   Label: LAB_005b392e
    MOV byte ptr [EDI],AL               ; 005b3930
    CMP AL,0x0                          ; 005b3932
    JZ 0x005b3946                       ; 005b3934
        ;   XREF to: 005b3946 (CONDITIONAL_JUMP)  ; LAB_005b3946
    MOV AL,byte ptr [ESI + 0x1]         ; 005b3936
    ADD ESI,0x2                         ; 005b3939
    MOV byte ptr [EDI + 0x1],AL         ; 005b393c
    ADD EDI,0x2                         ; 005b393f
    CMP AL,0x0                          ; 005b3942
    JNZ 0x005b392e                      ; 005b3944
        ;   XREF to: 005b392e (CONDITIONAL_JUMP)  ; LAB_005b392e
    POP EDI                             ; 005b3946
        ;   Label: LAB_005b3946
    CMP byte ptr [EBX],0x0              ; 005b3947
    JZ 0x005b3953                       ; 005b394a
        ;   XREF to: 005b3953 (CONDITIONAL_JUMP)  ; LAB_005b3953
    ADD ESP,0x4                         ; 005b394c
    POP EDI                             ; 005b394f
    POP ESI                             ; 005b3950
    POP EBX                             ; 005b3951
    RET                                 ; 005b3952
    PUSH 0x5f9e8f                       ; 005b3953
        ;   Label: LAB_005b3953
    CALL crt_env.c_getenv_FUN_005c3050  ; 005b3958
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 005b395d
    TEST EAX,EAX                        ; 005b3960
    JZ 0x005b3913                       ; 005b3962
        ;   XREF to: 005b3913 (CONDITIONAL_JUMP)  ; LAB_005b3913
    MOV ESI,EAX                         ; 005b3964
    MOV EDI,EBX                         ; 005b3966
    PUSH EDI                            ; 005b3968
    MOV AL,byte ptr [ESI]               ; 005b3969
        ;   Label: LAB_005b3969
    MOV byte ptr [EDI],AL               ; 005b396b
    CMP AL,0x0                          ; 005b396d
    JZ 0x005b3981                       ; 005b396f
        ;   XREF to: 005b3981 (CONDITIONAL_JUMP)  ; LAB_005b3981
    MOV AL,byte ptr [ESI + 0x1]         ; 005b3971
    ADD ESI,0x2                         ; 005b3974
    MOV byte ptr [EDI + 0x1],AL         ; 005b3977
    ADD EDI,0x2                         ; 005b397a
    CMP AL,0x0                          ; 005b397d
    JNZ 0x005b3969                      ; 005b397f
        ;   XREF to: 005b3969 (CONDITIONAL_JUMP)  ; LAB_005b3969
    POP EDI                             ; 005b3981
        ;   Label: LAB_005b3981
    ADD ESP,0x4                         ; 005b3982
    POP EDI                             ; 005b3985
    POP ESI                             ; 005b3986
    POP EBX                             ; 005b3987
    RET                                 ; 005b3988

