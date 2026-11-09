; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00432cb0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_FUN_00433e80 at 00433e86
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5c90
;   TerminatedCString s_CCharacter_applyGesture_005d5ca5
;   TerminatedCString s_Bip01_spine1_005d5ce9
;   undefined4 DAT_005d5cf7
;   undefined4 DAT_005d5cfb
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_motion.cpp_FUN_00524a00
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432cb0
        ;   Label: core_charactr.cpp_FUN_00432cb0
    PUSH EBP                            ; 00432cb1
    SUB ESP,0x10                        ; 00432cb2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00432cb5
    CMP dword ptr [EBX + 0x2754],0x0    ; 00432cb9
    JL 0x00432dba                       ; 00432cc0
        ;   XREF to: 00432dba (CONDITIONAL_JUMP)  ; LAB_00432dba
    PUSH EDI                            ; 00432cc6
    PUSH ESI                            ; 00432cc7
    CMP dword ptr [EBX + 0x2750],-0x1   ; 00432cc8
    JL 0x00432dc0                       ; 00432ccf
        ;   XREF to: 00432dc0 (CONDITIONAL_JUMP)  ; LAB_00432dc0
    PUSH 0x0                            ; 00432cd5
        ;   Label: LAB_00432cd5
    PUSH 0x5d5ce9                       ; 00432cd7 | = "Bip01 spine1"
    LEA ESI,[EBX + 0x158]               ; 00432cdc
    PUSH ESI                            ; 00432ce2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00432ce3
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00432ce8
    PUSH EAX                            ; 00432ceb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00432cec
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00432cf1
    MOV EDX,dword ptr [EBX + 0x2754]    ; 00432cf4
    MOV EBP,0x3f59999a                  ; 00432cfa
    LEA EDI,[EDX*0x8 + 0x0]             ; 00432cff
    PUSH ESI                            ; 00432d06
    MOV dword ptr [EBX + 0x2750],EAX    ; 00432d07
    ADD EDI,EDX                         ; 00432d0d
    CALL core_motion.cpp_FUN_00524a00   ; 00432d0f
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    SHL EDI,0x5                         ; 00432d14
    ADD ESP,0x4                         ; 00432d17
    ADD EAX,0x1c28                      ; 00432d1a
    MOV EDX,dword ptr [EBX + 0x275c]    ; 00432d1f
    MOV dword ptr [ESP + 0x14],EBP      ; 00432d25
    ADD EAX,EDI                         ; 00432d29
    CMP EDX,0x1                         ; 00432d2b
    JZ 0x00432de9                       ; 00432d2e
        ;   XREF to: 00432de9 (CONDITIONAL_JUMP)  ; LAB_00432de9
    FLD float ptr [EAX + 0x20]          ; 00432d34
    FMUL float ptr [0x005d5cf7]         ; 00432d37 | DAT_005d5cf7
    FLD float ptr [EBX + 0x2758]        ; 00432d3d
    FILD dword ptr [EAX + 0x64]         ; 00432d43
    FSUB float ptr [EBX + 0x2758]       ; 00432d46
    FLD1                                ; 00432d4c
    FDIVRP ST3,ST0                      ; 00432d4e
    FXCH                                ; 00432d50
    FMUL ST2                            ; 00432d52
    FXCH                                ; 00432d54
    FMULP ST2                           ; 00432d56
    FSTP float ptr [ESP + 0x10]         ; 00432d58
    FSTP float ptr [ESP + 0xc]          ; 00432d5c
    FLD float ptr [ESP + 0x10]          ; 00432d60
    FCOMP float ptr [0x005d5cfb]        ; 00432d64 | DAT_005d5cfb
    FNSTSW AX                           ; 00432d6a
    SAHF                                ; 00432d6c
    JNC 0x00432d77                      ; 00432d6d
        ;   XREF to: 00432d77 (CONDITIONAL_JUMP)  ; LAB_00432d77
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432d6f
    MOV dword ptr [ESP + 0x14],EAX      ; 00432d73
    FLD float ptr [ESP + 0xc]           ; 00432d77
        ;   Label: LAB_00432d77
    FCOMP float ptr [ESP + 0x14]        ; 00432d7b
    FNSTSW AX                           ; 00432d7f
    SAHF                                ; 00432d81
    JNC 0x00432d8c                      ; 00432d82
        ;   XREF to: 00432d8c (CONDITIONAL_JUMP)  ; LAB_00432d8c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00432d84
    MOV dword ptr [ESP + 0x14],EAX      ; 00432d88
    PUSH 0x567360                       ; 00432d8c
        ;   Label: LAB_00432d8c
    MOV ESI,dword ptr [EBX + 0x2750]    ; 00432d91
    PUSH ESI                            ; 00432d97
    PUSH dword ptr [ESP + 0x1c]         ; 00432d98
    MOV EDI,dword ptr [EBX + 0x2754]    ; 00432d9c
    PUSH dword ptr [EBX + 0x2758]       ; 00432da2
    PUSH EDI                            ; 00432da8
    ADD EBX,0x158                       ; 00432da9
    PUSH EBX                            ; 00432daf
    CALL core_skeleton.cpp_FUN_00568100 ; 00432db0
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 00432db5
    POP ESI                             ; 00432db8
    POP EDI                             ; 00432db9
    ADD ESP,0x10                        ; 00432dba
        ;   Label: LAB_00432dba
    POP EBP                             ; 00432dbd
    POP EBX                             ; 00432dbe
    RET                                 ; 00432dbf
    PUSH EBX                            ; 00432dc0
        ;   Label: LAB_00432dc0
    MOV ESI,0x5d5c90                    ; 00432dc1 | = "..\\core\\charactr.cpp"
    MOV EDI,0xec5                       ; 00432dc6
    PUSH 0x5d5ca5                       ; 00432dcb | = "CCharacter::applyGesture - never set ..."
    MOV dword ptr [0x01d1d400],ESI      ; 00432dd0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00432dd6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00432ddc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00432de1
    JMP 0x00432cd5                      ; 00432de4
        ;   XREF to: 00432cd5 (UNCONDITIONAL_JUMP)  ; LAB_00432cd5
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00432de9
        ;   Label: LAB_00432de9
    JMP 0x00432d8c                      ; 00432df1
        ;   XREF to: 00432d8c (UNCONDITIONAL_JUMP)  ; LAB_00432d8c

