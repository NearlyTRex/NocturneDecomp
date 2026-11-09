; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00475ff0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   visible_cube_count
; int *            Stack[0xc]:4   visible_cube_indices
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_set.cpp_FUN_0052d0e0 at 0052d2b9
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1bdb
;   TerminatedCString s_CDemonRaytrace_setPVS_To_005d1bee
;   undefined4 DAT_01bd3c5c
;   undefined4 DAT_01bd3c60
;   undefined4 DAT_01bd3c68
;   undefined4 DAT_01be74e4
;   undefined4 DAT_01be74e8
;   undefined4 DAT_01be74ec
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475ff0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00475ff0
    PUSH EBP                            ; 00475ff1
    SUB ESP,0x18                        ; 00475ff2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00475ff5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00475ff9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00475ffd
    XOR EDX,EDX                         ; 00476001
    MOV dword ptr [0x01bd3c60],EDX      ; 00476003 | DAT_01bd3c60
    CMP EAX,0x1                         ; 00476009
    JL 0x00476113                       ; 0047600c
        ;   XREF to: 00476113 (CONDITIONAL_JUMP)  ; LAB_00476113
    TEST EBP,EBP                        ; 00476012
    JZ 0x00476113                       ; 00476014
        ;   XREF to: 00476113 (CONDITIONAL_JUMP)  ; LAB_00476113
    PUSH EDI                            ; 0047601a
    PUSH ESI                            ; 0047601b
    MOV [0x01bd3c5c],EAX                ; 0047601c | DAT_01bd3c5c
    CMP EAX,0x4e20                      ; 00476021
    JG 0x00476119                       ; 00476026
        ;   XREF to: 00476119 (CONDITIONAL_JUMP)  ; LAB_00476119
    MOV EAX,[0x01bd3c5c]                ; 0047602c | DAT_01bd3c5c
        ;   Label: LAB_0047602c
    XOR EDI,EDI                         ; 00476031
    TEST EAX,EAX                        ; 00476033
    JLE 0x00476107                      ; 00476035
        ;   XREF to: 00476107 (CONDITIONAL_JUMP)  ; LAB_00476107
    MOV ESI,0x1be74e4                   ; 0047603b
    LEA EAX,[EDI*0x4 + 0x0]             ; 00476040
        ;   Label: LAB_00476040
    MOV ECX,dword ptr [EBP]             ; 00476047
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047604a
    IMUL EAX,ECX,0x34                   ; 0047604e
    MOV EDX,dword ptr [EBX + 0x50]      ; 00476051
    ADD EAX,EDX                         ; 00476054
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00476056
    MOV dword ptr [EDX + 0x1bd3c64],EAX ; 0047605a | DAT_01bd3c68
    MOV EDX,ECX                         ; 00476060
    MOV EAX,ECX                         ; 00476062
    SAR EDX,0x1f                        ; 00476064
    IDIV dword ptr [EBX + 0x48]         ; 00476067
    MOV dword ptr [ESP + 0x14],EDX      ; 0047606a
    MOV EDX,ECX                         ; 0047606e
    MOV EAX,ECX                         ; 00476070
    SAR EDX,0x1f                        ; 00476072
    MOV ECX,dword ptr [EBX + 0x48]      ; 00476075
    IDIV ECX                            ; 00476078
    MOV EDX,EAX                         ; 0047607a
    SAR EDX,0x1f                        ; 0047607c
    MOV ECX,EAX                         ; 0047607f
    IDIV dword ptr [EBX + 0x44]         ; 00476081
    MOV dword ptr [ESP + 0x18],EDX      ; 00476084
    MOV EDX,ECX                         ; 00476088
    MOV EAX,ECX                         ; 0047608a
    SAR EDX,0x1f                        ; 0047608c
    MOV ECX,dword ptr [EBX + 0x44]      ; 0047608f
    IDIV ECX                            ; 00476092
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476094
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476098
    FILD dword ptr [ESP + 0x1c]         ; 0047609c
    MOV dword ptr [ESP + 0x1c],EAX      ; 004760a0
    FMUL float ptr [EBX + 0x28]         ; 004760a4
    FILD dword ptr [ESP + 0x1c]         ; 004760a7
    FXCH                                ; 004760ab
    FADD float ptr [EBX + 0x10]         ; 004760ad
    MOV EAX,dword ptr [ESP + 0x14]      ; 004760b0
    FSTP float ptr [ESP + 0x8]          ; 004760b4
    FMUL float ptr [EBX + 0x2c]         ; 004760b8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004760bb
    FADD float ptr [EBX + 0x14]         ; 004760bf
    FILD dword ptr [ESP + 0x1c]         ; 004760c2
    FXCH                                ; 004760c6
    FSTP float ptr [ESP + 0xc]          ; 004760c8
    FMUL float ptr [EBX + 0x30]         ; 004760cc
    FADD float ptr [EBX + 0x18]         ; 004760cf
    LEA EAX,[ESP + 0x8]                 ; 004760d2
    FSTP float ptr [ESP + 0x10]         ; 004760d6
    CMP ESI,EAX                         ; 004760da
    JZ 0x004760f2                       ; 004760dc
        ;   XREF to: 004760f2 (CONDITIONAL_JUMP)  ; LAB_004760f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004760de
    MOV dword ptr [ESI],EAX             ; 004760e2 | DAT_01be74e4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004760e4
    MOV dword ptr [ESI + 0x4],EAX       ; 004760e8 | DAT_01be74e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004760eb
    MOV dword ptr [ESI + 0x8],EAX       ; 004760ef | DAT_01be74ec
    MOV EDX,dword ptr [0x01bd3c5c]      ; 004760f2 | DAT_01bd3c5c
        ;   Label: LAB_004760f2
    ADD ESI,0xc                         ; 004760f8
    INC EDI                             ; 004760fb
    ADD EBP,0x4                         ; 004760fc
    CMP EDI,EDX                         ; 004760ff
    JL 0x00476040                       ; 00476101
        ;   XREF to: 00476040 (CONDITIONAL_JUMP)  ; LAB_00476040
    MOV dword ptr [0x01bd3c60],0x1      ; 00476107 | DAT_01bd3c60
        ;   Label: LAB_00476107
    POP ESI                             ; 00476111
    POP EDI                             ; 00476112
    ADD ESP,0x18                        ; 00476113
        ;   Label: LAB_00476113
    POP EBP                             ; 00476116
    POP EBX                             ; 00476117
    RET                                 ; 00476118
    MOV ECX,0x5d1bdb                    ; 00476119 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00476119
    MOV ESI,0x8c9                       ; 0047611e
    PUSH 0x5d1bee                       ; 00476123 | = "CDemonRaytrace::setPVS - Too many dra..."
    MOV dword ptr [0x01d046a0],ECX      ; 00476128 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0047612e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00476134
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00476139
    JMP 0x0047602c                      ; 0047613c
        ;   XREF to: 0047602c (UNCONDITIONAL_JUMP)  ; LAB_0047602c

