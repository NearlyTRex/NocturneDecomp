; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990(CDemonActor *this_ptr,CVector3f *location,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   location
; float            Stack[0xc]:4   volume
;
; Referenced Globals:
;   undefined4 DAT_005b5e89
;   undefined4 DAT_005b5e91
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ground_type
;   undefined4 g_CDemonCameraInstance.base.position
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c990
        ;   Label: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990
    PUSH ESI                            ; 0040c991
    PUSH EDI                            ; 0040c992
    SUB ESP,0x48                        ; 0040c993
    MOV EBX,dword ptr [ESP + 0x58]      ; 0040c996
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0040c99a
    PUSH EDX                            ; 0040c99e
    PUSH EBX                            ; 0040c99f
    LEA ESI,[ESP + 0x14]                ; 0040c9a0
    LEA EDI,[ESP + 0x2c]                ; 0040c9a4
    CALL core_actor.cpp_FUN_00408b80    ; 0040c9a8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 0040c9ad
    ADD ESP,0x8                         ; 0040c9b1
    MOVSD ES:EDI,ESI                    ; 0040c9b4
    MOVSD ES:EDI,ESI                    ; 0040c9b5
    MOVSD ES:EDI,ESI                    ; 0040c9b6
    LEA EDI,[ESP + 0x18]                ; 0040c9b7
    MOV ESI,0x2038f50                   ; 0040c9bb
    MOVSD ES:EDI,ESI                    ; 0040c9c0 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 0040c9c1 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 0040c9c2 | g_CDemonCameraInstance.base.position+8
    MOV EDI,ESP                         ; 0040c9c3
    LEA ESI,[ESP + 0x18]                ; 0040c9c5
    MOVSD ES:EDI,ESI                    ; 0040c9c9
    MOVSD ES:EDI,ESI                    ; 0040c9ca
    MOVSD ES:EDI,ESI                    ; 0040c9cb
    FLD float ptr [ESP + 0x24]          ; 0040c9cc
    FSUB float ptr [ESP]                ; 0040c9d0
    FMUL ST0                            ; 0040c9d3
    FLD float ptr [ESP + 0x28]          ; 0040c9d5
    FSUB float ptr [ESP + 0x4]          ; 0040c9d9
    FMUL ST0                            ; 0040c9dd
    FLD float ptr [ESP + 0x2c]          ; 0040c9df
    FXCH                                ; 0040c9e3
    FADDP ST2,ST0                       ; 0040c9e5
    FSUB float ptr [ESP + 0x8]          ; 0040c9e7
    FMUL ST0                            ; 0040c9eb
    FADDP                               ; 0040c9ed
    FCOMP float ptr [0x005b5e89]        ; 0040c9ef | DAT_005b5e89
    FNSTSW AX                           ; 0040c9f5
    SAHF                                ; 0040c9f7
    JBE 0x0040ca03                      ; 0040c9f8
        ;   XREF to: 0040ca03 (CONDITIONAL_JUMP)  ; LAB_0040ca03
    XOR EAX,EAX                         ; 0040c9fa
    ADD ESP,0x48                        ; 0040c9fc
    POP EDI                             ; 0040c9ff
    POP ESI                             ; 0040ca00
    POP EBX                             ; 0040ca01
    RET                                 ; 0040ca02
    PUSH EBX                            ; 0040ca03
        ;   Label: LAB_0040ca03
    MOV ECX,dword ptr [0x00603b28]      ; 0040ca04 | g_CDemonSetPtr
    PUSH ECX                            ; 0040ca0a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0040ca0b
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040ca10
    LEA EAX,[ESP + 0x24]                ; 0040ca13
    PUSH 0x0                            ; 0040ca17
    PUSH EAX                            ; 0040ca19
    MOV ESI,dword ptr [0x00603b28]      ; 0040ca1a | g_CDemonSetPtr
    PUSH ESI                            ; 0040ca20 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0040ca21
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040ca26
    FLD float ptr [ESP + 0x50]          ; 0040ca2a
    ADD ESP,0xc                         ; 0040ca2e
    LEA EDX,[EBX + 0x20]                ; 0040ca31
    PUSH 0x0                            ; 0040ca34
    PUSH EDX                            ; 0040ca36
    MOV EAX,[0x00603b28]                ; 0040ca37 | g_CDemonSetPtr
    PUSH EAX                            ; 0040ca3c | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x3c]         ; 0040ca3d
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 0040ca41 | g_CDemonSetInstance.ground_type
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0040ca47
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040ca4c
    FLD float ptr [ESP + 0x50]          ; 0040ca50
    ADD ESP,0xc                         ; 0040ca54
    MOV EDI,dword ptr [0x00603b28]      ; 0040ca57 | g_CDemonSetPtr
    PUSH EDI                            ; 0040ca5d | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x38]         ; 0040ca5e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0040ca62
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040ca67
    FLD float ptr [ESP + 0x34]          ; 0040ca6a
    FADD double ptr [0x005b5e91]        ; 0040ca6e | DAT_005b5e91
    FLD float ptr [ESP + 0x30]          ; 0040ca74
    FCOMPP                              ; 0040ca78
    FNSTSW AX                           ; 0040ca7a
    SAHF                                ; 0040ca7c
    JNC 0x0040ca8b                      ; 0040ca7d
        ;   XREF to: 0040ca8b (CONDITIONAL_JUMP)  ; LAB_0040ca8b
    MOV ESI,dword ptr [0x00603b28]      ; 0040ca7f | g_CDemonSetPtr
    MOV ESI,dword ptr [ESI + 0x14d134]  ; 0040ca85 | g_CDemonSetInstance.ground_type
    PUSH dword ptr [ESP + 0x60]         ; 0040ca8b
        ;   Label: LAB_0040ca8b
    PUSH ESI                            ; 0040ca8f
    LEA EAX,[ESP + 0x2c]                ; 0040ca90
    PUSH EAX                            ; 0040ca94
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040ca95
    PUSH EBX                            ; 0040ca9b
    CALL dword ptr [EDX + 0x28]         ; 0040ca9c
    ADD ESP,0x10                        ; 0040ca9f
    ADD ESP,0x48                        ; 0040caa2
    POP EDI                             ; 0040caa5
    POP ESI                             ; 0040caa6
    POP EBX                             ; 0040caa7
    RET                                 ; 0040caa8

