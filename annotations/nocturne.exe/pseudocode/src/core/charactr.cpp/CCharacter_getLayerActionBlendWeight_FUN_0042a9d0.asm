; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter *this_ptr,int state_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_index
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[11]:
;   core_scat.cpp_CScat_renderOpaque_FUN_004fcb20 at 004fcb7d
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053a9bc
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539f6d
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d2dd
;   core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90 at 0053bfaf
;   core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0 at 0053c3cf
;   core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630 at 0053b666
;   core_stranger.cpp_FUN_0053c800 at 0053c838
;   core_stranger.cpp_FUN_0053f310 at 0053f695
;   core_stranger.cpp_FUN_0053fc60 at 0053fe96
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a9d0
        ;   Label: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
    PUSH ESI                            ; 0042a9d1
    PUSH EBP                            ; 0042a9d2
    MOV EBP,ESP                         ; 0042a9d3
    SUB ESP,0xc                         ; 0042a9d5
    AND ESP,0xfffffff8                  ; 0042a9d8
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042a9db
    MOV EAX,dword ptr [EDX + 0x2a84]    ; 0042a9de
    XOR ECX,ECX                         ; 0042a9e4
    SHL EAX,0x3                         ; 0042a9e6
    MOV dword ptr [ESP],ECX             ; 0042a9e9
    MOV ECX,EAX                         ; 0042a9ec
    SHL EAX,0x3                         ; 0042a9ee
    SUB EAX,ECX                         ; 0042a9f1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042a9f3
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x2628] ; 0042a9f6
    JZ 0x0042aa24                       ; 0042a9fd
        ;   XREF to: 0042aa24 (CONDITIONAL_JUMP)  ; LAB_0042aa24
    MOV EAX,dword ptr [EDX + 0x2a84]    ; 0042a9ff
        ;   Label: LAB_0042a9ff
    SHL EAX,0x3                         ; 0042aa05
    MOV ECX,EAX                         ; 0042aa08
    SHL EAX,0x3                         ; 0042aa0a
    SUB EAX,ECX                         ; 0042aa0d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042aa0f
    CMP ESI,dword ptr [EDX + EAX*0x1 + 0x2624] ; 0042aa12
    JZ 0x0042aa2f                       ; 0042aa19
        ;   XREF to: 0042aa2f (CONDITIONAL_JUMP)  ; LAB_0042aa2f
    MOV EAX,dword ptr [ESP]             ; 0042aa1b
    MOV ESP,EBP                         ; 0042aa1e
    POP EBP                             ; 0042aa20
    POP ESI                             ; 0042aa21
    POP EBX                             ; 0042aa22
    RET                                 ; 0042aa23
    MOV EAX,dword ptr [EDX + 0x2a88]    ; 0042aa24
        ;   Label: LAB_0042aa24
    MOV dword ptr [ESP],EAX             ; 0042aa2a
    JMP 0x0042a9ff                      ; 0042aa2d
        ;   XREF to: 0042a9ff (UNCONDITIONAL_JUMP)  ; LAB_0042a9ff
    FLD float ptr [EDX + 0x2a88]        ; 0042aa2f
        ;   Label: LAB_0042aa2f
    FLD1                                ; 0042aa35
    FSUBRP                              ; 0042aa37
    FADD float ptr [ESP]                ; 0042aa39
    FSTP float ptr [ESP]                ; 0042aa3c
    MOV EAX,dword ptr [ESP]             ; 0042aa3f
    MOV ESP,EBP                         ; 0042aa42
    POP EBP                             ; 0042aa44
    POP ESI                             ; 0042aa45
    POP EBX                             ; 0042aa46
    RET                                 ; 0042aa47

