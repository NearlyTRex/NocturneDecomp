; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[31]:
;   FUN_00418a00 at 00418d92
;   FUN_0041fe40 at 0041ffe3
;   FUN_004a9270 at 004a9be3
;   FUN_004b6d80 at 004b6e53
;   FUN_004da790 at 004da94b
;   FUN_00540f50 at 00540ffa
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004126a3
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413a51
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 00415708
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980 at 0043a9c3
;   ... and 21 more
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Foot_0057a49a
;   string s_Bip01_R_Foot_0057a4a7
;   string s_Bip01_L_Foot_0057a4b4
;   string s_Bip01_R_Foot_0057a4c1
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042add0
        ;   Label: core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
    PUSH ESI                            ; 0042add1
    PUSH EDI                            ; 0042add2
    SUB ESP,0x30                        ; 0042add3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0042add6
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042adda
    LEA ESI,[EBX + 0x150]               ; 0042adde
    CMP EAX,0x7                         ; 0042ade4
    JNC 0x0042af45                      ; 0042ade7
        ;   XREF to: 0042af45 (CONDITIONAL_JUMP)  ; LAB_0042af45
    CMP EAX,0x1                         ; 0042aded
    JNZ 0x0042adfb                      ; 0042adf0
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    CMP dword ptr [EBX + 0x2408],0x0    ; 0042adf2
    JNZ 0x0042ae02                      ; 0042adf9
        ;   XREF to: 0042ae02 (CONDITIONAL_JUMP)  ; LAB_0042ae02
    ADD ESP,0x30                        ; 0042adfb
        ;   Label: LAB_0042adfb
    POP EDI                             ; 0042adfe
    POP ESI                             ; 0042adff
    POP EBX                             ; 0042ae00
    RET                                 ; 0042ae01
    PUSH 0x0                            ; 0042ae02
        ;   Label: LAB_0042ae02
    PUSH 0x57a49a                       ; 0042ae04 | = "Bip01 L Foot"
    PUSH ESI                            ; 0042ae09
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042ae0a
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0042ae0f
    PUSH EAX                            ; 0042ae12
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042ae13
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0042ae18
    TEST EAX,EAX                        ; 0042ae1b
    JL 0x0042adfb                       ; 0042ae1d
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x3f800000                     ; 0042ae1f
    PUSH EAX                            ; 0042ae24
    LEA EAX,[ESP + 0x8]                 ; 0042ae25
    PUSH EAX                            ; 0042ae29
    PUSH ESI                            ; 0042ae2a
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0042ae2b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0042ae31
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0042ae36
    PUSH EAX                            ; 0042ae39
    PUSH EBX                            ; 0042ae3a
    CALL dword ptr [EDI + 0x1c]         ; 0042ae3b
    ADD ESP,0xc                         ; 0042ae3e
    ADD ESP,0x30                        ; 0042ae41
    POP EDI                             ; 0042ae44
    POP ESI                             ; 0042ae45
    POP EBX                             ; 0042ae46
    RET                                 ; 0042ae47
    CMP dword ptr [EBX + 0x2408],0x0    ; 0042ae48
        ;   Label: LAB_0042ae48
    JZ 0x0042adfb                       ; 0042ae4f
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x0                            ; 0042ae51
    PUSH 0x57a4a7                       ; 0042ae53 | = "Bip01 R Foot"
    PUSH ESI                            ; 0042ae58
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042ae59
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0042ae5e
    PUSH EAX                            ; 0042ae61
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042ae62
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0042ae67
    TEST EAX,EAX                        ; 0042ae6a
    JL 0x0042adfb                       ; 0042ae6c
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x3f800000                     ; 0042ae6e
    PUSH EAX                            ; 0042ae73
    LEA EAX,[ESP + 0x2c]                ; 0042ae74
    PUSH EAX                            ; 0042ae78
    PUSH ESI                            ; 0042ae79
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0042ae7a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0042ae80
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0042ae85
    PUSH EAX                            ; 0042ae88
    PUSH EBX                            ; 0042ae89
    CALL dword ptr [EDI + 0x1c]         ; 0042ae8a
    ADD ESP,0xc                         ; 0042ae8d
    ADD ESP,0x30                        ; 0042ae90
    POP EDI                             ; 0042ae93
    POP ESI                             ; 0042ae94
    POP EBX                             ; 0042ae95
    RET                                 ; 0042ae96
    CMP dword ptr [EBX + 0x2408],0x0    ; 0042ae97
        ;   Label: LAB_0042ae97
    JZ 0x0042adfb                       ; 0042ae9e
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x0                            ; 0042aea4
    PUSH 0x57a4b4                       ; 0042aea6 | = "Bip01 L Foot"
    PUSH ESI                            ; 0042aeab
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042aeac
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0042aeb1
    PUSH EAX                            ; 0042aeb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042aeb5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0042aeba
    TEST EAX,EAX                        ; 0042aebd
    JL 0x0042adfb                       ; 0042aebf
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x3fd9999a                     ; 0042aec5
    PUSH EAX                            ; 0042aeca
    LEA EAX,[ESP + 0x20]                ; 0042aecb
    PUSH EAX                            ; 0042aecf
    PUSH ESI                            ; 0042aed0
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0042aed1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0042aed7
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0042aedc
    PUSH EAX                            ; 0042aedf
    PUSH EBX                            ; 0042aee0
    CALL dword ptr [EDI + 0x1c]         ; 0042aee1
    ADD ESP,0xc                         ; 0042aee4
    ADD ESP,0x30                        ; 0042aee7
    POP EDI                             ; 0042aeea
    POP ESI                             ; 0042aeeb
    POP EBX                             ; 0042aeec
    RET                                 ; 0042aeed
    CMP dword ptr [EBX + 0x2408],0x0    ; 0042aeee
        ;   Label: LAB_0042aeee
    JZ 0x0042adfb                       ; 0042aef5
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x0                            ; 0042aefb
    PUSH 0x57a4c1                       ; 0042aefd | = "Bip01 R Foot"
    PUSH ESI                            ; 0042af02
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042af03
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0042af08
    PUSH EAX                            ; 0042af0b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042af0c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0042af11
    TEST EAX,EAX                        ; 0042af14
    JL 0x0042adfb                       ; 0042af16
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    PUSH 0x3fd9999a                     ; 0042af1c
    PUSH EAX                            ; 0042af21
    LEA EAX,[ESP + 0x14]                ; 0042af22
    PUSH EAX                            ; 0042af26
    PUSH ESI                            ; 0042af27
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0042af28
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0042af2e
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0042af33
    PUSH EAX                            ; 0042af36
    PUSH EBX                            ; 0042af37
    CALL dword ptr [EDI + 0x1c]         ; 0042af38
    ADD ESP,0xc                         ; 0042af3b
    ADD ESP,0x30                        ; 0042af3e
    POP EDI                             ; 0042af41
    POP ESI                             ; 0042af42
    POP EBX                             ; 0042af43
    RET                                 ; 0042af44
    JBE 0x0042ae48                      ; 0042af45
        ;   XREF to: 0042ae48 (CONDITIONAL_JUMP)  ; LAB_0042ae48
        ;   Label: LAB_0042af45
    CMP EAX,0x1f                        ; 0042af4b
    JC 0x0042adfb                       ; 0042af4e
        ;   XREF to: 0042adfb (CONDITIONAL_JUMP)  ; LAB_0042adfb
    JBE 0x0042ae97                      ; 0042af54
        ;   XREF to: 0042ae97 (CONDITIONAL_JUMP)  ; LAB_0042ae97
    CMP EAX,0x25                        ; 0042af5a
    JZ 0x0042aeee                       ; 0042af5d
        ;   XREF to: 0042aeee (CONDITIONAL_JUMP)  ; LAB_0042aeee
    ADD ESP,0x30                        ; 0042af5f
    POP EDI                             ; 0042af62
    POP ESI                             ; 0042af63
    POP EBX                             ; 0042af64
    RET                                 ; 0042af65

