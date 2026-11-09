; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_00459b80(CDemonFilter *this_ptr,float init_value,int flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   init_value
; int              Stack[0xc]:4   flags
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dfilter.cpp_FUN_00459710 at 004597fe
;   core_main.c_FUN_004e44e0 at 004e4b4c
;
; Referenced Globals:
;   undefined4 DAT_005babfa
;   undefined4 DAT_005bac02
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459b80
        ;   Label: core_dfilter.cpp_CDemonFilter_init_FUN_00459b80
    PUSH ESI                            ; 00459b81
    PUSH EDI                            ; 00459b82
    PUSH EBP                            ; 00459b83
    MOV EBP,ESP                         ; 00459b84
    SUB ESP,0x14                        ; 00459b86
    AND ESP,0xfffffff8                  ; 00459b89
    MOV EBX,dword ptr [EBP + 0x14]      ; 00459b8c
    CMP dword ptr [EBP + 0x1c],0x0      ; 00459b8f
    JZ 0x00459c67                       ; 00459b93
        ;   XREF to: 00459c67 (CONDITIONAL_JUMP)  ; LAB_00459c67
    MOV ECX,dword ptr [EBX + 0x4]       ; 00459b99
        ;   Label: LAB_00459b99
    XOR EDI,EDI                         ; 00459b9c
    TEST ECX,ECX                        ; 00459b9e
    JLE 0x00459c60                      ; 00459ba0
        ;   XREF to: 00459c60 (CONDITIONAL_JUMP)  ; LAB_00459c60
    MOV EAX,dword ptr [EBX]             ; 00459ba6
        ;   Label: LAB_00459ba6
    XOR ECX,ECX                         ; 00459ba8
    TEST EAX,EAX                        ; 00459baa
    JLE 0x00459c56                      ; 00459bac
        ;   XREF to: 00459c56 (CONDITIONAL_JUMP)  ; LAB_00459c56
    MOV EAX,dword ptr [EBX]             ; 00459bb2
        ;   Label: LAB_00459bb2
    MOV EDX,EAX                         ; 00459bb4
    SAR EDX,0x1f                        ; 00459bb6
    SUB EAX,EDX                         ; 00459bb9
    SAR EAX,0x1                         ; 00459bbb
    MOV ESI,EAX                         ; 00459bbd
    SUB EAX,ECX                         ; 00459bbf
    MOV dword ptr [ESP + 0xc],EAX       ; 00459bc1
    MOV EAX,dword ptr [EBX + 0x4]       ; 00459bc5
    MOV EDX,EAX                         ; 00459bc8
    SAR EDX,0x1f                        ; 00459bca
    SUB EAX,EDX                         ; 00459bcd
    SAR EAX,0x1                         ; 00459bcf
    FILD dword ptr [ESP + 0xc]          ; 00459bd1
    FMUL ST0                            ; 00459bd5
    SUB EAX,EDI                         ; 00459bd7
    MOV dword ptr [ESP + 0xc],EAX       ; 00459bd9
    FILD dword ptr [ESP + 0xc]          ; 00459bdd
    FMUL ST0                            ; 00459be1
    FADDP                               ; 00459be3
    FSQRT                               ; 00459be5
    MOV dword ptr [ESP + 0xc],ESI       ; 00459be7
    FILD dword ptr [ESP + 0xc]          ; 00459beb
    FXCH                                ; 00459bef
    FSTP float ptr [ESP]                ; 00459bf1
    FDIVR float ptr [ESP]               ; 00459bf4
    FST float ptr [ESP]                 ; 00459bf7
    FLD1                                ; 00459bfa
    FCOMPP                              ; 00459bfc
    FNSTSW AX                           ; 00459bfe
    SAHF                                ; 00459c00
    JC 0x00459c75                       ; 00459c01
        ;   XREF to: 00459c75 (CONDITIONAL_JUMP)  ; LAB_00459c75
    FLD float ptr [ESP]                 ; 00459c03
        ;   Label: LAB_00459c03
    FLD1                                ; 00459c06
    FSUBRP                              ; 00459c08
    FMUL float ptr [EBP + 0x18]         ; 00459c0a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00459c0d
    FSTP float ptr [ESP]                ; 00459c10
    TEST EDX,EDX                        ; 00459c13
    JNZ 0x00459c7e                      ; 00459c15
        ;   XREF to: 00459c7e (CONDITIONAL_JUMP)  ; LAB_00459c7e
    FLD float ptr [ESP]                 ; 00459c17
    FMUL double ptr [0x005babfa]        ; 00459c1a | DAT_005babfa
    FMUL double ptr [0x005bac02]        ; 00459c20 | DAT_005bac02
    CALL crt_math.c_round_FUN_005a3120  ; 00459c26
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
        ;   Label: LAB_00459c26
    FISTP dword ptr [ESP + 0xc]         ; 00459c2b
    MOV AL,byte ptr [ESP + 0xc]         ; 00459c2f
    MOVZX ESI,AL                        ; 00459c33
    CMP ESI,0x3f                        ; 00459c36
    JLE 0x00459c3d                      ; 00459c39
        ;   XREF to: 00459c3d (CONDITIONAL_JUMP)  ; LAB_00459c3d
    MOV AL,0x3f                         ; 00459c3b
    MOV ESI,dword ptr [EBX]             ; 00459c3d
        ;   Label: LAB_00459c3d
    IMUL ESI,EDI                        ; 00459c3f
    MOV EDX,dword ptr [EBX + 0x48]      ; 00459c42
    ADD ESI,ECX                         ; 00459c45
    ADD ESI,EDX                         ; 00459c47
    MOV byte ptr [ESI],AL               ; 00459c49
    INC ECX                             ; 00459c4b
    MOV ESI,dword ptr [EBX]             ; 00459c4c
    CMP ECX,ESI                         ; 00459c4e
    JL 0x00459bb2                       ; 00459c50
        ;   XREF to: 00459bb2 (CONDITIONAL_JUMP)  ; LAB_00459bb2
    INC EDI                             ; 00459c56
        ;   Label: LAB_00459c56
    CMP EDI,dword ptr [EBX + 0x4]       ; 00459c57
    JL 0x00459ba6                       ; 00459c5a
        ;   XREF to: 00459ba6 (CONDITIONAL_JUMP)  ; LAB_00459ba6
    MOV ESP,EBP                         ; 00459c60
        ;   Label: LAB_00459c60
    POP EBP                             ; 00459c62
    POP EDI                             ; 00459c63
    POP ESI                             ; 00459c64
    POP EBX                             ; 00459c65
    RET                                 ; 00459c66
    PUSH EBX                            ; 00459c67
        ;   Label: LAB_00459c67
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910 ; 00459c68
        ;   XREF to: 00459910 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 00459c6d
    JMP 0x00459b99                      ; 00459c70
        ;   XREF to: 00459b99 (UNCONDITIONAL_JUMP)  ; LAB_00459b99
    MOV dword ptr [ESP],0x3f800000      ; 00459c75
        ;   Label: LAB_00459c75
    JMP 0x00459c03                      ; 00459c7c
        ;   XREF to: 00459c03 (UNCONDITIONAL_JUMP)  ; LAB_00459c03
    MOV EAX,dword ptr [EBX]             ; 00459c7e
        ;   Label: LAB_00459c7e
    IMUL EAX,EDI                        ; 00459c80
    MOV ESI,dword ptr [EBX + 0x48]      ; 00459c83
    ADD EAX,ECX                         ; 00459c86
    ADD ESI,EAX                         ; 00459c88
    XOR EAX,EAX                         ; 00459c8a
    MOV AL,byte ptr [ESI]               ; 00459c8c
    MOV dword ptr [ESP + 0x10],EAX      ; 00459c8e
    FILD word ptr [ESP + 0x10]          ; 00459c92
    FMUL float ptr [ESP]                ; 00459c96
    JMP 0x00459c26                      ; 00459c99
        ;   XREF to: 00459c26 (UNCONDITIONAL_JUMP)  ; LAB_00459c26

