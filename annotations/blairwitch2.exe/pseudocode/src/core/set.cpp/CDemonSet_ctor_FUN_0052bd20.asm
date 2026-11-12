; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_0052bd20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_0052bbe0 at 0052bbe5
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bd20
        ;   Label: core_set.cpp_CDemonSet_ctor_FUN_0052bd20
    PUSH ESI                            ; 0052bd21
    PUSH EDI                            ; 0052bd22
    PUSH EBP                            ; 0052bd23
    MOV EBP,ESP                         ; 0052bd24
    SUB ESP,0x8                         ; 0052bd26
    AND ESP,0xfffffff8                  ; 0052bd29
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052bd2c
    PUSH 0x5fb270                       ; 0052bd2f
    PUSH 0xfa                           ; 0052bd34
    ADD EBX,0x4                         ; 0052bd39
    PUSH EBX                            ; 0052bd3c
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052bd3d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052bd42
    PUSH 0x5fb290                       ; 0052bd45
    PUSH 0xc8                           ; 0052bd4a
    ADD EAX,0x19a2c                     ; 0052bd4f
    PUSH EAX                            ; 0052bd54
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052bd55
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052bd5a
    PUSH 0x5fb2b0                       ; 0052bd5d
    PUSH 0x14                           ; 0052bd62
    ADD EAX,0x1414a4                    ; 0052bd64
    PUSH EAX                            ; 0052bd69
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052bd6a
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052bd6f
    PUSH 0x5fb2d0                       ; 0052bd72
    PUSH 0xfa                           ; 0052bd77
    ADD EAX,0x554                       ; 0052bd7c
    PUSH EAX                            ; 0052bd81
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052bd82
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffea4bd8]          ; 0052bd87
    MOV dword ptr [EBX],0x0             ; 0052bd8d
    MOV dword ptr [EBX + 0x19a2c],0x0   ; 0052bd93
    MOV dword ptr [EBX + 0x15aeac],0xffffffff ; 0052bd9d
    MOV dword ptr [EBX + 0x15aeb0],0xffffffff ; 0052bda7
    MOV byte ptr [EBX + 0x14d0f0],0x0   ; 0052bdb1
    MOV dword ptr [EBX + 0x14d164],0x0  ; 0052bdb8
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 0052bdc2
    MOV dword ptr [EBX + 0x150fec],0x0  ; 0052bdcc
    MOV dword ptr [EBX + 0x152f30],0x0  ; 0052bdd6
    MOV dword ptr [EBX + 0x154e74],0x0  ; 0052bde0
    MOV dword ptr [EBX + 0x15f6f8],0x0  ; 0052bdea
    MOV dword ptr [EBX + 0x156db8],0x0  ; 0052bdf4
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 0052bdfe
    MOV dword ptr [EBX + 0x15aeb4],0x1  ; 0052be08
    MOV dword ptr [EBX + 0x15aeb8],0xffffffff ; 0052be12
    MOV dword ptr [EBX + 0x15aebc],0xffffffff ; 0052be1c
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 0052be26
    MOV dword ptr [EBX + 0x15aecc],0x0  ; 0052be30
    MOV dword ptr [EBX + 0x15aed0],0x0  ; 0052be3a
    ADD ESP,0xc                         ; 0052be44
    MOV dword ptr [EBX + 0x15ac90],0x0  ; 0052be47
    MOV dword ptr [EBX + 0x15ac94],0x0  ; 0052be51
    MOV dword ptr [EBX + 0x15ac9c],0x0  ; 0052be5b
    MOV ESI,0x5e5456                    ; 0052be65
    MOV dword ptr [EBX + 0x15aca0],0x0  ; 0052be6a
    LEA EDI,[EBX + 0x15aca8]            ; 0052be74
    MOV dword ptr [EBX + 0x15aca4],0x0  ; 0052be7a
    PUSH EDI                            ; 0052be84
    MOV AL,byte ptr [ESI]               ; 0052be85
        ;   Label: LAB_0052be85
    MOV byte ptr [EDI],AL               ; 0052be87
    CMP AL,0x0                          ; 0052be89
    JZ 0x0052be9d                       ; 0052be8b
        ;   XREF to: 0052be9d (CONDITIONAL_JUMP)  ; LAB_0052be9d
    MOV AL,byte ptr [ESI + 0x1]         ; 0052be8d
    ADD ESI,0x2                         ; 0052be90
    MOV byte ptr [EDI + 0x1],AL         ; 0052be93
    ADD EDI,0x2                         ; 0052be96
    CMP AL,0x0                          ; 0052be99
    JNZ 0x0052be85                      ; 0052be9b
        ;   XREF to: 0052be85 (CONDITIONAL_JUMP)  ; LAB_0052be85
    POP EDI                             ; 0052be9d
        ;   Label: LAB_0052be9d
    PUSH EBX                            ; 0052be9e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0052be9f
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x15f6f4],0x0  ; 0052bea4
    MOV dword ptr [EBX + 0x15acc0],0x0  ; 0052beae
    MOV dword ptr [EBX + 0x15f690],0x2  ; 0052beb8
    MOV dword ptr [EBX + 0x15aec8],0x0  ; 0052bec2
    MOV dword ptr [EBX + 0x15acc4],0x0  ; 0052becc
    MOV dword ptr [EBX + 0x16163c],0x0  ; 0052bed6
    MOV dword ptr [EBX + 0x15acc8],0x0  ; 0052bee0
    MOV dword ptr [EBX + 0x161668],0x0  ; 0052beea
    MOV dword ptr [EBX + 0x15b424],0x0  ; 0052bef4
    MOV dword ptr [EBX + 0x15ae9c],0x10000 ; 0052befe
    MOV dword ptr [EBX + 0x15aea0],0x10000 ; 0052bf08
    MOV ESI,0x5e545b                    ; 0052bf12
    MOV dword ptr [EBX + 0x15aea4],0x10000 ; 0052bf17
    ADD ESP,0x4                         ; 0052bf21
    MOV dword ptr [EBX + 0x16166c],0x0  ; 0052bf24
    LEA EDI,[EBX + 0x15ae64]            ; 0052bf2e
    MOV dword ptr [EBX + 0x15ae60],0x0  ; 0052bf34
    PUSH EDI                            ; 0052bf3e
    MOV AL,byte ptr [ESI]               ; 0052bf3f
        ;   Label: LAB_0052bf3f
    MOV byte ptr [EDI],AL               ; 0052bf41
    CMP AL,0x0                          ; 0052bf43
    JZ 0x0052bf57                       ; 0052bf45
        ;   XREF to: 0052bf57 (CONDITIONAL_JUMP)  ; LAB_0052bf57
    MOV AL,byte ptr [ESI + 0x1]         ; 0052bf47
    ADD ESI,0x2                         ; 0052bf4a
    MOV byte ptr [EDI + 0x1],AL         ; 0052bf4d
    ADD EDI,0x2                         ; 0052bf50
    CMP AL,0x0                          ; 0052bf53
    JNZ 0x0052bf3f                      ; 0052bf55
        ;   XREF to: 0052bf3f (CONDITIONAL_JUMP)  ; LAB_0052bf3f
    POP EDI                             ; 0052bf57
        ;   Label: LAB_0052bf57
    MOV dword ptr [EBX + 0x15ac98],0x0  ; 0052bf58
    MOV dword ptr [EBX + 0x15ac8c],0x0  ; 0052bf62
    MOV dword ptr [EBX + 0x15ae84],0x0  ; 0052bf6c
    MOV dword ptr [EBX + 0x15ae88],0xffff6f78 ; 0052bf76
    MOV dword ptr [EBX + 0x15ae8c],0xffff6f78 ; 0052bf80
    MOV dword ptr [EBX + 0x15ae90],0x9088 ; 0052bf8a
    MOV dword ptr [EBX + 0x15ae94],0x280 ; 0052bf94
    MOV dword ptr [EBX + 0x15ae98],0x0  ; 0052bf9e
    MOV dword ptr [EBX + 0x15ac88],0x0  ; 0052bfa8
    MOV dword ptr [EBX + 0x15acbc],0x0  ; 0052bfb2
    MOV dword ptr [EBX + 0x14d154],0xbf800000 ; 0052bfbc
    MOV dword ptr [EBX + 0x14d158],0xbf800000 ; 0052bfc6
    LEA EDX,[EBX + 0x14d154]            ; 0052bfd0
    MOV dword ptr [EBX + 0x14d15c],0xbf800000 ; 0052bfd6
    FLD float ptr [EDX + 0x4]           ; 0052bfe0
    FMUL ST0                            ; 0052bfe3
    FLD float ptr [EDX]                 ; 0052bfe5
    FMUL ST0                            ; 0052bfe7
    FADDP                               ; 0052bfe9
    FLD float ptr [EDX + 0x8]           ; 0052bfeb
    FMUL ST0                            ; 0052bfee
    FADDP                               ; 0052bff0
    FSQRT                               ; 0052bff2
    FLDZ                                ; 0052bff4
    FXCH                                ; 0052bff6
    FSTP float ptr [ESP + 0x4]          ; 0052bff8
    FCOMP float ptr [ESP + 0x4]         ; 0052bffc
    FNSTSW AX                           ; 0052c000
    SAHF                                ; 0052c002
    JNC 0x0052c03a                      ; 0052c003
        ;   XREF to: 0052c03a (CONDITIONAL_JUMP)  ; LAB_0052c03a
    FLD1                                ; 0052c005
    FLD float ptr [EDX]                 ; 0052c007
    FXCH                                ; 0052c009
    FDIV float ptr [ESP + 0x4]          ; 0052c00b
    FXCH                                ; 0052c00f
    FMUL ST1                            ; 0052c011
    FLD float ptr [EDX + 0x4]           ; 0052c013
    FMUL ST2                            ; 0052c016
    FLD float ptr [EDX + 0x8]           ; 0052c018
    FMULP ST3                           ; 0052c01b
    FXCH                                ; 0052c01d
    FSTP float ptr [EDX]                ; 0052c01f
    FSTP float ptr [EDX + 0x4]          ; 0052c021
    FSTP float ptr [EDX + 0x8]          ; 0052c024
    MOV EAX,EBX                         ; 0052c027
    MOV dword ptr [EBX + 0x14d160],0x0  ; 0052c029
    MOV ESP,EBP                         ; 0052c033
    POP EBP                             ; 0052c035
    POP EDI                             ; 0052c036
    POP ESI                             ; 0052c037
    POP EBX                             ; 0052c038
    RET                                 ; 0052c039
    MOV dword ptr [EDX + 0x8],0x0       ; 0052c03a
        ;   Label: LAB_0052c03a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052c041
    MOV dword ptr [EDX + 0x4],EAX       ; 0052c044
    MOV EAX,dword ptr [EDX + 0x4]       ; 0052c047
    MOV dword ptr [EDX],EAX             ; 0052c04a
    MOV EAX,EBX                         ; 0052c04c
    MOV dword ptr [EBX + 0x14d160],0x0  ; 0052c04e
    MOV ESP,EBP                         ; 0052c058
    POP EBP                             ; 0052c05a
    POP EDI                             ; 0052c05b
    POP ESI                             ; 0052c05c
    POP EBX                             ; 0052c05d
    RET                                 ; 0052c05e

