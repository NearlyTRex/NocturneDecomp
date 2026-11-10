; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter *this_ptr,int state_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   state_index
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[19]:
;   core_doc.cpp_CDoc_canDoHeroAction_FUN_0045d0c0 at 0045d19a
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459c5c
;   core_doc.cpp_FUN_004555c0 at 004559c6
;   core_doc.cpp_FUN_004568e0 at 00456be5
;   core_doc.cpp_FUN_004583ec at 0045840f
;   core_scat.cpp_CScat_renderOpaque_FUN_0051fa90 at 0051faed
;   core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0 at 0056e708
;   core_stranger.cpp_CStranger_handleFireButton_FUN_0056e850 at 0056e94b
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880 at 00567cdd
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770 at 0056b95d
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a5a0
        ;   Label: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
    PUSH ESI                            ; 0042a5a1
    PUSH EBP                            ; 0042a5a2
    MOV EBP,ESP                         ; 0042a5a3
    SUB ESP,0xc                         ; 0042a5a5
    AND ESP,0xfffffff8                  ; 0042a5a8
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042a5ab
    MOV EAX,dword ptr [EDX + 0x2d04]    ; 0042a5ae
    XOR ECX,ECX                         ; 0042a5b4
    SHL EAX,0x3                         ; 0042a5b6
    MOV dword ptr [ESP],ECX             ; 0042a5b9
    MOV ECX,EAX                         ; 0042a5bc
    SHL EAX,0x3                         ; 0042a5be
    SUB EAX,ECX                         ; 0042a5c1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042a5c3
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x2838] ; 0042a5c6
    JZ 0x0042a5f4                       ; 0042a5cd
        ;   XREF to: 0042a5f4 (CONDITIONAL_JUMP)  ; LAB_0042a5f4
    MOV EAX,dword ptr [EDX + 0x2d04]    ; 0042a5cf
        ;   Label: LAB_0042a5cf
    SHL EAX,0x3                         ; 0042a5d5
    MOV ECX,EAX                         ; 0042a5d8
    SHL EAX,0x3                         ; 0042a5da
    SUB EAX,ECX                         ; 0042a5dd
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042a5df
    CMP ESI,dword ptr [EDX + EAX*0x1 + 0x2834] ; 0042a5e2
    JZ 0x0042a5ff                       ; 0042a5e9
        ;   XREF to: 0042a5ff (CONDITIONAL_JUMP)  ; LAB_0042a5ff
    MOV EAX,dword ptr [ESP]             ; 0042a5eb
    MOV ESP,EBP                         ; 0042a5ee
    POP EBP                             ; 0042a5f0
    POP ESI                             ; 0042a5f1
    POP EBX                             ; 0042a5f2
    RET                                 ; 0042a5f3
    MOV EAX,dword ptr [EDX + 0x2d08]    ; 0042a5f4
        ;   Label: LAB_0042a5f4
    MOV dword ptr [ESP],EAX             ; 0042a5fa
    JMP 0x0042a5cf                      ; 0042a5fd
        ;   XREF to: 0042a5cf (UNCONDITIONAL_JUMP)  ; LAB_0042a5cf
    FLD float ptr [EDX + 0x2d08]        ; 0042a5ff
        ;   Label: LAB_0042a5ff
    FLD1                                ; 0042a605
    FSUBRP                              ; 0042a607
    FADD float ptr [ESP]                ; 0042a609
    FSTP float ptr [ESP]                ; 0042a60c
    MOV EAX,dword ptr [ESP]             ; 0042a60f
    MOV ESP,EBP                         ; 0042a612
    POP EBP                             ; 0042a614
    POP ESI                             ; 0042a615
    POP EBX                             ; 0042a616
    RET                                 ; 0042a617

