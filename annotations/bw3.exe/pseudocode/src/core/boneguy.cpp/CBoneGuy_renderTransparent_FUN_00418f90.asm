; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00418f90(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;   core_charactr.cpp_FUN_0042f310
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418f90
        ;   Label: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90
    PUSH EBP                            ; 00418f91
    SUB ESP,0x30                        ; 00418f92
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00418f95
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00418f99
    JZ 0x00418faa                       ; 00418fa0
        ;   XREF to: 00418faa (CONDITIONAL_JUMP)  ; LAB_00418faa
    XOR EAX,EAX                         ; 00418fa2
    ADD ESP,0x30                        ; 00418fa4
    POP EBP                             ; 00418fa7
    POP EBX                             ; 00418fa8
    RET                                 ; 00418fa9
    PUSH EDI                            ; 00418faa
        ;   Label: LAB_00418faa
    PUSH ESI                            ; 00418fab
    PUSH EBX                            ; 00418fac
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00418fad
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00418fb2
    PUSH 0x0                            ; 00418fb5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418fb7
    PUSH EBX                            ; 00418fbd
    LEA ESI,[ESP + 0x28]                ; 00418fbe
    LEA EDI,[ESP + 0x10]                ; 00418fc2
    CALL dword ptr [EAX + 0x1c]         ; 00418fc6
    MOV ECX,0x6                         ; 00418fc9
    ADD ESP,0x4                         ; 00418fce
    LEA EAX,[ESP + 0xc]                 ; 00418fd1
    LEA ESI,[ESP + 0x24]                ; 00418fd5
    PUSH EAX                            ; 00418fd9
    MOVSD.REP ES:EDI,ESI                ; 00418fda
    CALL core_box.cpp_FUN_0041daf0      ; 00418fdc
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00418fe1
    MOV ESI,EAX                         ; 00418fe4
    TEST EAX,EAX                        ; 00418fe6
    JZ 0x0041905d                       ; 00418fe8
        ;   XREF to: 0041905d (CONDITIONAL_JUMP)  ; LAB_0041905d
    PUSH 0x0                            ; 00418fea
    MOV ECX,dword ptr [0x005f2afc]      ; 00418fec | DAT_005f2afc
    PUSH ECX                            ; 00418ff2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00418ff3
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00418ff8
    PUSH 0xffff                         ; 00418ffb
    MOV EDI,dword ptr [0x005f2afc]      ; 00419000 | DAT_005f2afc
    MOV EAX,[0x00603b28]                ; 00419006 | g_CDemonSetPtr
    PUSH EDI                            ; 0041900b | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 0041900c | g_CDemonSetInstance.disable_directional_lighting
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00419016
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0041901b
    PUSH EBX                            ; 0041901e
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0041901f
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 00419024
    MOV EBP,dword ptr [0x005f2afc]      ; 00419027 | DAT_005f2afc
    MOV EAX,[0x00603b28]                ; 0041902d | g_CDemonSetPtr
    PUSH EBP                            ; 00419032 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00419033 | g_CDemonSetInstance.disable_directional_lighting
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 0041903d
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    FLD float ptr [EBX + 0x3254]        ; 00419042
    FLDZ                                ; 00419048
    ADD ESP,0x4                         ; 0041904a
    FCOMPP                              ; 0041904d
    FNSTSW AX                           ; 0041904f
    SAHF                                ; 00419051
    JNC 0x0041905d                      ; 00419052
        ;   XREF to: 0041905d (CONDITIONAL_JUMP)  ; LAB_0041905d
    PUSH EBX                            ; 00419054
    CALL core_charactr.cpp_FUN_0042f310 ; 00419055
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041905a
    PUSH EBX                            ; 0041905d
        ;   Label: LAB_0041905d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0041905e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00419063
    MOV EAX,ESI                         ; 00419066
    POP ESI                             ; 00419068
    POP EDI                             ; 00419069
    ADD ESP,0x30                        ; 0041906a
    POP EBP                             ; 0041906d
    POP EBX                             ; 0041906e
    RET                                 ; 0041906f

