; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_005327c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_005325b0 at 005325b5
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005327c0
        ;   Label: core_set.cpp_CDemonSet_ctor_FUN_005327c0
    PUSH ESI                            ; 005327c1
    PUSH EDI                            ; 005327c2
    PUSH EBP                            ; 005327c3
    MOV EBP,ESP                         ; 005327c4
    SUB ESP,0x8                         ; 005327c6
    AND ESP,0xfffffff8                  ; 005327c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005327cc
    PUSH 0x5e3c20                       ; 005327cf
    PUSH 0xfa                           ; 005327d4
    ADD EBX,0x4                         ; 005327d9
    PUSH EBX                            ; 005327dc
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 005327dd
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005327e2
    PUSH 0x5e3c40                       ; 005327e5
    PUSH 0xc8                           ; 005327ea
    ADD EAX,0x19a2c                     ; 005327ef
    PUSH EAX                            ; 005327f4
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 005327f5
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005327fa
    PUSH 0x5e3c60                       ; 005327fd
    PUSH 0x14                           ; 00532802
    ADD EAX,0x1414a8                    ; 00532804
    PUSH EAX                            ; 00532809
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0053280a
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053280f
    PUSH 0x5e3c80                       ; 00532812
    PUSH 0xfa                           ; 00532817
    ADD EAX,0x554                       ; 0053281c
    PUSH EAX                            ; 00532821
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00532822
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffea4bd4]          ; 00532827
    MOV dword ptr [EBX],0x0             ; 0053282d
    MOV dword ptr [EBX + 0x19a2c],0x0   ; 00532833
    MOV dword ptr [EBX + 0x15aeac],0xffffffff ; 0053283d
    MOV dword ptr [EBX + 0x15aeb0],0xffffffff ; 00532847
    MOV byte ptr [EBX + 0x14d0f0],0x0   ; 00532851
    MOV dword ptr [EBX + 0x14d164],0x0  ; 00532858
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 00532862
    MOV dword ptr [EBX + 0x150fec],0x0  ; 0053286c
    MOV dword ptr [EBX + 0x152f30],0x0  ; 00532876
    MOV dword ptr [EBX + 0x154e74],0x0  ; 00532880
    MOV dword ptr [EBX + 0x15f6fc],0x0  ; 0053288a
    MOV dword ptr [EBX + 0x156db8],0x0  ; 00532894
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 0053289e
    MOV dword ptr [EBX + 0x15aeb4],0x1  ; 005328a8
    MOV dword ptr [EBX + 0x15aeb8],0xffffffff ; 005328b2
    MOV dword ptr [EBX + 0x15aebc],0xffffffff ; 005328bc
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 005328c6
    MOV dword ptr [EBX + 0x15aed0],0x0  ; 005328d0
    MOV dword ptr [EBX + 0x15aed4],0x0  ; 005328da
    ADD ESP,0xc                         ; 005328e4
    MOV dword ptr [EBX + 0x15ac90],0x0  ; 005328e7
    MOV dword ptr [EBX + 0x15ac94],0x0  ; 005328f1
    MOV dword ptr [EBX + 0x15ac9c],0x0  ; 005328fb
    MOV ESI,0x5d0117                    ; 00532905
    MOV dword ptr [EBX + 0x15aca0],0x0  ; 0053290a
    LEA EDI,[EBX + 0x15aca8]            ; 00532914
    MOV dword ptr [EBX + 0x15aca4],0x0  ; 0053291a
    PUSH EDI                            ; 00532924
    MOV AL,byte ptr [ESI]               ; 00532925
        ;   Label: LAB_00532925
    MOV byte ptr [EDI],AL               ; 00532927
    CMP AL,0x0                          ; 00532929
    JZ 0x0053293d                       ; 0053292b
        ;   XREF to: 0053293d (CONDITIONAL_JUMP)  ; LAB_0053293d
    MOV AL,byte ptr [ESI + 0x1]         ; 0053292d
    ADD ESI,0x2                         ; 00532930
    MOV byte ptr [EDI + 0x1],AL         ; 00532933
    ADD EDI,0x2                         ; 00532936
    CMP AL,0x0                          ; 00532939
    JNZ 0x00532925                      ; 0053293b
        ;   XREF to: 00532925 (CONDITIONAL_JUMP)  ; LAB_00532925
    POP EDI                             ; 0053293d
        ;   Label: LAB_0053293d
    PUSH EBX                            ; 0053293e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0053293f
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x15f6f8],0x0  ; 00532944
    MOV dword ptr [EBX + 0x15acc0],0x0  ; 0053294e
    MOV dword ptr [EBX + 0x15f694],0x2  ; 00532958
    MOV dword ptr [EBX + 0x15aecc],0x0  ; 00532962
    MOV dword ptr [EBX + 0x15acc4],0x0  ; 0053296c
    MOV dword ptr [EBX + 0x161640],0x0  ; 00532976
    MOV dword ptr [EBX + 0x15acc8],0x0  ; 00532980
    MOV dword ptr [EBX + 0x16166c],0x0  ; 0053298a
    MOV dword ptr [EBX + 0x15b428],0x0  ; 00532994
    MOV dword ptr [EBX + 0x15ae9c],0x10000 ; 0053299e
    MOV dword ptr [EBX + 0x15aea0],0x10000 ; 005329a8
    MOV ESI,0x5d011c                    ; 005329b2
    MOV dword ptr [EBX + 0x15aea4],0x10000 ; 005329b7
    ADD ESP,0x4                         ; 005329c1
    MOV dword ptr [EBX + 0x161670],0x0  ; 005329c4
    LEA EDI,[EBX + 0x15ae64]            ; 005329ce
    MOV dword ptr [EBX + 0x15ae60],0x0  ; 005329d4
    PUSH EDI                            ; 005329de
    MOV AL,byte ptr [ESI]               ; 005329df
        ;   Label: LAB_005329df
    MOV byte ptr [EDI],AL               ; 005329e1
    CMP AL,0x0                          ; 005329e3
    JZ 0x005329f7                       ; 005329e5
        ;   XREF to: 005329f7 (CONDITIONAL_JUMP)  ; LAB_005329f7
    MOV AL,byte ptr [ESI + 0x1]         ; 005329e7
    ADD ESI,0x2                         ; 005329ea
    MOV byte ptr [EDI + 0x1],AL         ; 005329ed
    ADD EDI,0x2                         ; 005329f0
    CMP AL,0x0                          ; 005329f3
    JNZ 0x005329df                      ; 005329f5
        ;   XREF to: 005329df (CONDITIONAL_JUMP)  ; LAB_005329df
    POP EDI                             ; 005329f7
        ;   Label: LAB_005329f7
    MOV dword ptr [EBX + 0x15ac98],0x0  ; 005329f8
    MOV dword ptr [EBX + 0x15ac8c],0x0  ; 00532a02
    MOV dword ptr [EBX + 0x15ae84],0x0  ; 00532a0c
    MOV dword ptr [EBX + 0x15ae88],0xffff6f78 ; 00532a16
    MOV dword ptr [EBX + 0x15ae8c],0xffff6f78 ; 00532a20
    MOV dword ptr [EBX + 0x15ae90],0x9088 ; 00532a2a
    MOV dword ptr [EBX + 0x15ae94],0x280 ; 00532a34
    MOV dword ptr [EBX + 0x15ae98],0x0  ; 00532a3e
    MOV dword ptr [EBX + 0x15ac88],0x0  ; 00532a48
    MOV dword ptr [EBX + 0x15acbc],0x0  ; 00532a52
    MOV dword ptr [EBX + 0x14d154],0xbf800000 ; 00532a5c
    MOV dword ptr [EBX + 0x14d158],0xbf800000 ; 00532a66
    LEA EDX,[EBX + 0x14d154]            ; 00532a70
    MOV dword ptr [EBX + 0x14d15c],0xbf800000 ; 00532a76
    FLD float ptr [EDX + 0x4]           ; 00532a80
    FMUL ST0                            ; 00532a83
    FLD float ptr [EDX]                 ; 00532a85
    FMUL ST0                            ; 00532a87
    FADDP                               ; 00532a89
    FLD float ptr [EDX + 0x8]           ; 00532a8b
    FMUL ST0                            ; 00532a8e
    FADDP                               ; 00532a90
    FSQRT                               ; 00532a92
    FLDZ                                ; 00532a94
    FXCH                                ; 00532a96
    FSTP float ptr [ESP + 0x4]          ; 00532a98
    FCOMP float ptr [ESP + 0x4]         ; 00532a9c
    FNSTSW AX                           ; 00532aa0
    SAHF                                ; 00532aa2
    JNC 0x00532ada                      ; 00532aa3
        ;   XREF to: 00532ada (CONDITIONAL_JUMP)  ; LAB_00532ada
    FLD1                                ; 00532aa5
    FLD float ptr [EDX]                 ; 00532aa7
    FXCH                                ; 00532aa9
    FDIV float ptr [ESP + 0x4]          ; 00532aab
    FXCH                                ; 00532aaf
    FMUL ST1                            ; 00532ab1
    FLD float ptr [EDX + 0x4]           ; 00532ab3
    FMUL ST2                            ; 00532ab6
    FLD float ptr [EDX + 0x8]           ; 00532ab8
    FMULP ST3                           ; 00532abb
    FXCH                                ; 00532abd
    FSTP float ptr [EDX]                ; 00532abf
    FSTP float ptr [EDX + 0x4]          ; 00532ac1
    FSTP float ptr [EDX + 0x8]          ; 00532ac4
    MOV EAX,EBX                         ; 00532ac7
    MOV dword ptr [EBX + 0x14d160],0x0  ; 00532ac9
    MOV ESP,EBP                         ; 00532ad3
    POP EBP                             ; 00532ad5
    POP EDI                             ; 00532ad6
    POP ESI                             ; 00532ad7
    POP EBX                             ; 00532ad8
    RET                                 ; 00532ad9
    MOV dword ptr [EDX + 0x8],0x0       ; 00532ada
        ;   Label: LAB_00532ada
    MOV EAX,dword ptr [EDX + 0x8]       ; 00532ae1
    MOV dword ptr [EDX + 0x4],EAX       ; 00532ae4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00532ae7
    MOV dword ptr [EDX],EAX             ; 00532aea
    MOV EAX,EBX                         ; 00532aec
    MOV dword ptr [EBX + 0x14d160],0x0  ; 00532aee
    MOV ESP,EBP                         ; 00532af8
    POP EBP                             ; 00532afa
    POP EDI                             ; 00532afb
    POP ESI                             ; 00532afc
    POP EBX                             ; 00532afd
    RET                                 ; 00532afe

