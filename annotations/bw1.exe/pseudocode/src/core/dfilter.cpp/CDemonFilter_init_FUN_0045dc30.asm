; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30(CDemonFilter *this_ptr,float init_value,int flags)
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
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0045d7c0 at 0045d8ae
;   core_main.c_FUN_005032a0 at 0050390c
;
; Referenced Globals:
;   undefined4 DAT_005d85a1
;   undefined4 DAT_005d85a9
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dc30
        ;   Label: core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30
    PUSH ESI                            ; 0045dc31
    PUSH EDI                            ; 0045dc32
    PUSH EBP                            ; 0045dc33
    MOV EBP,ESP                         ; 0045dc34
    SUB ESP,0x14                        ; 0045dc36
    AND ESP,0xfffffff8                  ; 0045dc39
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045dc3c
    CMP dword ptr [EBP + 0x1c],0x0      ; 0045dc3f
    JZ 0x0045dd17                       ; 0045dc43
        ;   XREF to: 0045dd17 (CONDITIONAL_JUMP)  ; LAB_0045dd17
    MOV ECX,dword ptr [EBX + 0x4]       ; 0045dc49
        ;   Label: LAB_0045dc49
    XOR EDI,EDI                         ; 0045dc4c
    TEST ECX,ECX                        ; 0045dc4e
    JLE 0x0045dd10                      ; 0045dc50
        ;   XREF to: 0045dd10 (CONDITIONAL_JUMP)  ; LAB_0045dd10
    MOV EAX,dword ptr [EBX]             ; 0045dc56
        ;   Label: LAB_0045dc56
    XOR ECX,ECX                         ; 0045dc58
    TEST EAX,EAX                        ; 0045dc5a
    JLE 0x0045dd06                      ; 0045dc5c
        ;   XREF to: 0045dd06 (CONDITIONAL_JUMP)  ; LAB_0045dd06
    MOV EAX,dword ptr [EBX]             ; 0045dc62
        ;   Label: LAB_0045dc62
    MOV EDX,EAX                         ; 0045dc64
    SAR EDX,0x1f                        ; 0045dc66
    SUB EAX,EDX                         ; 0045dc69
    SAR EAX,0x1                         ; 0045dc6b
    MOV ESI,EAX                         ; 0045dc6d
    SUB EAX,ECX                         ; 0045dc6f
    MOV dword ptr [ESP + 0xc],EAX       ; 0045dc71
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045dc75
    MOV EDX,EAX                         ; 0045dc78
    SAR EDX,0x1f                        ; 0045dc7a
    SUB EAX,EDX                         ; 0045dc7d
    SAR EAX,0x1                         ; 0045dc7f
    FILD dword ptr [ESP + 0xc]          ; 0045dc81
    FMUL ST0                            ; 0045dc85
    SUB EAX,EDI                         ; 0045dc87
    MOV dword ptr [ESP + 0xc],EAX       ; 0045dc89
    FILD dword ptr [ESP + 0xc]          ; 0045dc8d
    FMUL ST0                            ; 0045dc91
    FADDP                               ; 0045dc93
    FSQRT                               ; 0045dc95
    MOV dword ptr [ESP + 0xc],ESI       ; 0045dc97
    FILD dword ptr [ESP + 0xc]          ; 0045dc9b
    FXCH                                ; 0045dc9f
    FSTP float ptr [ESP]                ; 0045dca1
    FDIVR float ptr [ESP]               ; 0045dca4
    FST float ptr [ESP]                 ; 0045dca7
    FLD1                                ; 0045dcaa
    FCOMPP                              ; 0045dcac
    FNSTSW AX                           ; 0045dcae
    SAHF                                ; 0045dcb0
    JC 0x0045dd25                       ; 0045dcb1
        ;   XREF to: 0045dd25 (CONDITIONAL_JUMP)  ; LAB_0045dd25
    FLD float ptr [ESP]                 ; 0045dcb3
        ;   Label: LAB_0045dcb3
    FLD1                                ; 0045dcb6
    FSUBRP                              ; 0045dcb8
    FMUL float ptr [EBP + 0x18]         ; 0045dcba
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0045dcbd
    FSTP float ptr [ESP]                ; 0045dcc0
    TEST EDX,EDX                        ; 0045dcc3
    JNZ 0x0045dd2e                      ; 0045dcc5
        ;   XREF to: 0045dd2e (CONDITIONAL_JUMP)  ; LAB_0045dd2e
    FLD float ptr [ESP]                 ; 0045dcc7
    FMUL double ptr [0x005d85a1]        ; 0045dcca | DAT_005d85a1
    FMUL double ptr [0x005d85a9]        ; 0045dcd0 | DAT_005d85a9
    CALL crt_math.c_round_FUN_005c03a0  ; 0045dcd6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
        ;   Label: LAB_0045dcd6
    FISTP dword ptr [ESP + 0xc]         ; 0045dcdb
    MOV AL,byte ptr [ESP + 0xc]         ; 0045dcdf
    MOVZX ESI,AL                        ; 0045dce3
    CMP ESI,0x3f                        ; 0045dce6
    JLE 0x0045dced                      ; 0045dce9
        ;   XREF to: 0045dced (CONDITIONAL_JUMP)  ; LAB_0045dced
    MOV AL,0x3f                         ; 0045dceb
    MOV ESI,dword ptr [EBX]             ; 0045dced
        ;   Label: LAB_0045dced
    IMUL ESI,EDI                        ; 0045dcef
    MOV EDX,dword ptr [EBX + 0x48]      ; 0045dcf2
    ADD ESI,ECX                         ; 0045dcf5
    ADD ESI,EDX                         ; 0045dcf7
    MOV byte ptr [ESI],AL               ; 0045dcf9
    INC ECX                             ; 0045dcfb
    MOV ESI,dword ptr [EBX]             ; 0045dcfc
    CMP ECX,ESI                         ; 0045dcfe
    JL 0x0045dc62                       ; 0045dd00
        ;   XREF to: 0045dc62 (CONDITIONAL_JUMP)  ; LAB_0045dc62
    INC EDI                             ; 0045dd06
        ;   Label: LAB_0045dd06
    CMP EDI,dword ptr [EBX + 0x4]       ; 0045dd07
    JL 0x0045dc56                       ; 0045dd0a
        ;   XREF to: 0045dc56 (CONDITIONAL_JUMP)  ; LAB_0045dc56
    MOV ESP,EBP                         ; 0045dd10
        ;   Label: LAB_0045dd10
    POP EBP                             ; 0045dd12
    POP EDI                             ; 0045dd13
    POP ESI                             ; 0045dd14
    POP EBX                             ; 0045dd15
    RET                                 ; 0045dd16
    PUSH EBX                            ; 0045dd17
        ;   Label: LAB_0045dd17
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0 ; 0045dd18
        ;   XREF to: 0045d9c0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0045dd1d
    JMP 0x0045dc49                      ; 0045dd20
        ;   XREF to: 0045dc49 (UNCONDITIONAL_JUMP)  ; LAB_0045dc49
    MOV dword ptr [ESP],0x3f800000      ; 0045dd25
        ;   Label: LAB_0045dd25
    JMP 0x0045dcb3                      ; 0045dd2c
        ;   XREF to: 0045dcb3 (UNCONDITIONAL_JUMP)  ; LAB_0045dcb3
    MOV EAX,dword ptr [EBX]             ; 0045dd2e
        ;   Label: LAB_0045dd2e
    IMUL EAX,EDI                        ; 0045dd30
    MOV ESI,dword ptr [EBX + 0x48]      ; 0045dd33
    ADD EAX,ECX                         ; 0045dd36
    ADD ESI,EAX                         ; 0045dd38
    XOR EAX,EAX                         ; 0045dd3a
    MOV AL,byte ptr [ESI]               ; 0045dd3c
    MOV dword ptr [ESP + 0x10],EAX      ; 0045dd3e
    FILD word ptr [ESP + 0x10]          ; 0045dd42
    FMUL float ptr [ESP]                ; 0045dd46
    JMP 0x0045dcd6                      ; 0045dd49
        ;   XREF to: 0045dcd6 (UNCONDITIONAL_JUMP)  ; LAB_0045dcd6

