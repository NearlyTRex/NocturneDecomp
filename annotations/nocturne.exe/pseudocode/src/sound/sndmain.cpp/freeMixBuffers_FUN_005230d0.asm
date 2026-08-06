; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005230d0(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080 at 005280a7
;
; Referenced Globals:
;   undefined4 DAT_02dc8328
;   undefined4 DAT_02dc832c
;   undefined4 DAT_02dc8330
;   undefined4 DAT_02dc8334
;   undefined4 DAT_02dc8338
;   undefined4 DAT_02dc835c
;   undefined4 DAT_02dc8380
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005230d0
        ;   Label: sound_sndmain.cpp_freeMixBuffers_FUN_005230d0
    PUSH EBP                            ; 005230d1
    MOV EDX,dword ptr [0x02dc835c]      ; 005230d2 | DAT_02dc835c
    TEST EDX,EDX                        ; 005230d8
    JNZ 0x00523143                      ; 005230da
        ;   XREF to: 00523143 (CONDITIONAL_JUMP)  ; LAB_00523143
    PUSH ESI                            ; 005230dc
        ;   Label: LAB_005230dc
    MOV ESI,dword ptr [0x02dc8380]      ; 005230dd | DAT_02dc8380
    TEST ESI,ESI                        ; 005230e3
    JZ 0x005230f8                       ; 005230e5
        ;   XREF to: 005230f8 (CONDITIONAL_JUMP)  ; LAB_005230f8
    PUSH ESI                            ; 005230e7
    CALL crt_memory.c_free_FUN_005638d0 ; 005230e8
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBP,EBP                         ; 005230ed
    ADD ESP,0x4                         ; 005230ef
    MOV dword ptr [0x02dc8380],EBP      ; 005230f2 | DAT_02dc8380
    MOV EAX,[0x02dc8338]                ; 005230f8 | DAT_02dc8338
        ;   Label: LAB_005230f8
    TEST EAX,EAX                        ; 005230fd
    JNZ 0x00523156                      ; 005230ff
        ;   XREF to: 00523156 (CONDITIONAL_JUMP)  ; LAB_00523156
    XOR EAX,EAX                         ; 00523101
        ;   Label: LAB_00523101
    XOR EDX,EDX                         ; 00523103
    POP ESI                             ; 00523105
    ADD EAX,0x4                         ; 00523106
        ;   Label: LAB_00523106
    MOV dword ptr [EAX + 0x2dc8338],EDX ; 00523109
    MOV dword ptr [EAX + 0x2dc8380],EDX ; 0052310f
    MOV dword ptr [EAX + 0x2dc83a0],EDX ; 00523115
    MOV dword ptr [EAX + 0x2dc835c],EDX ; 0052311b
    CMP EAX,0x20                        ; 00523121
    JNZ 0x00523106                      ; 00523124
        ;   XREF to: 00523106 (CONDITIONAL_JUMP)  ; LAB_00523106
    XOR EBX,EBX                         ; 00523126
    MOV dword ptr [0x02dc8334],EBX      ; 00523128 | DAT_02dc8334
    MOV dword ptr [0x02dc8328],EBX      ; 0052312e | DAT_02dc8328
    MOV dword ptr [0x02dc832c],EBX      ; 00523134 | DAT_02dc832c
    MOV dword ptr [0x02dc8330],EBX      ; 0052313a | DAT_02dc8330
    POP EBP                             ; 00523140
    POP EBX                             ; 00523141
    RET                                 ; 00523142
    PUSH EDX                            ; 00523143
        ;   Label: LAB_00523143
    CALL crt_memory.c_free_FUN_005638d0 ; 00523144
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBX,EBX                         ; 00523149
    ADD ESP,0x4                         ; 0052314b
    MOV dword ptr [0x02dc835c],EBX      ; 0052314e | DAT_02dc835c
    JMP 0x005230dc                      ; 00523154
        ;   XREF to: 005230dc (UNCONDITIONAL_JUMP)  ; LAB_005230dc
    PUSH EAX                            ; 00523156
        ;   Label: LAB_00523156
    CALL crt_memory.c_free_FUN_005638d0 ; 00523157
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR ECX,ECX                         ; 0052315c
    ADD ESP,0x4                         ; 0052315e
    MOV dword ptr [0x02dc8338],ECX      ; 00523161 | DAT_02dc8338
    JMP 0x00523101                      ; 00523167
        ;   XREF to: 00523101 (UNCONDITIONAL_JUMP)  ; LAB_00523101

