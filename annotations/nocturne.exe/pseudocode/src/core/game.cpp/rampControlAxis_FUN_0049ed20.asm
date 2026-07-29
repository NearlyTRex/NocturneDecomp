; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_rampControlAxis_FUN_0049ed20(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value)
;
; Parameters:
; int              Stack[0x4]:4   negative_key
; int              Stack[0x8]:4   positive_key
; float *          Stack[0xc]:4   axis_value
; float            Stack[0x10]:4   ramp_time
; float            Stack[0x14]:4   max_value
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c02598
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0049ed20
        ;   Label: core_game.cpp_rampControlAxis_FUN_0049ed20
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049ed23
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049ed27
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049ed2b | DAT_01c02598
    JNZ 0x0049ed70                      ; 0049ed32
        ;   XREF to: 0049ed70 (CONDITIONAL_JUMP)  ; LAB_0049ed70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049ed34
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049ed38 | DAT_01c02598
    JZ 0x0049ed6c                       ; 0049ed3f
        ;   XREF to: 0049ed6c (CONDITIONAL_JUMP)  ; LAB_0049ed6c
    FLD float ptr [EDX]                 ; 0049ed41
    FCOMP float ptr [ESP + 0x18]        ; 0049ed43
    FNSTSW AX                           ; 0049ed47
    SAHF                                ; 0049ed49
    JNC 0x0049ed6c                      ; 0049ed4a
        ;   XREF to: 0049ed6c (CONDITIONAL_JUMP)  ; LAB_0049ed6c
    MOV EAX,[0x005b9354]                ; 0049ed4c | DAT_005b9354
    FLD float ptr [ESP + 0x18]          ; 0049ed51
    FLD float ptr [EAX + 0x264]         ; 0049ed55 | DAT_01c77850
    FMUL ST1                            ; 0049ed5b
    FDIV float ptr [ESP + 0x14]         ; 0049ed5d
    FADD float ptr [EDX]                ; 0049ed61
    FST float ptr [EDX]                 ; 0049ed63
    FCOMPP                              ; 0049ed65
    FNSTSW AX                           ; 0049ed67
    SAHF                                ; 0049ed69
    JA 0x0049edab                       ; 0049ed6a
        ;   XREF to: 0049edab (CONDITIONAL_JUMP)  ; LAB_0049edab
    ADD ESP,0x4                         ; 0049ed6c
        ;   Label: LAB_0049ed6c
    RET                                 ; 0049ed6f
    FLD float ptr [EDX]                 ; 0049ed70
        ;   Label: LAB_0049ed70
    FLD float ptr [ESP + 0x18]          ; 0049ed72
    FCHS                                ; 0049ed76
    FSTP float ptr [ESP]                ; 0049ed78
    FCOMP float ptr [ESP]               ; 0049ed7b
    FNSTSW AX                           ; 0049ed7e
    SAHF                                ; 0049ed80
    JBE 0x0049ed6c                      ; 0049ed81
        ;   XREF to: 0049ed6c (CONDITIONAL_JUMP)  ; LAB_0049ed6c
    MOV EAX,[0x005b9354]                ; 0049ed83 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049ed88 | DAT_01c77850
    FMUL float ptr [ESP + 0x18]         ; 0049ed8e
    FDIV float ptr [ESP + 0x14]         ; 0049ed92
    FSUBR float ptr [EDX]               ; 0049ed96
    FST float ptr [EDX]                 ; 0049ed98
    FCOMP float ptr [ESP]               ; 0049ed9a
    FNSTSW AX                           ; 0049ed9d
    SAHF                                ; 0049ed9f
    JNC 0x0049ed6c                      ; 0049eda0
        ;   XREF to: 0049ed6c (CONDITIONAL_JUMP)  ; LAB_0049ed6c
    MOV EAX,dword ptr [ESP]             ; 0049eda2
    MOV dword ptr [EDX],EAX             ; 0049eda5
    ADD ESP,0x4                         ; 0049eda7
    RET                                 ; 0049edaa
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049edab
        ;   Label: LAB_0049edab
    MOV dword ptr [EDX],EAX             ; 0049edaf
    ADD ESP,0x4                         ; 0049edb1
    RET                                 ; 0049edb4

