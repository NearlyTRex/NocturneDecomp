; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hostage_cpp_CHostage_ctor_FUN_004b69f0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_hickdad.dfm_005859f3
;   TerminatedCString s_true_005859ff
;   undefined4 s_rue_005859ff+1
;   undefined4 s_ue_005859ff+2
;   undefined4 s_e_005859ff+3
;   undefined1* PTR_core_hostage.cpp_CHostage_setup_FUN_004b6b20_0059ef44 = 004b6b20
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   FUN_004ee950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b69f0
        ;   Label: core_hostage.cpp_CHostage_ctor_FUN_004b69f0
    PUSH ESI                            ; 004b69f1
    PUSH EDI                            ; 004b69f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b69f3
    PUSH EDX                            ; 004b69f7
    CALL FUN_004ee950                   ; 004b69f8
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee950()
    ADD ESP,0x4                         ; 004b69fd
    PUSH 0x5859f3                       ; 004b6a00 | = "hickdad.dfm"
    MOV EBX,EAX                         ; 004b6a05
    LEA EDI,[EAX + 0x150]               ; 004b6a07
    PUSH EDI                            ; 004b6a0d
    MOV dword ptr [EAX + 0x14c],0x59ef44 ; 004b6a0e | PTR_core_hostage.cpp_CHostage_setup_FUN_004b6b20_0059ef44
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b6a18
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x1f91c],0x0   ; 004b6a1d
    MOV dword ptr [EBX + 0x1f924],0x0   ; 004b6a27
    MOV ESI,0x5859ff                    ; 004b6a31 | = "true"
    MOV dword ptr [EBX + 0x1f928],0x0   ; 004b6a36
    ADD ESP,0x8                         ; 004b6a40
    MOV dword ptr [EBX + 0x1f92c],0x0   ; 004b6a43
    LEA EDI,[EBX + 0x1f574]             ; 004b6a4d
    MOV dword ptr [EBX + 0x1f570],0x40a00000 ; 004b6a53
    PUSH EDI                            ; 004b6a5d
    MOV AL,byte ptr [ESI]               ; 004b6a5e | = "true" | s_ue_005859ff+2
        ;   Label: LAB_004b6a5e
    MOV byte ptr [EDI],AL               ; 004b6a60
    CMP AL,0x0                          ; 004b6a62
    JZ 0x004b6a76                       ; 004b6a64
        ;   XREF to: 004b6a76 (CONDITIONAL_JUMP)  ; LAB_004b6a76
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6a66 | s_rue_005859ff+1 | s_e_005859ff+3
    ADD ESI,0x2                         ; 004b6a69
    MOV byte ptr [EDI + 0x1],AL         ; 004b6a6c
    ADD EDI,0x2                         ; 004b6a6f
    CMP AL,0x0                          ; 004b6a72
    JNZ 0x004b6a5e                      ; 004b6a74
        ;   XREF to: 004b6a5e (CONDITIONAL_JUMP)  ; LAB_004b6a5e
    POP EDI                             ; 004b6a76
        ;   Label: LAB_004b6a76
    MOV dword ptr [EBX + 0x1f930],0x0   ; 004b6a77
    MOV dword ptr [EBX + 0x2590],0x0    ; 004b6a81
    MOV dword ptr [EBX + 0x1f948],0x0   ; 004b6a8b
    MOV dword ptr [EBX + 0x1f94c],0x0   ; 004b6a95
    MOV byte ptr [EBX + 0x1f5d8],0x0    ; 004b6a9f
    MOV byte ptr [EBX + 0x1f5f8],0x0    ; 004b6aa6
    MOV byte ptr [EBX + 0x1f65c],0x0    ; 004b6aad
    MOV byte ptr [EBX + 0x1f6c0],0x0    ; 004b6ab4
    MOV byte ptr [EBX + 0x1f724],0x0    ; 004b6abb
    MOV byte ptr [EBX + 0x1f788],0x0    ; 004b6ac2
    MOV byte ptr [EBX + 0x1f7ec],0x0    ; 004b6ac9
    MOV dword ptr [EBX + 0x1f950],0x0   ; 004b6ad0
    MOV dword ptr [EBX + 0x1f954],0x0   ; 004b6ada
    MOV dword ptr [EBX + 0x1f944],0x0   ; 004b6ae4
    MOV byte ptr [EBX + 0x2440],0x0     ; 004b6aee
    MOV byte ptr [EBX + 0x1f850],0x0    ; 004b6af5
    MOV byte ptr [EBX + 0x1f8b4],0x0    ; 004b6afc
    MOV EAX,EBX                         ; 004b6b03
    MOV dword ptr [EBX + 0x243c],0x1    ; 004b6b05
    POP EDI                             ; 004b6b0f
    POP ESI                             ; 004b6b10
    POP EBX                             ; 004b6b11
    RET                                 ; 004b6b12

