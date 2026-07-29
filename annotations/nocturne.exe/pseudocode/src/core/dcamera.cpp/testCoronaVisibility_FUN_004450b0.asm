; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_004450b0(int start_x,int start_y,int depth_reciprocal)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   start_y
; int              Stack[0xc]:4   depth_reciprocal
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_014b845c
;   undefined4 DAT_014b8460
;   undefined4 DAT_014b8464
;   undefined4 DAT_014b8468
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004450b0
        ;   Label: core_dcamera.cpp_testCoronaVisibility_FUN_004450b0
    PUSH EBP                            ; 004450b1
    SUB ESP,0x10                        ; 004450b2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004450b5
    CMP dword ptr [0x014b845c],0x0      ; 004450b9 | DAT_014b845c
    JZ 0x00445176                       ; 004450c0
        ;   XREF to: 00445176 (CONDITIONAL_JUMP)  ; LAB_00445176
    PUSH EDI                            ; 004450c6
    PUSH EBX                            ; 004450c7
    MOV EDI,dword ptr [0x014b8460]      ; 004450c8 | DAT_014b8460
    XOR ECX,ECX                         ; 004450ce
    MOV EBX,dword ptr [0x014b8468]      ; 004450d0 | DAT_014b8468
    MOV dword ptr [ESP + 0x8],ECX       ; 004450d6
    MOV ECX,dword ptr [0x014b8464]      ; 004450da | DAT_014b8464
    TEST ESI,ESI                        ; 004450e0
    JZ 0x0044517d                       ; 004450e2
        ;   XREF to: 0044517d (CONDITIONAL_JUMP)  ; LAB_0044517d
    MOV EAX,0x7fffffff                  ; 004450e8
    MOV EDX,EAX                         ; 004450ed
    SAR EDX,0x1f                        ; 004450ef
    IDIV ESI                            ; 004450f2
    MOV ESI,EAX                         ; 004450f4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004450f6
        ;   Label: LAB_004450f6
    MOV EAX,EDI                         ; 004450fa
    SUB EAX,EBP                         ; 004450fc
    SHL EAX,0x4                         ; 004450fe
    MOV dword ptr [ESP + 0x14],EAX      ; 00445101
    MOV EAX,dword ptr [ESP + 0x28]      ; 00445105
    SUB ECX,EAX                         ; 00445109
    MOV EAX,ECX                         ; 0044510b
    MOV EDX,EBX                         ; 0044510d
    SHL EAX,0x4                         ; 0044510f
    SUB EDX,ESI                         ; 00445112
    MOV dword ptr [ESP + 0xc],EAX       ; 00445114
    MOV EAX,EDX                         ; 00445118
    SAR EDX,0x1f                        ; 0044511a
    SHL EDX,0x4                         ; 0044511d
    SBB EAX,EDX                         ; 00445120
    SAR EAX,0x4                         ; 00445122
    MOV EBX,dword ptr [ESP + 0x28]      ; 00445125
    MOV ECX,EBP                         ; 00445129
    SHL EBX,0x8                         ; 0044512b
    SHL ECX,0x8                         ; 0044512e
    MOV dword ptr [ESP + 0x10],EAX      ; 00445131
    MOV EDX,ESI                         ; 00445135
    MOV EAX,0x10                        ; 00445137
    MOV EBP,dword ptr [ESP + 0x10]      ; 0044513c
    MOV EDI,EBX                         ; 00445140
        ;   Label: LAB_00445140
    SAR EDI,0x8                         ; 00445142
    IMUL EDI,EDI,0x500                  ; 00445145
    MOV ESI,ECX                         ; 0044514b
    SAR ESI,0x8                         ; 0044514d
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xac2af8] ; 00445150
    LEA EDI,[EDX + -0x80]               ; 00445157
    CMP ESI,EDI                         ; 0044515a
    JGE 0x00445187                      ; 0044515c
        ;   XREF to: 00445187 (CONDITIONAL_JUMP)  ; LAB_00445187
    TEST EAX,EAX                        ; 0044515e
        ;   Label: LAB_0044515e
    JNZ 0x0044516a                      ; 00445160
        ;   XREF to: 0044516a (CONDITIONAL_JUMP)  ; LAB_0044516a
    MOV dword ptr [ESP + 0x8],0x1       ; 00445162
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044516a
        ;   Label: LAB_0044516a
    POP EBX                             ; 0044516e
    POP EDI                             ; 0044516f
    ADD ESP,0x10                        ; 00445170
        ;   Label: LAB_00445170
    POP EBP                             ; 00445173
    POP ESI                             ; 00445174
    RET                                 ; 00445175
    MOV EAX,0x1                         ; 00445176
        ;   Label: LAB_00445176
    JMP 0x00445170                      ; 0044517b
        ;   XREF to: 00445170 (UNCONDITIONAL_JUMP)  ; LAB_00445170
    MOV ESI,0x7fffffff                  ; 0044517d
        ;   Label: LAB_0044517d
    JMP 0x004450f6                      ; 00445182
        ;   XREF to: 004450f6 (UNCONDITIONAL_JUMP)  ; LAB_004450f6
    MOV ESI,dword ptr [ESP + 0x14]      ; 00445187
        ;   Label: LAB_00445187
    MOV EDI,dword ptr [ESP + 0xc]       ; 0044518b
    DEC EAX                             ; 0044518f
    ADD EDX,EBP                         ; 00445190
    ADD ECX,ESI                         ; 00445192
    ADD EBX,EDI                         ; 00445194
    TEST EAX,EAX                        ; 00445196
    JG 0x00445140                       ; 00445198
        ;   XREF to: 00445140 (CONDITIONAL_JUMP)  ; LAB_00445140
    JMP 0x0044515e                      ; 0044519a
        ;   XREF to: 0044515e (UNCONDITIONAL_JUMP)  ; LAB_0044515e

