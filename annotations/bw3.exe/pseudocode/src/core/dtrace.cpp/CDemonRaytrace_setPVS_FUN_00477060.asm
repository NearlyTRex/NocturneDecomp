; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00477060(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533d59
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bca91
;   TerminatedCString s_CDemonRaytrace_setPVS_To_005bcaa4
;   undefined4 DAT_01c0b7b4
;   undefined4 DAT_01c0b7b8
;   undefined4 DAT_01c0b7c0
;   undefined4 DAT_01c1f03c
;   undefined4 DAT_01c1f040
;   undefined4 DAT_01c1f044
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477060
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00477060
    PUSH EBP                            ; 00477061
    SUB ESP,0x18                        ; 00477062
    MOV EBX,dword ptr [ESP + 0x24]      ; 00477065
    MOV EAX,dword ptr [ESP + 0x28]      ; 00477069
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0047706d
    XOR EDX,EDX                         ; 00477071
    MOV dword ptr [0x01c0b7b8],EDX      ; 00477073 | DAT_01c0b7b8
    CMP EAX,0x1                         ; 00477079
    JL 0x00477183                       ; 0047707c
        ;   XREF to: 00477183 (CONDITIONAL_JUMP)  ; LAB_00477183
    TEST EBP,EBP                        ; 00477082
    JZ 0x00477183                       ; 00477084
        ;   XREF to: 00477183 (CONDITIONAL_JUMP)  ; LAB_00477183
    PUSH EDI                            ; 0047708a
    PUSH ESI                            ; 0047708b
    MOV [0x01c0b7b4],EAX                ; 0047708c | DAT_01c0b7b4
    CMP EAX,0x4e20                      ; 00477091
    JG 0x00477189                       ; 00477096
        ;   XREF to: 00477189 (CONDITIONAL_JUMP)  ; LAB_00477189
    MOV EAX,[0x01c0b7b4]                ; 0047709c | DAT_01c0b7b4
        ;   Label: LAB_0047709c
    XOR EDI,EDI                         ; 004770a1
    TEST EAX,EAX                        ; 004770a3
    JLE 0x00477177                      ; 004770a5
        ;   XREF to: 00477177 (CONDITIONAL_JUMP)  ; LAB_00477177
    MOV ESI,0x1c1f03c                   ; 004770ab
    LEA EAX,[EDI*0x4 + 0x0]             ; 004770b0
        ;   Label: LAB_004770b0
    MOV ECX,dword ptr [EBP]             ; 004770b7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004770ba
    IMUL EAX,ECX,0x34                   ; 004770be
    MOV EDX,dword ptr [EBX + 0x50]      ; 004770c1
    ADD EAX,EDX                         ; 004770c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004770c6
    MOV dword ptr [EDX + 0x1c0b7bc],EAX ; 004770ca | DAT_01c0b7c0
    MOV EDX,ECX                         ; 004770d0
    MOV EAX,ECX                         ; 004770d2
    SAR EDX,0x1f                        ; 004770d4
    IDIV dword ptr [EBX + 0x48]         ; 004770d7
    MOV dword ptr [ESP + 0x14],EDX      ; 004770da
    MOV EDX,ECX                         ; 004770de
    MOV EAX,ECX                         ; 004770e0
    SAR EDX,0x1f                        ; 004770e2
    MOV ECX,dword ptr [EBX + 0x48]      ; 004770e5
    IDIV ECX                            ; 004770e8
    MOV EDX,EAX                         ; 004770ea
    SAR EDX,0x1f                        ; 004770ec
    MOV ECX,EAX                         ; 004770ef
    IDIV dword ptr [EBX + 0x44]         ; 004770f1
    MOV dword ptr [ESP + 0x18],EDX      ; 004770f4
    MOV EDX,ECX                         ; 004770f8
    MOV EAX,ECX                         ; 004770fa
    SAR EDX,0x1f                        ; 004770fc
    MOV ECX,dword ptr [EBX + 0x44]      ; 004770ff
    IDIV ECX                            ; 00477102
    MOV dword ptr [ESP + 0x1c],EAX      ; 00477104
    MOV EAX,dword ptr [ESP + 0x18]      ; 00477108
    FILD dword ptr [ESP + 0x1c]         ; 0047710c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00477110
    FMUL float ptr [EBX + 0x28]         ; 00477114
    FILD dword ptr [ESP + 0x1c]         ; 00477117
    FXCH                                ; 0047711b
    FADD float ptr [EBX + 0x10]         ; 0047711d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00477120
    FSTP float ptr [ESP + 0x8]          ; 00477124
    FMUL float ptr [EBX + 0x2c]         ; 00477128
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047712b
    FADD float ptr [EBX + 0x14]         ; 0047712f
    FILD dword ptr [ESP + 0x1c]         ; 00477132
    FXCH                                ; 00477136
    FSTP float ptr [ESP + 0xc]          ; 00477138
    FMUL float ptr [EBX + 0x30]         ; 0047713c
    FADD float ptr [EBX + 0x18]         ; 0047713f
    LEA EAX,[ESP + 0x8]                 ; 00477142
    FSTP float ptr [ESP + 0x10]         ; 00477146
    CMP ESI,EAX                         ; 0047714a
    JZ 0x00477162                       ; 0047714c
        ;   XREF to: 00477162 (CONDITIONAL_JUMP)  ; LAB_00477162
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047714e
    MOV dword ptr [ESI],EAX             ; 00477152 | DAT_01c1f03c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00477154
    MOV dword ptr [ESI + 0x4],EAX       ; 00477158 | DAT_01c1f040
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047715b
    MOV dword ptr [ESI + 0x8],EAX       ; 0047715f | DAT_01c1f044
    MOV EDX,dword ptr [0x01c0b7b4]      ; 00477162 | DAT_01c0b7b4
        ;   Label: LAB_00477162
    ADD ESI,0xc                         ; 00477168
    INC EDI                             ; 0047716b
    ADD EBP,0x4                         ; 0047716c
    CMP EDI,EDX                         ; 0047716f
    JL 0x004770b0                       ; 00477171
        ;   XREF to: 004770b0 (CONDITIONAL_JUMP)  ; LAB_004770b0
    MOV dword ptr [0x01c0b7b8],0x1      ; 00477177 | DAT_01c0b7b8
        ;   Label: LAB_00477177
    POP ESI                             ; 00477181
    POP EDI                             ; 00477182
    ADD ESP,0x18                        ; 00477183
        ;   Label: LAB_00477183
    POP EBP                             ; 00477186
    POP EBX                             ; 00477187
    RET                                 ; 00477188
    MOV ECX,0x5bca91                    ; 00477189 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00477189
    MOV ESI,0x8c9                       ; 0047718e
    PUSH 0x5bcaa4                       ; 00477193 | = "CDemonRaytrace::setPVS - Too many dra..."
    MOV dword ptr [0x01d71de0],ECX      ; 00477198 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0047719e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004771a4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004771a9
    JMP 0x0047709c                      ; 004771ac
        ;   XREF to: 0047709c (UNCONDITIONAL_JUMP)  ; LAB_0047709c

