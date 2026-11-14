; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c6a0(CDemonActor *this_ptr,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
;
; Referenced Globals:
;   undefined4 DAT_005d2e39
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ground_type
;   undefined4 g_CDemonCameraInstance.base.position
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_005562c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c6a0
        ;   Label: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c6a0
    PUSH ESI                            ; 0040c6a1
    PUSH EDI                            ; 0040c6a2
    PUSH EBP                            ; 0040c6a3
    SUB ESP,0x24                        ; 0040c6a4
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040c6a7
    MOV EDI,ESP                         ; 0040c6ab
    MOV ESI,0x1fe37f0                   ; 0040c6ad
    MOVSD ES:EDI,ESI                    ; 0040c6b2 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 0040c6b3 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 0040c6b4 | g_CDemonCameraInstance.base.position+8
    LEA EDI,[ESP + 0xc]                 ; 0040c6b5
    MOV ESI,ESP                         ; 0040c6b9
    LEA EBX,[EBP + 0x20]                ; 0040c6bb
    MOVSD ES:EDI,ESI                    ; 0040c6be
    MOVSD ES:EDI,ESI                    ; 0040c6bf
    MOVSD ES:EDI,ESI                    ; 0040c6c0
    FLD float ptr [EBX]                 ; 0040c6c1
    FSUB float ptr [ESP + 0xc]          ; 0040c6c3
    FMUL ST0                            ; 0040c6c7
    FLD float ptr [EBX + 0x4]           ; 0040c6c9
    FSUB float ptr [ESP + 0x10]         ; 0040c6cc
    FMUL ST0                            ; 0040c6d0
    FLD float ptr [EBX + 0x8]           ; 0040c6d2
    FXCH                                ; 0040c6d5
    FADDP ST2,ST0                       ; 0040c6d7
    FSUB float ptr [ESP + 0x14]         ; 0040c6d9
    FMUL ST0                            ; 0040c6dd
    FADDP                               ; 0040c6df
    FCOMP float ptr [0x005d2e39]        ; 0040c6e1 | DAT_005d2e39
    FNSTSW AX                           ; 0040c6e7
    SAHF                                ; 0040c6e9
    JBE 0x0040c6f6                      ; 0040c6ea
        ;   XREF to: 0040c6f6 (CONDITIONAL_JUMP)  ; LAB_0040c6f6
    XOR EAX,EAX                         ; 0040c6ec
    ADD ESP,0x24                        ; 0040c6ee
    POP EBP                             ; 0040c6f1
    POP EDI                             ; 0040c6f2
    POP ESI                             ; 0040c6f3
    POP EBX                             ; 0040c6f4
    RET                                 ; 0040c6f5
    PUSH EBP                            ; 0040c6f6
        ;   Label: LAB_0040c6f6
    MOV EDX,dword ptr [0x00622c18]      ; 0040c6f7 | g_CDemonSetPtr
    PUSH EDX                            ; 0040c6fd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0040c6fe
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040c703
    PUSH 0x0                            ; 0040c706
    PUSH EBX                            ; 0040c708
    MOV ECX,dword ptr [0x00622c18]      ; 0040c709 | g_CDemonSetPtr
    PUSH ECX                            ; 0040c70f | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005562c0 ; 0040c710
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    ADD ESP,0xc                         ; 0040c715
    MOV ESI,dword ptr [0x00622c18]      ; 0040c718 | g_CDemonSetPtr
    PUSH ESI                            ; 0040c71e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0040c71f
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EDX,dword ptr [0x00622c18]      ; 0040c724 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0040c72a
    MOV EDI,dword ptr [EDX + 0x14d134]  ; 0040c72d | g_CDemonSetInstance.ground_type
    PUSH dword ptr [ESP + 0x3c]         ; 0040c733
    PUSH EDI                            ; 0040c737
    PUSH EBX                            ; 0040c738
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040c739
    PUSH EBP                            ; 0040c73f
    CALL dword ptr [EAX + 0x28]         ; 0040c740
    ADD ESP,0x10                        ; 0040c743
    ADD ESP,0x24                        ; 0040c746
    POP EBP                             ; 0040c749
    POP EDI                             ; 0040c74a
    POP ESI                             ; 0040c74b
    POP EBX                             ; 0040c74c
    RET                                 ; 0040c74d

