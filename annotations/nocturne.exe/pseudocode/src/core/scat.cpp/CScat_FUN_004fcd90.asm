; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_FUN_004fcd90(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_004fbf20 at 004fc165
;
; Referenced Globals:
;   void* switchdataD_004fcd68 = 004fce36
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcd90
        ;   Label: core_scat.cpp_CScat_FUN_004fcd90
    PUSH ESI                            ; 004fcd91
    PUSH EDI                            ; 004fcd92
    PUSH EBP                            ; 004fcd93
    MOV EBP,ESP                         ; 004fcd94
    SUB ESP,0x10                        ; 004fcd96
    AND ESP,0xfffffff8                  ; 004fcd99
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fcd9c
    LEA ESI,[EBX + 0x150]               ; 004fcd9f
    PUSH ESI                            ; 004fcda5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fcda6
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcdab
    ADD ESP,0x4                         ; 004fcdae
    CMP EAX,0xc                         ; 004fcdb1
    JNZ 0x004fcdbd                      ; 004fcdb4
        ;   XREF to: 004fcdbd (CONDITIONAL_JUMP)  ; LAB_004fcdbd
    MOV ESP,EBP                         ; 004fcdb6
        ;   Label: LAB_004fcdb6
    POP EBP                             ; 004fcdb8
    POP EDI                             ; 004fcdb9
    POP ESI                             ; 004fcdba
    POP EBX                             ; 004fcdbb
    RET                                 ; 004fcdbc
    PUSH ESI                            ; 004fcdbd
        ;   Label: LAB_004fcdbd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fcdbe
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcdc3
    ADD ESP,0x4                         ; 004fcdc6
    CMP EAX,0xd                         ; 004fcdc9
    JZ 0x004fcdb6                       ; 004fcdcc
        ;   XREF to: 004fcdb6 (CONDITIONAL_JUMP)  ; LAB_004fcdb6
    LEA EAX,[EBX + 0x1f5a0]             ; 004fcdce
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 004fcdd4
    MOV ESI,dword ptr [EAX + 0x330]     ; 004fcdda
    TEST EDX,EDX                        ; 004fcde0
    JZ 0x004fcf24                       ; 004fcde2
        ;   XREF to: 004fcf24 (CONDITIONAL_JUMP)  ; LAB_004fcf24
    MOV ECX,dword ptr [EBX + 0x1fa50]   ; 004fcde8
        ;   Label: LAB_004fcde8
    TEST ECX,ECX                        ; 004fcdee
    JNZ 0x004fcf2b                      ; 004fcdf0
        ;   XREF to: 004fcf2b (CONDITIONAL_JUMP)  ; LAB_004fcf2b
    XOR ECX,ECX                         ; 004fcdf6
        ;   Label: LAB_004fcdf6
    LEA EAX,[EBX + 0x150]               ; 004fcdf8
    MOV dword ptr [ESP + 0xc],ECX       ; 004fcdfe
    MOV dword ptr [ESP + 0x4],EAX       ; 004fce02
    FLD float ptr [EBP + 0x18]          ; 004fce06
        ;   Label: LAB_004fce06
    FLDZ                                ; 004fce09
    FCOMPP                              ; 004fce0b
    FNSTSW AX                           ; 004fce0d
    SAHF                                ; 004fce0f
    JNC 0x004fcdb6                      ; 004fce10
        ;   XREF to: 004fcdb6 (CONDITIONAL_JUMP)  ; LAB_004fcdb6
    MOV EDI,dword ptr [EBX + 0x1fa50]   ; 004fce12
    CMP ESI,EDI                         ; 004fce18
    JNZ 0x004fcf7a                      ; 004fce1a
        ;   XREF to: 004fcf7a (CONDITIONAL_JUMP)  ; LAB_004fcf7a
    TEST EDI,EDI                        ; 004fce20
    JZ 0x004fce3b                       ; 004fce22
        ;   XREF to: 004fce3b (CONDITIONAL_JUMP)  ; LAB_004fce3b
    MOV EAX,dword ptr [EDI + 0x2d8]     ; 004fce24
    CMP EAX,0x8                         ; 004fce2a
    JA 0x004fce36                       ; 004fce2d
        ;   XREF to: 004fce36 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x4fcd68]  ; 004fce2f | caseD_7 | caseD_8 | switchdataD_004fcd68
        ;   Label: switchD
    MOV EDI,0x2                         ; 004fce36
        ;   Label: caseD_0
    PUSH EDI                            ; 004fce3b
        ;   Label: LAB_004fce3b
    LEA EAX,[EBP + 0x18]                ; 004fce3c
    PUSH EAX                            ; 004fce3f
    PUSH EBX                            ; 004fce40
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500 ; 004fce41
        ;   XREF to: 0042a500 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 004fce46
    ADD ESP,0xc                         ; 004fce4a
    MOV dword ptr [ESP + 0x8],EAX       ; 004fce4d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fce51
    PUSH EAX                            ; 004fce55
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004fce56
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fce5b
    CMP dword ptr [ESP],0x0             ; 004fce5e
    JL 0x004fcf0b                       ; 004fce62
        ;   XREF to: 004fcf0b (CONDITIONAL_JUMP)  ; LAB_004fcf0b
    MOV ECX,dword ptr [EBX + 0x1fa50]   ; 004fce68
    CMP ESI,ECX                         ; 004fce6e
    JZ 0x004fcf01                       ; 004fce70
        ;   XREF to: 004fcf01 (CONDITIONAL_JUMP)  ; LAB_004fcf01
    TEST ECX,ECX                        ; 004fce76
    JZ 0x004fceaa                       ; 004fce78
        ;   XREF to: 004fceaa (CONDITIONAL_JUMP)  ; LAB_004fceaa
    MOV EAX,ECX                         ; 004fce7a
    JNZ 0x004fcfb5                      ; 004fce7c
        ;   XREF to: 004fcfb5 (CONDITIONAL_JUMP)  ; LAB_004fcfb5
    CMP EAX,dword ptr [ESP + 0x8]       ; 004fce82
        ;   Label: LAB_004fce82
    JNZ 0x004fceaa                      ; 004fce86
        ;   XREF to: 004fceaa (CONDITIONAL_JUMP)  ; LAB_004fceaa
    PUSH 0x1                            ; 004fce88
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fce8a
    PUSH EAX                            ; 004fce90
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004fce91
    CALL dword ptr [EDX + 0xd4]         ; 004fce97
    ADD ESP,0x8                         ; 004fce9d
    MOV dword ptr [EBX + 0x1fa50],0x0   ; 004fcea0
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004fceaa
        ;   Label: LAB_004fceaa
    JZ 0x004fcf01                       ; 004fceb1
        ;   XREF to: 004fcf01 (CONDITIONAL_JUMP)  ; LAB_004fcf01
    TEST ESI,ESI                        ; 004fceb3
    JNZ 0x004fcfcf                      ; 004fceb5
        ;   XREF to: 004fcfcf (CONDITIONAL_JUMP)  ; LAB_004fcfcf
    XOR EAX,EAX                         ; 004fcebb
        ;   Label: LAB_004fcebb
    CMP EAX,dword ptr [ESP + 0x8]       ; 004fcebd
        ;   Label: LAB_004fcebd
    JNZ 0x004fcf01                      ; 004fcec1
        ;   XREF to: 004fcf01 (CONDITIONAL_JUMP)  ; LAB_004fcf01
    MOV dword ptr [EBX + 0x1fa50],ESI   ; 004fcec3
    TEST ESI,ESI                        ; 004fcec9
    JZ 0x004fcf01                       ; 004fcecb
        ;   XREF to: 004fcf01 (CONDITIONAL_JUMP)  ; LAB_004fcf01
    PUSH 0x2                            ; 004fcecd
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004fcecf
    PUSH ESI                            ; 004fced5
    CALL dword ptr [EDX + 0xd4]         ; 004fced6
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fcedc
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 004fcee2
    ADD ESP,0x8                         ; 004fcee8
    CMP EDX,0x8                         ; 004fceeb
    JNZ 0x004fcf01                      ; 004fceee
        ;   XREF to: 004fcf01 (CONDITIONAL_JUMP)  ; LAB_004fcf01
    PUSH 0x1                            ; 004fcef0
    PUSH 0x6                            ; 004fcef2
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fcef4
    PUSH ECX                            ; 004fcef8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fcef9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fcefe
    PUSH EDI                            ; 004fcf01
        ;   Label: LAB_004fcf01
    PUSH EBX                            ; 004fcf02
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50 ; 004fcf03
        ;   XREF to: 0042aa50 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 004fcf08
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fcf0b
        ;   Label: LAB_004fcf0b
    INC EDI                             ; 004fcf0f
    MOV dword ptr [ESP + 0xc],EDI       ; 004fcf10
    CMP EDI,0x2                         ; 004fcf14
    JL 0x004fce06                       ; 004fcf17
        ;   XREF to: 004fce06 (CONDITIONAL_JUMP)  ; LAB_004fce06
    MOV ESP,EBP                         ; 004fcf1d
    POP EBP                             ; 004fcf1f
    POP EDI                             ; 004fcf20
    POP ESI                             ; 004fcf21
    POP EBX                             ; 004fcf22
    RET                                 ; 004fcf23
    XOR ESI,ESI                         ; 004fcf24
        ;   Label: LAB_004fcf24
    JMP 0x004fcde8                      ; 004fcf26
        ;   XREF to: 004fcde8 (UNCONDITIONAL_JUMP)  ; LAB_004fcde8
    CMP ESI,ECX                         ; 004fcf2b
        ;   Label: LAB_004fcf2b
    JZ 0x004fcdf6                       ; 004fcf2d
        ;   XREF to: 004fcdf6 (CONDITIONAL_JUMP)  ; LAB_004fcdf6
    CMP dword ptr [ECX + 0x2d8],0x8     ; 004fcf33
    JNZ 0x004fcdf6                      ; 004fcf3a
        ;   XREF to: 004fcdf6 (CONDITIONAL_JUMP)  ; LAB_004fcdf6
    LEA EDI,[EBX + 0x150]               ; 004fcf40
    PUSH EDI                            ; 004fcf46
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fcf47
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcf4c
    ADD ESP,0x4                         ; 004fcf4f
    TEST EAX,EAX                        ; 004fcf52
    JNZ 0x004fcf61                      ; 004fcf54
        ;   XREF to: 004fcf61 (CONDITIONAL_JUMP)  ; LAB_004fcf61
    MOV dword ptr [EBX + 0x1fa50],EAX   ; 004fcf56
    JMP 0x004fcdf6                      ; 004fcf5c
        ;   XREF to: 004fcdf6 (UNCONDITIONAL_JUMP)  ; LAB_004fcdf6
    PUSH 0x1                            ; 004fcf61
        ;   Label: LAB_004fcf61
    PUSH 0x0                            ; 004fcf63
    PUSH EDI                            ; 004fcf65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fcf66
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fcf6b
    JMP 0x004fcdf6                      ; 004fcf6e
        ;   XREF to: 004fcdf6 (UNCONDITIONAL_JUMP)  ; LAB_004fcdf6
    XOR EDI,EDI                         ; 004fcf73
        ;   Label: caseD_8
    JMP 0x004fce3b                      ; 004fcf75
        ;   XREF to: 004fce3b (UNCONDITIONAL_JUMP)  ; LAB_004fce3b
    TEST EDI,EDI                        ; 004fcf7a
        ;   Label: LAB_004fcf7a
    JNZ 0x004fcf9d                      ; 004fcf7c
        ;   XREF to: 004fcf9d (CONDITIONAL_JUMP)  ; LAB_004fcf9d
    TEST ESI,ESI                        ; 004fcf7e
    JZ 0x004fce3b                       ; 004fcf80
        ;   XREF to: 004fce3b (CONDITIONAL_JUMP)  ; LAB_004fce3b
    CMP dword ptr [ESI + 0x2d8],0x8     ; 004fcf86
    JZ 0x004fce3b                       ; 004fcf8d
        ;   XREF to: 004fce3b (CONDITIONAL_JUMP)  ; LAB_004fce3b
    MOV EDI,0x1                         ; 004fcf93
        ;   Label: LAB_004fcf93
    JMP 0x004fce3b                      ; 004fcf98
        ;   XREF to: 004fce3b (UNCONDITIONAL_JUMP)  ; LAB_004fce3b
    MOV EAX,EDI                         ; 004fcf9d
        ;   Label: LAB_004fcf9d
    JZ 0x004fce3b                       ; 004fcf9f
        ;   XREF to: 004fce3b (CONDITIONAL_JUMP)  ; LAB_004fce3b
    CMP dword ptr [EDI + 0x2d8],0x8     ; 004fcfa5
    JNZ 0x004fcf93                      ; 004fcfac
        ;   XREF to: 004fcf93 (CONDITIONAL_JUMP)  ; LAB_004fcf93
    XOR EDI,EDI                         ; 004fcfae
    JMP 0x004fce3b                      ; 004fcfb0
        ;   XREF to: 004fce3b (UNCONDITIONAL_JUMP)  ; LAB_004fce3b
    CMP dword ptr [ECX + 0x2d8],0x8     ; 004fcfb5
        ;   Label: LAB_004fcfb5
    JNZ 0x004fcfc5                      ; 004fcfbc
        ;   XREF to: 004fcfc5 (CONDITIONAL_JUMP)  ; LAB_004fcfc5
    XOR EAX,ECX                         ; 004fcfbe
    JMP 0x004fce82                      ; 004fcfc0
        ;   XREF to: 004fce82 (UNCONDITIONAL_JUMP)  ; LAB_004fce82
    MOV EAX,0x1                         ; 004fcfc5
        ;   Label: LAB_004fcfc5
    JMP 0x004fce82                      ; 004fcfca
        ;   XREF to: 004fce82 (UNCONDITIONAL_JUMP)  ; LAB_004fce82
    CMP dword ptr [ESI + 0x2d8],0x8     ; 004fcfcf
        ;   Label: LAB_004fcfcf
    JZ 0x004fcebb                       ; 004fcfd6
        ;   XREF to: 004fcebb (CONDITIONAL_JUMP)  ; LAB_004fcebb
    MOV EAX,0x1                         ; 004fcfdc
    JMP 0x004fcebd                      ; 004fcfe1
        ;   XREF to: 004fcebd (UNCONDITIONAL_JUMP)  ; LAB_004fcebd

