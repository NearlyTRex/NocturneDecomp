; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter *this_ptr,float init_value,int flags)
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
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660 at 0044774e
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4cfc
;
; Referenced Globals:
;   undefined4 DAT_005ceca8
;   undefined4 DAT_005cecb0
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447ad0
        ;   Label: core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0
    PUSH ESI                            ; 00447ad1
    PUSH EDI                            ; 00447ad2
    PUSH EBP                            ; 00447ad3
    MOV EBP,ESP                         ; 00447ad4
    SUB ESP,0x14                        ; 00447ad6
    AND ESP,0xfffffff8                  ; 00447ad9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00447adc
    CMP dword ptr [EBP + 0x1c],0x0      ; 00447adf
    JZ 0x00447bb7                       ; 00447ae3
        ;   XREF to: 00447bb7 (CONDITIONAL_JUMP)  ; LAB_00447bb7
    MOV ECX,dword ptr [EBX + 0x4]       ; 00447ae9
        ;   Label: LAB_00447ae9
    XOR EDI,EDI                         ; 00447aec
    TEST ECX,ECX                        ; 00447aee
    JLE 0x00447bb0                      ; 00447af0
        ;   XREF to: 00447bb0 (CONDITIONAL_JUMP)  ; LAB_00447bb0
    MOV EAX,dword ptr [EBX]             ; 00447af6
        ;   Label: LAB_00447af6
    XOR ECX,ECX                         ; 00447af8
    TEST EAX,EAX                        ; 00447afa
    JLE 0x00447ba6                      ; 00447afc
        ;   XREF to: 00447ba6 (CONDITIONAL_JUMP)  ; LAB_00447ba6
    MOV EAX,dword ptr [EBX]             ; 00447b02
        ;   Label: LAB_00447b02
    MOV EDX,EAX                         ; 00447b04
    SAR EDX,0x1f                        ; 00447b06
    SUB EAX,EDX                         ; 00447b09
    SAR EAX,0x1                         ; 00447b0b
    MOV ESI,EAX                         ; 00447b0d
    SUB EAX,ECX                         ; 00447b0f
    MOV dword ptr [ESP + 0xc],EAX       ; 00447b11
    MOV EAX,dword ptr [EBX + 0x4]       ; 00447b15
    MOV EDX,EAX                         ; 00447b18
    SAR EDX,0x1f                        ; 00447b1a
    SUB EAX,EDX                         ; 00447b1d
    SAR EAX,0x1                         ; 00447b1f
    FILD dword ptr [ESP + 0xc]          ; 00447b21
    FMUL ST0                            ; 00447b25
    SUB EAX,EDI                         ; 00447b27
    MOV dword ptr [ESP + 0xc],EAX       ; 00447b29
    FILD dword ptr [ESP + 0xc]          ; 00447b2d
    FMUL ST0                            ; 00447b31
    FADDP                               ; 00447b33
    FSQRT                               ; 00447b35
    MOV dword ptr [ESP + 0xc],ESI       ; 00447b37
    FILD dword ptr [ESP + 0xc]          ; 00447b3b
    FXCH                                ; 00447b3f
    FSTP float ptr [ESP]                ; 00447b41
    FDIVR float ptr [ESP]               ; 00447b44
    FST float ptr [ESP]                 ; 00447b47
    FLD1                                ; 00447b4a
    FCOMPP                              ; 00447b4c
    FNSTSW AX                           ; 00447b4e
    SAHF                                ; 00447b50
    JC 0x00447bc5                       ; 00447b51
        ;   XREF to: 00447bc5 (CONDITIONAL_JUMP)  ; LAB_00447bc5
    FLD float ptr [ESP]                 ; 00447b53
        ;   Label: LAB_00447b53
    FLD1                                ; 00447b56
    FSUBRP                              ; 00447b58
    FMUL float ptr [EBP + 0x18]         ; 00447b5a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00447b5d
    FSTP float ptr [ESP]                ; 00447b60
    TEST EDX,EDX                        ; 00447b63
    JNZ 0x00447bce                      ; 00447b65
        ;   XREF to: 00447bce (CONDITIONAL_JUMP)  ; LAB_00447bce
    FLD float ptr [ESP]                 ; 00447b67
    FMUL double ptr [0x005ceca8]        ; 00447b6a | DAT_005ceca8
    FMUL double ptr [0x005cecb0]        ; 00447b70 | DAT_005cecb0
    CALL crt_math.c_round_FUN_005b7ff0  ; 00447b76
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
        ;   Label: LAB_00447b76
    FISTP dword ptr [ESP + 0xc]         ; 00447b7b
    MOV AL,byte ptr [ESP + 0xc]         ; 00447b7f
    MOVZX ESI,AL                        ; 00447b83
    CMP ESI,0x3f                        ; 00447b86
    JLE 0x00447b8d                      ; 00447b89
        ;   XREF to: 00447b8d (CONDITIONAL_JUMP)  ; LAB_00447b8d
    MOV AL,0x3f                         ; 00447b8b
    MOV ESI,dword ptr [EBX]             ; 00447b8d
        ;   Label: LAB_00447b8d
    IMUL ESI,EDI                        ; 00447b8f
    MOV EDX,dword ptr [EBX + 0x48]      ; 00447b92
    ADD ESI,ECX                         ; 00447b95
    ADD ESI,EDX                         ; 00447b97
    MOV byte ptr [ESI],AL               ; 00447b99
    INC ECX                             ; 00447b9b
    MOV ESI,dword ptr [EBX]             ; 00447b9c
    CMP ECX,ESI                         ; 00447b9e
    JL 0x00447b02                       ; 00447ba0
        ;   XREF to: 00447b02 (CONDITIONAL_JUMP)  ; LAB_00447b02
    INC EDI                             ; 00447ba6
        ;   Label: LAB_00447ba6
    CMP EDI,dword ptr [EBX + 0x4]       ; 00447ba7
    JL 0x00447af6                       ; 00447baa
        ;   XREF to: 00447af6 (CONDITIONAL_JUMP)  ; LAB_00447af6
    MOV ESP,EBP                         ; 00447bb0
        ;   Label: LAB_00447bb0
    POP EBP                             ; 00447bb2
    POP EDI                             ; 00447bb3
    POP ESI                             ; 00447bb4
    POP EBX                             ; 00447bb5
    RET                                 ; 00447bb6
    PUSH EBX                            ; 00447bb7
        ;   Label: LAB_00447bb7
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860 ; 00447bb8
        ;   XREF to: 00447860 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 00447bbd
    JMP 0x00447ae9                      ; 00447bc0
        ;   XREF to: 00447ae9 (UNCONDITIONAL_JUMP)  ; LAB_00447ae9
    MOV dword ptr [ESP],0x3f800000      ; 00447bc5
        ;   Label: LAB_00447bc5
    JMP 0x00447b53                      ; 00447bcc
        ;   XREF to: 00447b53 (UNCONDITIONAL_JUMP)  ; LAB_00447b53
    MOV EAX,dword ptr [EBX]             ; 00447bce
        ;   Label: LAB_00447bce
    IMUL EAX,EDI                        ; 00447bd0
    MOV ESI,dword ptr [EBX + 0x48]      ; 00447bd3
    ADD EAX,ECX                         ; 00447bd6
    ADD ESI,EAX                         ; 00447bd8
    XOR EAX,EAX                         ; 00447bda
    MOV AL,byte ptr [ESI]               ; 00447bdc
    MOV dword ptr [ESP + 0x10],EAX      ; 00447bde
    FILD word ptr [ESP + 0x10]          ; 00447be2
    FMUL float ptr [ESP]                ; 00447be6
    JMP 0x00447b76                      ; 00447be9
        ;   XREF to: 00447b76 (UNCONDITIONAL_JUMP)  ; LAB_00447b76

