; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_FUN_0041d9c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005cc712
;   TerminatedCString s_Bip01_L_ForeArm_005cc71d
;   TerminatedCString s_Bip01_R_ForeArm_005cc72d
;   TerminatedCString s_Bip01_L_Foot_005cc73d
;   TerminatedCString s_Bip01_R_Foot_005cc74a
;   TerminatedCString s_Bip01_L_Hand_005cc757
;   TerminatedCString s_Bip01_R_Hand_005cc764
;   TerminatedCString s_Bip01_L_UpperArm_005cc771
;   TerminatedCString s_Bip01_R_UpperArm_005cc782
;   TerminatedCString s_Bip01_Spine_005cc793
;   TerminatedCString s_Bip01_Spine2_005cc79f
;   TerminatedCString s_lshoulderpiece_005cc7ac
;   TerminatedCString s_l4armpiece_005cc7bb
;   TerminatedCString s_rshoulderpiece_005cc7c6
;   TerminatedCString s_r4armpiece_005cc7d5
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;   core_skeleton.cpp_FUN_00543100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d9c0
        ;   Label: core_bride.cpp_FUN_0041d9c0
    PUSH ESI                            ; 0041d9c1
    SUB ESP,0x4                         ; 0041d9c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041d9c5
    PUSH EDI                            ; 0041d9c9
    LEA EDI,[EBX + 0x2b4]               ; 0041d9ca
    PUSH EDI                            ; 0041d9d0
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0041d9d1
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d9d6
    PUSH EDI                            ; 0041d9d9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0041d9da
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d9df
    PUSH 0x1                            ; 0041d9e2
    PUSH 0x5cc712                       ; 0041d9e4 | = "Bip01 Head"
    PUSH EAX                            ; 0041d9e9
    MOV ESI,EAX                         ; 0041d9ea
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041d9ec
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041d9f1
    PUSH 0x1                            ; 0041d9f4
    PUSH 0x5cc71d                       ; 0041d9f6 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0041d9fb
    MOV [0x007bccdc],EAX                ; 0041d9fc | DAT_007bccdc
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da01
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da06
    PUSH 0x1                            ; 0041da09
    PUSH 0x5cc72d                       ; 0041da0b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0041da10
    MOV [0x007bcce8],EAX                ; 0041da11 | DAT_007bcce8
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da16
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da1b
    PUSH 0x1                            ; 0041da1e
    PUSH 0x5cc73d                       ; 0041da20 | = "Bip01 L Foot"
    PUSH ESI                            ; 0041da25
    MOV [0x007bccec],EAX                ; 0041da26 | DAT_007bccec
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da2b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da30
    PUSH 0x1                            ; 0041da33
    PUSH 0x5cc74a                       ; 0041da35 | = "Bip01 R Foot"
    PUSH ESI                            ; 0041da3a
    MOV [0x007bccf8],EAX                ; 0041da3b | DAT_007bccf8
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da40
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da45
    PUSH 0x1                            ; 0041da48
    PUSH 0x5cc757                       ; 0041da4a | = "Bip01 L Hand"
    PUSH ESI                            ; 0041da4f
    MOV [0x007bccfc],EAX                ; 0041da50 | DAT_007bccfc
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da55
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da5a
    PUSH 0x1                            ; 0041da5d
    PUSH 0x5cc764                       ; 0041da5f | = "Bip01 R Hand"
    PUSH ESI                            ; 0041da64
    MOV [0x007bcce0],EAX                ; 0041da65 | DAT_007bcce0
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da6a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da6f
    PUSH 0x1                            ; 0041da72
    PUSH 0x5cc771                       ; 0041da74 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041da79
    MOV [0x007bcce4],EAX                ; 0041da7a | DAT_007bcce4
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da7f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da84
    PUSH 0x1                            ; 0041da87
    PUSH 0x5cc782                       ; 0041da89 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0041da8e
    MOV [0x007bccf0],EAX                ; 0041da8f | DAT_007bccf0
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041da94
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041da99
    MOV [0x007bccf4],EAX                ; 0041da9c | DAT_007bccf4
    PUSH 0x1                            ; 0041daa1
    PUSH 0x5cc793                       ; 0041daa3 | = "Bip01 Spine"
    PUSH ESI                            ; 0041daa8
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041daa9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041daae
    PUSH 0x1                            ; 0041dab1
    PUSH 0x5cc79f                       ; 0041dab3 | = "Bip01 Spine2"
    PUSH ESI                            ; 0041dab8
    MOV [0x007bcd00],EAX                ; 0041dab9 | DAT_007bcd00
    CALL core_skeleton.cpp_FUN_00540e80 ; 0041dabe
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041dac3
    PUSH EDI                            ; 0041dac6
    MOV [0x007bcd04],EAX                ; 0041dac7 | DAT_007bcd04
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0041dacc
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041dad1
    PUSH 0x1                            ; 0041dad4
    PUSH 0x5cc7ac                       ; 0041dad6 | = "lshoulderpiece"
    PUSH EAX                            ; 0041dadb
    MOV ESI,EAX                         ; 0041dadc
    CALL core_skeleton.cpp_FUN_00543100 ; 0041dade
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041dae3
    PUSH 0x1                            ; 0041dae6
    PUSH 0x5cc7bb                       ; 0041dae8 | = "l4armpiece"
    PUSH ESI                            ; 0041daed
    MOV dword ptr [EBX + 0x10af8],EAX   ; 0041daee
    CALL core_skeleton.cpp_FUN_00543100 ; 0041daf4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041daf9
    PUSH 0x1                            ; 0041dafc
    PUSH 0x5cc7c6                       ; 0041dafe | = "rshoulderpiece"
    PUSH ESI                            ; 0041db03
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0041db04
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db0a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db0f
    PUSH 0x1                            ; 0041db12
    PUSH 0x5cc7d5                       ; 0041db14 | = "r4armpiece"
    PUSH ESI                            ; 0041db19
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0041db1a
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db20
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db25
    PUSH 0x1                            ; 0041db28
    PUSH 0x5cc7e0                       ; 0041db2a | = "lshinpiece"
    PUSH ESI                            ; 0041db2f
    MOV dword ptr [EBX + 0x10b04],EAX   ; 0041db30
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db36
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db3b
    PUSH 0x1                            ; 0041db3e
    PUSH 0x5cc7eb                       ; 0041db40 | = "rshinpiece"
    PUSH ESI                            ; 0041db45
    MOV dword ptr [EBX + 0x10b08],EAX   ; 0041db46
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db4c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db51
    PUSH 0x1                            ; 0041db54
    PUSH 0x5cc7f6                       ; 0041db56 | = "torsopiece"
    PUSH ESI                            ; 0041db5b
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 0041db5c
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db62
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db67
    MOV dword ptr [EBX + 0x10b10],EAX   ; 0041db6a
    POP EDI                             ; 0041db70
    PUSH 0x1                            ; 0041db71
    PUSH 0x5cc801                       ; 0041db73 | = "lowerbodypiece"
    PUSH ESI                            ; 0041db78
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db79
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db7e
    PUSH 0x1                            ; 0041db81
    PUSH 0x5cc810                       ; 0041db83 | = "headpiece"
    PUSH ESI                            ; 0041db88
    MOV dword ptr [EBX + 0x10b14],EAX   ; 0041db89
    CALL core_skeleton.cpp_FUN_00543100 ; 0041db8f
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041db94
    PUSH EBX                            ; 0041db97
    MOV dword ptr [EBX + 0x10b18],EAX   ; 0041db98
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0041db9e
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041dba3
    PUSH 0x41a00000                     ; 0041dba6
    PUSH 0x40000000                     ; 0041dbab
    CALL core_actor.cpp_FUN_0040cf60    ; 0041dbb0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBX + 0x10b20],0x0   ; 0041dbb5
    MOV dword ptr [ESP + 0x8],EAX       ; 0041dbbf
    MOV dword ptr [EBX + 0x10b24],0x0   ; 0041dbc3
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041dbcd
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0041dbd1
    ADD ESP,0x8                         ; 0041dbd7
    ADD ESP,0x4                         ; 0041dbda
    POP ESI                             ; 0041dbdd
    POP EBX                             ; 0041dbde
    RET                                 ; 0041dbdf

