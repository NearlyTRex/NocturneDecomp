; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcamera.cpp_testCoronaVisibility_FUN_00451250(int start_x, int start_y, int depth_reciprocal)
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
;   int[76800] g_PrecomputedDepthBuffer
;   int g_CoronaVisibilityEnabled
;   int g_CoronaTargetX
;   int g_CoronaTargetY
;   int g_CoronaTargetDepth
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00451250
        ;   Label: core_dcamera.cpp_testCoronaVisibility_FUN_00451250
    PUSH EBP                            ; 00451251
    SUB ESP,0x10                        ; 00451252
    MOV ESI,dword ptr [ESP + 0x24]      ; 00451255
    CMP dword ptr [0x015c4174],0x0      ; 00451259 | int g_CoronaVisibilityEnabled
    JZ 0x00451316                       ; 00451260 | LAB_00451316
        ;   XREF to: 00451316 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00451266
    PUSH EBX                            ; 00451267
    MOV EDI,dword ptr [0x015c4178]      ; 00451268 | int g_CoronaTargetX
    XOR ECX,ECX                         ; 0045126e
    MOV EBX,dword ptr [0x015c4180]      ; 00451270 | int g_CoronaTargetDepth
    MOV dword ptr [ESP + 0x8],ECX       ; 00451276
    MOV ECX,dword ptr [0x015c417c]      ; 0045127a | int g_CoronaTargetY
    TEST ESI,ESI                        ; 00451280
    JZ 0x0045131d                       ; 00451282 | LAB_0045131d
        ;   XREF to: 0045131d (CONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 00451288
    MOV EDX,EAX                         ; 0045128d
    SAR EDX,0x1f                        ; 0045128f
    IDIV ESI                            ; 00451292
    MOV ESI,EAX                         ; 00451294
    MOV EBP,dword ptr [ESP + 0x24]      ; 00451296
        ;   Label: LAB_00451296
    MOV EAX,EDI                         ; 0045129a
    SUB EAX,EBP                         ; 0045129c
    SHL EAX,0x4                         ; 0045129e
    MOV dword ptr [ESP + 0x14],EAX      ; 004512a1
    MOV EAX,dword ptr [ESP + 0x28]      ; 004512a5
    SUB ECX,EAX                         ; 004512a9
    MOV EAX,ECX                         ; 004512ab
    MOV EDX,EBX                         ; 004512ad
    SHL EAX,0x4                         ; 004512af
    SUB EDX,ESI                         ; 004512b2
    MOV dword ptr [ESP + 0xc],EAX       ; 004512b4
    MOV EAX,EDX                         ; 004512b8
    SAR EDX,0x1f                        ; 004512ba
    SHL EDX,0x4                         ; 004512bd
    SBB EAX,EDX                         ; 004512c0
    SAR EAX,0x4                         ; 004512c2
    MOV EBX,dword ptr [ESP + 0x28]      ; 004512c5
    MOV ECX,EBP                         ; 004512c9
    SHL EBX,0x8                         ; 004512cb
    SHL ECX,0x8                         ; 004512ce
    MOV dword ptr [ESP + 0x10],EAX      ; 004512d1
    MOV EDX,ESI                         ; 004512d5
    MOV EAX,0x10                        ; 004512d7
    MOV EBP,dword ptr [ESP + 0x10]      ; 004512dc
    MOV EDI,EBX                         ; 004512e0
        ;   Label: LAB_004512e0
    SAR EDI,0x8                         ; 004512e2
    IMUL EDI,EDI,0x500                  ; 004512e5
    MOV ESI,ECX                         ; 004512eb
    SAR ESI,0x8                         ; 004512ed
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xbce6f8] ; 004512f0 | int[76800] g_PrecomputedDepthBuffer
    LEA EDI,[EDX + -0x80]               ; 004512f7
    CMP ESI,EDI                         ; 004512fa
    JGE 0x00451327                      ; 004512fc | LAB_00451327
        ;   XREF to: 00451327 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004512fe
        ;   Label: LAB_004512fe
    JNZ 0x0045130a                      ; 00451300 | LAB_0045130a
        ;   XREF to: 0045130a (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],0x1       ; 00451302
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045130a
        ;   Label: LAB_0045130a
    POP EBX                             ; 0045130e
    POP EDI                             ; 0045130f
    ADD ESP,0x10                        ; 00451310
        ;   Label: LAB_00451310
    POP EBP                             ; 00451313
    POP ESI                             ; 00451314
    RET                                 ; 00451315
    MOV EAX,0x1                         ; 00451316
        ;   Label: LAB_00451316
    JMP 0x00451310                      ; 0045131b | LAB_00451310
        ;   XREF to: 00451310 (UNCONDITIONAL_JUMP)
    MOV ESI,0x7fffffff                  ; 0045131d
        ;   Label: LAB_0045131d
    JMP 0x00451296                      ; 00451322 | LAB_00451296
        ;   XREF to: 00451296 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x14]      ; 00451327
        ;   Label: LAB_00451327
    MOV EDI,dword ptr [ESP + 0xc]       ; 0045132b
    DEC EAX                             ; 0045132f
    ADD EDX,EBP                         ; 00451330
    ADD ECX,ESI                         ; 00451332
    ADD EBX,EDI                         ; 00451334
    TEST EAX,EAX                        ; 00451336
    JG 0x004512e0                       ; 00451338 | LAB_004512e0
        ;   XREF to: 004512e0 (CONDITIONAL_JUMP)
    JMP 0x004512fe                      ; 0045133a | LAB_004512fe
        ;   XREF to: 004512fe (UNCONDITIONAL_JUMP)

